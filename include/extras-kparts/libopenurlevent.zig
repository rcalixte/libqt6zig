const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KParts__OpenUrlArguments = @import("libqt6").KParts__OpenUrlArguments;
const KParts__ReadOnlyPart = @import("libqt6").KParts__ReadOnlyPart;
const QEvent = @import("libqt6").QEvent;
const QUrl = @import("libqt6").QUrl;
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;

/// ### [Upstream resources](https://api.kde.org/kparts-openurlevent.html)
pub const KParts__OpenUrlEvent = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kparts-openurlevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KParts__OpenUrlEvent,

    pub const _is_KParts__OpenUrlEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new KParts::OpenUrlEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` part: KParts__ReadOnlyPart `
    ///
    /// ` url: QUrl `
    ///
    pub fn New(part: anytype, url: anytype) KParts__OpenUrlEvent {
        comptime _ = @TypeOf(part)._is_KParts__ReadOnlyPart;
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KParts__OpenUrlEvent_new(@ptrCast(part.ptr), @ptrCast(url.ptr)) };
    }

    /// New2 constructs a new KParts::OpenUrlEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` part: KParts__ReadOnlyPart `
    ///
    /// ` url: QUrl `
    ///
    /// ` args: KParts__OpenUrlArguments `
    ///
    pub fn New2(part: anytype, url: anytype, args: anytype) KParts__OpenUrlEvent {
        comptime _ = @TypeOf(part)._is_KParts__ReadOnlyPart;
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(args)._is_KParts__OpenUrlArguments;
        return .{ .ptr = qtc.KParts__OpenUrlEvent_new2(@ptrCast(part.ptr), @ptrCast(url.ptr), @ptrCast(args.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlevent.html#part)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn Part(self: KParts__OpenUrlEvent) KParts__ReadOnlyPart {
        return .{ .ptr = qtc.KParts__OpenUrlEvent_Part(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlevent.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn Url(self: KParts__OpenUrlEvent) QUrl {
        return .{ .ptr = qtc.KParts__OpenUrlEvent_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlevent.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn Arguments(self: KParts__OpenUrlEvent) KParts__OpenUrlArguments {
        return .{ .ptr = qtc.KParts__OpenUrlEvent_Arguments(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlevent.html#test)
    ///
    /// ## Parameter(s):
    ///
    /// ` event: QEvent `
    ///
    pub fn Test(event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__OpenUrlEvent_Test(@ptrCast(event.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: KParts__OpenUrlEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn Spontaneous(self: KParts__OpenUrlEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn IsAccepted(self: KParts__OpenUrlEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn Accept(self: KParts__OpenUrlEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn Ignore(self: KParts__OpenUrlEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn IsInputEvent(self: KParts__OpenUrlEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn IsPointerEvent(self: KParts__OpenUrlEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn IsSinglePointEvent(self: KParts__OpenUrlEvent) bool {
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: KParts__OpenUrlEvent, accepted: bool) void {
        qtc.KParts__OpenUrlEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: KParts__OpenUrlEvent, accepted: bool) void {
        qtc.KParts__OpenUrlEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__OpenUrlEvent`
    ///
    /// ` callback: *const fn (self: KParts__OpenUrlEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: KParts__OpenUrlEvent, callback: *const fn (KParts__OpenUrlEvent, bool) callconv(.c) void) void {
        qtc.KParts__OpenUrlEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn Clone(self: KParts__OpenUrlEvent) QEvent {
        return .{ .ptr = qtc.KParts__OpenUrlEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn SuperClone(self: KParts__OpenUrlEvent) QEvent {
        return .{ .ptr = qtc.KParts__OpenUrlEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KParts__OpenUrlEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn OnClone(self: KParts__OpenUrlEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.KParts__OpenUrlEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn Delete(self: KParts__OpenUrlEvent) void {
        qtc.KParts__OpenUrlEvent_Delete(@ptrCast(self.ptr));
    }
};
