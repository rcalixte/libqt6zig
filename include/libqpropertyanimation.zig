const C = @import("qt6c");
const qabstractanimation_enums = @import("libqabstractanimation.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
pub const struct_f64_cqvariant = struct { first: f64, second: ?*C.QVariant };

/// https://doc.qt.io/qt-6/qpropertyanimation.html
pub const qpropertyanimation = struct {
    /// New constructs a new QPropertyAnimation object.
    ///
    ///
    pub fn New() ?*C.QPropertyAnimation {
        return C.QPropertyAnimation_new();
    }

    /// New2 constructs a new QPropertyAnimation object.
    ///
    /// ``` target: ?*C.QObject, propertyName: []u8 ```
    pub fn New2(target: ?*anyopaque, propertyName: []u8) ?*C.QPropertyAnimation {
        const propertyName_str = C.struct_libqt_string{
            .len = propertyName.len,
            .data = @constCast(propertyName.ptr),
        };

        return C.QPropertyAnimation_new2(@ptrCast(target), propertyName_str);
    }

    /// New3 constructs a new QPropertyAnimation object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New3(parent: ?*anyopaque) ?*C.QPropertyAnimation {
        return C.QPropertyAnimation_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QPropertyAnimation object.
    ///
    /// ``` target: ?*C.QObject, propertyName: []u8, parent: ?*C.QObject ```
    pub fn New4(target: ?*anyopaque, propertyName: []u8, parent: ?*anyopaque) ?*C.QPropertyAnimation {
        const propertyName_str = C.struct_libqt_string{
            .len = propertyName.len,
            .data = @constCast(propertyName.ptr),
        };

        return C.QPropertyAnimation_new4(@ptrCast(target), propertyName_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QPropertyAnimation_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QPropertyAnimation, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QPropertyAnimation_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QPropertyAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QPropertyAnimation_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QPropertyAnimation_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QPropertyAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QPropertyAnimation_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QPropertyAnimation_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#targetObject)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn TargetObject(self: ?*anyopaque) ?*C.QObject {
        return C.QPropertyAnimation_TargetObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#setTargetObject)
    ///
    /// ``` self: ?*C.QPropertyAnimation, target: ?*C.QObject ```
    pub fn SetTargetObject(self: ?*anyopaque, target: ?*anyopaque) void {
        C.QPropertyAnimation_SetTargetObject(@ptrCast(self), @ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#propertyName)
    ///
    /// ``` self: ?*C.QPropertyAnimation, allocator: std.mem.Allocator ```
    pub fn PropertyName(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QPropertyAnimation_PropertyName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#setPropertyName)
    ///
    /// ``` self: ?*C.QPropertyAnimation, propertyName: []u8 ```
    pub fn SetPropertyName(self: ?*anyopaque, propertyName: []u8) void {
        const propertyName_str = C.struct_libqt_string{
            .len = propertyName.len,
            .data = @constCast(propertyName.ptr),
        };
        C.QPropertyAnimation_SetPropertyName(@ptrCast(self), propertyName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#event)
    ///
    /// ``` self: ?*C.QPropertyAnimation, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPropertyAnimation_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPropertyAnimation_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QPropertyAnimation, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPropertyAnimation_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#updateCurrentValue)
    ///
    /// ``` self: ?*C.QPropertyAnimation, value: ?*C.QVariant ```
    pub fn UpdateCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        C.QPropertyAnimation_UpdateCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, ?*C.QVariant) callconv(.c) void ```
    pub fn OnUpdateCurrentValue(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPropertyAnimation_OnUpdateCurrentValue(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QPropertyAnimation, value: ?*C.QVariant ```
    pub fn QBaseUpdateCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        C.QPropertyAnimation_QBaseUpdateCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#updateState)
    ///
    /// ``` self: ?*C.QPropertyAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State ```
    pub fn UpdateState(self: ?*anyopaque, newState: i64, oldState: i64) void {
        C.QPropertyAnimation_UpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, qabstractanimation_enums.State, qabstractanimation_enums.State) callconv(.c) void ```
    pub fn OnUpdateState(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) void) void {
        C.QPropertyAnimation_OnUpdateState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QPropertyAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State ```
    pub fn QBaseUpdateState(self: ?*anyopaque, newState: i64, oldState: i64) void {
        C.QPropertyAnimation_QBaseUpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QPropertyAnimation_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QPropertyAnimation_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#startValue)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn StartValue(self: ?*anyopaque) ?*C.QVariant {
        return C.QVariantAnimation_StartValue(@ptrCast(self));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setStartValue)
    ///
    /// ``` self: ?*C.QPropertyAnimation, value: ?*C.QVariant ```
    pub fn SetStartValue(self: ?*anyopaque, value: ?*anyopaque) void {
        C.QVariantAnimation_SetStartValue(@ptrCast(self), @ptrCast(value));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#endValue)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn EndValue(self: ?*anyopaque) ?*C.QVariant {
        return C.QVariantAnimation_EndValue(@ptrCast(self));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEndValue)
    ///
    /// ``` self: ?*C.QPropertyAnimation, value: ?*C.QVariant ```
    pub fn SetEndValue(self: ?*anyopaque, value: ?*anyopaque) void {
        C.QVariantAnimation_SetEndValue(@ptrCast(self), @ptrCast(value));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValueAt)
    ///
    /// ``` self: ?*C.QPropertyAnimation, step: f64 ```
    pub fn KeyValueAt(self: ?*anyopaque, step: f64) ?*C.QVariant {
        return C.QVariantAnimation_KeyValueAt(@ptrCast(self), @floatCast(step));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValueAt)
    ///
    /// ``` self: ?*C.QPropertyAnimation, step: f64, value: ?*C.QVariant ```
    pub fn SetKeyValueAt(self: ?*anyopaque, step: f64, value: ?*anyopaque) void {
        C.QVariantAnimation_SetKeyValueAt(@ptrCast(self), @floatCast(step), @ptrCast(value));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValues)
    ///
    /// ``` self: ?*C.QPropertyAnimation, allocator: std.mem.Allocator ```
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

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValues)
    ///
    /// ``` self: ?*C.QPropertyAnimation, values: []struct_f64_cqvariant ```
    pub fn SetKeyValues(self: ?*anyopaque, values: []struct_f64_cqvariant) void {
        const values_list = C.struct_libqt_list{
            .len = values.len,
            .data = values.ptr,
        };
        C.QVariantAnimation_SetKeyValues(@ptrCast(self), values_list);
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#currentValue)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn CurrentValue(self: ?*anyopaque) ?*C.QVariant {
        return C.QVariantAnimation_CurrentValue(@ptrCast(self));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setDuration)
    ///
    /// ``` self: ?*C.QPropertyAnimation, msecs: i32 ```
    pub fn SetDuration(self: ?*anyopaque, msecs: i32) void {
        C.QVariantAnimation_SetDuration(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#easingCurve)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn EasingCurve(self: ?*anyopaque) ?*C.QEasingCurve {
        return C.QVariantAnimation_EasingCurve(@ptrCast(self));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEasingCurve)
    ///
    /// ``` self: ?*C.QPropertyAnimation, easing: ?*C.QEasingCurve ```
    pub fn SetEasingCurve(self: ?*anyopaque, easing: ?*anyopaque) void {
        C.QVariantAnimation_SetEasingCurve(@ptrCast(self), @ptrCast(easing));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
    ///
    /// ``` self: ?*C.QPropertyAnimation, value: ?*C.QVariant ```
    pub fn ValueChanged(self: ?*anyopaque, value: ?*anyopaque) void {
        C.QVariantAnimation_ValueChanged(@ptrCast(self), @ptrCast(value));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ``` self: ?*C.QVariantAnimation, slot: fn (?*C.QVariantAnimation, ?*C.QVariant) callconv(.c) void ```
    pub fn OnValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVariantAnimation_Connect_ValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn State(self: ?*anyopaque) i64 {
        return C.QAbstractAnimation_State(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn Group(self: ?*anyopaque) ?*C.QAnimationGroup {
        return C.QAbstractAnimation_Group(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn Direction(self: ?*anyopaque) i64 {
        return C.QAbstractAnimation_Direction(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
    ///
    /// ``` self: ?*C.QPropertyAnimation, direction: qabstractanimation_enums.Direction ```
    pub fn SetDirection(self: ?*anyopaque, direction: i64) void {
        C.QAbstractAnimation_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn CurrentTime(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_CurrentTime(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn CurrentLoopTime(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_CurrentLoopTime(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn LoopCount(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_LoopCount(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
    ///
    /// ``` self: ?*C.QPropertyAnimation, loopCount: i32 ```
    pub fn SetLoopCount(self: ?*anyopaque, loopCount: i32) void {
        C.QAbstractAnimation_SetLoopCount(@ptrCast(self), @intCast(loopCount));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn CurrentLoop(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_CurrentLoop(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn TotalDuration(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_TotalDuration(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
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
    /// ``` self: ?*C.QPropertyAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State ```
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
    /// ``` self: ?*C.QPropertyAnimation, currentLoop: i32 ```
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
    /// ``` self: ?*C.QPropertyAnimation, param1: qabstractanimation_enums.Direction ```
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
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn Start(self: ?*anyopaque) void {
        C.QAbstractAnimation_Start(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn Pause(self: ?*anyopaque) void {
        C.QAbstractAnimation_Pause(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn Resume(self: ?*anyopaque) void {
        C.QAbstractAnimation_Resume(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
    ///
    /// ``` self: ?*C.QPropertyAnimation, paused: bool ```
    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        C.QAbstractAnimation_SetPaused(@ptrCast(self), paused);
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn Stop(self: ?*anyopaque) void {
        C.QAbstractAnimation_Stop(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
    ///
    /// ``` self: ?*C.QPropertyAnimation, msecs: i32 ```
    pub fn SetCurrentTime(self: ?*anyopaque, msecs: i32) void {
        C.QAbstractAnimation_SetCurrentTime(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ``` self: ?*C.QPropertyAnimation, policy: qabstractanimation_enums.DeletionPolicy ```
    pub fn Start1(self: ?*anyopaque, policy: i64) void {
        C.QAbstractAnimation_Start1(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QPropertyAnimation, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QPropertyAnimation, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QPropertyAnimation, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QPropertyAnimation, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QPropertyAnimation, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QPropertyAnimation, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QPropertyAnimation, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QPropertyAnimation, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QPropertyAnimation, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QPropertyAnimation, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QPropertyAnimation, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QPropertyAnimation, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QPropertyAnimation, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QPropertyAnimation, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
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
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QPropertyAnimation, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QPropertyAnimation, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QPropertyAnimation, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QPropertyAnimation, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn Duration(self: ?*anyopaque) i32 {
        return C.QPropertyAnimation_Duration(@ptrCast(self));
    }

    /// Inherited from QVariantAnimation
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn QBaseDuration(self: ?*anyopaque) i32 {
        return C.QPropertyAnimation_QBaseDuration(@ptrCast(self));
    }

    /// Inherited from QVariantAnimation
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn () callconv(.c) i32 ```
    pub fn OnDuration(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QPropertyAnimation_OnDuration(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, param1: i32 ```
    pub fn UpdateCurrentTime(self: ?*anyopaque, param1: i32) void {
        C.QPropertyAnimation_UpdateCurrentTime(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QVariantAnimation
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, param1: i32 ```
    pub fn QBaseUpdateCurrentTime(self: ?*anyopaque, param1: i32) void {
        C.QPropertyAnimation_QBaseUpdateCurrentTime(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QVariantAnimation
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, i32) callconv(.c) void ```
    pub fn OnUpdateCurrentTime(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QPropertyAnimation_OnUpdateCurrentTime(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QVariantAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, from: ?*C.QVariant, to: ?*C.QVariant, progress: f64 ```
    pub fn Interpolated(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, progress: f64) ?*C.QVariant {
        return C.QPropertyAnimation_Interpolated(@ptrCast(self), @ptrCast(from), @ptrCast(to), @floatCast(progress));
    }

    /// Inherited from QVariantAnimation
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, from: ?*C.QVariant, to: ?*C.QVariant, progress: f64 ```
    pub fn QBaseInterpolated(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, progress: f64) ?*C.QVariant {
        return C.QPropertyAnimation_QBaseInterpolated(@ptrCast(self), @ptrCast(from), @ptrCast(to), @floatCast(progress));
    }

    /// Inherited from QVariantAnimation
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, ?*C.QVariant, ?*C.QVariant, f64) callconv(.c) ?*C.QVariant ```
    pub fn OnInterpolated(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, f64) callconv(.c) ?*C.QVariant) void {
        C.QPropertyAnimation_OnInterpolated(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, direction: qabstractanimation_enums.Direction ```
    pub fn UpdateDirection(self: ?*anyopaque, direction: i64) void {
        C.QPropertyAnimation_UpdateDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, direction: qabstractanimation_enums.Direction ```
    pub fn QBaseUpdateDirection(self: ?*anyopaque, direction: i64) void {
        C.QPropertyAnimation_QBaseUpdateDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, qabstractanimation_enums.Direction) callconv(.c) void ```
    pub fn OnUpdateDirection(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QPropertyAnimation_OnUpdateDirection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPropertyAnimation_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QPropertyAnimation_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPropertyAnimation_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPropertyAnimation_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPropertyAnimation_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPropertyAnimation_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPropertyAnimation_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPropertyAnimation_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPropertyAnimation_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPropertyAnimation_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QPropertyAnimation_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPropertyAnimation_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPropertyAnimation_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPropertyAnimation_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPropertyAnimation_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPropertyAnimation_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QPropertyAnimation_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QPropertyAnimation_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QPropertyAnimation_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QPropertyAnimation_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QPropertyAnimation_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QPropertyAnimation_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QPropertyAnimation_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QPropertyAnimation_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QPropertyAnimation_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QPropertyAnimation_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QPropertyAnimation_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QPropertyAnimation_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QPropertyAnimation_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QPropertyAnimation, slot: fn (?*C.QPropertyAnimation, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QPropertyAnimation_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QPropertyAnimation ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QPropertyAnimation_Delete(@ptrCast(self));
    }
};
