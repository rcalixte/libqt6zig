const C = @import("qt6c");
const qabstractanimation_enums = @import("libqabstractanimation.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
pub const struct_f64_cqvariant = struct { first: f64, second: ?*C.QVariant };

/// https://doc.qt.io/qt-6/qvariantanimation.html
pub const qvariantanimation = struct {
    /// New constructs a new QVariantAnimation object.
    ///
    ///
    pub fn New() ?*C.QVariantAnimation {
        return C.QVariantAnimation_new();
    }

    /// New2 constructs a new QVariantAnimation object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QVariantAnimation {
        return C.QVariantAnimation_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QVariantAnimation_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QVariantAnimation, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QVariantAnimation_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QVariantAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QVariantAnimation_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QVariantAnimation_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QVariantAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QVariantAnimation_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QVariantAnimation_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#startValue)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn StartValue(self: ?*anyopaque) ?*C.QVariant {
        return C.QVariantAnimation_StartValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setStartValue)
    ///
    /// ``` self: ?*C.QVariantAnimation, value: ?*C.QVariant ```
    pub fn SetStartValue(self: ?*anyopaque, value: ?*anyopaque) void {
        C.QVariantAnimation_SetStartValue(@ptrCast(self), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#endValue)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn EndValue(self: ?*anyopaque) ?*C.QVariant {
        return C.QVariantAnimation_EndValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEndValue)
    ///
    /// ``` self: ?*C.QVariantAnimation, value: ?*C.QVariant ```
    pub fn SetEndValue(self: ?*anyopaque, value: ?*anyopaque) void {
        C.QVariantAnimation_SetEndValue(@ptrCast(self), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValueAt)
    ///
    /// ``` self: ?*C.QVariantAnimation, step: f64 ```
    pub fn KeyValueAt(self: ?*anyopaque, step: f64) ?*C.QVariant {
        return C.QVariantAnimation_KeyValueAt(@ptrCast(self), @floatCast(step));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValueAt)
    ///
    /// ``` self: ?*C.QVariantAnimation, step: f64, value: ?*C.QVariant ```
    pub fn SetKeyValueAt(self: ?*anyopaque, step: f64, value: ?*anyopaque) void {
        C.QVariantAnimation_SetKeyValueAt(@ptrCast(self), @floatCast(step), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValues)
    ///
    /// ``` self: ?*C.QVariantAnimation, allocator: std.mem.Allocator ```
    pub fn KeyValues(self: ?*anyopaque, allocator: std.mem.Allocator) []struct_f64_cqvariant {
        const _arr: C.struct_libqt_list = C.QVariantAnimation_KeyValues(@ptrCast(self));
        defer {
            const _pair: [*]C.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |_i| {
                C.libqt_free(_pair[_i].first);
                C.libqt_free(_pair[_i].second);
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_f64_cqvariant, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]struct_f64_cqvariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValues)
    ///
    /// ``` self: ?*C.QVariantAnimation, values: []struct_f64_cqvariant ```
    pub fn SetKeyValues(self: ?*anyopaque, values: []struct_f64_cqvariant) void {
        const values_list = C.struct_libqt_list{
            .len = values.len,
            .data = values.ptr,
        };
        C.QVariantAnimation_SetKeyValues(@ptrCast(self), values_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#currentValue)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn CurrentValue(self: ?*anyopaque) ?*C.QVariant {
        return C.QVariantAnimation_CurrentValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Duration(self: ?*anyopaque) i32 {
        return C.QVariantAnimation_Duration(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn () callconv(.c) i32 ```
    pub fn OnDuration(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QVariantAnimation_OnDuration(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn QBaseDuration(self: ?*anyopaque) i32 {
        return C.QVariantAnimation_QBaseDuration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setDuration)
    ///
    /// ``` self: ?*C.QVariantAnimation, msecs: i32 ```
    pub fn SetDuration(self: ?*anyopaque, msecs: i32) void {
        C.QVariantAnimation_SetDuration(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#easingCurve)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn EasingCurve(self: ?*anyopaque) ?*C.QEasingCurve {
        return C.QVariantAnimation_EasingCurve(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEasingCurve)
    ///
    /// ``` self: ?*C.QVariantAnimation, easing: ?*C.QEasingCurve ```
    pub fn SetEasingCurve(self: ?*anyopaque, easing: ?*anyopaque) void {
        C.QVariantAnimation_SetEasingCurve(@ptrCast(self), @ptrCast(easing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
    ///
    /// ``` self: ?*C.QVariantAnimation, value: ?*C.QVariant ```
    pub fn ValueChanged(self: ?*anyopaque, value: ?*anyopaque) void {
        C.QVariantAnimation_ValueChanged(@ptrCast(self), @ptrCast(value));
    }

    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QVariant) callconv(.c) void ```
    pub fn OnValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVariantAnimation_Connect_ValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#event)
    ///
    /// ``` self: ?*C.QVariantAnimation, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QVariantAnimation_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QVariantAnimation_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QVariantAnimation, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QVariantAnimation_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
    ///
    /// ``` self: ?*C.QVariantAnimation, param1: i32 ```
    pub fn UpdateCurrentTime(self: ?*anyopaque, param1: i32) void {
        C.QVariantAnimation_UpdateCurrentTime(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, i32) callconv(.c) void ```
    pub fn OnUpdateCurrentTime(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QVariantAnimation_OnUpdateCurrentTime(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QVariantAnimation, param1: i32 ```
    pub fn QBaseUpdateCurrentTime(self: ?*anyopaque, param1: i32) void {
        C.QVariantAnimation_QBaseUpdateCurrentTime(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateState)
    ///
    /// ``` self: ?*C.QVariantAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State ```
    pub fn UpdateState(self: ?*anyopaque, newState: i64, oldState: i64) void {
        C.QVariantAnimation_UpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, qabstractanimation_enums.State, qabstractanimation_enums.State) callconv(.c) void ```
    pub fn OnUpdateState(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) void) void {
        C.QVariantAnimation_OnUpdateState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QVariantAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State ```
    pub fn QBaseUpdateState(self: ?*anyopaque, newState: i64, oldState: i64) void {
        C.QVariantAnimation_QBaseUpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentValue)
    ///
    /// ``` self: ?*C.QVariantAnimation, value: ?*C.QVariant ```
    pub fn UpdateCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        C.QVariantAnimation_UpdateCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QVariant) callconv(.c) void ```
    pub fn OnUpdateCurrentValue(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVariantAnimation_OnUpdateCurrentValue(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QVariantAnimation, value: ?*C.QVariant ```
    pub fn QBaseUpdateCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        C.QVariantAnimation_QBaseUpdateCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
    ///
    /// ``` self: ?*C.QVariantAnimation, from: ?*C.QVariant, to: ?*C.QVariant, progress: f64 ```
    pub fn Interpolated(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, progress: f64) ?*C.QVariant {
        return C.QVariantAnimation_Interpolated(@ptrCast(self), @ptrCast(from), @ptrCast(to), @floatCast(progress));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QVariant, ?*C.QVariant, f64) callconv(.c) ?*C.QVariant ```
    pub fn OnInterpolated(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, f64) callconv(.c) ?*C.QVariant) void {
        C.QVariantAnimation_OnInterpolated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QVariantAnimation, from: ?*C.QVariant, to: ?*C.QVariant, progress: f64 ```
    pub fn QBaseInterpolated(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, progress: f64) ?*C.QVariant {
        return C.QVariantAnimation_QBaseInterpolated(@ptrCast(self), @ptrCast(from), @ptrCast(to), @floatCast(progress));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QVariantAnimation_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QVariantAnimation_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn State(self: ?*anyopaque) i64 {
        return C.QAbstractAnimation_State(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Group(self: ?*anyopaque) ?*C.QAnimationGroup {
        return C.QAbstractAnimation_Group(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Direction(self: ?*anyopaque) i64 {
        return C.QAbstractAnimation_Direction(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
    ///
    /// ``` self: ?*C.QVariantAnimation, direction: qabstractanimation_enums.Direction ```
    pub fn SetDirection(self: ?*anyopaque, direction: i64) void {
        C.QAbstractAnimation_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn CurrentTime(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_CurrentTime(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn CurrentLoopTime(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_CurrentLoopTime(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn LoopCount(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_LoopCount(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
    ///
    /// ``` self: ?*C.QVariantAnimation, loopCount: i32 ```
    pub fn SetLoopCount(self: ?*anyopaque, loopCount: i32) void {
        C.QAbstractAnimation_SetLoopCount(@ptrCast(self), @intCast(loopCount));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn CurrentLoop(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_CurrentLoop(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn TotalDuration(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_TotalDuration(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Finished(self: ?*anyopaque) void {
        C.QAbstractAnimation_Finished(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ``` self: ?*C.QAbstractAnimation, slot: fn (?*C.QAbstractAnimation) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractAnimation_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ``` self: ?*C.QVariantAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State ```
    pub fn StateChanged(self: ?*anyopaque, newState: i64, oldState: i64) void {
        C.QAbstractAnimation_StateChanged(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ``` self: ?*C.QAbstractAnimation, slot: fn (?*C.QAbstractAnimation, qabstractanimation_enums.State, qabstractanimation_enums.State) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) void) void {
        C.QAbstractAnimation_Connect_StateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ``` self: ?*C.QVariantAnimation, currentLoop: i32 ```
    pub fn CurrentLoopChanged(self: ?*anyopaque, currentLoop: i32) void {
        C.QAbstractAnimation_CurrentLoopChanged(@ptrCast(self), @intCast(currentLoop));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ``` self: ?*C.QAbstractAnimation, slot: fn (?*C.QAbstractAnimation, i32) callconv(.c) void ```
    pub fn OnCurrentLoopChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QAbstractAnimation_Connect_CurrentLoopChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ``` self: ?*C.QVariantAnimation, param1: qabstractanimation_enums.Direction ```
    pub fn DirectionChanged(self: ?*anyopaque, param1: i64) void {
        C.QAbstractAnimation_DirectionChanged(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ``` self: ?*C.QAbstractAnimation, slot: fn (?*C.QAbstractAnimation, qabstractanimation_enums.Direction) callconv(.c) void ```
    pub fn OnDirectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractAnimation_Connect_DirectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Start(self: ?*anyopaque) void {
        C.QAbstractAnimation_Start(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Pause(self: ?*anyopaque) void {
        C.QAbstractAnimation_Pause(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Resume(self: ?*anyopaque) void {
        C.QAbstractAnimation_Resume(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
    ///
    /// ``` self: ?*C.QVariantAnimation, paused: bool ```
    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        C.QAbstractAnimation_SetPaused(@ptrCast(self), paused);
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Stop(self: ?*anyopaque) void {
        C.QAbstractAnimation_Stop(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
    ///
    /// ``` self: ?*C.QVariantAnimation, msecs: i32 ```
    pub fn SetCurrentTime(self: ?*anyopaque, msecs: i32) void {
        C.QAbstractAnimation_SetCurrentTime(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ``` self: ?*C.QVariantAnimation, policy: qabstractanimation_enums.DeletionPolicy ```
    pub fn Start1(self: ?*anyopaque, policy: i64) void {
        C.QAbstractAnimation_Start1(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QVariantAnimation, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QVariantAnimation, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QVariantAnimation, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QVariantAnimation, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QVariantAnimation, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QVariantAnimation, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QVariantAnimation, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QVariantAnimation, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QVariantAnimation, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QVariantAnimation, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QVariantAnimation, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QVariantAnimation, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QVariantAnimation, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QVariantAnimation, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QVariantAnimation, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QVariantAnimation, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QVariantAnimation, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QVariantAnimation, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, direction: qabstractanimation_enums.Direction ```
    pub fn UpdateDirection(self: ?*anyopaque, direction: i64) void {
        C.QVariantAnimation_UpdateDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, direction: qabstractanimation_enums.Direction ```
    pub fn QBaseUpdateDirection(self: ?*anyopaque, direction: i64) void {
        C.QVariantAnimation_QBaseUpdateDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, qabstractanimation_enums.Direction) callconv(.c) void ```
    pub fn OnUpdateDirection(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QVariantAnimation_OnUpdateDirection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QVariantAnimation_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QVariantAnimation_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QVariantAnimation_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QVariantAnimation_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QVariantAnimation_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVariantAnimation_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QVariantAnimation_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QVariantAnimation_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVariantAnimation_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QVariantAnimation_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QVariantAnimation_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVariantAnimation_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QVariantAnimation_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QVariantAnimation_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVariantAnimation_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QVariantAnimation_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QVariantAnimation_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVariantAnimation_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QVariantAnimation_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QVariantAnimation_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QVariantAnimation_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QVariantAnimation_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QVariantAnimation_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QVariantAnimation_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QVariantAnimation_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QVariantAnimation_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QVariantAnimation_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QVariantAnimation_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QVariantAnimation_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QVariantAnimation_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QVariantAnimation ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QVariantAnimation_Delete(@ptrCast(self));
    }
};
