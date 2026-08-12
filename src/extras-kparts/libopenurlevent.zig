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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KParts::OpenUrlEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _part: KParts__ReadOnlyPart `
    ///
    /// ` _url: QUrl `
    ///
    pub fn new(_part: anytype, _url: anytype) KParts__OpenUrlEvent {
        comptime _ = @TypeOf(_part)._is_KParts__ReadOnlyPart;
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.KParts__OpenUrlEvent_new(@ptrCast(_part.ptr), @ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KParts::OpenUrlEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _part: KParts__ReadOnlyPart `
    ///
    /// ` _url: QUrl `
    ///
    /// ` args: KParts__OpenUrlArguments `
    ///
    pub fn new2(_part: anytype, _url: anytype, args: anytype) KParts__OpenUrlEvent {
        comptime _ = @TypeOf(_part)._is_KParts__ReadOnlyPart;
        comptime _ = @TypeOf(_url)._is_QUrl;
        comptime _ = @TypeOf(args)._is_KParts__OpenUrlArguments;
        return .{ .ptr = qtc.KParts__OpenUrlEvent_new2(@ptrCast(_part.ptr), @ptrCast(_url.ptr), @ptrCast(args.ptr)) };
    }

    /// ### DEPRECATED: Use `part` instead
    ///
    pub const Part = part;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlevent.html#part)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn part(self: KParts__OpenUrlEvent) KParts__ReadOnlyPart {
        return .{ .ptr = qtc.KParts__OpenUrlEvent_Part(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlevent.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn url(self: KParts__OpenUrlEvent) QUrl {
        return .{ .ptr = qtc.KParts__OpenUrlEvent_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `arguments` instead
    ///
    pub const Arguments = arguments;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlevent.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn arguments(self: KParts__OpenUrlEvent) KParts__OpenUrlArguments {
        return .{ .ptr = qtc.KParts__OpenUrlEvent_Arguments(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `test0` instead
    ///
    pub const Test = test0;

    pub const @"test" = test0;

    /// ### [Upstream resources](https://api.kde.org/kparts-openurlevent.html#test)
    ///
    /// ## Parameter(s):
    ///
    /// ` event: QEvent `
    ///
    pub fn test0(event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KParts__OpenUrlEvent_Test(@ptrCast(event.ptr));
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: KParts__OpenUrlEvent) i32 {
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn spontaneous(self: KParts__OpenUrlEvent) bool {
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn isAccepted(self: KParts__OpenUrlEvent) bool {
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn accept(self: KParts__OpenUrlEvent) void {
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn ignore(self: KParts__OpenUrlEvent) void {
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn isInputEvent(self: KParts__OpenUrlEvent) bool {
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn isPointerEvent(self: KParts__OpenUrlEvent) bool {
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn isSinglePointEvent(self: KParts__OpenUrlEvent) bool {
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: KParts__OpenUrlEvent, accepted: bool) void {
        qtc.KParts__OpenUrlEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: KParts__OpenUrlEvent, accepted: bool) void {
        qtc.KParts__OpenUrlEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: KParts__OpenUrlEvent`
    ///
    /// ` callback: *const fn (self: KParts__OpenUrlEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: KParts__OpenUrlEvent, callback: *const fn (KParts__OpenUrlEvent, bool) callconv(.c) void) void {
        qtc.KParts__OpenUrlEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn clone(self: KParts__OpenUrlEvent) QEvent {
        return .{ .ptr = qtc.KParts__OpenUrlEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn superClone(self: KParts__OpenUrlEvent) QEvent {
        return .{ .ptr = qtc.KParts__OpenUrlEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: KParts__OpenUrlEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: KParts__OpenUrlEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.KParts__OpenUrlEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KParts__OpenUrlEvent `
    ///
    pub fn delete(self: KParts__OpenUrlEvent) void {
        qtc.KParts__OpenUrlEvent_Delete(@ptrCast(self.ptr));
    }
};
