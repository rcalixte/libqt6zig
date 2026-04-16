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

    /// New constructs a new QGraphicsSceneEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New(typeVal: i32) QGraphicsSceneEvent {
        return .{ .ptr = qtc.QGraphicsSceneEvent_new(@bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn Widget(self: QGraphicsSceneEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QGraphicsSceneEvent, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn Timestamp(self: QGraphicsSceneEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn SetTimestamp(self: QGraphicsSceneEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
    }

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
    pub fn Type(self: QGraphicsSceneEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn Spontaneous(self: QGraphicsSceneEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn IsAccepted(self: QGraphicsSceneEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn Accept(self: QGraphicsSceneEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn Ignore(self: QGraphicsSceneEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn IsInputEvent(self: QGraphicsSceneEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn IsPointerEvent(self: QGraphicsSceneEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn IsSinglePointEvent(self: QGraphicsSceneEvent) bool {
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
    /// ` self: QGraphicsSceneEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QGraphicsSceneEvent, accepted: bool) void {
        qtc.QGraphicsSceneEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QGraphicsSceneEvent, accepted: bool) void {
        qtc.QGraphicsSceneEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

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
    pub fn OnSetAccepted(self: QGraphicsSceneEvent, callback: *const fn (QGraphicsSceneEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Clone(self: QGraphicsSceneEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn SuperClone(self: QGraphicsSceneEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneEvent_SuperClone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: QGraphicsSceneEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#dtor.QGraphicsSceneEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneEvent `
    ///
    pub fn Delete(self: QGraphicsSceneEvent) void {
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

    /// New constructs a new QGraphicsSceneMouseEvent object.
    ///
    pub fn New() QGraphicsSceneMouseEvent {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_new() };
    }

    /// New2 constructs a new QGraphicsSceneMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QGraphicsSceneMouseEvent {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_new2(@bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn Pos(self: QGraphicsSceneMouseEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPos(self: QGraphicsSceneMouseEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn ScenePos(self: QGraphicsSceneMouseEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetScenePos(self: QGraphicsSceneMouseEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn ScreenPos(self: QGraphicsSceneMouseEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SetScreenPos(self: QGraphicsSceneMouseEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QGraphicsSceneMouseEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    pub fn ButtonDownPos(self: QGraphicsSceneMouseEvent, button: i32) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_ButtonDownPos(@ptrCast(self.ptr), @bitCast(button)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetButtonDownPos(self: QGraphicsSceneMouseEvent, button: i32, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetButtonDownPos(@ptrCast(self.ptr), @bitCast(button), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    pub fn ButtonDownScenePos(self: QGraphicsSceneMouseEvent, button: i32) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_ButtonDownScenePos(@ptrCast(self.ptr), @bitCast(button)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetButtonDownScenePos(self: QGraphicsSceneMouseEvent, button: i32, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetButtonDownScenePos(@ptrCast(self.ptr), @bitCast(button), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    pub fn ButtonDownScreenPos(self: QGraphicsSceneMouseEvent, button: i32) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_ButtonDownScreenPos(@ptrCast(self.ptr), @bitCast(button)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SetButtonDownScreenPos(self: QGraphicsSceneMouseEvent, button: i32, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QGraphicsSceneMouseEvent_SetButtonDownScreenPos(@ptrCast(self.ptr), @bitCast(button), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn LastPos(self: QGraphicsSceneMouseEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_LastPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetLastPos(self: QGraphicsSceneMouseEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetLastPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn LastScenePos(self: QGraphicsSceneMouseEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_LastScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetLastScenePos(self: QGraphicsSceneMouseEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneMouseEvent_SetLastScenePos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn LastScreenPos(self: QGraphicsSceneMouseEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_LastScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SetLastScreenPos(self: QGraphicsSceneMouseEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QGraphicsSceneMouseEvent_SetLastScreenPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

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
    pub fn Buttons(self: QGraphicsSceneMouseEvent) i32 {
        return qtc.QGraphicsSceneMouseEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn SetButtons(self: QGraphicsSceneMouseEvent, buttons: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetButtons(@ptrCast(self.ptr), @bitCast(buttons));
    }

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
    pub fn Button(self: QGraphicsSceneMouseEvent) i32 {
        return qtc.QGraphicsSceneMouseEvent_Button(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    pub fn SetButton(self: QGraphicsSceneMouseEvent, button: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetButton(@ptrCast(self.ptr), @bitCast(button));
    }

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
    pub fn Modifiers(self: QGraphicsSceneMouseEvent) i32 {
        return qtc.QGraphicsSceneMouseEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QGraphicsSceneMouseEvent, modifiers: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

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
    pub fn Source(self: QGraphicsSceneMouseEvent) i32 {
        return qtc.QGraphicsSceneMouseEvent_Source(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` source: qnamespace_enums.MouseEventSource `
    ///
    pub fn SetSource(self: QGraphicsSceneMouseEvent, source: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetSource(@ptrCast(self.ptr), @bitCast(source));
    }

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
    pub fn Flags(self: QGraphicsSceneMouseEvent) i32 {
        return qtc.QGraphicsSceneMouseEvent_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` flags: flag of qnamespace_enums.MouseEventFlag `
    ///
    pub fn SetFlags(self: QGraphicsSceneMouseEvent, flags: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn Widget(self: QGraphicsSceneMouseEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QGraphicsSceneMouseEvent, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn Timestamp(self: QGraphicsSceneMouseEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

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
    pub fn SetTimestamp(self: QGraphicsSceneMouseEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
    }

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
    pub fn Type(self: QGraphicsSceneMouseEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn Spontaneous(self: QGraphicsSceneMouseEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn IsAccepted(self: QGraphicsSceneMouseEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn Accept(self: QGraphicsSceneMouseEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn Ignore(self: QGraphicsSceneMouseEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn IsInputEvent(self: QGraphicsSceneMouseEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn IsPointerEvent(self: QGraphicsSceneMouseEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn IsSinglePointEvent(self: QGraphicsSceneMouseEvent) bool {
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QGraphicsSceneMouseEvent, accepted: bool) void {
        qtc.QGraphicsSceneMouseEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QGraphicsSceneMouseEvent, accepted: bool) void {
        qtc.QGraphicsSceneMouseEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

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
    pub fn OnSetAccepted(self: QGraphicsSceneMouseEvent, callback: *const fn (QGraphicsSceneMouseEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneMouseEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Clone(self: QGraphicsSceneMouseEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn SuperClone(self: QGraphicsSceneMouseEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneMouseEvent_SuperClone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: QGraphicsSceneMouseEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneMouseEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#dtor.QGraphicsSceneMouseEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneMouseEvent `
    ///
    pub fn Delete(self: QGraphicsSceneMouseEvent) void {
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

    /// New constructs a new QGraphicsSceneWheelEvent object.
    ///
    pub fn New() QGraphicsSceneWheelEvent {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_new() };
    }

    /// New2 constructs a new QGraphicsSceneWheelEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QGraphicsSceneWheelEvent {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_new2(@bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn Pos(self: QGraphicsSceneWheelEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPos(self: QGraphicsSceneWheelEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneWheelEvent_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn ScenePos(self: QGraphicsSceneWheelEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetScenePos(self: QGraphicsSceneWheelEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneWheelEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn ScreenPos(self: QGraphicsSceneWheelEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SetScreenPos(self: QGraphicsSceneWheelEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QGraphicsSceneWheelEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

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
    pub fn Buttons(self: QGraphicsSceneWheelEvent) i32 {
        return qtc.QGraphicsSceneWheelEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn SetButtons(self: QGraphicsSceneWheelEvent, buttons: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetButtons(@ptrCast(self.ptr), @bitCast(buttons));
    }

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
    pub fn Modifiers(self: QGraphicsSceneWheelEvent) i32 {
        return qtc.QGraphicsSceneWheelEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QGraphicsSceneWheelEvent, modifiers: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#delta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn Delta(self: QGraphicsSceneWheelEvent) i32 {
        return qtc.QGraphicsSceneWheelEvent_Delta(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` delta: i32 `
    ///
    pub fn SetDelta(self: QGraphicsSceneWheelEvent, delta: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetDelta(@ptrCast(self.ptr), @bitCast(delta));
    }

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
    pub fn Orientation(self: QGraphicsSceneWheelEvent) i32 {
        return qtc.QGraphicsSceneWheelEvent_Orientation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: QGraphicsSceneWheelEvent, orientation: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetOrientation(@ptrCast(self.ptr), @bitCast(orientation));
    }

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
    pub fn Phase(self: QGraphicsSceneWheelEvent) i32 {
        return qtc.QGraphicsSceneWheelEvent_Phase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPhase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` scrollPhase: qnamespace_enums.ScrollPhase `
    ///
    pub fn SetPhase(self: QGraphicsSceneWheelEvent, scrollPhase: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetPhase(@ptrCast(self.ptr), @bitCast(scrollPhase));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn PixelDelta(self: QGraphicsSceneWheelEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_PixelDelta(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` delta: QPoint `
    ///
    pub fn SetPixelDelta(self: QGraphicsSceneWheelEvent, delta: anytype) void {
        comptime _ = @TypeOf(delta)._is_QPoint;
        qtc.QGraphicsSceneWheelEvent_SetPixelDelta(@ptrCast(self.ptr), @ptrCast(delta.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#isInverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn IsInverted(self: QGraphicsSceneWheelEvent) bool {
        return qtc.QGraphicsSceneWheelEvent_IsInverted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setInverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` inverted: bool `
    ///
    pub fn SetInverted(self: QGraphicsSceneWheelEvent, inverted: bool) void {
        qtc.QGraphicsSceneWheelEvent_SetInverted(@ptrCast(self.ptr), inverted);
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn Widget(self: QGraphicsSceneWheelEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QGraphicsSceneWheelEvent, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn Timestamp(self: QGraphicsSceneWheelEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

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
    pub fn SetTimestamp(self: QGraphicsSceneWheelEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
    }

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
    pub fn Type(self: QGraphicsSceneWheelEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn Spontaneous(self: QGraphicsSceneWheelEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn IsAccepted(self: QGraphicsSceneWheelEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn Accept(self: QGraphicsSceneWheelEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn Ignore(self: QGraphicsSceneWheelEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn IsInputEvent(self: QGraphicsSceneWheelEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn IsPointerEvent(self: QGraphicsSceneWheelEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn IsSinglePointEvent(self: QGraphicsSceneWheelEvent) bool {
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QGraphicsSceneWheelEvent, accepted: bool) void {
        qtc.QGraphicsSceneWheelEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QGraphicsSceneWheelEvent, accepted: bool) void {
        qtc.QGraphicsSceneWheelEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

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
    pub fn OnSetAccepted(self: QGraphicsSceneWheelEvent, callback: *const fn (QGraphicsSceneWheelEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneWheelEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Clone(self: QGraphicsSceneWheelEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn SuperClone(self: QGraphicsSceneWheelEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneWheelEvent_SuperClone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: QGraphicsSceneWheelEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneWheelEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#dtor.QGraphicsSceneWheelEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneWheelEvent `
    ///
    pub fn Delete(self: QGraphicsSceneWheelEvent) void {
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

    /// New constructs a new QGraphicsSceneContextMenuEvent object.
    ///
    pub fn New() QGraphicsSceneContextMenuEvent {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_new() };
    }

    /// New2 constructs a new QGraphicsSceneContextMenuEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QGraphicsSceneContextMenuEvent {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_new2(@bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn Pos(self: QGraphicsSceneContextMenuEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPos(self: QGraphicsSceneContextMenuEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneContextMenuEvent_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn ScenePos(self: QGraphicsSceneContextMenuEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetScenePos(self: QGraphicsSceneContextMenuEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneContextMenuEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn ScreenPos(self: QGraphicsSceneContextMenuEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SetScreenPos(self: QGraphicsSceneContextMenuEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QGraphicsSceneContextMenuEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

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
    pub fn Modifiers(self: QGraphicsSceneContextMenuEvent) i32 {
        return qtc.QGraphicsSceneContextMenuEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QGraphicsSceneContextMenuEvent, modifiers: i32) void {
        qtc.QGraphicsSceneContextMenuEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

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
    pub fn Reason(self: QGraphicsSceneContextMenuEvent) i32 {
        return qtc.QGraphicsSceneContextMenuEvent_Reason(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` reason: qgraphicssceneevent_enums.Reason `
    ///
    pub fn SetReason(self: QGraphicsSceneContextMenuEvent, reason: i32) void {
        qtc.QGraphicsSceneContextMenuEvent_SetReason(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn Widget(self: QGraphicsSceneContextMenuEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QGraphicsSceneContextMenuEvent, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn Timestamp(self: QGraphicsSceneContextMenuEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

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
    pub fn SetTimestamp(self: QGraphicsSceneContextMenuEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
    }

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
    pub fn Type(self: QGraphicsSceneContextMenuEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn Spontaneous(self: QGraphicsSceneContextMenuEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn IsAccepted(self: QGraphicsSceneContextMenuEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn Accept(self: QGraphicsSceneContextMenuEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn Ignore(self: QGraphicsSceneContextMenuEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn IsInputEvent(self: QGraphicsSceneContextMenuEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn IsPointerEvent(self: QGraphicsSceneContextMenuEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn IsSinglePointEvent(self: QGraphicsSceneContextMenuEvent) bool {
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QGraphicsSceneContextMenuEvent, accepted: bool) void {
        qtc.QGraphicsSceneContextMenuEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QGraphicsSceneContextMenuEvent, accepted: bool) void {
        qtc.QGraphicsSceneContextMenuEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

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
    pub fn OnSetAccepted(self: QGraphicsSceneContextMenuEvent, callback: *const fn (QGraphicsSceneContextMenuEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneContextMenuEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Clone(self: QGraphicsSceneContextMenuEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn SuperClone(self: QGraphicsSceneContextMenuEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneContextMenuEvent_SuperClone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: QGraphicsSceneContextMenuEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneContextMenuEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#dtor.QGraphicsSceneContextMenuEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneContextMenuEvent `
    ///
    pub fn Delete(self: QGraphicsSceneContextMenuEvent) void {
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

    /// New constructs a new QGraphicsSceneHoverEvent object.
    ///
    pub fn New() QGraphicsSceneHoverEvent {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_new() };
    }

    /// New2 constructs a new QGraphicsSceneHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QGraphicsSceneHoverEvent {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_new2(@bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn Pos(self: QGraphicsSceneHoverEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPos(self: QGraphicsSceneHoverEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneHoverEvent_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn ScenePos(self: QGraphicsSceneHoverEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetScenePos(self: QGraphicsSceneHoverEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneHoverEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn ScreenPos(self: QGraphicsSceneHoverEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SetScreenPos(self: QGraphicsSceneHoverEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QGraphicsSceneHoverEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn LastPos(self: QGraphicsSceneHoverEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_LastPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetLastPos(self: QGraphicsSceneHoverEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneHoverEvent_SetLastPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn LastScenePos(self: QGraphicsSceneHoverEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_LastScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetLastScenePos(self: QGraphicsSceneHoverEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneHoverEvent_SetLastScenePos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn LastScreenPos(self: QGraphicsSceneHoverEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_LastScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SetLastScreenPos(self: QGraphicsSceneHoverEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QGraphicsSceneHoverEvent_SetLastScreenPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

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
    pub fn Modifiers(self: QGraphicsSceneHoverEvent) i32 {
        return qtc.QGraphicsSceneHoverEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QGraphicsSceneHoverEvent, modifiers: i32) void {
        qtc.QGraphicsSceneHoverEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn Widget(self: QGraphicsSceneHoverEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QGraphicsSceneHoverEvent, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn Timestamp(self: QGraphicsSceneHoverEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

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
    pub fn SetTimestamp(self: QGraphicsSceneHoverEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
    }

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
    pub fn Type(self: QGraphicsSceneHoverEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn Spontaneous(self: QGraphicsSceneHoverEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn IsAccepted(self: QGraphicsSceneHoverEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn Accept(self: QGraphicsSceneHoverEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn Ignore(self: QGraphicsSceneHoverEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn IsInputEvent(self: QGraphicsSceneHoverEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn IsPointerEvent(self: QGraphicsSceneHoverEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn IsSinglePointEvent(self: QGraphicsSceneHoverEvent) bool {
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QGraphicsSceneHoverEvent, accepted: bool) void {
        qtc.QGraphicsSceneHoverEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QGraphicsSceneHoverEvent, accepted: bool) void {
        qtc.QGraphicsSceneHoverEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

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
    pub fn OnSetAccepted(self: QGraphicsSceneHoverEvent, callback: *const fn (QGraphicsSceneHoverEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneHoverEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Clone(self: QGraphicsSceneHoverEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn SuperClone(self: QGraphicsSceneHoverEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneHoverEvent_SuperClone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: QGraphicsSceneHoverEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneHoverEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#dtor.QGraphicsSceneHoverEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneHoverEvent `
    ///
    pub fn Delete(self: QGraphicsSceneHoverEvent) void {
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

    /// New constructs a new QGraphicsSceneHelpEvent object.
    ///
    pub fn New() QGraphicsSceneHelpEvent {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_new() };
    }

    /// New2 constructs a new QGraphicsSceneHelpEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QGraphicsSceneHelpEvent {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_new2(@bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn ScenePos(self: QGraphicsSceneHelpEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetScenePos(self: QGraphicsSceneHelpEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneHelpEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn ScreenPos(self: QGraphicsSceneHelpEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SetScreenPos(self: QGraphicsSceneHelpEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QGraphicsSceneHelpEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn Widget(self: QGraphicsSceneHelpEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QGraphicsSceneHelpEvent, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn Timestamp(self: QGraphicsSceneHelpEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

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
    pub fn SetTimestamp(self: QGraphicsSceneHelpEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
    }

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
    pub fn Type(self: QGraphicsSceneHelpEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn Spontaneous(self: QGraphicsSceneHelpEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn IsAccepted(self: QGraphicsSceneHelpEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn Accept(self: QGraphicsSceneHelpEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn Ignore(self: QGraphicsSceneHelpEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn IsInputEvent(self: QGraphicsSceneHelpEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn IsPointerEvent(self: QGraphicsSceneHelpEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn IsSinglePointEvent(self: QGraphicsSceneHelpEvent) bool {
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QGraphicsSceneHelpEvent, accepted: bool) void {
        qtc.QGraphicsSceneHelpEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QGraphicsSceneHelpEvent, accepted: bool) void {
        qtc.QGraphicsSceneHelpEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

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
    pub fn OnSetAccepted(self: QGraphicsSceneHelpEvent, callback: *const fn (QGraphicsSceneHelpEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneHelpEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Clone(self: QGraphicsSceneHelpEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn SuperClone(self: QGraphicsSceneHelpEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneHelpEvent_SuperClone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: QGraphicsSceneHelpEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneHelpEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#dtor.QGraphicsSceneHelpEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneHelpEvent `
    ///
    pub fn Delete(self: QGraphicsSceneHelpEvent) void {
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

    /// New constructs a new QGraphicsSceneDragDropEvent object.
    ///
    pub fn New() QGraphicsSceneDragDropEvent {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_new() };
    }

    /// New2 constructs a new QGraphicsSceneDragDropEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QGraphicsSceneDragDropEvent {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_new2(@bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn Pos(self: QGraphicsSceneDragDropEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPos(self: QGraphicsSceneDragDropEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneDragDropEvent_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn ScenePos(self: QGraphicsSceneDragDropEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetScenePos(self: QGraphicsSceneDragDropEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneDragDropEvent_SetScenePos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn ScreenPos(self: QGraphicsSceneDragDropEvent) QPoint {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SetScreenPos(self: QGraphicsSceneDragDropEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QGraphicsSceneDragDropEvent_SetScreenPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

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
    pub fn Buttons(self: QGraphicsSceneDragDropEvent) i32 {
        return qtc.QGraphicsSceneDragDropEvent_Buttons(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn SetButtons(self: QGraphicsSceneDragDropEvent, buttons: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetButtons(@ptrCast(self.ptr), @bitCast(buttons));
    }

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
    pub fn Modifiers(self: QGraphicsSceneDragDropEvent) i32 {
        return qtc.QGraphicsSceneDragDropEvent_Modifiers(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: QGraphicsSceneDragDropEvent, modifiers: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetModifiers(@ptrCast(self.ptr), @bitCast(modifiers));
    }

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
    pub fn PossibleActions(self: QGraphicsSceneDragDropEvent) i32 {
        return qtc.QGraphicsSceneDragDropEvent_PossibleActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPossibleActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    pub fn SetPossibleActions(self: QGraphicsSceneDragDropEvent, actions: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetPossibleActions(@ptrCast(self.ptr), @bitCast(actions));
    }

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
    pub fn ProposedAction(self: QGraphicsSceneDragDropEvent) i32 {
        return qtc.QGraphicsSceneDragDropEvent_ProposedAction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SetProposedAction(self: QGraphicsSceneDragDropEvent, action: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetProposedAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn AcceptProposedAction(self: QGraphicsSceneDragDropEvent) void {
        qtc.QGraphicsSceneDragDropEvent_AcceptProposedAction(@ptrCast(self.ptr));
    }

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
    pub fn DropAction(self: QGraphicsSceneDragDropEvent) i32 {
        return qtc.QGraphicsSceneDragDropEvent_DropAction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SetDropAction(self: QGraphicsSceneDragDropEvent, action: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetDropAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn Source(self: QGraphicsSceneDragDropEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_Source(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` source: QWidget `
    ///
    pub fn SetSource(self: QGraphicsSceneDragDropEvent, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QWidget;
        qtc.QGraphicsSceneDragDropEvent_SetSource(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn MimeData(self: QGraphicsSceneDragDropEvent) QMimeData {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_MimeData(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` data: QMimeData `
    ///
    pub fn SetMimeData(self: QGraphicsSceneDragDropEvent, data: anytype) void {
        comptime _ = @TypeOf(data)._is_QMimeData;
        qtc.QGraphicsSceneDragDropEvent_SetMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn Widget(self: QGraphicsSceneDragDropEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QGraphicsSceneDragDropEvent, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn Timestamp(self: QGraphicsSceneDragDropEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

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
    pub fn SetTimestamp(self: QGraphicsSceneDragDropEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
    }

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
    pub fn Type(self: QGraphicsSceneDragDropEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn Spontaneous(self: QGraphicsSceneDragDropEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn IsAccepted(self: QGraphicsSceneDragDropEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn Accept(self: QGraphicsSceneDragDropEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn Ignore(self: QGraphicsSceneDragDropEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn IsInputEvent(self: QGraphicsSceneDragDropEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn IsPointerEvent(self: QGraphicsSceneDragDropEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn IsSinglePointEvent(self: QGraphicsSceneDragDropEvent) bool {
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QGraphicsSceneDragDropEvent, accepted: bool) void {
        qtc.QGraphicsSceneDragDropEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QGraphicsSceneDragDropEvent, accepted: bool) void {
        qtc.QGraphicsSceneDragDropEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

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
    pub fn OnSetAccepted(self: QGraphicsSceneDragDropEvent, callback: *const fn (QGraphicsSceneDragDropEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneDragDropEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Clone(self: QGraphicsSceneDragDropEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn SuperClone(self: QGraphicsSceneDragDropEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneDragDropEvent_SuperClone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: QGraphicsSceneDragDropEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneDragDropEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#dtor.QGraphicsSceneDragDropEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneDragDropEvent `
    ///
    pub fn Delete(self: QGraphicsSceneDragDropEvent) void {
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

    /// New constructs a new QGraphicsSceneResizeEvent object.
    ///
    pub fn New() QGraphicsSceneResizeEvent {
        return .{ .ptr = qtc.QGraphicsSceneResizeEvent_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#oldSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn OldSize(self: QGraphicsSceneResizeEvent) QSizeF {
        return .{ .ptr = qtc.QGraphicsSceneResizeEvent_OldSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setOldSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetOldSize(self: QGraphicsSceneResizeEvent, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsSceneResizeEvent_SetOldSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#newSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn NewSize(self: QGraphicsSceneResizeEvent) QSizeF {
        return .{ .ptr = qtc.QGraphicsSceneResizeEvent_NewSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setNewSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ` size: QSizeF `
    ///
    pub fn SetNewSize(self: QGraphicsSceneResizeEvent, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSizeF;
        qtc.QGraphicsSceneResizeEvent_SetNewSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn Widget(self: QGraphicsSceneResizeEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QGraphicsSceneResizeEvent, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn Timestamp(self: QGraphicsSceneResizeEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

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
    pub fn SetTimestamp(self: QGraphicsSceneResizeEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
    }

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
    pub fn Type(self: QGraphicsSceneResizeEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn Spontaneous(self: QGraphicsSceneResizeEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn IsAccepted(self: QGraphicsSceneResizeEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn Accept(self: QGraphicsSceneResizeEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn Ignore(self: QGraphicsSceneResizeEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn IsInputEvent(self: QGraphicsSceneResizeEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn IsPointerEvent(self: QGraphicsSceneResizeEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn IsSinglePointEvent(self: QGraphicsSceneResizeEvent) bool {
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QGraphicsSceneResizeEvent, accepted: bool) void {
        qtc.QGraphicsSceneResizeEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QGraphicsSceneResizeEvent, accepted: bool) void {
        qtc.QGraphicsSceneResizeEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

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
    pub fn OnSetAccepted(self: QGraphicsSceneResizeEvent, callback: *const fn (QGraphicsSceneResizeEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneResizeEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Clone(self: QGraphicsSceneResizeEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneResizeEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn SuperClone(self: QGraphicsSceneResizeEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneResizeEvent_SuperClone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: QGraphicsSceneResizeEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneResizeEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#dtor.QGraphicsSceneResizeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneResizeEvent `
    ///
    pub fn Delete(self: QGraphicsSceneResizeEvent) void {
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

    /// New constructs a new QGraphicsSceneMoveEvent object.
    ///
    pub fn New() QGraphicsSceneMoveEvent {
        return .{ .ptr = qtc.QGraphicsSceneMoveEvent_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#oldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn OldPos(self: QGraphicsSceneMoveEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMoveEvent_OldPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setOldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetOldPos(self: QGraphicsSceneMoveEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneMoveEvent_SetOldPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#newPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn NewPos(self: QGraphicsSceneMoveEvent) QPointF {
        return .{ .ptr = qtc.QGraphicsSceneMoveEvent_NewPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setNewPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetNewPos(self: QGraphicsSceneMoveEvent, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QGraphicsSceneMoveEvent_SetNewPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn Widget(self: QGraphicsSceneMoveEvent) QWidget {
        return .{ .ptr = qtc.QGraphicsSceneEvent_Widget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetWidget(self: QGraphicsSceneMoveEvent, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn Timestamp(self: QGraphicsSceneMoveEvent) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self.ptr));
    }

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
    pub fn SetTimestamp(self: QGraphicsSceneMoveEvent, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self.ptr), @bitCast(ts));
    }

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
    pub fn Type(self: QGraphicsSceneMoveEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn Spontaneous(self: QGraphicsSceneMoveEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn IsAccepted(self: QGraphicsSceneMoveEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn Accept(self: QGraphicsSceneMoveEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn Ignore(self: QGraphicsSceneMoveEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn IsInputEvent(self: QGraphicsSceneMoveEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn IsPointerEvent(self: QGraphicsSceneMoveEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn IsSinglePointEvent(self: QGraphicsSceneMoveEvent) bool {
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QGraphicsSceneMoveEvent, accepted: bool) void {
        qtc.QGraphicsSceneMoveEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QGraphicsSceneMoveEvent, accepted: bool) void {
        qtc.QGraphicsSceneMoveEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

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
    pub fn OnSetAccepted(self: QGraphicsSceneMoveEvent, callback: *const fn (QGraphicsSceneMoveEvent, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneMoveEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Clone(self: QGraphicsSceneMoveEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneMoveEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn SuperClone(self: QGraphicsSceneMoveEvent) QEvent {
        return .{ .ptr = qtc.QGraphicsSceneMoveEvent_SuperClone(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClone(self: QGraphicsSceneMoveEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QGraphicsSceneMoveEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#dtor.QGraphicsSceneMoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QGraphicsSceneMoveEvent `
    ///
    pub fn Delete(self: QGraphicsSceneMoveEvent) void {
        qtc.QGraphicsSceneMoveEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#public-types)
pub const enums = struct {
    pub const Reason = enum(i32) {
        pub const Mouse: i32 = 0;
        pub const Keyboard: i32 = 1;
        pub const Other: i32 = 2;
    };
};
