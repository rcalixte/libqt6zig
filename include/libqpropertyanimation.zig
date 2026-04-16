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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html)
pub const QPropertyAnimation = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPropertyAnimation,

    pub const _is_QPropertyAnimation = {};
    pub const _is_QVariantAnimation = {};
    pub const _is_QAbstractAnimation = {};
    pub const _is_QObject = {};

    /// New constructs a new QPropertyAnimation object.
    ///
    pub fn New() QPropertyAnimation {
        return .{ .ptr = qtc.QPropertyAnimation_new() };
    }

    /// New2 constructs a new QPropertyAnimation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QObject `
    ///
    /// ` propertyName: []u8 `
    ///
    pub fn New2(target: anytype, propertyName: []u8) QPropertyAnimation {
        comptime _ = @TypeOf(target)._is_QObject;
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        return .{ .ptr = qtc.QPropertyAnimation_new2(@ptrCast(target.ptr), propertyName_str) };
    }

    /// New3 constructs a new QPropertyAnimation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QPropertyAnimation {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QPropertyAnimation_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QPropertyAnimation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QObject `
    ///
    /// ` propertyName: []u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(target: anytype, propertyName: []u8, parent: anytype) QPropertyAnimation {
        comptime _ = @TypeOf(target)._is_QObject;
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QPropertyAnimation_new4(@ptrCast(target.ptr), propertyName_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn MetaObject(self: QPropertyAnimation) QMetaObject {
        return .{ .ptr = qtc.QPropertyAnimation_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QPropertyAnimation, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPropertyAnimation_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn SuperMetaObject(self: QPropertyAnimation) QMetaObject {
        return .{ .ptr = qtc.QPropertyAnimation_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QPropertyAnimation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPropertyAnimation_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPropertyAnimation_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QPropertyAnimation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPropertyAnimation_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QPropertyAnimation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPropertyAnimation_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPropertyAnimation_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QPropertyAnimation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPropertyAnimation_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpropertyanimation.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#targetObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn TargetObject(self: QPropertyAnimation) QObject {
        return .{ .ptr = qtc.QPropertyAnimation_TargetObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#setTargetObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` target: QObject `
    ///
    pub fn SetTargetObject(self: QPropertyAnimation, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QObject;
        qtc.QPropertyAnimation_SetTargetObject(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#propertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PropertyName(self: QPropertyAnimation, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QPropertyAnimation_PropertyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qpropertyanimation.PropertyName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#setPropertyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` propertyName: []u8 `
    ///
    pub fn SetPropertyName(self: QPropertyAnimation, propertyName: []u8) void {
        const propertyName_str = qtc.libqt_string{
            .len = propertyName.len,
            .data = propertyName.ptr,
        };
        qtc.QPropertyAnimation_SetPropertyName(@ptrCast(self.ptr), propertyName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QPropertyAnimation, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPropertyAnimation_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QEvent) callconv(.c) bool) void {
        qtc.QPropertyAnimation_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QPropertyAnimation, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPropertyAnimation_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#updateCurrentValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` value: QVariant `
    ///
    pub fn UpdateCurrentValue(self: QPropertyAnimation, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QPropertyAnimation_UpdateCurrentValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#updateCurrentValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, value: QVariant) callconv(.c) void `
    ///
    pub fn OnUpdateCurrentValue(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QVariant) callconv(.c) void) void {
        qtc.QPropertyAnimation_OnUpdateCurrentValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateCurrentValue` instead
    ///
    pub const QBaseUpdateCurrentValue = SuperUpdateCurrentValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#updateCurrentValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperUpdateCurrentValue(self: QPropertyAnimation, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QPropertyAnimation_SuperUpdateCurrentValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#updateState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn UpdateState(self: QPropertyAnimation, newState: i32, oldState: i32) void {
        qtc.QPropertyAnimation_UpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#updateState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn OnUpdateState(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, i32, i32) callconv(.c) void) void {
        qtc.QPropertyAnimation_OnUpdateState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateState` instead
    ///
    pub const QBaseUpdateState = SuperUpdateState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#updateState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn SuperUpdateState(self: QPropertyAnimation, newState: i32, oldState: i32) void {
        qtc.QPropertyAnimation_SuperUpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpropertyanimation.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpropertyanimation.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#startValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn StartValue(self: QPropertyAnimation) QVariant {
        return .{ .ptr = qtc.QVariantAnimation_StartValue(@ptrCast(self.ptr)) };
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setStartValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetStartValue(self: QPropertyAnimation, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QVariantAnimation_SetStartValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#endValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn EndValue(self: QPropertyAnimation) QVariant {
        return .{ .ptr = qtc.QVariantAnimation_EndValue(@ptrCast(self.ptr)) };
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setEndValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetEndValue(self: QPropertyAnimation, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QVariantAnimation_SetEndValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#keyValueAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` step: f64 `
    ///
    pub fn KeyValueAt(self: QPropertyAnimation, step: f64) QVariant {
        return .{ .ptr = qtc.QVariantAnimation_KeyValueAt(@ptrCast(self.ptr), @bitCast(step)) };
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValueAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` step: f64 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetKeyValueAt(self: QPropertyAnimation, step: f64, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QVariantAnimation_SetKeyValueAt(@ptrCast(self.ptr), @bitCast(step), @ptrCast(value.ptr));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#keyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KeyValues(self: QPropertyAnimation, allocator: std.mem.Allocator) []Struct_f64_QVariant {
        const _arr: qtc.libqt_list = qtc.QVariantAnimation_KeyValues(@ptrCast(self.ptr));
        const _data: [*]Struct_f64_QVariant = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_f64_QVariant, _arr.len) catch @panic("qpropertyanimation.KeyValues: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` values: []Struct_f64_QVariant `
    ///
    pub fn SetKeyValues(self: QPropertyAnimation, values: []Struct_f64_QVariant) void {
        const values_list = qtc.libqt_list{
            .len = values.len,
            .data = @ptrCast(values.ptr),
        };
        qtc.QVariantAnimation_SetKeyValues(@ptrCast(self.ptr), values_list);
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#currentValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn CurrentValue(self: QPropertyAnimation) QVariant {
        return .{ .ptr = qtc.QVariantAnimation_CurrentValue(@ptrCast(self.ptr)) };
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SetDuration(self: QPropertyAnimation, msecs: i32) void {
        qtc.QVariantAnimation_SetDuration(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#easingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn EasingCurve(self: QPropertyAnimation) QEasingCurve {
        return .{ .ptr = qtc.QVariantAnimation_EasingCurve(@ptrCast(self.ptr)) };
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setEasingCurve)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` easing: QEasingCurve `
    ///
    pub fn SetEasingCurve(self: QPropertyAnimation, easing: anytype) void {
        comptime _ = @TypeOf(easing)._is_QEasingCurve;
        qtc.QVariantAnimation_SetEasingCurve(@ptrCast(self.ptr), @ptrCast(easing.ptr));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` value: QVariant `
    ///
    pub fn ValueChanged(self: QPropertyAnimation, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QVariantAnimation_ValueChanged(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, value: QVariant) callconv(.c) void `
    ///
    pub fn OnValueChanged(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QVariant) callconv(.c) void) void {
        qtc.QVariantAnimation_Connect_ValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.State `
    ///
    pub fn State(self: QPropertyAnimation) i32 {
        return qtc.QAbstractAnimation_State(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Group(self: QPropertyAnimation) QAnimationGroup {
        return .{ .ptr = qtc.QAbstractAnimation_Group(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.Direction `
    ///
    pub fn Direction(self: QPropertyAnimation) i32 {
        return qtc.QAbstractAnimation_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn SetDirection(self: QPropertyAnimation, direction: i32) void {
        qtc.QAbstractAnimation_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn CurrentTime(self: QPropertyAnimation) i32 {
        return qtc.QAbstractAnimation_CurrentTime(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn CurrentLoopTime(self: QPropertyAnimation) i32 {
        return qtc.QAbstractAnimation_CurrentLoopTime(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn LoopCount(self: QPropertyAnimation) i32 {
        return qtc.QAbstractAnimation_LoopCount(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` loopCount: i32 `
    ///
    pub fn SetLoopCount(self: QPropertyAnimation, loopCount: i32) void {
        qtc.QAbstractAnimation_SetLoopCount(@ptrCast(self.ptr), @bitCast(loopCount));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn CurrentLoop(self: QPropertyAnimation) i32 {
        return qtc.QAbstractAnimation_CurrentLoop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn TotalDuration(self: QPropertyAnimation) i32 {
        return qtc.QAbstractAnimation_TotalDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Finished(self: QPropertyAnimation) void {
        qtc.QAbstractAnimation_Finished(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation) callconv(.c) void `
    ///
    pub fn OnFinished(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn StateChanged(self: QPropertyAnimation, newState: i32, oldState: i32) void {
        qtc.QAbstractAnimation_StateChanged(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, i32, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` currentLoop: i32 `
    ///
    pub fn CurrentLoopChanged(self: QPropertyAnimation, currentLoop: i32) void {
        qtc.QAbstractAnimation_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(currentLoop));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, currentLoop: i32) callconv(.c) void `
    ///
    pub fn OnCurrentLoopChanged(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` param1: qabstractanimation_enums.Direction `
    ///
    pub fn DirectionChanged(self: QPropertyAnimation, param1: i32) void {
        qtc.QAbstractAnimation_DirectionChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, param1: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn OnDirectionChanged(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_DirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Start(self: QPropertyAnimation) void {
        qtc.QAbstractAnimation_Start(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Pause(self: QPropertyAnimation) void {
        qtc.QAbstractAnimation_Pause(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Resume(self: QPropertyAnimation) void {
        qtc.QAbstractAnimation_Resume(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` paused: bool `
    ///
    pub fn SetPaused(self: QPropertyAnimation, paused: bool) void {
        qtc.QAbstractAnimation_SetPaused(@ptrCast(self.ptr), paused);
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Stop(self: QPropertyAnimation) void {
        qtc.QAbstractAnimation_Stop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SetCurrentTime(self: QPropertyAnimation, msecs: i32) void {
        qtc.QAbstractAnimation_SetCurrentTime(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` policy: qabstractanimation_enums.DeletionPolicy `
    ///
    pub fn Start1(self: QPropertyAnimation, policy: i32) void {
        qtc.QAbstractAnimation_Start1(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QPropertyAnimation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpropertyanimation.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QPropertyAnimation, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn IsWidgetType(self: QPropertyAnimation) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn IsWindowType(self: QPropertyAnimation) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn IsQuickItemType(self: QPropertyAnimation) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn SignalsBlocked(self: QPropertyAnimation) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QPropertyAnimation, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Thread(self: QPropertyAnimation) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QPropertyAnimation, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QPropertyAnimation, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QPropertyAnimation, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QPropertyAnimation, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QPropertyAnimation, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QPropertyAnimation, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qpropertyanimation.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QPropertyAnimation, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QPropertyAnimation, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QPropertyAnimation, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QPropertyAnimation, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Disconnect3(self: QPropertyAnimation) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QPropertyAnimation, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn DumpObjectTree(self: QPropertyAnimation) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn DumpObjectInfo(self: QPropertyAnimation) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QPropertyAnimation, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QPropertyAnimation, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QPropertyAnimation, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qpropertyanimation.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpropertyanimation.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn BindingStorage(self: QPropertyAnimation) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn BindingStorage2(self: QPropertyAnimation) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Destroyed(self: QPropertyAnimation) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Parent(self: QPropertyAnimation) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QPropertyAnimation, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn DeleteLater(self: QPropertyAnimation) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QPropertyAnimation, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QPropertyAnimation, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QPropertyAnimation, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QPropertyAnimation, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QPropertyAnimation, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QPropertyAnimation, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QPropertyAnimation, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QPropertyAnimation, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Duration(self: QPropertyAnimation) i32 {
        return qtc.QPropertyAnimation_Duration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDuration` instead
    ///
    pub const QBaseDuration = SuperDuration;

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn SuperDuration(self: QPropertyAnimation) i32 {
        return qtc.QPropertyAnimation_SuperDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDuration(self: QPropertyAnimation, callback: *const fn () callconv(.c) i32) void {
        qtc.QPropertyAnimation_OnDuration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` param1: i32 `
    ///
    pub fn UpdateCurrentTime(self: QPropertyAnimation, param1: i32) void {
        qtc.QPropertyAnimation_UpdateCurrentTime(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperUpdateCurrentTime` instead
    ///
    pub const QBaseUpdateCurrentTime = SuperUpdateCurrentTime;

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperUpdateCurrentTime(self: QPropertyAnimation, param1: i32) void {
        qtc.QPropertyAnimation_SuperUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, param1: i32) callconv(.c) void `
    ///
    pub fn OnUpdateCurrentTime(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, i32) callconv(.c) void) void {
        qtc.QPropertyAnimation_OnUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` from: QVariant `
    ///
    /// ` to: QVariant `
    ///
    /// ` progress: f64 `
    ///
    pub fn Interpolated(self: QPropertyAnimation, from: anytype, to: anytype, progress: f64) QVariant {
        comptime _ = @TypeOf(from)._is_QVariant;
        comptime _ = @TypeOf(to)._is_QVariant;
        return .{ .ptr = qtc.QPropertyAnimation_Interpolated(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(progress)) };
    }

    /// ### DEPRECATED: Use `SuperInterpolated` instead
    ///
    pub const QBaseInterpolated = SuperInterpolated;

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` from: QVariant `
    ///
    /// ` to: QVariant `
    ///
    /// ` progress: f64 `
    ///
    pub fn SuperInterpolated(self: QPropertyAnimation, from: anytype, to: anytype, progress: f64) QVariant {
        comptime _ = @TypeOf(from)._is_QVariant;
        comptime _ = @TypeOf(to)._is_QVariant;
        return .{ .ptr = qtc.QPropertyAnimation_SuperInterpolated(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(progress)) };
    }

    /// Inherited from QVariantAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, from: QVariant, to: QVariant, progress: f64) callconv(.c) QVariant `
    ///
    pub fn OnInterpolated(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QVariant, QVariant, f64) callconv(.c) QVariant) void {
        qtc.QPropertyAnimation_OnInterpolated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn UpdateDirection(self: QPropertyAnimation, direction: i32) void {
        qtc.QPropertyAnimation_UpdateDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `SuperUpdateDirection` instead
    ///
    pub const QBaseUpdateDirection = SuperUpdateDirection;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn SuperUpdateDirection(self: QPropertyAnimation, direction: i32) void {
        qtc.QPropertyAnimation_SuperUpdateDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, direction: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn OnUpdateDirection(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, i32) callconv(.c) void) void {
        qtc.QPropertyAnimation_OnUpdateDirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QPropertyAnimation, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPropertyAnimation_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QPropertyAnimation, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPropertyAnimation_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPropertyAnimation_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QPropertyAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPropertyAnimation_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QPropertyAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPropertyAnimation_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QTimerEvent) callconv(.c) void) void {
        qtc.QPropertyAnimation_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QPropertyAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPropertyAnimation_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QPropertyAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPropertyAnimation_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QChildEvent) callconv(.c) void) void {
        qtc.QPropertyAnimation_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QPropertyAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPropertyAnimation_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QPropertyAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPropertyAnimation_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QEvent) callconv(.c) void) void {
        qtc.QPropertyAnimation_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QPropertyAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPropertyAnimation_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QPropertyAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPropertyAnimation_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QMetaMethod) callconv(.c) void) void {
        qtc.QPropertyAnimation_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QPropertyAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPropertyAnimation_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QPropertyAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPropertyAnimation_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QMetaMethod) callconv(.c) void) void {
        qtc.QPropertyAnimation_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Sender(self: QPropertyAnimation) QObject {
        return .{ .ptr = qtc.QPropertyAnimation_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn SuperSender(self: QPropertyAnimation) QObject {
        return .{ .ptr = qtc.QPropertyAnimation_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QPropertyAnimation, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPropertyAnimation_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn SenderSignalIndex(self: QPropertyAnimation) i32 {
        return qtc.QPropertyAnimation_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn SuperSenderSignalIndex(self: QPropertyAnimation) i32 {
        return qtc.QPropertyAnimation_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QPropertyAnimation, callback: *const fn () callconv(.c) i32) void {
        qtc.QPropertyAnimation_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QPropertyAnimation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPropertyAnimation_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QPropertyAnimation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPropertyAnimation_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPropertyAnimation_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QPropertyAnimation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPropertyAnimation_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QPropertyAnimation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPropertyAnimation_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation`
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, QMetaMethod) callconv(.c) bool) void {
        qtc.QPropertyAnimation_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QPropertyAnimation `
    ///
    /// ` callback: *const fn (self: QPropertyAnimation, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QPropertyAnimation, callback: *const fn (QPropertyAnimation, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpropertyanimation.html#dtor.QPropertyAnimation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPropertyAnimation `
    ///
    pub fn Delete(self: QPropertyAnimation) void {
        qtc.QPropertyAnimation_Delete(@ptrCast(self.ptr));
    }
};
