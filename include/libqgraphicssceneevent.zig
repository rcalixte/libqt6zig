const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcoreevent_enums = @import("libqcoreevent.zig").enums;
const qgraphicssceneevent_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html)
pub const qgraphicssceneevent = struct {
    /// New constructs a new QGraphicsSceneEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New(typeVal: i32) QtC.QGraphicsSceneEvent {
        return qtc.QGraphicsSceneEvent_new(@intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneEvent `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneEvent `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneEvent `
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
    /// ` self: QtC.QGraphicsSceneEvent `
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
    /// ` self: QtC.QGraphicsSceneEvent `
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
    /// ` self: QtC.QGraphicsSceneEvent `
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
    /// ` self: QtC.QGraphicsSceneEvent `
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
    /// ` self: QtC.QGraphicsSceneEvent `
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
    /// ` self: QtC.QGraphicsSceneEvent `
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
    /// ` self: QtC.QGraphicsSceneEvent `
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
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneEvent`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSceneEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#dtor.QGraphicsSceneEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsSceneEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html)
pub const qgraphicsscenemouseevent = struct {
    /// New constructs a new QGraphicsSceneMouseEvent object.
    ///
    pub fn New() QtC.QGraphicsSceneMouseEvent {
        return qtc.QGraphicsSceneMouseEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneMouseEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneMouseEvent {
        return qtc.QGraphicsSceneMouseEvent_new2(@intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_ScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneMouseEvent_ScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    pub fn ButtonDownPos(self: ?*anyopaque, button: i32) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_ButtonDownPos(@ptrCast(self), @intCast(button));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetButtonDownPos(self: ?*anyopaque, button: i32, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetButtonDownPos(@ptrCast(self), @intCast(button), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    pub fn ButtonDownScenePos(self: ?*anyopaque, button: i32) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_ButtonDownScenePos(@ptrCast(self), @intCast(button));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetButtonDownScenePos(self: ?*anyopaque, button: i32, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetButtonDownScenePos(@ptrCast(self), @intCast(button), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    pub fn ButtonDownScreenPos(self: ?*anyopaque, button: i32) QtC.QPoint {
        return qtc.QGraphicsSceneMouseEvent_ButtonDownScreenPos(@ptrCast(self), @intCast(button));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn SetButtonDownScreenPos(self: ?*anyopaque, button: i32, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetButtonDownScreenPos(@ptrCast(self), @intCast(button), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn LastPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_LastPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetLastPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetLastPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn LastScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_LastScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetLastScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetLastScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn LastScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneMouseEvent_LastScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn SetLastScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetLastScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneMouseEvent_Buttons(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn SetButtons(self: ?*anyopaque, buttons: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetButtons(@ptrCast(self), @intCast(buttons));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseButton `
    ///
    pub fn Button(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneMouseEvent_Button(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` button: qnamespace_enums.MouseButton `
    ///
    pub fn SetButton(self: ?*anyopaque, button: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetButton(@ptrCast(self), @intCast(button));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneMouseEvent_Modifiers(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.MouseEventSource `
    ///
    pub fn Source(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneMouseEvent_Source(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` source: qnamespace_enums.MouseEventSource `
    ///
    pub fn SetSource(self: ?*anyopaque, source: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetSource(@ptrCast(self), @intCast(source));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseEventFlag `
    ///
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneMouseEvent_Flags(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` flags: flag of qnamespace_enums.MouseEventFlag `
    ///
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
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
    /// ` self: QtC.QGraphicsSceneMouseEvent `
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
    /// ` self: QtC.QGraphicsSceneMouseEvent `
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
    /// ` self: QtC.QGraphicsSceneMouseEvent `
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
    /// ` self: QtC.QGraphicsSceneMouseEvent `
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
    /// ` self: QtC.QGraphicsSceneMouseEvent `
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
    /// ` self: QtC.QGraphicsSceneMouseEvent `
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
    /// ` self: QtC.QGraphicsSceneMouseEvent `
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
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneMouseEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneMouseEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSceneMouseEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneMouseEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneMouseEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneMouseEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneMouseEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#dtor.QGraphicsSceneMouseEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsSceneMouseEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html)
pub const qgraphicsscenewheelevent = struct {
    /// New constructs a new QGraphicsSceneWheelEvent object.
    ///
    pub fn New() QtC.QGraphicsSceneWheelEvent {
        return qtc.QGraphicsSceneWheelEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneWheelEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneWheelEvent {
        return qtc.QGraphicsSceneWheelEvent_new2(@intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneWheelEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneWheelEvent_ScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneWheelEvent_ScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneWheelEvent_Buttons(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn SetButtons(self: ?*anyopaque, buttons: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetButtons(@ptrCast(self), @intCast(buttons));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneWheelEvent_Modifiers(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#delta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn Delta(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneWheelEvent_Delta(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` delta: i32 `
    ///
    pub fn SetDelta(self: ?*anyopaque, delta: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetDelta(@ptrCast(self), @intCast(delta));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#orientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.Orientation `
    ///
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneWheelEvent_Orientation(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setOrientation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#phase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollPhase `
    ///
    pub fn Phase(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneWheelEvent_Phase(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPhase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` scrollPhase: qnamespace_enums.ScrollPhase `
    ///
    pub fn SetPhase(self: ?*anyopaque, scrollPhase: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetPhase(@ptrCast(self), @intCast(scrollPhase));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn PixelDelta(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneWheelEvent_PixelDelta(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPixelDelta)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` delta: QtC.QPoint `
    ///
    pub fn SetPixelDelta(self: ?*anyopaque, delta: QtC.QPoint) void {
        qtc.QGraphicsSceneWheelEvent_SetPixelDelta(@ptrCast(self), @ptrCast(delta));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#isInverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn IsInverted(self: ?*anyopaque) bool {
        return qtc.QGraphicsSceneWheelEvent_IsInverted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setInverted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` inverted: bool `
    ///
    pub fn SetInverted(self: ?*anyopaque, inverted: bool) void {
        qtc.QGraphicsSceneWheelEvent_SetInverted(@ptrCast(self), inverted);
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
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
    /// ` self: QtC.QGraphicsSceneWheelEvent `
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
    /// ` self: QtC.QGraphicsSceneWheelEvent `
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
    /// ` self: QtC.QGraphicsSceneWheelEvent `
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
    /// ` self: QtC.QGraphicsSceneWheelEvent `
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
    /// ` self: QtC.QGraphicsSceneWheelEvent `
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
    /// ` self: QtC.QGraphicsSceneWheelEvent `
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
    /// ` self: QtC.QGraphicsSceneWheelEvent `
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
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneWheelEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneWheelEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSceneWheelEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneWheelEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneWheelEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneWheelEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneWheelEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#dtor.QGraphicsSceneWheelEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsSceneWheelEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html)
pub const qgraphicsscenecontextmenuevent = struct {
    /// New constructs a new QGraphicsSceneContextMenuEvent object.
    ///
    pub fn New() QtC.QGraphicsSceneContextMenuEvent {
        return qtc.QGraphicsSceneContextMenuEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneContextMenuEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneContextMenuEvent {
        return qtc.QGraphicsSceneContextMenuEvent_new2(@intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneContextMenuEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneContextMenuEvent_ScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneContextMenuEvent_ScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneContextMenuEvent_Modifiers(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QGraphicsSceneContextMenuEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#reason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    /// ## Returns:
    ///
    /// ` qgraphicssceneevent_enums.Reason `
    ///
    pub fn Reason(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneContextMenuEvent_Reason(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    /// ` reason: qgraphicssceneevent_enums.Reason `
    ///
    pub fn SetReason(self: ?*anyopaque, reason: i32) void {
        qtc.QGraphicsSceneContextMenuEvent_SetReason(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
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
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
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
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
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
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
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
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
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
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
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
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
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
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
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
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneContextMenuEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneContextMenuEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSceneContextMenuEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneContextMenuEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneContextMenuEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneContextMenuEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneContextMenuEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#dtor.QGraphicsSceneContextMenuEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsSceneContextMenuEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html)
pub const qgraphicsscenehoverevent = struct {
    /// New constructs a new QGraphicsSceneHoverEvent object.
    ///
    pub fn New() QtC.QGraphicsSceneHoverEvent {
        return qtc.QGraphicsSceneHoverEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneHoverEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneHoverEvent {
        return qtc.QGraphicsSceneHoverEvent_new2(@intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_ScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneHoverEvent_ScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn LastPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_LastPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetLastPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetLastPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn LastScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_LastScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetLastScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetLastScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn LastScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneHoverEvent_LastScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn SetLastScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetLastScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneHoverEvent_Modifiers(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QGraphicsSceneHoverEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
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
    /// ` self: QtC.QGraphicsSceneHoverEvent `
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
    /// ` self: QtC.QGraphicsSceneHoverEvent `
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
    /// ` self: QtC.QGraphicsSceneHoverEvent `
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
    /// ` self: QtC.QGraphicsSceneHoverEvent `
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
    /// ` self: QtC.QGraphicsSceneHoverEvent `
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
    /// ` self: QtC.QGraphicsSceneHoverEvent `
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
    /// ` self: QtC.QGraphicsSceneHoverEvent `
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
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneHoverEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneHoverEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSceneHoverEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneHoverEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneHoverEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneHoverEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneHoverEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#dtor.QGraphicsSceneHoverEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsSceneHoverEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html)
pub const qgraphicsscenehelpevent = struct {
    /// New constructs a new QGraphicsSceneHelpEvent object.
    ///
    pub fn New() QtC.QGraphicsSceneHelpEvent {
        return qtc.QGraphicsSceneHelpEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneHelpEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneHelpEvent {
        return qtc.QGraphicsSceneHelpEvent_new2(@intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneHelpEvent_ScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHelpEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneHelpEvent_ScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHelpEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
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
    /// ` self: QtC.QGraphicsSceneHelpEvent `
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
    /// ` self: QtC.QGraphicsSceneHelpEvent `
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
    /// ` self: QtC.QGraphicsSceneHelpEvent `
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
    /// ` self: QtC.QGraphicsSceneHelpEvent `
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
    /// ` self: QtC.QGraphicsSceneHelpEvent `
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
    /// ` self: QtC.QGraphicsSceneHelpEvent `
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
    /// ` self: QtC.QGraphicsSceneHelpEvent `
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
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneHelpEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneHelpEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSceneHelpEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneHelpEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneHelpEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneHelpEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneHelpEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#dtor.QGraphicsSceneHelpEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsSceneHelpEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneHelpEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html)
pub const qgraphicsscenedragdropevent = struct {
    /// New constructs a new QGraphicsSceneDragDropEvent object.
    ///
    pub fn New() QtC.QGraphicsSceneDragDropEvent {
        return qtc.QGraphicsSceneDragDropEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneDragDropEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneDragDropEvent {
        return qtc.QGraphicsSceneDragDropEvent_new2(@intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneDragDropEvent_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneDragDropEvent_ScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneDragDropEvent_ScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` pos: QtC.QPoint `
    ///
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.MouseButton `
    ///
    pub fn Buttons(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneDragDropEvent_Buttons(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` buttons: flag of qnamespace_enums.MouseButton `
    ///
    pub fn SetButtons(self: ?*anyopaque, buttons: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetButtons(@ptrCast(self), @intCast(buttons));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#modifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn Modifiers(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneDragDropEvent_Modifiers(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setModifiers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#possibleActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn PossibleActions(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneDragDropEvent_PossibleActions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPossibleActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` actions: flag of qnamespace_enums.DropAction `
    ///
    pub fn SetPossibleActions(self: ?*anyopaque, actions: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetPossibleActions(@ptrCast(self), @intCast(actions));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#proposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn ProposedAction(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneDragDropEvent_ProposedAction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SetProposedAction(self: ?*anyopaque, action: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetProposedAction(@ptrCast(self), @intCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#acceptProposedAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn AcceptProposedAction(self: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_AcceptProposedAction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#dropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DropAction(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneDragDropEvent_DropAction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SetDropAction(self: ?*anyopaque, action: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetDropAction(@ptrCast(self), @intCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn Source(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneDragDropEvent_Source(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` source: QtC.QWidget `
    ///
    pub fn SetSource(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetSource(@ptrCast(self), @ptrCast(source));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn MimeData(self: ?*anyopaque) QtC.QMimeData {
        return qtc.QGraphicsSceneDragDropEvent_MimeData(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` data: QtC.QMimeData `
    ///
    pub fn SetMimeData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetMimeData(@ptrCast(self), @ptrCast(data));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
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
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
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
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
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
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
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
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
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
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
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
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
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
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
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
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneDragDropEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneDragDropEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSceneDragDropEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneDragDropEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneDragDropEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneDragDropEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneDragDropEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#dtor.QGraphicsSceneDragDropEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsSceneDragDropEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html)
pub const qgraphicssceneresizeevent = struct {
    /// New constructs a new QGraphicsSceneResizeEvent object.
    ///
    pub fn New() QtC.QGraphicsSceneResizeEvent {
        return qtc.QGraphicsSceneResizeEvent_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#oldSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    pub fn OldSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsSceneResizeEvent_OldSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setOldSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetOldSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsSceneResizeEvent_SetOldSize(@ptrCast(self), @ptrCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#newSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    pub fn NewSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsSceneResizeEvent_NewSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setNewSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    /// ` size: QtC.QSizeF `
    ///
    pub fn SetNewSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsSceneResizeEvent_SetNewSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
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
    /// ` self: QtC.QGraphicsSceneResizeEvent `
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
    /// ` self: QtC.QGraphicsSceneResizeEvent `
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
    /// ` self: QtC.QGraphicsSceneResizeEvent `
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
    /// ` self: QtC.QGraphicsSceneResizeEvent `
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
    /// ` self: QtC.QGraphicsSceneResizeEvent `
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
    /// ` self: QtC.QGraphicsSceneResizeEvent `
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
    /// ` self: QtC.QGraphicsSceneResizeEvent `
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
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneResizeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneResizeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSceneResizeEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneResizeEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneResizeEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneResizeEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneResizeEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#dtor.QGraphicsSceneResizeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsSceneResizeEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneResizeEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html)
pub const qgraphicsscenemoveevent = struct {
    /// New constructs a new QGraphicsSceneMoveEvent object.
    ///
    pub fn New() QtC.QGraphicsSceneMoveEvent {
        return qtc.QGraphicsSceneMoveEvent_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#oldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    pub fn OldPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMoveEvent_OldPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setOldPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetOldPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMoveEvent_SetOldPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#newPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    pub fn NewPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMoveEvent_NewPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setNewPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetNewPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMoveEvent_SetNewPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    /// ` widget: QtC.QWidget `
    ///
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    /// ` ts: u64 `
    ///
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
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
    /// ` self: QtC.QGraphicsSceneMoveEvent `
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
    /// ` self: QtC.QGraphicsSceneMoveEvent `
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
    /// ` self: QtC.QGraphicsSceneMoveEvent `
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
    /// ` self: QtC.QGraphicsSceneMoveEvent `
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
    /// ` self: QtC.QGraphicsSceneMoveEvent `
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
    /// ` self: QtC.QGraphicsSceneMoveEvent `
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
    /// ` self: QtC.QGraphicsSceneMoveEvent `
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
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneMoveEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneMoveEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent`
    ///
    /// ` callback: *const fn (self: QtC.QGraphicsSceneMoveEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneMoveEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneMoveEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneMoveEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneMoveEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#dtor.QGraphicsSceneMoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QGraphicsSceneMoveEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneMoveEvent_Delete(@ptrCast(self));
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
