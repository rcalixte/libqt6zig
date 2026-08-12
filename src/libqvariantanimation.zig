const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAnimationGroup = @import("libqt6").QAnimationGroup;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEasingCurve = @import("libqt6").QEasingCurve;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractanimation_enums = @import("libqabstractanimation.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
const Struct_f64_QVariant = extern struct { first: f64, second: QVariant };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html)
pub const QVariantAnimation = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVariantAnimation,

    pub const _is_QVariantAnimation = {};
    pub const _is_QAbstractAnimation = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVariantAnimation object in C++ memory
    ///
    pub fn new() QVariantAnimation {
        return .{ .ptr = qtc.QVariantAnimation_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVariantAnimation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QVariantAnimation {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QVariantAnimation_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn metaObject(self: QVariantAnimation) QMetaObject {
        return .{ .ptr = qtc.QVariantAnimation_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QVariantAnimation, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVariantAnimation_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    pub fn superMetaObject(self: QVariantAnimation) QMetaObject {
        return .{ .ptr = qtc.QVariantAnimation_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QVariantAnimation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVariantAnimation_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QVariantAnimation, callback: *const fn (QVariantAnimation, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVariantAnimation_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QVariantAnimation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVariantAnimation_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QVariantAnimation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVariantAnimation_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QVariantAnimation, callback: *const fn (QVariantAnimation, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVariantAnimation_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QVariantAnimation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVariantAnimation_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVariantAnimation.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `startValue` instead
    ///
    pub const StartValue = startValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#startValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn startValue(self: QVariantAnimation) QVariant {
        return .{ .ptr = qtc.QVariantAnimation_StartValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStartValue` instead
    ///
    pub const SetStartValue = setStartValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setStartValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` value: QVariant `
    ///
    pub fn setStartValue(self: QVariantAnimation, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QVariantAnimation_SetStartValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `endValue` instead
    ///
    pub const EndValue = endValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#endValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn endValue(self: QVariantAnimation) QVariant {
        return .{ .ptr = qtc.QVariantAnimation_EndValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEndValue` instead
    ///
    pub const SetEndValue = setEndValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setEndValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` value: QVariant `
    ///
    pub fn setEndValue(self: QVariantAnimation, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QVariantAnimation_SetEndValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `keyValueAt` instead
    ///
    pub const KeyValueAt = keyValueAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#keyValueAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn keyValueAt(self: QVariantAnimation, step: f64) QVariant {
        return .{ .ptr = qtc.QVariantAnimation_KeyValueAt(@ptrCast(self.ptr), @bitCast(step)) };
    }

    /// ### DEPRECATED: Use `setKeyValueAt` instead
    ///
    pub const SetKeyValueAt = setKeyValueAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValueAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` step: f64 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setKeyValueAt(self: QVariantAnimation, step: f64, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QVariantAnimation_SetKeyValueAt(@ptrCast(self.ptr), @bitCast(step), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `keyValues` instead
    ///
    pub const KeyValues = keyValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#keyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keyValues(self: QVariantAnimation, allocator: std.mem.Allocator) []Struct_f64_QVariant {
        const _arr: qtc.libqt_list = qtc.QVariantAnimation_KeyValues(@ptrCast(self.ptr));
        const _data_val: [*]Struct_f64_QVariant = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QVariant, _arr.len) catch @panic("QVariantAnimation.keyValues: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setKeyValues` instead
    ///
    pub const SetKeyValues = setKeyValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` values: []Struct_f64_QVariant `
    ///
    pub fn setKeyValues(self: QVariantAnimation, values: []Struct_f64_QVariant) void {
        const values_list = qtc.libqt_list{
            .len = values.len,
            .data = @ptrCast(values.ptr),
        };
        qtc.QVariantAnimation_SetKeyValues(@ptrCast(self.ptr), values_list);
    }

    /// ### DEPRECATED: Use `currentValue` instead
    ///
    pub const CurrentValue = currentValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#currentValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn currentValue(self: QVariantAnimation) QVariant {
        return .{ .ptr = qtc.QVariantAnimation_CurrentValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `duration` instead
    ///
    pub const Duration = duration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn duration(self: QVariantAnimation) i32 {
        return qtc.QVariantAnimation_Duration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDuration` instead
    ///
    pub const OnDuration = onDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDuration(self: QVariantAnimation, callback: *const fn () callconv(.c) i32) void {
        qtc.QVariantAnimation_OnDuration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDuration` instead
    ///
    pub const SuperDuration = superDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn superDuration(self: QVariantAnimation) i32 {
        return qtc.QVariantAnimation_SuperDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDuration` instead
    ///
    pub const SetDuration = setDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` msecs: i32 `
    ///
    pub fn setDuration(self: QVariantAnimation, msecs: i32) void {
        qtc.QVariantAnimation_SetDuration(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `easingCurve` instead
    ///
    pub const EasingCurve = easingCurve;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#easingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn easingCurve(self: QVariantAnimation) QEasingCurve {
        return .{ .ptr = qtc.QVariantAnimation_EasingCurve(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEasingCurve` instead
    ///
    pub const SetEasingCurve = setEasingCurve;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` easing: QEasingCurve `
    ///
    pub fn setEasingCurve(self: QVariantAnimation, easing: anytype) void {
        comptime _ = @TypeOf(easing)._is_QEasingCurve;
        qtc.QVariantAnimation_SetEasingCurve(@ptrCast(self.ptr), @ptrCast(easing.ptr));
    }

    /// ### DEPRECATED: Use `valueChanged` instead
    ///
    pub const ValueChanged = valueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` value: QVariant `
    ///
    pub fn valueChanged(self: QVariantAnimation, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QVariantAnimation_ValueChanged(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onValueChanged` instead
    ///
    pub const OnValueChanged = onValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, value: QVariant) callconv(.c) void `
    ///
    pub fn onValueChanged(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QVariant) callconv(.c) void) void {
        qtc.QVariantAnimation_Connect_ValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QVariantAnimation, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVariantAnimation_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QEvent) callconv(.c) bool) void {
        qtc.QVariantAnimation_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QVariantAnimation, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVariantAnimation_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `updateCurrentTime` instead
    ///
    pub const UpdateCurrentTime = updateCurrentTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` param1: i32 `
    ///
    pub fn updateCurrentTime(self: QVariantAnimation, param1: i32) void {
        qtc.QVariantAnimation_UpdateCurrentTime(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onUpdateCurrentTime` instead
    ///
    pub const OnUpdateCurrentTime = onUpdateCurrentTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, param1: i32) callconv(.c) void `
    ///
    pub fn onUpdateCurrentTime(self: QVariantAnimation, callback: *const fn (QVariantAnimation, i32) callconv(.c) void) void {
        qtc.QVariantAnimation_OnUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateCurrentTime` instead
    ///
    pub const SuperUpdateCurrentTime = superUpdateCurrentTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` param1: i32 `
    ///
    pub fn superUpdateCurrentTime(self: QVariantAnimation, param1: i32) void {
        qtc.QVariantAnimation_SuperUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `updateState` instead
    ///
    pub const UpdateState = updateState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn updateState(self: QVariantAnimation, newState: i32, oldState: i32) void {
        qtc.QVariantAnimation_UpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### DEPRECATED: Use `onUpdateState` instead
    ///
    pub const OnUpdateState = onUpdateState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn onUpdateState(self: QVariantAnimation, callback: *const fn (QVariantAnimation, i32, i32) callconv(.c) void) void {
        qtc.QVariantAnimation_OnUpdateState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateState` instead
    ///
    pub const SuperUpdateState = superUpdateState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn superUpdateState(self: QVariantAnimation, newState: i32, oldState: i32) void {
        qtc.QVariantAnimation_SuperUpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### DEPRECATED: Use `updateCurrentValue` instead
    ///
    pub const UpdateCurrentValue = updateCurrentValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` value: QVariant `
    ///
    pub fn updateCurrentValue(self: QVariantAnimation, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QVariantAnimation_UpdateCurrentValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateCurrentValue` instead
    ///
    pub const OnUpdateCurrentValue = onUpdateCurrentValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, value: QVariant) callconv(.c) void `
    ///
    pub fn onUpdateCurrentValue(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QVariant) callconv(.c) void) void {
        qtc.QVariantAnimation_OnUpdateCurrentValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateCurrentValue` instead
    ///
    pub const SuperUpdateCurrentValue = superUpdateCurrentValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` value: QVariant `
    ///
    pub fn superUpdateCurrentValue(self: QVariantAnimation, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QVariantAnimation_SuperUpdateCurrentValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `interpolated` instead
    ///
    pub const Interpolated = interpolated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` from: QVariant `
    ///
    /// ` to: QVariant `
    ///
    /// ` progress: f64 `
    ///
    pub fn interpolated(self: QVariantAnimation, from: anytype, to: anytype, progress: f64) QVariant {
        comptime _ = @TypeOf(from)._is_QVariant;
        comptime _ = @TypeOf(to)._is_QVariant;
        return .{ .ptr = qtc.QVariantAnimation_Interpolated(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(progress)) };
    }

    /// ### DEPRECATED: Use `onInterpolated` instead
    ///
    pub const OnInterpolated = onInterpolated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, from: QVariant, to: QVariant, progress: f64) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInterpolated(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QVariant, QVariant, f64) callconv(.c) QVariant) void {
        qtc.QVariantAnimation_OnInterpolated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInterpolated` instead
    ///
    pub const SuperInterpolated = superInterpolated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` from: QVariant `
    ///
    /// ` to: QVariant `
    ///
    /// ` progress: f64 `
    ///
    pub fn superInterpolated(self: QVariantAnimation, from: anytype, to: anytype, progress: f64) QVariant {
        comptime _ = @TypeOf(from)._is_QVariant;
        comptime _ = @TypeOf(to)._is_QVariant;
        return .{ .ptr = qtc.QVariantAnimation_SuperInterpolated(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(progress)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVariantAnimation.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVariantAnimation.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.State `
    ///
    pub fn state(self: QVariantAnimation) i32 {
        return qtc.QAbstractAnimation_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn group(self: QVariantAnimation) QAnimationGroup {
        return .{ .ptr = qtc.QAbstractAnimation_Group(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.Direction `
    ///
    pub fn direction(self: QVariantAnimation) i32 {
        return qtc.QAbstractAnimation_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` _direction: qabstractanimation_enums.Direction `
    ///
    pub fn setDirection(self: QVariantAnimation, _direction: i32) void {
        qtc.QAbstractAnimation_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `currentTime` instead
    ///
    pub const CurrentTime = currentTime;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn currentTime(self: QVariantAnimation) i32 {
        return qtc.QAbstractAnimation_CurrentTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentLoopTime` instead
    ///
    pub const CurrentLoopTime = currentLoopTime;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn currentLoopTime(self: QVariantAnimation) i32 {
        return qtc.QAbstractAnimation_CurrentLoopTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loopCount` instead
    ///
    pub const LoopCount = loopCount;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn loopCount(self: QVariantAnimation) i32 {
        return qtc.QAbstractAnimation_LoopCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLoopCount` instead
    ///
    pub const SetLoopCount = setLoopCount;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` _loopCount: i32 `
    ///
    pub fn setLoopCount(self: QVariantAnimation, _loopCount: i32) void {
        qtc.QAbstractAnimation_SetLoopCount(@ptrCast(self.ptr), @bitCast(_loopCount));
    }

    /// ### DEPRECATED: Use `currentLoop` instead
    ///
    pub const CurrentLoop = currentLoop;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn currentLoop(self: QVariantAnimation) i32 {
        return qtc.QAbstractAnimation_CurrentLoop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `totalDuration` instead
    ///
    pub const TotalDuration = totalDuration;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn totalDuration(self: QVariantAnimation) i32 {
        return qtc.QAbstractAnimation_TotalDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn finished(self: QVariantAnimation) void {
        qtc.QAbstractAnimation_Finished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation) callconv(.c) void `
    ///
    pub fn onFinished(self: QVariantAnimation, callback: *const fn (QVariantAnimation) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn stateChanged(self: QVariantAnimation, newState: i32, oldState: i32) void {
        qtc.QAbstractAnimation_StateChanged(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QVariantAnimation, callback: *const fn (QVariantAnimation, i32, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentLoopChanged` instead
    ///
    pub const CurrentLoopChanged = currentLoopChanged;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` _currentLoop: i32 `
    ///
    pub fn currentLoopChanged(self: QVariantAnimation, _currentLoop: i32) void {
        qtc.QAbstractAnimation_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(_currentLoop));
    }

    /// ### DEPRECATED: Use `onCurrentLoopChanged` instead
    ///
    pub const OnCurrentLoopChanged = onCurrentLoopChanged;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, currentLoop: i32) callconv(.c) void `
    ///
    pub fn onCurrentLoopChanged(self: QVariantAnimation, callback: *const fn (QVariantAnimation, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `directionChanged` instead
    ///
    pub const DirectionChanged = directionChanged;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` param1: qabstractanimation_enums.Direction `
    ///
    pub fn directionChanged(self: QVariantAnimation, param1: i32) void {
        qtc.QAbstractAnimation_DirectionChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onDirectionChanged` instead
    ///
    pub const OnDirectionChanged = onDirectionChanged;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, param1: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn onDirectionChanged(self: QVariantAnimation, callback: *const fn (QVariantAnimation, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_DirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn start(self: QVariantAnimation) void {
        qtc.QAbstractAnimation_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pause` instead
    ///
    pub const Pause = pause;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn pause(self: QVariantAnimation) void {
        qtc.QAbstractAnimation_Pause(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn resume0(self: QVariantAnimation) void {
        qtc.QAbstractAnimation_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPaused` instead
    ///
    pub const SetPaused = setPaused;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` paused: bool `
    ///
    pub fn setPaused(self: QVariantAnimation, paused: bool) void {
        qtc.QAbstractAnimation_SetPaused(@ptrCast(self.ptr), paused);
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn stop(self: QVariantAnimation) void {
        qtc.QAbstractAnimation_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentTime` instead
    ///
    pub const SetCurrentTime = setCurrentTime;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` msecs: i32 `
    ///
    pub fn setCurrentTime(self: QVariantAnimation, msecs: i32) void {
        qtc.QAbstractAnimation_SetCurrentTime(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `start1` instead
    ///
    pub const Start1 = start1;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` policy: qabstractanimation_enums.DeletionPolicy `
    ///
    pub fn start1(self: QVariantAnimation, policy: i32) void {
        qtc.QAbstractAnimation_Start1(@ptrCast(self.ptr), @bitCast(policy));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QVariantAnimation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVariantAnimation.objectName: Memory allocation failed");
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
    /// ` self: QVariantAnimation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QVariantAnimation, name: []const u8) void {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn isWidgetType(self: QVariantAnimation) bool {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn isWindowType(self: QVariantAnimation) bool {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn isQuickItemType(self: QVariantAnimation) bool {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn signalsBlocked(self: QVariantAnimation) bool {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QVariantAnimation, b: bool) bool {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn thread(self: QVariantAnimation) QThread {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QVariantAnimation, _thread: anytype) bool {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QVariantAnimation, interval: i32) i32 {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QVariantAnimation, time: i64) i32 {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QVariantAnimation, id: i32) void {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QVariantAnimation, id: i32) void {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QVariantAnimation, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QVariantAnimation.children: Memory allocation failed");
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
    /// ` self: QVariantAnimation `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QVariantAnimation, _parent: anytype) void {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QVariantAnimation, filterObj: anytype) void {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QVariantAnimation, obj: anytype) void {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QVariantAnimation, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn disconnect3(self: QVariantAnimation) bool {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QVariantAnimation, receiver: anytype) bool {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn dumpObjectTree(self: QVariantAnimation) void {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn dumpObjectInfo(self: QVariantAnimation) void {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QVariantAnimation, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QVariantAnimation, name: [:0]const u8) QVariant {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QVariantAnimation, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QVariantAnimation.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVariantAnimation.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVariantAnimation `
    ///
    pub fn bindingStorage(self: QVariantAnimation) QBindingStorage {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn bindingStorage2(self: QVariantAnimation) QBindingStorage {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn destroyed(self: QVariantAnimation) void {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QVariantAnimation, callback: *const fn (QVariantAnimation) callconv(.c) void) void {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn parent(self: QVariantAnimation) QObject {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QVariantAnimation, classname: [:0]const u8) bool {
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
    /// ` self: QVariantAnimation `
    ///
    pub fn deleteLater(self: QVariantAnimation) void {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QVariantAnimation, interval: i32, timerType: i32) i32 {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QVariantAnimation, time: i64, timerType: i32) i32 {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QVariantAnimation, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QVariantAnimation, signal: [:0]const u8) bool {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QVariantAnimation, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QVariantAnimation, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QVariantAnimation, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QVariantAnimation, param1: anytype) void {
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
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateDirection` instead
    ///
    pub const UpdateDirection = updateDirection;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` _direction: qabstractanimation_enums.Direction `
    ///
    pub fn updateDirection(self: QVariantAnimation, _direction: i32) void {
        qtc.QVariantAnimation_UpdateDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `superUpdateDirection` instead
    ///
    pub const SuperUpdateDirection = superUpdateDirection;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVariantAnimation `
    ///
    /// ` _direction: qabstractanimation_enums.Direction `
    ///
    pub fn superUpdateDirection(self: QVariantAnimation, _direction: i32) void {
        qtc.QVariantAnimation_SuperUpdateDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `onUpdateDirection` instead
    ///
    pub const OnUpdateDirection = onUpdateDirection;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVariantAnimation`
    ///
    /// ` callback: *const fn (self: QVariantAnimation, direction: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn onUpdateDirection(self: QVariantAnimation, callback: *const fn (QVariantAnimation, i32) callconv(.c) void) void {
        qtc.QVariantAnimation_OnUpdateDirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QVariantAnimation, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVariantAnimation_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QVariantAnimation, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVariantAnimation_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVariantAnimation`
    ///
    /// ` callback: *const fn (self: QVariantAnimation, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVariantAnimation_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QVariantAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVariantAnimation_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QVariantAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVariantAnimation_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVariantAnimation`
    ///
    /// ` callback: *const fn (self: QVariantAnimation, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QTimerEvent) callconv(.c) void) void {
        qtc.QVariantAnimation_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QVariantAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVariantAnimation_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QVariantAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QVariantAnimation_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVariantAnimation`
    ///
    /// ` callback: *const fn (self: QVariantAnimation, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QChildEvent) callconv(.c) void) void {
        qtc.QVariantAnimation_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QVariantAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVariantAnimation_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QVariantAnimation, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVariantAnimation_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVariantAnimation`
    ///
    /// ` callback: *const fn (self: QVariantAnimation, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QEvent) callconv(.c) void) void {
        qtc.QVariantAnimation_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QVariantAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVariantAnimation_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QVariantAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVariantAnimation_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVariantAnimation`
    ///
    /// ` callback: *const fn (self: QVariantAnimation, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QMetaMethod) callconv(.c) void) void {
        qtc.QVariantAnimation_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QVariantAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVariantAnimation_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QVariantAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVariantAnimation_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVariantAnimation`
    ///
    /// ` callback: *const fn (self: QVariantAnimation, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QMetaMethod) callconv(.c) void) void {
        qtc.QVariantAnimation_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    pub fn sender(self: QVariantAnimation) QObject {
        return .{ .ptr = qtc.QVariantAnimation_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QVariantAnimation `
    ///
    pub fn superSender(self: QVariantAnimation) QObject {
        return .{ .ptr = qtc.QVariantAnimation_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QVariantAnimation`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QVariantAnimation, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVariantAnimation_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    pub fn senderSignalIndex(self: QVariantAnimation) i32 {
        return qtc.QVariantAnimation_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVariantAnimation `
    ///
    pub fn superSenderSignalIndex(self: QVariantAnimation) i32 {
        return qtc.QVariantAnimation_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVariantAnimation`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QVariantAnimation, callback: *const fn () callconv(.c) i32) void {
        qtc.QVariantAnimation_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QVariantAnimation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVariantAnimation_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVariantAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QVariantAnimation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVariantAnimation_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVariantAnimation`
    ///
    /// ` callback: *const fn (self: QVariantAnimation, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QVariantAnimation, callback: *const fn (QVariantAnimation, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVariantAnimation_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QVariantAnimation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVariantAnimation_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QVariantAnimation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVariantAnimation_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVariantAnimation`
    ///
    /// ` callback: *const fn (self: QVariantAnimation, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QVariantAnimation, callback: *const fn (QVariantAnimation, QMetaMethod) callconv(.c) bool) void {
        qtc.QVariantAnimation_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVariantAnimation `
    ///
    /// ` callback: *const fn (self: QVariantAnimation, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QVariantAnimation, callback: *const fn (QVariantAnimation, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#dtor.QVariantAnimation)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVariantAnimation `
    ///
    pub fn delete(self: QVariantAnimation) void {
        qtc.QVariantAnimation_Delete(@ptrCast(self.ptr));
    }
};
