const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAnimation = @import("libqt6").QAbstractAnimation;
const QAbstractState = @import("libqt6").QAbstractState;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QState = @import("libqt6").QState;
const QStateMachine = @import("libqt6").QStateMachine;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstracttransition_enums = @import("libqabstracttransition.zig").enums;
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html)
pub const QKeyEventTransition = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QKeyEventTransition,

    pub const _is_QKeyEventTransition = {};
    pub const _is_QEventTransition = {};
    pub const _is_QAbstractTransition = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QKeyEventTransition object in C++ memory
    ///
    pub fn new() QKeyEventTransition {
        return .{ .ptr = qtc.QKeyEventTransition_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QKeyEventTransition object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _key: i32 `
    ///
    pub fn new2(object: anytype, typeVal: i32, _key: i32) QKeyEventTransition {
        comptime _ = @TypeOf(object)._is_QObject;
        return .{ .ptr = qtc.QKeyEventTransition_new2(@ptrCast(object.ptr), @bitCast(typeVal), @bitCast(_key)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QKeyEventTransition object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _sourceState: QState `
    ///
    pub fn new3(_sourceState: anytype) QKeyEventTransition {
        comptime _ = @TypeOf(_sourceState)._is_QState;
        return .{ .ptr = qtc.QKeyEventTransition_new3(@ptrCast(_sourceState.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QKeyEventTransition object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    /// ` _key: i32 `
    ///
    /// ` _sourceState: QState `
    ///
    pub fn new4(object: anytype, typeVal: i32, _key: i32, _sourceState: anytype) QKeyEventTransition {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_sourceState)._is_QState;
        return .{ .ptr = qtc.QKeyEventTransition_new4(@ptrCast(object.ptr), @bitCast(typeVal), @bitCast(_key), @ptrCast(_sourceState.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn metaObject(self: QKeyEventTransition) QMetaObject {
        return .{ .ptr = qtc.QKeyEventTransition_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QKeyEventTransition, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QKeyEventTransition_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn superMetaObject(self: QKeyEventTransition) QMetaObject {
        return .{ .ptr = qtc.QKeyEventTransition_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QKeyEventTransition, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QKeyEventTransition_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QKeyEventTransition_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QKeyEventTransition, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QKeyEventTransition_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QKeyEventTransition, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QKeyEventTransition_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QKeyEventTransition_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QKeyEventTransition, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QKeyEventTransition_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

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
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QKeyEventTransition.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn key(self: QKeyEventTransition) i32 {
        return qtc.QKeyEventTransition_Key(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setKey` instead
    ///
    pub const SetKey = setKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#setKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` _key: i32 `
    ///
    pub fn setKey(self: QKeyEventTransition, _key: i32) void {
        qtc.QKeyEventTransition_SetKey(@ptrCast(self.ptr), @bitCast(_key));
    }

    /// ### DEPRECATED: Use `modifierMask` instead
    ///
    pub const ModifierMask = modifierMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#modifierMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn modifierMask(self: QKeyEventTransition) i32 {
        return qtc.QKeyEventTransition_ModifierMask(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModifierMask` instead
    ///
    pub const SetModifierMask = setModifierMask;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#setModifierMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn setModifierMask(self: QKeyEventTransition, modifiers: i32) void {
        qtc.QKeyEventTransition_SetModifierMask(@ptrCast(self.ptr), @bitCast(modifiers));
    }

    /// ### DEPRECATED: Use `onTransition` instead
    ///
    pub const OnTransition = onTransition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#onTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` _event: QEvent `
    ///
    pub fn onTransition(self: QKeyEventTransition, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QKeyEventTransition_OnTransition(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onOnTransition` instead
    ///
    pub const OnOnTransition = onOnTransition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#onTransition)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, event: QEvent) callconv(.c) void `
    ///
    pub fn onOnTransition(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, QEvent) callconv(.c) void) void {
        qtc.QKeyEventTransition_OnOnTransition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOnTransition` instead
    ///
    pub const SuperOnTransition = superOnTransition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#onTransition)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superOnTransition(self: QKeyEventTransition, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QKeyEventTransition_SuperOnTransition(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventTest` instead
    ///
    pub const EventTest = eventTest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#eventTest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventTest(self: QKeyEventTransition, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QKeyEventTransition_EventTest(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventTest` instead
    ///
    pub const OnEventTest = onEventTest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#eventTest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventTest(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, QEvent) callconv(.c) bool) void {
        qtc.QKeyEventTransition_OnEventTest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventTest` instead
    ///
    pub const SuperEventTest = superEventTest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#eventTest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventTest(self: QKeyEventTransition, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QKeyEventTransition_SuperEventTest(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QKeyEventTransition.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QKeyEventTransition.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `eventSource` instead
    ///
    pub const EventSource = eventSource;

    /// Inherited from QEventTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#eventSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn eventSource(self: QKeyEventTransition) QObject {
        return .{ .ptr = qtc.QEventTransition_EventSource(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEventSource` instead
    ///
    pub const SetEventSource = setEventSource;

    /// Inherited from QEventTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#setEventSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` object: QObject `
    ///
    pub fn setEventSource(self: QKeyEventTransition, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QEventTransition_SetEventSource(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `eventType` instead
    ///
    pub const EventType = eventType;

    /// Inherited from QEventTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#eventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn eventType(self: QKeyEventTransition) i32 {
        return qtc.QEventTransition_EventType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEventType` instead
    ///
    pub const SetEventType = setEventType;

    /// Inherited from QEventTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#setEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` typeVal: qcoreevent_enums.Type `
    ///
    pub fn setEventType(self: QKeyEventTransition, typeVal: i32) void {
        qtc.QEventTransition_SetEventType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `sourceState` instead
    ///
    pub const SourceState = sourceState;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#sourceState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn sourceState(self: QKeyEventTransition) QState {
        return .{ .ptr = qtc.QAbstractTransition_SourceState(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `targetState` instead
    ///
    pub const TargetState = targetState;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn targetState(self: QKeyEventTransition) QAbstractState {
        return .{ .ptr = qtc.QAbstractTransition_TargetState(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTargetState` instead
    ///
    pub const SetTargetState = setTargetState;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` target: QAbstractState `
    ///
    pub fn setTargetState(self: QKeyEventTransition, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QAbstractState;
        qtc.QAbstractTransition_SetTargetState(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// ### DEPRECATED: Use `targetStates` instead
    ///
    pub const TargetStates = targetStates;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn targetStates(self: QKeyEventTransition, allocator: std.mem.Allocator) []QAbstractState {
        const _arr: qtc.libqt_list = qtc.QAbstractTransition_TargetStates(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractState, _arr.len) catch @panic("QKeyEventTransition.targetStates: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractState = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setTargetStates` instead
    ///
    pub const SetTargetStates = setTargetStates;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` targets: []QAbstractState `
    ///
    pub fn setTargetStates(self: QKeyEventTransition, targets: []QAbstractState) void {
        const targets_list = qtc.libqt_list{
            .len = targets.len,
            .data = @ptrCast(targets.ptr),
        };
        qtc.QAbstractTransition_SetTargetStates(@ptrCast(self.ptr), targets_list);
    }

    /// ### DEPRECATED: Use `transitionType` instead
    ///
    pub const TransitionType = transitionType;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#transitionType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ## Returns:
    ///
    /// ` qabstracttransition_enums.TransitionType `
    ///
    pub fn transitionType(self: QKeyEventTransition) i32 {
        return qtc.QAbstractTransition_TransitionType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTransitionType` instead
    ///
    pub const SetTransitionType = setTransitionType;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTransitionType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` typeVal: qabstracttransition_enums.TransitionType `
    ///
    pub fn setTransitionType(self: QKeyEventTransition, typeVal: i32) void {
        qtc.QAbstractTransition_SetTransitionType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `machine` instead
    ///
    pub const Machine = machine;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#machine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn machine(self: QKeyEventTransition) QStateMachine {
        return .{ .ptr = qtc.QAbstractTransition_Machine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addAnimation` instead
    ///
    pub const AddAnimation = addAnimation;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#addAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn addAnimation(self: QKeyEventTransition, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAbstractTransition_AddAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `removeAnimation` instead
    ///
    pub const RemoveAnimation = removeAnimation;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#removeAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn removeAnimation(self: QKeyEventTransition, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAbstractTransition_RemoveAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `animations` instead
    ///
    pub const Animations = animations;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#animations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn animations(self: QKeyEventTransition, allocator: std.mem.Allocator) []QAbstractAnimation {
        const _arr: qtc.libqt_list = qtc.QAbstractTransition_Animations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAnimation, _arr.len) catch @panic("QKeyEventTransition.animations: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractAnimation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QKeyEventTransition, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QKeyEventTransition.objectName: Memory allocation failed");
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QKeyEventTransition, name: []const u8) void {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn isWidgetType(self: QKeyEventTransition) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn isWindowType(self: QKeyEventTransition) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn isQuickItemType(self: QKeyEventTransition) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn signalsBlocked(self: QKeyEventTransition) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QKeyEventTransition, b: bool) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn thread(self: QKeyEventTransition) QThread {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QKeyEventTransition, _thread: anytype) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QKeyEventTransition, interval: i32) i32 {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QKeyEventTransition, time: i64) i32 {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QKeyEventTransition, id: i32) void {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QKeyEventTransition, id: i32) void {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QKeyEventTransition, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QKeyEventTransition.children: Memory allocation failed");
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QKeyEventTransition, _parent: anytype) void {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QKeyEventTransition, filterObj: anytype) void {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QKeyEventTransition, obj: anytype) void {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QKeyEventTransition, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn disconnect3(self: QKeyEventTransition) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QKeyEventTransition, receiver: anytype) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn dumpObjectTree(self: QKeyEventTransition) void {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn dumpObjectInfo(self: QKeyEventTransition) void {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QKeyEventTransition, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QKeyEventTransition, name: [:0]const u8) QVariant {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QKeyEventTransition, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QKeyEventTransition.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QKeyEventTransition.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn bindingStorage(self: QKeyEventTransition) QBindingStorage {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn bindingStorage2(self: QKeyEventTransition) QBindingStorage {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn destroyed(self: QKeyEventTransition) void {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` callback: *const fn (self: QKeyEventTransition) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition) callconv(.c) void) void {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn parent(self: QKeyEventTransition) QObject {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QKeyEventTransition, classname: [:0]const u8) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    pub fn deleteLater(self: QKeyEventTransition) void {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QKeyEventTransition, interval: i32, timerType: i32) i32 {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QKeyEventTransition, time: i64, timerType: i32) i32 {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QKeyEventTransition, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QKeyEventTransition, signal: [:0]const u8) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QKeyEventTransition, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QKeyEventTransition, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QKeyEventTransition, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QKeyEventTransition, param1: anytype) void {
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QEventTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` e: QEvent `
    ///
    pub fn event(self: QKeyEventTransition, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QKeyEventTransition_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QEventTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` e: QEvent `
    ///
    pub fn superEvent(self: QKeyEventTransition, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QKeyEventTransition_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QEventTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition`
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, e: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, QEvent) callconv(.c) bool) void {
        qtc.QKeyEventTransition_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QKeyEventTransition, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QKeyEventTransition_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QKeyEventTransition, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QKeyEventTransition_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition`
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, QObject, QEvent) callconv(.c) bool) void {
        qtc.QKeyEventTransition_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QKeyEventTransition, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QKeyEventTransition_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QKeyEventTransition, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QKeyEventTransition_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition`
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, QTimerEvent) callconv(.c) void) void {
        qtc.QKeyEventTransition_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QKeyEventTransition, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QKeyEventTransition_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QKeyEventTransition, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QKeyEventTransition_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition`
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, QChildEvent) callconv(.c) void) void {
        qtc.QKeyEventTransition_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QKeyEventTransition, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QKeyEventTransition_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QKeyEventTransition, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QKeyEventTransition_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition`
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, QEvent) callconv(.c) void) void {
        qtc.QKeyEventTransition_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QKeyEventTransition, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeyEventTransition_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QKeyEventTransition, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeyEventTransition_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition`
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, QMetaMethod) callconv(.c) void) void {
        qtc.QKeyEventTransition_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QKeyEventTransition, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeyEventTransition_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QKeyEventTransition, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QKeyEventTransition_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition`
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, QMetaMethod) callconv(.c) void) void {
        qtc.QKeyEventTransition_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn sender(self: QKeyEventTransition) QObject {
        return .{ .ptr = qtc.QKeyEventTransition_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn superSender(self: QKeyEventTransition) QObject {
        return .{ .ptr = qtc.QKeyEventTransition_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QKeyEventTransition, callback: *const fn () callconv(.c) QObject) void {
        qtc.QKeyEventTransition_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn senderSignalIndex(self: QKeyEventTransition) i32 {
        return qtc.QKeyEventTransition_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn superSenderSignalIndex(self: QKeyEventTransition) i32 {
        return qtc.QKeyEventTransition_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QKeyEventTransition, callback: *const fn () callconv(.c) i32) void {
        qtc.QKeyEventTransition_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QKeyEventTransition, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QKeyEventTransition_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QKeyEventTransition, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QKeyEventTransition_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition`
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, [*:0]const u8) callconv(.c) i32) void {
        qtc.QKeyEventTransition_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QKeyEventTransition, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QKeyEventTransition_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QKeyEventTransition, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QKeyEventTransition_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition`
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, QMetaMethod) callconv(.c) bool) void {
        qtc.QKeyEventTransition_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onTriggered` instead
    ///
    pub const OnTriggered = onTriggered;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#triggered)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` callback: *const fn (self: QKeyEventTransition) callconv(.c) void `
    ///
    pub fn onTriggered(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition) callconv(.c) void) void {
        qtc.QAbstractTransition_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onTargetStateChanged` instead
    ///
    pub const OnTargetStateChanged = onTargetStateChanged;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStateChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` callback: *const fn (self: QKeyEventTransition) callconv(.c) void `
    ///
    pub fn onTargetStateChanged(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition) callconv(.c) void) void {
        qtc.QAbstractTransition_Connect_TargetStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onTargetStatesChanged` instead
    ///
    pub const OnTargetStatesChanged = onTargetStatesChanged;

    /// Inherited from QAbstractTransition
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStatesChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QKeyEventTransition `
    ///
    /// ` callback: *const fn (self: QKeyEventTransition) callconv(.c) void `
    ///
    pub fn onTargetStatesChanged(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition) callconv(.c) void) void {
        qtc.QAbstractTransition_Connect_TargetStatesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QKeyEventTransition `
    ///
    /// ` callback: *const fn (self: QKeyEventTransition, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QKeyEventTransition, callback: *const fn (QKeyEventTransition, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#dtor.QKeyEventTransition)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QKeyEventTransition `
    ///
    pub fn delete(self: QKeyEventTransition) void {
        qtc.QKeyEventTransition_Delete(@ptrCast(self.ptr));
    }
};
