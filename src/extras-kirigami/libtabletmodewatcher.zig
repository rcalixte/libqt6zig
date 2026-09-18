const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodechangedevent.html)
pub const Kirigami__Platform__TabletModeChangedEvent = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodechangedevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Kirigami__Platform__TabletModeChangedEvent,

    pub const _is_Kirigami__Platform__TabletModeChangedEvent = {};
    pub const _is_QEvent = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Kirigami::Platform::TabletModeChangedEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` tablet: bool `
    ///
    pub fn new(tablet: bool) Kirigami__Platform__TabletModeChangedEvent {
        return .{ .ptr = qtc.Kirigami__Platform__TabletModeChangedEvent_new(tablet) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Kirigami::Platform::TabletModeChangedEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn new2(param1: anytype) Kirigami__Platform__TabletModeChangedEvent {
        comptime _ = @TypeOf(param1)._is_Kirigami__Platform__TabletModeChangedEvent;
        return .{ .ptr = qtc.Kirigami__Platform__TabletModeChangedEvent_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `tabletMode` instead
    ///
    pub const TabletMode = tabletMode;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodechangedevent.html#tabletMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn tabletMode(self: Kirigami__Platform__TabletModeChangedEvent) bool {
        return qtc.Kirigami__Platform__TabletModeChangedEvent_TabletMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabletMode` instead
    ///
    pub const SetTabletMode = setTabletMode;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodechangedevent.html#tabletMode-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    /// ` _tabletMode: bool `
    ///
    pub fn setTabletMode(self: Kirigami__Platform__TabletModeChangedEvent, _tabletMode: bool) void {
        qtc.Kirigami__Platform__TabletModeChangedEvent_SetTabletMode(@ptrCast(self.ptr), _tabletMode);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodechangedevent.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    /// ` param1: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn operatorAssign(self: Kirigami__Platform__TabletModeChangedEvent, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_Kirigami__Platform__TabletModeChangedEvent;
        qtc.Kirigami__Platform__TabletModeChangedEvent_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn type0(self: Kirigami__Platform__TabletModeChangedEvent) i32 {
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn spontaneous(self: Kirigami__Platform__TabletModeChangedEvent) bool {
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn isAccepted(self: Kirigami__Platform__TabletModeChangedEvent) bool {
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn accept(self: Kirigami__Platform__TabletModeChangedEvent) void {
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn ignore(self: Kirigami__Platform__TabletModeChangedEvent) void {
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn isInputEvent(self: Kirigami__Platform__TabletModeChangedEvent) bool {
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn isPointerEvent(self: Kirigami__Platform__TabletModeChangedEvent) bool {
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn isSinglePointEvent(self: Kirigami__Platform__TabletModeChangedEvent) bool {
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn setAccepted(self: Kirigami__Platform__TabletModeChangedEvent, accepted: bool) void {
        qtc.Kirigami__Platform__TabletModeChangedEvent_SetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn superSetAccepted(self: Kirigami__Platform__TabletModeChangedEvent, accepted: bool) void {
        qtc.Kirigami__Platform__TabletModeChangedEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent`
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__TabletModeChangedEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn onSetAccepted(self: Kirigami__Platform__TabletModeChangedEvent, callback: *const fn (Kirigami__Platform__TabletModeChangedEvent, bool) callconv(.c) void) void {
        qtc.Kirigami__Platform__TabletModeChangedEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn clone(self: Kirigami__Platform__TabletModeChangedEvent) QEvent {
        return .{ .ptr = qtc.Kirigami__Platform__TabletModeChangedEvent_Clone(@ptrCast(self.ptr)) };
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn superClone(self: Kirigami__Platform__TabletModeChangedEvent) QEvent {
        return .{ .ptr = qtc.Kirigami__Platform__TabletModeChangedEvent_SuperClone(@ptrCast(self.ptr)) };
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
    /// ` self: Kirigami__Platform__TabletModeChangedEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn onClone(self: Kirigami__Platform__TabletModeChangedEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.Kirigami__Platform__TabletModeChangedEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Kirigami__Platform__TabletModeChangedEvent `
    ///
    pub fn delete(self: Kirigami__Platform__TabletModeChangedEvent) void {
        qtc.Kirigami__Platform__TabletModeChangedEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html)
pub const Kirigami__Platform__TabletModeWatcher = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Kirigami__Platform__TabletModeWatcher,

    pub const _is_Kirigami__Platform__TabletModeWatcher = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn metaObject(self: Kirigami__Platform__TabletModeWatcher) QMetaObject {
        return .{ .ptr = qtc.Kirigami__Platform__TabletModeWatcher_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: Kirigami__Platform__TabletModeWatcher, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.Kirigami__Platform__TabletModeWatcher_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: Kirigami__Platform__TabletModeWatcher, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.Kirigami__Platform__TabletModeWatcher_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.Kirigami__Platform__TabletModeWatcher_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__TabletModeWatcher.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `self0` instead
    ///
    pub const Self = self0;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#self)
    ///
    pub fn self0() Kirigami__Platform__TabletModeWatcher {
        return .{ .ptr = qtc.Kirigami__Platform__TabletModeWatcher_Self() };
    }

    /// ### DEPRECATED: Use `isTabletModeAvailable` instead
    ///
    pub const IsTabletModeAvailable = isTabletModeAvailable;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#isTabletModeAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn isTabletModeAvailable(self: Kirigami__Platform__TabletModeWatcher) bool {
        return qtc.Kirigami__Platform__TabletModeWatcher_IsTabletModeAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTabletMode` instead
    ///
    pub const IsTabletMode = isTabletMode;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#isTabletMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn isTabletMode(self: Kirigami__Platform__TabletModeWatcher) bool {
        return qtc.Kirigami__Platform__TabletModeWatcher_IsTabletMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addWatcher` instead
    ///
    pub const AddWatcher = addWatcher;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#addWatcher)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` watcher: QObject `
    ///
    pub fn addWatcher(self: Kirigami__Platform__TabletModeWatcher, watcher: anytype) void {
        comptime _ = @TypeOf(watcher)._is_QObject;
        qtc.Kirigami__Platform__TabletModeWatcher_AddWatcher(@ptrCast(self.ptr), @ptrCast(watcher.ptr));
    }

    /// ### DEPRECATED: Use `removeWatcher` instead
    ///
    pub const RemoveWatcher = removeWatcher;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#removeWatcher)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` watcher: QObject `
    ///
    pub fn removeWatcher(self: Kirigami__Platform__TabletModeWatcher, watcher: anytype) void {
        comptime _ = @TypeOf(watcher)._is_QObject;
        qtc.Kirigami__Platform__TabletModeWatcher_RemoveWatcher(@ptrCast(self.ptr), @ptrCast(watcher.ptr));
    }

    /// ### DEPRECATED: Use `tabletModeAvailableChanged` instead
    ///
    pub const TabletModeAvailableChanged = tabletModeAvailableChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#tabletModeAvailableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` tabletModeAvailable: bool `
    ///
    pub fn tabletModeAvailableChanged(self: Kirigami__Platform__TabletModeWatcher, tabletModeAvailable: bool) void {
        qtc.Kirigami__Platform__TabletModeWatcher_TabletModeAvailableChanged(@ptrCast(self.ptr), tabletModeAvailable);
    }

    /// ### DEPRECATED: Use `onTabletModeAvailableChanged` instead
    ///
    pub const OnTabletModeAvailableChanged = onTabletModeAvailableChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#tabletModeAvailableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__TabletModeWatcher, tabletModeAvailable: bool) callconv(.c) void `
    ///
    pub fn onTabletModeAvailableChanged(self: Kirigami__Platform__TabletModeWatcher, callback: *const fn (Kirigami__Platform__TabletModeWatcher, bool) callconv(.c) void) void {
        qtc.Kirigami__Platform__TabletModeWatcher_Connect_TabletModeAvailableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tabletModeChanged` instead
    ///
    pub const TabletModeChanged = tabletModeChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#tabletModeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` _tabletMode: bool `
    ///
    pub fn tabletModeChanged(self: Kirigami__Platform__TabletModeWatcher, _tabletMode: bool) void {
        qtc.Kirigami__Platform__TabletModeWatcher_TabletModeChanged(@ptrCast(self.ptr), _tabletMode);
    }

    /// ### DEPRECATED: Use `onTabletModeChanged` instead
    ///
    pub const OnTabletModeChanged = onTabletModeChanged;

    /// ### [Upstream resources](https://api.kde.org/kirigami-platform-tabletmodewatcher.html#tabletModeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__TabletModeWatcher, tabletMode: bool) callconv(.c) void `
    ///
    pub fn onTabletModeChanged(self: Kirigami__Platform__TabletModeWatcher, callback: *const fn (Kirigami__Platform__TabletModeWatcher, bool) callconv(.c) void) void {
        qtc.Kirigami__Platform__TabletModeWatcher_Connect_TabletModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.Kirigami__Platform__TabletModeWatcher_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__TabletModeWatcher.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.Kirigami__Platform__TabletModeWatcher_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__TabletModeWatcher.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: Kirigami__Platform__TabletModeWatcher, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: Kirigami__Platform__TabletModeWatcher, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: Kirigami__Platform__TabletModeWatcher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Kirigami__Platform__TabletModeWatcher.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: Kirigami__Platform__TabletModeWatcher, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn isWidgetType(self: Kirigami__Platform__TabletModeWatcher) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn isWindowType(self: Kirigami__Platform__TabletModeWatcher) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn isQuickItemType(self: Kirigami__Platform__TabletModeWatcher) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn signalsBlocked(self: Kirigami__Platform__TabletModeWatcher) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: Kirigami__Platform__TabletModeWatcher, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn thread(self: Kirigami__Platform__TabletModeWatcher) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: Kirigami__Platform__TabletModeWatcher, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: Kirigami__Platform__TabletModeWatcher, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: Kirigami__Platform__TabletModeWatcher, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: Kirigami__Platform__TabletModeWatcher, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: Kirigami__Platform__TabletModeWatcher, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: Kirigami__Platform__TabletModeWatcher, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("Kirigami__Platform__TabletModeWatcher.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: Kirigami__Platform__TabletModeWatcher, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: Kirigami__Platform__TabletModeWatcher, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: Kirigami__Platform__TabletModeWatcher, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: Kirigami__Platform__TabletModeWatcher, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn disconnect3(self: Kirigami__Platform__TabletModeWatcher) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: Kirigami__Platform__TabletModeWatcher, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn dumpObjectTree(self: Kirigami__Platform__TabletModeWatcher) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn dumpObjectInfo(self: Kirigami__Platform__TabletModeWatcher) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: Kirigami__Platform__TabletModeWatcher, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: Kirigami__Platform__TabletModeWatcher, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: Kirigami__Platform__TabletModeWatcher, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Kirigami__Platform__TabletModeWatcher.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Kirigami__Platform__TabletModeWatcher.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn bindingStorage(self: Kirigami__Platform__TabletModeWatcher) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn bindingStorage2(self: Kirigami__Platform__TabletModeWatcher) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn destroyed(self: Kirigami__Platform__TabletModeWatcher) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__TabletModeWatcher) callconv(.c) void `
    ///
    pub fn onDestroyed(self: Kirigami__Platform__TabletModeWatcher, callback: *const fn (Kirigami__Platform__TabletModeWatcher) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn parent(self: Kirigami__Platform__TabletModeWatcher) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: Kirigami__Platform__TabletModeWatcher, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn deleteLater(self: Kirigami__Platform__TabletModeWatcher) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: Kirigami__Platform__TabletModeWatcher, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: Kirigami__Platform__TabletModeWatcher, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: Kirigami__Platform__TabletModeWatcher, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: Kirigami__Platform__TabletModeWatcher, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: Kirigami__Platform__TabletModeWatcher, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: Kirigami__Platform__TabletModeWatcher, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: Kirigami__Platform__TabletModeWatcher, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: Kirigami__Platform__TabletModeWatcher, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__TabletModeWatcher, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: Kirigami__Platform__TabletModeWatcher, callback: *const fn (Kirigami__Platform__TabletModeWatcher, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    /// ` callback: *const fn (self: Kirigami__Platform__TabletModeWatcher, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: Kirigami__Platform__TabletModeWatcher, callback: *const fn (Kirigami__Platform__TabletModeWatcher, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Kirigami__Platform__TabletModeWatcher `
    ///
    pub fn delete(self: Kirigami__Platform__TabletModeWatcher) void {
        qtc.Kirigami__Platform__TabletModeWatcher_Delete(@ptrCast(self.ptr));
    }
};
