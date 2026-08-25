const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QEvent = @import("libqt6").QEvent;
const QMimeData = @import("libqt6").QMimeData;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QSizeF = @import("libqt6").QSizeF;
const QWidget = @import("libqt6").QWidget;
const qcoreevent_enums = @import("libqcoreevent.zig").enums;
const qgraphicssceneevent_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html)
pub const QGraphicsSceneEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsSceneEvent,

    pub const _is_QGraphicsSceneEvent = {};
    pub const _is_QEvent = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsSceneEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn new(typeVal: i32) QGraphicsSceneEvent {
        return .{ .ptr = qtc.QGraphicsSceneEvent_new(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn widget(self: QGraphicsSceneEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QGraphicsSceneEvent, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn timestamp(self: QGraphicsSceneEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn setTimestamp(self: QGraphicsSceneEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
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
    /// ` self: QGraphicsSceneEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: QGraphicsSceneEvent) i32 {
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
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn spontaneous(self: QGraphicsSceneEvent) bool {
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
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn isAccepted(self: QGraphicsSceneEvent) bool {
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
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn accept(self: QGraphicsSceneEvent) void {
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
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn ignore(self: QGraphicsSceneEvent) void {
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
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn isInputEvent(self: QGraphicsSceneEvent) bool {
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
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn isPointerEvent(self: QGraphicsSceneEvent) bool {
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
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn isSinglePointEvent(self: QGraphicsSceneEvent) bool {
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
    /// ` self: QGraphicsSceneEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: QGraphicsSceneEvent, accepted: bool) void {
        qtc.QGraphicsSceneEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: QGraphicsSceneEvent, accepted: bool) void {
        qtc.QGraphicsSceneEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneEvent`
    ///
    /// ` callback: *const fn (self: QGraphicsSceneEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: QGraphicsSceneEvent, callback: *const fn (QGraphicsSceneEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn clone(self: QGraphicsSceneEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn superClone(self: QGraphicsSceneEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: QGraphicsSceneEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#dtor.QGraphicsSceneEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn delete(self: QGraphicsSceneEvent) void {
        qtc.QGraphicsSceneEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html)
pub const QGraphicsSceneMouseEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsSceneMouseEvent,

    pub const _is_QGraphicsSceneMouseEvent = {};
    pub const _is_QGraphicsSceneEvent = {};
    pub const _is_QEvent = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsSceneMouseEvent object in C++ memory
    ///
    pub fn new() QGraphicsSceneMouseEvent {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsSceneMouseEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn new2(typeVal: i32) QGraphicsSceneMouseEvent {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn pos(self: QGraphicsSceneMouseEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setPos(self: QGraphicsSceneMouseEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn scenePos(self: QGraphicsSceneMouseEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScenePos` instead
    ///
    pub const SetScenePos = setScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setScenePos(self: QGraphicsSceneMouseEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn screenPos(self: QGraphicsSceneMouseEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreenPos` instead
    ///
    pub const SetScreenPos = setScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn setScreenPos(self: QGraphicsSceneMouseEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QGraphicsSceneMouseEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `buttonDownPos` instead
    ///
    pub const ButtonDownPos = buttonDownPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    pub fn buttonDownPos(self: QGraphicsSceneMouseEvent, _button: i32) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_ButtonDownPos(@ptrCast(self.ptr), @bitCast(_button)) };
    }

    /// ### DEPRECATED: Use `setButtonDownPos` instead
    ///
    pub const SetButtonDownPos = setButtonDownPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setButtonDownPos(self: QGraphicsSceneMouseEvent, _button: i32, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetButtonDownPos(@ptrCast(self.ptr), @bitCast(_button), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `buttonDownScenePos` instead
    ///
    pub const ButtonDownScenePos = buttonDownScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    pub fn buttonDownScenePos(self: QGraphicsSceneMouseEvent, _button: i32) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_ButtonDownScenePos(@ptrCast(self.ptr), @bitCast(_button)) };
    }

    /// ### DEPRECATED: Use `setButtonDownScenePos` instead
    ///
    pub const SetButtonDownScenePos = setButtonDownScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setButtonDownScenePos(self: QGraphicsSceneMouseEvent, _button: i32, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetButtonDownScenePos(@ptrCast(self.ptr), @bitCast(_button), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `buttonDownScreenPos` instead
    ///
    pub const ButtonDownScreenPos = buttonDownScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    pub fn buttonDownScreenPos(self: QGraphicsSceneMouseEvent, _button: i32) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_ButtonDownScreenPos(@ptrCast(self.ptr), @bitCast(_button)) };
    }

    /// ### DEPRECATED: Use `setButtonDownScreenPos` instead
    ///
    pub const SetButtonDownScreenPos = setButtonDownScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn setButtonDownScreenPos(self: QGraphicsSceneMouseEvent, _button: i32, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QGraphicsSceneMouseEvent_SetButtonDownScreenPos(@ptrCast(self.ptr), @bitCast(_button), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `lastPos` instead
    ///
    pub const LastPos = lastPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn lastPos(self: QGraphicsSceneMouseEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_LastPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLastPos` instead
    ///
    pub const SetLastPos = setLastPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setLastPos(self: QGraphicsSceneMouseEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetLastPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `lastScenePos` instead
    ///
    pub const LastScenePos = lastScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn lastScenePos(self: QGraphicsSceneMouseEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_LastScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLastScenePos` instead
    ///
    pub const SetLastScenePos = setLastScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setLastScenePos(self: QGraphicsSceneMouseEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetLastScenePos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `lastScreenPos` instead
    ///
    pub const LastScreenPos = lastScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn lastScreenPos(self: QGraphicsSceneMouseEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_LastScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLastScreenPos` instead
    ///
    pub const SetLastScreenPos = setLastScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn setLastScreenPos(self: QGraphicsSceneMouseEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QGraphicsSceneMouseEvent_SetLastScreenPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn buttons(self: QGraphicsSceneMouseEvent) i32 {
        return qtc.QGraphicsSceneMouseEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setButtons` instead
    ///
    pub const SetButtons = setButtons;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn setButtons(self: QGraphicsSceneMouseEvent, _buttons: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetButtons(@ptrCast(self.ptr), @bitCast(_buttons));
    }

    /// ### DEPRECATED: Use `button` instead
    ///
    pub const Button = button;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn button(self: QGraphicsSceneMouseEvent) i32 {
        return qtc.QGraphicsSceneMouseEvent_Button(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setButton` instead
    ///
    pub const SetButton = setButton;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _button: qnamespace_enums.MouseButton `
    ///
    pub fn setButton(self: QGraphicsSceneMouseEvent, _button: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetButton(@ptrCast(self.ptr), @bitCast(_button));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn modifiers(self: QGraphicsSceneMouseEvent) i32 {
        return qtc.QGraphicsSceneMouseEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QGraphicsSceneMouseEvent, _modifiers: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseEventSource `
    ///
    pub fn source(self: QGraphicsSceneMouseEvent) i32 {
        return qtc.QGraphicsSceneMouseEvent_Source(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSource` instead
    ///
    pub const SetSource = setSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _source: qnamespace_enums.MouseEventSource `
    ///
    pub fn setSource(self: QGraphicsSceneMouseEvent, _source: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetSource(@ptrCast(self.ptr), @bitCast(_source));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseEventFlag `
    ///
    pub fn flags(self: QGraphicsSceneMouseEvent) i32 {
        return qtc.QGraphicsSceneMouseEvent_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _flags: flag of qnamespace_enums.MouseEventFlag `
    ///
    pub fn setFlags(self: QGraphicsSceneMouseEvent, _flags: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn widget(self: QGraphicsSceneMouseEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QGraphicsSceneMouseEvent, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn timestamp(self: QGraphicsSceneMouseEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn setTimestamp(self: QGraphicsSceneMouseEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: QGraphicsSceneMouseEvent) i32 {
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn spontaneous(self: QGraphicsSceneMouseEvent) bool {
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn isAccepted(self: QGraphicsSceneMouseEvent) bool {
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn accept(self: QGraphicsSceneMouseEvent) void {
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn ignore(self: QGraphicsSceneMouseEvent) void {
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn isInputEvent(self: QGraphicsSceneMouseEvent) bool {
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn isPointerEvent(self: QGraphicsSceneMouseEvent) bool {
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn isSinglePointEvent(self: QGraphicsSceneMouseEvent) bool {
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: QGraphicsSceneMouseEvent, accepted: bool) void {
        qtc.QGraphicsSceneMouseEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: QGraphicsSceneMouseEvent, accepted: bool) void {
        qtc.QGraphicsSceneMouseEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneMouseEvent`
    ///
    /// ` callback: *const fn (self: QGraphicsSceneMouseEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: QGraphicsSceneMouseEvent, callback: *const fn (QGraphicsSceneMouseEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneMouseEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn clone(self: QGraphicsSceneMouseEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn superClone(self: QGraphicsSceneMouseEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneMouseEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: QGraphicsSceneMouseEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneMouseEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#dtor.QGraphicsSceneMouseEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn delete(self: QGraphicsSceneMouseEvent) void {
        qtc.QGraphicsSceneMouseEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html)
pub const QGraphicsSceneWheelEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsSceneWheelEvent,

    pub const _is_QGraphicsSceneWheelEvent = {};
    pub const _is_QGraphicsSceneEvent = {};
    pub const _is_QEvent = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsSceneWheelEvent object in C++ memory
    ///
    pub fn new() QGraphicsSceneWheelEvent {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsSceneWheelEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn new2(typeVal: i32) QGraphicsSceneWheelEvent {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn pos(self: QGraphicsSceneWheelEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setPos(self: QGraphicsSceneWheelEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneWheelEvent_SetPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn scenePos(self: QGraphicsSceneWheelEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScenePos` instead
    ///
    pub const SetScenePos = setScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setScenePos(self: QGraphicsSceneWheelEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneWheelEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn screenPos(self: QGraphicsSceneWheelEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreenPos` instead
    ///
    pub const SetScreenPos = setScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn setScreenPos(self: QGraphicsSceneWheelEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QGraphicsSceneWheelEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn buttons(self: QGraphicsSceneWheelEvent) i32 {
        return qtc.QGraphicsSceneWheelEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setButtons` instead
    ///
    pub const SetButtons = setButtons;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn setButtons(self: QGraphicsSceneWheelEvent, _buttons: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetButtons(@ptrCast(self.ptr), @bitCast(_buttons));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn modifiers(self: QGraphicsSceneWheelEvent) i32 {
        return qtc.QGraphicsSceneWheelEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QGraphicsSceneWheelEvent, _modifiers: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `delta` instead
    ///
    pub const Delta = delta;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#delta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn delta(self: QGraphicsSceneWheelEvent) i32 {
        return qtc.QGraphicsSceneWheelEvent_Delta(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDelta` instead
    ///
    pub const SetDelta = setDelta;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` _delta: i32 `
    ///
    pub fn setDelta(self: QGraphicsSceneWheelEvent, _delta: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetDelta(@ptrCast(self.ptr), @bitCast(_delta));
    }

    /// ### DEPRECATED: Use `orientation` instead
    ///
    pub const Orientation = orientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn orientation(self: QGraphicsSceneWheelEvent) i32 {
        return qtc.QGraphicsSceneWheelEvent_Orientation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOrientation` instead
    ///
    pub const SetOrientation = setOrientation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` _orientation: qnamespace_enums.Orientation `
    ///
    pub fn setOrientation(self: QGraphicsSceneWheelEvent, _orientation: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetOrientation(@ptrCast(self.ptr), @bitCast(_orientation));
    }

    /// ### DEPRECATED: Use `phase` instead
    ///
    pub const Phase = phase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#phase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollPhase `
    ///
    pub fn phase(self: QGraphicsSceneWheelEvent) i32 {
        return qtc.QGraphicsSceneWheelEvent_Phase(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPhase` instead
    ///
    pub const SetPhase = setPhase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPhase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` scrollPhase: qnamespace_enums.ScrollPhase `
    ///
    pub fn setPhase(self: QGraphicsSceneWheelEvent, scrollPhase: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetPhase(@ptrCast(self.ptr), @bitCast(scrollPhase));
    }

    /// ### DEPRECATED: Use `pixelDelta` instead
    ///
    pub const PixelDelta = pixelDelta;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn pixelDelta(self: QGraphicsSceneWheelEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_PixelDelta(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPixelDelta` instead
    ///
    pub const SetPixelDelta = setPixelDelta;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` _delta: QPoint `
    ///
    pub fn setPixelDelta(self: QGraphicsSceneWheelEvent, _delta: anytype) void {
        comptime _ = @TypeOf(_delta)._is_QPoint;
        qtc.QGraphicsSceneWheelEvent_SetPixelDelta(@ptrCast(self.ptr), @ptrCast(_delta.ptr));
    }

    /// ### DEPRECATED: Use `isInverted` instead
    ///
    pub const IsInverted = isInverted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#isInverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn isInverted(self: QGraphicsSceneWheelEvent) bool {
        return qtc.QGraphicsSceneWheelEvent_IsInverted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInverted` instead
    ///
    pub const SetInverted = setInverted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setInverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` inverted: bool `
    ///
    pub fn setInverted(self: QGraphicsSceneWheelEvent, inverted: bool) void {
        qtc.QGraphicsSceneWheelEvent_SetInverted(@ptrCast(self.ptr), inverted);
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn widget(self: QGraphicsSceneWheelEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QGraphicsSceneWheelEvent, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn timestamp(self: QGraphicsSceneWheelEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn setTimestamp(self: QGraphicsSceneWheelEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: QGraphicsSceneWheelEvent) i32 {
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn spontaneous(self: QGraphicsSceneWheelEvent) bool {
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn isAccepted(self: QGraphicsSceneWheelEvent) bool {
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn accept(self: QGraphicsSceneWheelEvent) void {
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn ignore(self: QGraphicsSceneWheelEvent) void {
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn isInputEvent(self: QGraphicsSceneWheelEvent) bool {
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn isPointerEvent(self: QGraphicsSceneWheelEvent) bool {
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn isSinglePointEvent(self: QGraphicsSceneWheelEvent) bool {
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: QGraphicsSceneWheelEvent, accepted: bool) void {
        qtc.QGraphicsSceneWheelEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: QGraphicsSceneWheelEvent, accepted: bool) void {
        qtc.QGraphicsSceneWheelEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneWheelEvent`
    ///
    /// ` callback: *const fn (self: QGraphicsSceneWheelEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: QGraphicsSceneWheelEvent, callback: *const fn (QGraphicsSceneWheelEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneWheelEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn clone(self: QGraphicsSceneWheelEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn superClone(self: QGraphicsSceneWheelEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneWheelEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: QGraphicsSceneWheelEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneWheelEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#dtor.QGraphicsSceneWheelEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn delete(self: QGraphicsSceneWheelEvent) void {
        qtc.QGraphicsSceneWheelEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html)
pub const QGraphicsSceneContextMenuEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsSceneContextMenuEvent,

    pub const _is_QGraphicsSceneContextMenuEvent = {};
    pub const _is_QGraphicsSceneEvent = {};
    pub const _is_QEvent = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsSceneContextMenuEvent object in C++ memory
    ///
    pub fn new() QGraphicsSceneContextMenuEvent {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsSceneContextMenuEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn new2(typeVal: i32) QGraphicsSceneContextMenuEvent {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn pos(self: QGraphicsSceneContextMenuEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setPos(self: QGraphicsSceneContextMenuEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneContextMenuEvent_SetPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn scenePos(self: QGraphicsSceneContextMenuEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScenePos` instead
    ///
    pub const SetScenePos = setScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setScenePos(self: QGraphicsSceneContextMenuEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneContextMenuEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn screenPos(self: QGraphicsSceneContextMenuEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreenPos` instead
    ///
    pub const SetScreenPos = setScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn setScreenPos(self: QGraphicsSceneContextMenuEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QGraphicsSceneContextMenuEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn modifiers(self: QGraphicsSceneContextMenuEvent) i32 {
        return qtc.QGraphicsSceneContextMenuEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QGraphicsSceneContextMenuEvent, _modifiers: i32) void {
        qtc.QGraphicsSceneContextMenuEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `reason` instead
    ///
    pub const Reason = reason;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#reason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicssceneevent_enums.Reason `
    ///
    pub fn reason(self: QGraphicsSceneContextMenuEvent) i32 {
        return qtc.QGraphicsSceneContextMenuEvent_Reason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReason` instead
    ///
    pub const SetReason = setReason;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` _reason: qgraphicssceneevent_enums.Reason `
    ///
    pub fn setReason(self: QGraphicsSceneContextMenuEvent, _reason: i32) void {
        qtc.QGraphicsSceneContextMenuEvent_SetReason(@ptrCast(self.ptr), @bitCast(_reason));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn widget(self: QGraphicsSceneContextMenuEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QGraphicsSceneContextMenuEvent, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn timestamp(self: QGraphicsSceneContextMenuEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn setTimestamp(self: QGraphicsSceneContextMenuEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: QGraphicsSceneContextMenuEvent) i32 {
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn spontaneous(self: QGraphicsSceneContextMenuEvent) bool {
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn isAccepted(self: QGraphicsSceneContextMenuEvent) bool {
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn accept(self: QGraphicsSceneContextMenuEvent) void {
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn ignore(self: QGraphicsSceneContextMenuEvent) void {
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn isInputEvent(self: QGraphicsSceneContextMenuEvent) bool {
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn isPointerEvent(self: QGraphicsSceneContextMenuEvent) bool {
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn isSinglePointEvent(self: QGraphicsSceneContextMenuEvent) bool {
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: QGraphicsSceneContextMenuEvent, accepted: bool) void {
        qtc.QGraphicsSceneContextMenuEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: QGraphicsSceneContextMenuEvent, accepted: bool) void {
        qtc.QGraphicsSceneContextMenuEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneContextMenuEvent`
    ///
    /// ` callback: *const fn (self: QGraphicsSceneContextMenuEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: QGraphicsSceneContextMenuEvent, callback: *const fn (QGraphicsSceneContextMenuEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneContextMenuEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn clone(self: QGraphicsSceneContextMenuEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn superClone(self: QGraphicsSceneContextMenuEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneContextMenuEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: QGraphicsSceneContextMenuEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneContextMenuEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#dtor.QGraphicsSceneContextMenuEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn delete(self: QGraphicsSceneContextMenuEvent) void {
        qtc.QGraphicsSceneContextMenuEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html)
pub const QGraphicsSceneHoverEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsSceneHoverEvent,

    pub const _is_QGraphicsSceneHoverEvent = {};
    pub const _is_QGraphicsSceneEvent = {};
    pub const _is_QEvent = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsSceneHoverEvent object in C++ memory
    ///
    pub fn new() QGraphicsSceneHoverEvent {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsSceneHoverEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn new2(typeVal: i32) QGraphicsSceneHoverEvent {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn pos(self: QGraphicsSceneHoverEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setPos(self: QGraphicsSceneHoverEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneHoverEvent_SetPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn scenePos(self: QGraphicsSceneHoverEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScenePos` instead
    ///
    pub const SetScenePos = setScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setScenePos(self: QGraphicsSceneHoverEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneHoverEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn screenPos(self: QGraphicsSceneHoverEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreenPos` instead
    ///
    pub const SetScreenPos = setScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn setScreenPos(self: QGraphicsSceneHoverEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QGraphicsSceneHoverEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `lastPos` instead
    ///
    pub const LastPos = lastPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn lastPos(self: QGraphicsSceneHoverEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_LastPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLastPos` instead
    ///
    pub const SetLastPos = setLastPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setLastPos(self: QGraphicsSceneHoverEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneHoverEvent_SetLastPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `lastScenePos` instead
    ///
    pub const LastScenePos = lastScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn lastScenePos(self: QGraphicsSceneHoverEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_LastScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLastScenePos` instead
    ///
    pub const SetLastScenePos = setLastScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setLastScenePos(self: QGraphicsSceneHoverEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneHoverEvent_SetLastScenePos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `lastScreenPos` instead
    ///
    pub const LastScreenPos = lastScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn lastScreenPos(self: QGraphicsSceneHoverEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_LastScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLastScreenPos` instead
    ///
    pub const SetLastScreenPos = setLastScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn setLastScreenPos(self: QGraphicsSceneHoverEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QGraphicsSceneHoverEvent_SetLastScreenPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn modifiers(self: QGraphicsSceneHoverEvent) i32 {
        return qtc.QGraphicsSceneHoverEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QGraphicsSceneHoverEvent, _modifiers: i32) void {
        qtc.QGraphicsSceneHoverEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn widget(self: QGraphicsSceneHoverEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QGraphicsSceneHoverEvent, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn timestamp(self: QGraphicsSceneHoverEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn setTimestamp(self: QGraphicsSceneHoverEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: QGraphicsSceneHoverEvent) i32 {
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn spontaneous(self: QGraphicsSceneHoverEvent) bool {
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn isAccepted(self: QGraphicsSceneHoverEvent) bool {
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn accept(self: QGraphicsSceneHoverEvent) void {
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn ignore(self: QGraphicsSceneHoverEvent) void {
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn isInputEvent(self: QGraphicsSceneHoverEvent) bool {
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn isPointerEvent(self: QGraphicsSceneHoverEvent) bool {
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn isSinglePointEvent(self: QGraphicsSceneHoverEvent) bool {
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: QGraphicsSceneHoverEvent, accepted: bool) void {
        qtc.QGraphicsSceneHoverEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: QGraphicsSceneHoverEvent, accepted: bool) void {
        qtc.QGraphicsSceneHoverEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneHoverEvent`
    ///
    /// ` callback: *const fn (self: QGraphicsSceneHoverEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: QGraphicsSceneHoverEvent, callback: *const fn (QGraphicsSceneHoverEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneHoverEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn clone(self: QGraphicsSceneHoverEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn superClone(self: QGraphicsSceneHoverEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneHoverEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: QGraphicsSceneHoverEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneHoverEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#dtor.QGraphicsSceneHoverEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn delete(self: QGraphicsSceneHoverEvent) void {
        qtc.QGraphicsSceneHoverEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html)
pub const QGraphicsSceneHelpEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsSceneHelpEvent,

    pub const _is_QGraphicsSceneHelpEvent = {};
    pub const _is_QGraphicsSceneEvent = {};
    pub const _is_QEvent = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsSceneHelpEvent object in C++ memory
    ///
    pub fn new() QGraphicsSceneHelpEvent {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsSceneHelpEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn new2(typeVal: i32) QGraphicsSceneHelpEvent {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn scenePos(self: QGraphicsSceneHelpEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScenePos` instead
    ///
    pub const SetScenePos = setScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setScenePos(self: QGraphicsSceneHelpEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneHelpEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn screenPos(self: QGraphicsSceneHelpEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreenPos` instead
    ///
    pub const SetScreenPos = setScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn setScreenPos(self: QGraphicsSceneHelpEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QGraphicsSceneHelpEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn widget(self: QGraphicsSceneHelpEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QGraphicsSceneHelpEvent, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn timestamp(self: QGraphicsSceneHelpEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn setTimestamp(self: QGraphicsSceneHelpEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: QGraphicsSceneHelpEvent) i32 {
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn spontaneous(self: QGraphicsSceneHelpEvent) bool {
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn isAccepted(self: QGraphicsSceneHelpEvent) bool {
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn accept(self: QGraphicsSceneHelpEvent) void {
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn ignore(self: QGraphicsSceneHelpEvent) void {
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn isInputEvent(self: QGraphicsSceneHelpEvent) bool {
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn isPointerEvent(self: QGraphicsSceneHelpEvent) bool {
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn isSinglePointEvent(self: QGraphicsSceneHelpEvent) bool {
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: QGraphicsSceneHelpEvent, accepted: bool) void {
        qtc.QGraphicsSceneHelpEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: QGraphicsSceneHelpEvent, accepted: bool) void {
        qtc.QGraphicsSceneHelpEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneHelpEvent`
    ///
    /// ` callback: *const fn (self: QGraphicsSceneHelpEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: QGraphicsSceneHelpEvent, callback: *const fn (QGraphicsSceneHelpEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneHelpEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn clone(self: QGraphicsSceneHelpEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn superClone(self: QGraphicsSceneHelpEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneHelpEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: QGraphicsSceneHelpEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneHelpEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#dtor.QGraphicsSceneHelpEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn delete(self: QGraphicsSceneHelpEvent) void {
        qtc.QGraphicsSceneHelpEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html)
pub const QGraphicsSceneDragDropEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsSceneDragDropEvent,

    pub const _is_QGraphicsSceneDragDropEvent = {};
    pub const _is_QGraphicsSceneEvent = {};
    pub const _is_QEvent = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsSceneDragDropEvent object in C++ memory
    ///
    pub fn new() QGraphicsSceneDragDropEvent {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QGraphicsSceneDragDropEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn new2(typeVal: i32) QGraphicsSceneDragDropEvent {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn pos(self: QGraphicsSceneDragDropEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setPos(self: QGraphicsSceneDragDropEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneDragDropEvent_SetPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn scenePos(self: QGraphicsSceneDragDropEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScenePos` instead
    ///
    pub const SetScenePos = setScenePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setScenePos(self: QGraphicsSceneDragDropEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneDragDropEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn screenPos(self: QGraphicsSceneDragDropEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreenPos` instead
    ///
    pub const SetScreenPos = setScreenPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn setScreenPos(self: QGraphicsSceneDragDropEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QGraphicsSceneDragDropEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn buttons(self: QGraphicsSceneDragDropEvent) i32 {
        return qtc.QGraphicsSceneDragDropEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setButtons` instead
    ///
    pub const SetButtons = setButtons;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` _buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn setButtons(self: QGraphicsSceneDragDropEvent, _buttons: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetButtons(@ptrCast(self.ptr), @bitCast(_buttons));
    }

    /// ### DEPRECATED: Use `modifiers` instead
    ///
    pub const Modifiers = modifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn modifiers(self: QGraphicsSceneDragDropEvent) i32 {
        return qtc.QGraphicsSceneDragDropEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifiers` instead
    ///
    pub const SetModifiers = setModifiers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` _modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifiers(self: QGraphicsSceneDragDropEvent, _modifiers: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(_modifiers));
    }

    /// ### DEPRECATED: Use `possibleActions` instead
    ///
    pub const PossibleActions = possibleActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#possibleActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn possibleActions(self: QGraphicsSceneDragDropEvent) i32 {
        return qtc.QGraphicsSceneDragDropEvent_PossibleActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPossibleActions` instead
    ///
    pub const SetPossibleActions = setPossibleActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPossibleActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    pub fn setPossibleActions(self: QGraphicsSceneDragDropEvent, actions: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetPossibleActions(@ptrCast(self.ptr), @bitCast(actions));
    }

    /// ### DEPRECATED: Use `proposedAction` instead
    ///
    pub const ProposedAction = proposedAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#proposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn proposedAction(self: QGraphicsSceneDragDropEvent) i32 {
        return qtc.QGraphicsSceneDragDropEvent_ProposedAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProposedAction` instead
    ///
    pub const SetProposedAction = setProposedAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn setProposedAction(self: QGraphicsSceneDragDropEvent, action: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetProposedAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `acceptProposedAction` instead
    ///
    pub const AcceptProposedAction = acceptProposedAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn acceptProposedAction(self: QGraphicsSceneDragDropEvent) void {
        qtc.QGraphicsSceneDragDropEvent_AcceptProposedAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dropAction` instead
    ///
    pub const DropAction = dropAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#dropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn dropAction(self: QGraphicsSceneDragDropEvent) i32 {
        return qtc.QGraphicsSceneDragDropEvent_DropAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDropAction` instead
    ///
    pub const SetDropAction = setDropAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn setDropAction(self: QGraphicsSceneDragDropEvent, action: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetDropAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn source(self: QGraphicsSceneDragDropEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_Source(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSource` instead
    ///
    pub const SetSource = setSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` _source: QWidget `
    ///
    pub fn setSource(self: QGraphicsSceneDragDropEvent, _source: anytype) void {
        comptime _ = @TypeOf(_source)._is_QWidget;
        qtc.QGraphicsSceneDragDropEvent_SetSource(@ptrCast(self.ptr), @ptrCast(_source.ptr));
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn mimeData(self: QGraphicsSceneDragDropEvent) QMimeData {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_MimeData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMimeData` instead
    ///
    pub const SetMimeData = setMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` data: QMimeData `
    ///
    pub fn setMimeData(self: QGraphicsSceneDragDropEvent, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QMimeData;
        qtc.QGraphicsSceneDragDropEvent_SetMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn widget(self: QGraphicsSceneDragDropEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QGraphicsSceneDragDropEvent, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn timestamp(self: QGraphicsSceneDragDropEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn setTimestamp(self: QGraphicsSceneDragDropEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: QGraphicsSceneDragDropEvent) i32 {
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn spontaneous(self: QGraphicsSceneDragDropEvent) bool {
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn isAccepted(self: QGraphicsSceneDragDropEvent) bool {
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn accept(self: QGraphicsSceneDragDropEvent) void {
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn ignore(self: QGraphicsSceneDragDropEvent) void {
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn isInputEvent(self: QGraphicsSceneDragDropEvent) bool {
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn isPointerEvent(self: QGraphicsSceneDragDropEvent) bool {
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn isSinglePointEvent(self: QGraphicsSceneDragDropEvent) bool {
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: QGraphicsSceneDragDropEvent, accepted: bool) void {
        qtc.QGraphicsSceneDragDropEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: QGraphicsSceneDragDropEvent, accepted: bool) void {
        qtc.QGraphicsSceneDragDropEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneDragDropEvent`
    ///
    /// ` callback: *const fn (self: QGraphicsSceneDragDropEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: QGraphicsSceneDragDropEvent, callback: *const fn (QGraphicsSceneDragDropEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneDragDropEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn clone(self: QGraphicsSceneDragDropEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn superClone(self: QGraphicsSceneDragDropEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneDragDropEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: QGraphicsSceneDragDropEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneDragDropEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#dtor.QGraphicsSceneDragDropEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn delete(self: QGraphicsSceneDragDropEvent) void {
        qtc.QGraphicsSceneDragDropEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html)
pub const QGraphicsSceneResizeEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsSceneResizeEvent,

    pub const _is_QGraphicsSceneResizeEvent = {};
    pub const _is_QGraphicsSceneEvent = {};
    pub const _is_QEvent = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsSceneResizeEvent object in C++ memory
    ///
    pub fn new() QGraphicsSceneResizeEvent {
        return .{ .ptr = qtc.QGraphicsSceneResizeEvent_new() };
    }

    /// ### DEPRECATED: Use `oldSize` instead
    ///
    pub const OldSize = oldSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#oldSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn oldSize(self: QGraphicsSceneResizeEvent) QSizeF {
        return .{ .ptr = qtc.QGraphicsSceneResizeEvent_OldSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOldSize` instead
    ///
    pub const SetOldSize = setOldSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setOldSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ` size: QSizeF `
    ///
    pub fn setOldSize(self: QGraphicsSceneResizeEvent, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsSceneResizeEvent_SetOldSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `newSize` instead
    ///
    pub const NewSize = newSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#newSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn newSize(self: QGraphicsSceneResizeEvent) QSizeF {
        return .{ .ptr = qtc.QGraphicsSceneResizeEvent_NewSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setNewSize` instead
    ///
    pub const SetNewSize = setNewSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setNewSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ` size: QSizeF `
    ///
    pub fn setNewSize(self: QGraphicsSceneResizeEvent, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsSceneResizeEvent_SetNewSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn widget(self: QGraphicsSceneResizeEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QGraphicsSceneResizeEvent, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn timestamp(self: QGraphicsSceneResizeEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn setTimestamp(self: QGraphicsSceneResizeEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: QGraphicsSceneResizeEvent) i32 {
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn spontaneous(self: QGraphicsSceneResizeEvent) bool {
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn isAccepted(self: QGraphicsSceneResizeEvent) bool {
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn accept(self: QGraphicsSceneResizeEvent) void {
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn ignore(self: QGraphicsSceneResizeEvent) void {
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn isInputEvent(self: QGraphicsSceneResizeEvent) bool {
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn isPointerEvent(self: QGraphicsSceneResizeEvent) bool {
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn isSinglePointEvent(self: QGraphicsSceneResizeEvent) bool {
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: QGraphicsSceneResizeEvent, accepted: bool) void {
        qtc.QGraphicsSceneResizeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: QGraphicsSceneResizeEvent, accepted: bool) void {
        qtc.QGraphicsSceneResizeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneResizeEvent`
    ///
    /// ` callback: *const fn (self: QGraphicsSceneResizeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: QGraphicsSceneResizeEvent, callback: *const fn (QGraphicsSceneResizeEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneResizeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn clone(self: QGraphicsSceneResizeEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneResizeEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn superClone(self: QGraphicsSceneResizeEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneResizeEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneResizeEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: QGraphicsSceneResizeEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneResizeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#dtor.QGraphicsSceneResizeEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn delete(self: QGraphicsSceneResizeEvent) void {
        qtc.QGraphicsSceneResizeEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html)
pub const QGraphicsSceneMoveEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QGraphicsSceneMoveEvent,

    pub const _is_QGraphicsSceneMoveEvent = {};
    pub const _is_QGraphicsSceneEvent = {};
    pub const _is_QEvent = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QGraphicsSceneMoveEvent object in C++ memory
    ///
    pub fn new() QGraphicsSceneMoveEvent {
        return .{ .ptr = qtc.QGraphicsSceneMoveEvent_new() };
    }

    /// ### DEPRECATED: Use `oldPos` instead
    ///
    pub const OldPos = oldPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#oldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn oldPos(self: QGraphicsSceneMoveEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMoveEvent_OldPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOldPos` instead
    ///
    pub const SetOldPos = setOldPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setOldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setOldPos(self: QGraphicsSceneMoveEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneMoveEvent_SetOldPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `newPos` instead
    ///
    pub const NewPos = newPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#newPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn newPos(self: QGraphicsSceneMoveEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMoveEvent_NewPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setNewPos` instead
    ///
    pub const SetNewPos = setNewPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setNewPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setNewPos(self: QGraphicsSceneMoveEvent, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.QGraphicsSceneMoveEvent_SetNewPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn widget(self: QGraphicsSceneMoveEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWidget` instead
    ///
    pub const SetWidget = setWidget;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn setWidget(self: QGraphicsSceneMoveEvent, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `timestamp` instead
    ///
    pub const Timestamp = timestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn timestamp(self: QGraphicsSceneMoveEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimestamp` instead
    ///
    pub const SetTimestamp = setTimestamp;

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn setTimestamp(self: QGraphicsSceneMoveEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: QGraphicsSceneMoveEvent) i32 {
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn spontaneous(self: QGraphicsSceneMoveEvent) bool {
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn isAccepted(self: QGraphicsSceneMoveEvent) bool {
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn accept(self: QGraphicsSceneMoveEvent) void {
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn ignore(self: QGraphicsSceneMoveEvent) void {
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn isInputEvent(self: QGraphicsSceneMoveEvent) bool {
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn isPointerEvent(self: QGraphicsSceneMoveEvent) bool {
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn isSinglePointEvent(self: QGraphicsSceneMoveEvent) bool {
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: QGraphicsSceneMoveEvent, accepted: bool) void {
        qtc.QGraphicsSceneMoveEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: QGraphicsSceneMoveEvent, accepted: bool) void {
        qtc.QGraphicsSceneMoveEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneMoveEvent`
    ///
    /// ` callback: *const fn (self: QGraphicsSceneMoveEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: QGraphicsSceneMoveEvent, callback: *const fn (QGraphicsSceneMoveEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneMoveEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn clone(self: QGraphicsSceneMoveEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneMoveEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn superClone(self: QGraphicsSceneMoveEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneMoveEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneMoveEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: QGraphicsSceneMoveEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneMoveEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#dtor.QGraphicsSceneMoveEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn delete(self: QGraphicsSceneMoveEvent) void {
        qtc.QGraphicsSceneMoveEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#public-types)
pub const enums = struct {
    pub const Reason = enum {
        pub const Mouse: i32 = 0;
        pub const Keyboard: i32 = 1;
        pub const Other: i32 = 2;
    };
};
