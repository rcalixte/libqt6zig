const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;

/// https://api.kde.org/kparts-openurlevent.html
pub const kparts__openurlevent = struct {
    /// New constructs a new KParts::OpenUrlEvent object.
    ///
    /// ``` part: QtC.KParts__ReadOnlyPart, url: QtC.QUrl ```
    pub fn New(part: ?*anyopaque, url: ?*anyopaque) QtC.KParts__OpenUrlEvent {
        return qtc.KParts__OpenUrlEvent_new(@ptrCast(part), @ptrCast(url));
    }

    /// New2 constructs a new KParts::OpenUrlEvent object.
    ///
    /// ``` part: QtC.KParts__ReadOnlyPart, url: QtC.QUrl, args: QtC.KParts__OpenUrlArguments ```
    pub fn New2(part: ?*anyopaque, url: ?*anyopaque, args: ?*anyopaque) QtC.KParts__OpenUrlEvent {
        return qtc.KParts__OpenUrlEvent_new2(@ptrCast(part), @ptrCast(url), @ptrCast(args));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlevent.html#part)
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn Part(self: ?*anyopaque) QtC.KParts__ReadOnlyPart {
        return qtc.KParts__OpenUrlEvent_Part(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlevent.html#url)
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KParts__OpenUrlEvent_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlevent.html#arguments)
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn Arguments(self: ?*anyopaque) QtC.KParts__OpenUrlArguments {
        return qtc.KParts__OpenUrlEvent_Arguments(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kparts-openurlevent.html#test)
    ///
    /// ``` event: QtC.QEvent ```
    pub fn Test(event: ?*anyopaque) bool {
        return qtc.KParts__OpenUrlEvent_Test(@ptrCast(event));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    ///
    /// Returns: ``` qcoreevent_enums.Type ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
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
    /// ``` self: QtC.KParts__OpenUrlEvent, accepted: bool ```
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.KParts__OpenUrlEvent_SetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent, accepted: bool ```
    pub fn QBaseSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.KParts__OpenUrlEvent_QBaseSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent, callback: *const fn (self: QtC.KParts__OpenUrlEvent, accepted: bool) callconv(.c) void ```
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KParts__OpenUrlEvent_OnSetAccepted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.KParts__OpenUrlEvent_Clone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn QBaseClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.KParts__OpenUrlEvent_QBaseClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent, callback: *const fn () callconv(.c) QtC.QEvent ```
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.KParts__OpenUrlEvent_OnClone(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KParts__OpenUrlEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KParts__OpenUrlEvent_Delete(@ptrCast(self));
    }
};
