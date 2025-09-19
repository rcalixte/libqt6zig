const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcoreevent_enums = @import("libqcoreevent.zig").enums;
const qgraphicssceneevent_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;

/// https://doc.qt.io/qt-6/qgraphicssceneevent.html
pub const qgraphicssceneevent = struct {
    /// New constructs a new QGraphicsSceneEvent object.
    ///
    /// ``` typeVal: qcoreevent_enums.Type ```
    pub fn New(typeVal: i32) QtC.QGraphicsSceneEvent {
        return qtc.QGraphicsSceneEvent_new(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent, ts: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneEvent, callback: *const fn (self: QtC.QGraphicsSceneEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#dtor.QGraphicsSceneEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsSceneEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html
pub const qgraphicsscenemouseevent = struct {
    /// New constructs a new QGraphicsSceneMouseEvent object.
    ///
    ///
    pub fn New() QtC.QGraphicsSceneMouseEvent {
        return qtc.QGraphicsSceneMouseEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneMouseEvent object.
    ///
    /// ``` typeVal: qcoreevent_enums.Type ```
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneMouseEvent {
        return qtc.QGraphicsSceneMouseEvent_new2(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#pos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, pos: QtC.QPointF ```
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#scenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_ScenePos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, pos: QtC.QPointF ```
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#screenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneMouseEvent_ScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, pos: QtC.QPoint ```
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, button: qnamespace_enums.MouseButton ```
    pub fn ButtonDownPos(self: ?*anyopaque, button: i64) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_ButtonDownPos(@ptrCast(self), @intCast(button));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, button: qnamespace_enums.MouseButton, pos: QtC.QPointF ```
    pub fn SetButtonDownPos(self: ?*anyopaque, button: i64, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetButtonDownPos(@ptrCast(self), @intCast(button), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, button: qnamespace_enums.MouseButton ```
    pub fn ButtonDownScenePos(self: ?*anyopaque, button: i64) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_ButtonDownScenePos(@ptrCast(self), @intCast(button));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, button: qnamespace_enums.MouseButton, pos: QtC.QPointF ```
    pub fn SetButtonDownScenePos(self: ?*anyopaque, button: i64, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetButtonDownScenePos(@ptrCast(self), @intCast(button), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttonDownScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, button: qnamespace_enums.MouseButton ```
    pub fn ButtonDownScreenPos(self: ?*anyopaque, button: i64) QtC.QPoint {
        return qtc.QGraphicsSceneMouseEvent_ButtonDownScreenPos(@ptrCast(self), @intCast(button));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtonDownScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, button: qnamespace_enums.MouseButton, pos: QtC.QPoint ```
    pub fn SetButtonDownScreenPos(self: ?*anyopaque, button: i64, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetButtonDownScreenPos(@ptrCast(self), @intCast(button), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn LastPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_LastPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, pos: QtC.QPointF ```
    pub fn SetLastPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetLastPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn LastScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMouseEvent_LastScenePos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, pos: QtC.QPointF ```
    pub fn SetLastScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetLastScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#lastScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn LastScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneMouseEvent_LastScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setLastScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, pos: QtC.QPoint ```
    pub fn SetLastScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_SetLastScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#buttons)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    ///
    /// Returns: ``` flag of qnamespace_enums.MouseButton ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QGraphicsSceneMouseEvent_Buttons(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButtons)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, buttons: flag of qnamespace_enums.MouseButton ```
    pub fn SetButtons(self: ?*anyopaque, buttons: i64) void {
        qtc.QGraphicsSceneMouseEvent_SetButtons(@ptrCast(self), @intCast(buttons));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#button)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    ///
    /// Returns: ``` qnamespace_enums.MouseButton ```
    pub fn Button(self: ?*anyopaque) i64 {
        return qtc.QGraphicsSceneMouseEvent_Button(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setButton)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, button: qnamespace_enums.MouseButton ```
    pub fn SetButton(self: ?*anyopaque, button: i64) void {
        qtc.QGraphicsSceneMouseEvent_SetButton(@ptrCast(self), @intCast(button));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#modifiers)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    ///
    /// Returns: ``` flag of qnamespace_enums.KeyboardModifier ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QGraphicsSceneMouseEvent_Modifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setModifiers)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QGraphicsSceneMouseEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#source)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    ///
    /// Returns: ``` qnamespace_enums.MouseEventSource ```
    pub fn Source(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneMouseEvent_Source(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setSource)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, source: qnamespace_enums.MouseEventSource ```
    pub fn SetSource(self: ?*anyopaque, source: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetSource(@ptrCast(self), @intCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#flags)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    ///
    /// Returns: ``` flag of qnamespace_enums.MouseEventFlag ```
    pub fn Flags(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneMouseEvent_Flags(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#setFlags)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, flags: flag of qnamespace_enums.MouseEventFlag ```
    pub fn SetFlags(self: ?*anyopaque, flags: i32) void {
        qtc.QGraphicsSceneMouseEvent_SetFlags(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, ts: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneMouseEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneMouseEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, callback: *const fn (self: QtC.QGraphicsSceneMouseEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneMouseEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneMouseEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneMouseEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneMouseEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemouseevent.html#dtor.QGraphicsSceneMouseEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsSceneMouseEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneMouseEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html
pub const qgraphicsscenewheelevent = struct {
    /// New constructs a new QGraphicsSceneWheelEvent object.
    ///
    ///
    pub fn New() QtC.QGraphicsSceneWheelEvent {
        return qtc.QGraphicsSceneWheelEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneWheelEvent object.
    ///
    /// ``` typeVal: qcoreevent_enums.Type ```
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneWheelEvent {
        return qtc.QGraphicsSceneWheelEvent_new2(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pos)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneWheelEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPos)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, pos: QtC.QPointF ```
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#scenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneWheelEvent_ScenePos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, pos: QtC.QPointF ```
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#screenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneWheelEvent_ScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, pos: QtC.QPoint ```
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#buttons)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    ///
    /// Returns: ``` flag of qnamespace_enums.MouseButton ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QGraphicsSceneWheelEvent_Buttons(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setButtons)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, buttons: flag of qnamespace_enums.MouseButton ```
    pub fn SetButtons(self: ?*anyopaque, buttons: i64) void {
        qtc.QGraphicsSceneWheelEvent_SetButtons(@ptrCast(self), @intCast(buttons));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#modifiers)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    ///
    /// Returns: ``` flag of qnamespace_enums.KeyboardModifier ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QGraphicsSceneWheelEvent_Modifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setModifiers)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QGraphicsSceneWheelEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#delta)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn Delta(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneWheelEvent_Delta(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setDelta)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, delta: i32 ```
    pub fn SetDelta(self: ?*anyopaque, delta: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetDelta(@ptrCast(self), @intCast(delta));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#orientation)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    ///
    /// Returns: ``` qnamespace_enums.Orientation ```
    pub fn Orientation(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneWheelEvent_Orientation(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setOrientation)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, orientation: qnamespace_enums.Orientation ```
    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#phase)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    ///
    /// Returns: ``` qnamespace_enums.ScrollPhase ```
    pub fn Phase(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneWheelEvent_Phase(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPhase)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, scrollPhase: qnamespace_enums.ScrollPhase ```
    pub fn SetPhase(self: ?*anyopaque, scrollPhase: i32) void {
        qtc.QGraphicsSceneWheelEvent_SetPhase(@ptrCast(self), @intCast(scrollPhase));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#pixelDelta)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn PixelDelta(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneWheelEvent_PixelDelta(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setPixelDelta)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, delta: QtC.QPoint ```
    pub fn SetPixelDelta(self: ?*anyopaque, delta: QtC.QPoint) void {
        qtc.QGraphicsSceneWheelEvent_SetPixelDelta(@ptrCast(self), @ptrCast(delta));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#isInverted)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn IsInverted(self: ?*anyopaque) bool {
        return qtc.QGraphicsSceneWheelEvent_IsInverted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#setInverted)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, inverted: bool ```
    pub fn SetInverted(self: ?*anyopaque, inverted: bool) void {
        qtc.QGraphicsSceneWheelEvent_SetInverted(@ptrCast(self), inverted);
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, ts: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneWheelEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneWheelEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, callback: *const fn (self: QtC.QGraphicsSceneWheelEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneWheelEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneWheelEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneWheelEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneWheelEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenewheelevent.html#dtor.QGraphicsSceneWheelEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsSceneWheelEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneWheelEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html
pub const qgraphicsscenecontextmenuevent = struct {
    /// New constructs a new QGraphicsSceneContextMenuEvent object.
    ///
    ///
    pub fn New() QtC.QGraphicsSceneContextMenuEvent {
        return qtc.QGraphicsSceneContextMenuEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneContextMenuEvent object.
    ///
    /// ``` typeVal: qcoreevent_enums.Type ```
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneContextMenuEvent {
        return qtc.QGraphicsSceneContextMenuEvent_new2(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#pos)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneContextMenuEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setPos)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent, pos: QtC.QPointF ```
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#scenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneContextMenuEvent_ScenePos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent, pos: QtC.QPointF ```
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#screenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneContextMenuEvent_ScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent, pos: QtC.QPoint ```
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#modifiers)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    ///
    /// Returns: ``` flag of qnamespace_enums.KeyboardModifier ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QGraphicsSceneContextMenuEvent_Modifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setModifiers)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QGraphicsSceneContextMenuEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#reason)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    ///
    /// Returns: ``` qgraphicssceneevent_enums.Reason ```
    pub fn Reason(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneContextMenuEvent_Reason(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#setReason)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent, reason: qgraphicssceneevent_enums.Reason ```
    pub fn SetReason(self: ?*anyopaque, reason: i32) void {
        qtc.QGraphicsSceneContextMenuEvent_SetReason(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent, ts: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneContextMenuEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneContextMenuEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent, callback: *const fn (self: QtC.QGraphicsSceneContextMenuEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneContextMenuEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneContextMenuEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneContextMenuEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneContextMenuEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenecontextmenuevent.html#dtor.QGraphicsSceneContextMenuEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsSceneContextMenuEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneContextMenuEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html
pub const qgraphicsscenehoverevent = struct {
    /// New constructs a new QGraphicsSceneHoverEvent object.
    ///
    ///
    pub fn New() QtC.QGraphicsSceneHoverEvent {
        return qtc.QGraphicsSceneHoverEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneHoverEvent object.
    ///
    /// ``` typeVal: qcoreevent_enums.Type ```
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneHoverEvent {
        return qtc.QGraphicsSceneHoverEvent_new2(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#pos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setPos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, pos: QtC.QPointF ```
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#scenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_ScenePos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, pos: QtC.QPointF ```
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#screenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneHoverEvent_ScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, pos: QtC.QPoint ```
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastPos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn LastPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_LastPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastPos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, pos: QtC.QPointF ```
    pub fn SetLastPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetLastPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn LastScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneHoverEvent_LastScenePos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, pos: QtC.QPointF ```
    pub fn SetLastScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetLastScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#lastScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn LastScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneHoverEvent_LastScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setLastScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, pos: QtC.QPoint ```
    pub fn SetLastScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_SetLastScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#modifiers)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    ///
    /// Returns: ``` flag of qnamespace_enums.KeyboardModifier ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QGraphicsSceneHoverEvent_Modifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#setModifiers)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QGraphicsSceneHoverEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, ts: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneHoverEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneHoverEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, callback: *const fn (self: QtC.QGraphicsSceneHoverEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneHoverEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneHoverEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneHoverEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneHoverEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehoverevent.html#dtor.QGraphicsSceneHoverEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsSceneHoverEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneHoverEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html
pub const qgraphicsscenehelpevent = struct {
    /// New constructs a new QGraphicsSceneHelpEvent object.
    ///
    ///
    pub fn New() QtC.QGraphicsSceneHelpEvent {
        return qtc.QGraphicsSceneHelpEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneHelpEvent object.
    ///
    /// ``` typeVal: qcoreevent_enums.Type ```
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneHelpEvent {
        return qtc.QGraphicsSceneHelpEvent_new2(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#scenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneHelpEvent_ScenePos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent, pos: QtC.QPointF ```
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHelpEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#screenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneHelpEvent_ScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#setScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent, pos: QtC.QPoint ```
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneHelpEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent, ts: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneHelpEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneHelpEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent, callback: *const fn (self: QtC.QGraphicsSceneHelpEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneHelpEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneHelpEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneHelpEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneHelpEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenehelpevent.html#dtor.QGraphicsSceneHelpEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsSceneHelpEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneHelpEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html
pub const qgraphicsscenedragdropevent = struct {
    /// New constructs a new QGraphicsSceneDragDropEvent object.
    ///
    ///
    pub fn New() QtC.QGraphicsSceneDragDropEvent {
        return qtc.QGraphicsSceneDragDropEvent_new();
    }

    /// New2 constructs a new QGraphicsSceneDragDropEvent object.
    ///
    /// ``` typeVal: qcoreevent_enums.Type ```
    pub fn New2(typeVal: i32) QtC.QGraphicsSceneDragDropEvent {
        return qtc.QGraphicsSceneDragDropEvent_new2(@intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#pos)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneDragDropEvent_Pos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPos)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, pos: QtC.QPointF ```
    pub fn SetPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#scenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneDragDropEvent_ScenePos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScenePos)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, pos: QtC.QPointF ```
    pub fn SetScenePos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetScenePos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#screenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QGraphicsSceneDragDropEvent_ScreenPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setScreenPos)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, pos: QtC.QPoint ```
    pub fn SetScreenPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetScreenPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#buttons)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    ///
    /// Returns: ``` flag of qnamespace_enums.MouseButton ```
    pub fn Buttons(self: ?*anyopaque) i64 {
        return qtc.QGraphicsSceneDragDropEvent_Buttons(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setButtons)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, buttons: flag of qnamespace_enums.MouseButton ```
    pub fn SetButtons(self: ?*anyopaque, buttons: i64) void {
        qtc.QGraphicsSceneDragDropEvent_SetButtons(@ptrCast(self), @intCast(buttons));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#modifiers)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    ///
    /// Returns: ``` flag of qnamespace_enums.KeyboardModifier ```
    pub fn Modifiers(self: ?*anyopaque) i64 {
        return qtc.QGraphicsSceneDragDropEvent_Modifiers(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setModifiers)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, modifiers: flag of qnamespace_enums.KeyboardModifier ```
    pub fn SetModifiers(self: ?*anyopaque, modifiers: i64) void {
        qtc.QGraphicsSceneDragDropEvent_SetModifiers(@ptrCast(self), @intCast(modifiers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#possibleActions)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn PossibleActions(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneDragDropEvent_PossibleActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setPossibleActions)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, actions: flag of qnamespace_enums.DropAction ```
    pub fn SetPossibleActions(self: ?*anyopaque, actions: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetPossibleActions(@ptrCast(self), @intCast(actions));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#proposedAction)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    ///
    /// Returns: ``` qnamespace_enums.DropAction ```
    pub fn ProposedAction(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneDragDropEvent_ProposedAction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setProposedAction)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, action: qnamespace_enums.DropAction ```
    pub fn SetProposedAction(self: ?*anyopaque, action: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetProposedAction(@ptrCast(self), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#acceptProposedAction)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn AcceptProposedAction(self: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_AcceptProposedAction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#dropAction)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    ///
    /// Returns: ``` qnamespace_enums.DropAction ```
    pub fn DropAction(self: ?*anyopaque) i32 {
        return qtc.QGraphicsSceneDragDropEvent_DropAction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setDropAction)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, action: qnamespace_enums.DropAction ```
    pub fn SetDropAction(self: ?*anyopaque, action: i32) void {
        qtc.QGraphicsSceneDragDropEvent_SetDropAction(@ptrCast(self), @intCast(action));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#source)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn Source(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneDragDropEvent_Source(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setSource)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, source: QtC.QWidget ```
    pub fn SetSource(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetSource(@ptrCast(self), @ptrCast(source));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#mimeData)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn MimeData(self: ?*anyopaque) QtC.QMimeData {
        return qtc.QGraphicsSceneDragDropEvent_MimeData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#setMimeData)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, data: QtC.QMimeData ```
    pub fn SetMimeData(self: ?*anyopaque, data: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_SetMimeData(@ptrCast(self), @ptrCast(data));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, ts: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneDragDropEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneDragDropEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, callback: *const fn (self: QtC.QGraphicsSceneDragDropEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneDragDropEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneDragDropEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneDragDropEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneDragDropEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenedragdropevent.html#dtor.QGraphicsSceneDragDropEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsSceneDragDropEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneDragDropEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html
pub const qgraphicssceneresizeevent = struct {
    /// New constructs a new QGraphicsSceneResizeEvent object.
    ///
    ///
    pub fn New() QtC.QGraphicsSceneResizeEvent {
        return qtc.QGraphicsSceneResizeEvent_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#oldSize)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn OldSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsSceneResizeEvent_OldSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setOldSize)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent, size: QtC.QSizeF ```
    pub fn SetOldSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsSceneResizeEvent_SetOldSize(@ptrCast(self), @ptrCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#newSize)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn NewSize(self: ?*anyopaque) QtC.QSizeF {
        return qtc.QGraphicsSceneResizeEvent_NewSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#setNewSize)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent, size: QtC.QSizeF ```
    pub fn SetNewSize(self: ?*anyopaque, size: ?*anyopaque) void {
        qtc.QGraphicsSceneResizeEvent_SetNewSize(@ptrCast(self), @ptrCast(size));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent, ts: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneResizeEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneResizeEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent, callback: *const fn (self: QtC.QGraphicsSceneResizeEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneResizeEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneResizeEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneResizeEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneResizeEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneresizeevent.html#dtor.QGraphicsSceneResizeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsSceneResizeEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneResizeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html
pub const qgraphicsscenemoveevent = struct {
    /// New constructs a new QGraphicsSceneMoveEvent object.
    ///
    ///
    pub fn New() QtC.QGraphicsSceneMoveEvent {
        return qtc.QGraphicsSceneMoveEvent_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#oldPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn OldPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMoveEvent_OldPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setOldPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent, pos: QtC.QPointF ```
    pub fn SetOldPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMoveEvent_SetOldPos(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#newPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn NewPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGraphicsSceneMoveEvent_NewPos(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#setNewPos)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent, pos: QtC.QPointF ```
    pub fn SetNewPos(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QGraphicsSceneMoveEvent_SetNewPos(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#widget)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QGraphicsSceneEvent_Widget(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setWidget)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent, widget: QtC.QWidget ```
    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QGraphicsSceneEvent_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#timestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn Timestamp(self: ?*anyopaque) u64 {
        return qtc.QGraphicsSceneEvent_Timestamp(@ptrCast(self));
    }

    /// Inherited from QGraphicsSceneEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssceneevent.html#setTimestamp)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent, ts: u64 ```
    pub fn SetTimestamp(self: ?*anyopaque, ts: u64) void {
        qtc.QGraphicsSceneEvent_SetTimestamp(@ptrCast(self), @intCast(ts));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ``` hint: i32 ```
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@intCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneMoveEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QGraphicsSceneMoveEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent, callback: *const fn (self: QtC.QGraphicsSceneMoveEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QGraphicsSceneMoveEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneMoveEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QGraphicsSceneMoveEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QGraphicsSceneMoveEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscenemoveevent.html#dtor.QGraphicsSceneMoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QGraphicsSceneMoveEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGraphicsSceneMoveEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qgraphicssceneevent.html#types
pub const enums = struct {
    pub const Reason = enum {
        pub const Mouse: i32 = 0;
        pub const Keyboard: i32 = 1;
        pub const Other: i32 = 2;
    };
};
