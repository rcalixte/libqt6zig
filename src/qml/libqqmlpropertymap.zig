const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const Map_constu8_QVariant = std.StringHashMapUnmanaged(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html)
pub const QQmlPropertyMap = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlPropertyMap,

    pub const _is_QQmlPropertyMap = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlPropertyMap object in C++ memory
    ///
    pub fn new() QQmlPropertyMap {
        return .{ .ptr = qtc.QQmlPropertyMap_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQmlPropertyMap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QQmlPropertyMap {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QQmlPropertyMap_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    pub fn metaObject(self: QQmlPropertyMap) QMetaObject {
        return .{ .ptr = qtc.QQmlPropertyMap_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QQmlPropertyMap, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QQmlPropertyMap_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn superMetaObject(self: QQmlPropertyMap) QMetaObject {
        return .{ .ptr = qtc.QQmlPropertyMap_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQmlPropertyMap, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQmlPropertyMap_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QQmlPropertyMap_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QQmlPropertyMap, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQmlPropertyMap_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQmlPropertyMap, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQmlPropertyMap_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QQmlPropertyMap_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QQmlPropertyMap, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQmlPropertyMap_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        var _str = qtc.QQmlPropertyMap_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlPropertyMap.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn value(self: QQmlPropertyMap, key: []const u8) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QQmlPropertyMap_Value(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` key: []const u8 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn insert(self: QQmlPropertyMap, key: []const u8, _value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QQmlPropertyMap_Insert(@ptrCast(self.ptr), key_str, @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `insert2` instead
    ///
    pub const Insert2 = insert2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` values: Map_constu8_QVariant `
    ///
    pub fn insert2(self: QQmlPropertyMap, allocator: std.mem.Allocator, values: Map_constu8_QVariant) void {
        const values_count = values.count();
        const values_keys = allocator.alloc(qtc.libqt_string, values_count) catch @panic("QQmlPropertyMap.insert2: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc(QtC.QVariant, values_count) catch @panic("QQmlPropertyMap.insert2: Memory allocation failed");
        defer allocator.free(values_values);
        var values_i: usize = 0;
        var values_it = values.iterator();
        while (values_it.next()) |it_entry| : (values_i += 1) {
            const values_key = it_entry.key_ptr.*;
            values_keys[values_i] = qtc.libqt_string{
                .len = values_key.len,
                .data = values_key.ptr,
            };
            values_values[values_i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const values_map = qtc.libqt_map{
            .len = values_count,
            .keys = @ptrCast(values_keys.ptr),
            .values = @ptrCast(values_values.ptr),
        };
        qtc.QQmlPropertyMap_Insert2(@ptrCast(self.ptr), values_map);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn clear(self: QQmlPropertyMap, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QQmlPropertyMap_Clear(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `freeze` instead
    ///
    pub const Freeze = freeze;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#freeze)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    pub fn freeze(self: QQmlPropertyMap) void {
        qtc.QQmlPropertyMap_Freeze(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keys` instead
    ///
    pub const Keys = keys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keys(self: QQmlPropertyMap, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QQmlPropertyMap_Keys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QQmlPropertyMap.keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQmlPropertyMap.keys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    pub fn count(self: QQmlPropertyMap) i32 {
        return qtc.QQmlPropertyMap_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    pub fn size(self: QQmlPropertyMap) i32 {
        return qtc.QQmlPropertyMap_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    pub fn isEmpty(self: QQmlPropertyMap) bool {
        return qtc.QQmlPropertyMap_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn contains(self: QQmlPropertyMap, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QQmlPropertyMap_Contains(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript(self: QQmlPropertyMap, key: []const u8) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QQmlPropertyMap_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript2(self: QQmlPropertyMap, key: []const u8) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QQmlPropertyMap_OperatorSubscript2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `valueChanged` instead
    ///
    pub const ValueChanged = valueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` key: []const u8 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn valueChanged(self: QQmlPropertyMap, key: []const u8, _value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QQmlPropertyMap_ValueChanged(@ptrCast(self.ptr), key_str, @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `onValueChanged` instead
    ///
    pub const OnValueChanged = onValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, key: [*:0]const u8, value: QVariant) callconv(.c) void `
    ///
    pub fn onValueChanged(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QQmlPropertyMap_Connect_ValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateValue` instead
    ///
    pub const UpdateValue = updateValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#updateValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` key: []const u8 `
    ///
    /// ` input: QVariant `
    ///
    pub fn updateValue(self: QQmlPropertyMap, key: []const u8, input: anytype) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(input)._is_QVariant;
        return .{ .ptr = qtc.QQmlPropertyMap_UpdateValue(@ptrCast(self.ptr), key_str, @ptrCast(input.ptr)) };
    }

    /// ### DEPRECATED: Use `onUpdateValue` instead
    ///
    pub const OnUpdateValue = onUpdateValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#updateValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, key: [*:0]const u8, input: QVariant) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onUpdateValue(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, [*:0]const u8, QVariant) callconv(.c) QVariant) void {
        qtc.QQmlPropertyMap_OnUpdateValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateValue` instead
    ///
    pub const SuperUpdateValue = superUpdateValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#updateValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` key: []const u8 `
    ///
    /// ` input: QVariant `
    ///
    pub fn superUpdateValue(self: QQmlPropertyMap, key: []const u8, input: anytype) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(input)._is_QVariant;
        return .{ .ptr = qtc.QQmlPropertyMap_SuperUpdateValue(@ptrCast(self.ptr), key_str, @ptrCast(input.ptr)) };
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
        var _str = qtc.QQmlPropertyMap_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlPropertyMap.tr2: Memory allocation failed");
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
        var _str = qtc.QQmlPropertyMap_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlPropertyMap.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQmlPropertyMap, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlPropertyMap.objectName: Memory allocation failed");
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQmlPropertyMap, name: []const u8) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn isWidgetType(self: QQmlPropertyMap) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn isWindowType(self: QQmlPropertyMap) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn isQuickItemType(self: QQmlPropertyMap) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn signalsBlocked(self: QQmlPropertyMap) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQmlPropertyMap, b: bool) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn thread(self: QQmlPropertyMap) QThread {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQmlPropertyMap, _thread: anytype) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQmlPropertyMap, interval: i32) i32 {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQmlPropertyMap, time: i64) i32 {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QQmlPropertyMap, id: i32) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQmlPropertyMap, id: i32) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQmlPropertyMap, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQmlPropertyMap.children: Memory allocation failed");
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQmlPropertyMap, _parent: anytype) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQmlPropertyMap, filterObj: anytype) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQmlPropertyMap, obj: anytype) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQmlPropertyMap, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn disconnect3(self: QQmlPropertyMap) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQmlPropertyMap, receiver: anytype) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn dumpObjectTree(self: QQmlPropertyMap) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn dumpObjectInfo(self: QQmlPropertyMap) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QQmlPropertyMap, name: [:0]const u8, _value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(_value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(_value.ptr));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQmlPropertyMap, name: [:0]const u8) QVariant {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQmlPropertyMap, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQmlPropertyMap.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQmlPropertyMap.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn bindingStorage(self: QQmlPropertyMap) QBindingStorage {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn bindingStorage2(self: QQmlPropertyMap) QBindingStorage {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn destroyed(self: QQmlPropertyMap) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap) callconv(.c) void) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn parent(self: QQmlPropertyMap) QObject {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQmlPropertyMap, classname: [:0]const u8) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn deleteLater(self: QQmlPropertyMap) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQmlPropertyMap, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQmlPropertyMap, time: i64, timerType: i32) i32 {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQmlPropertyMap, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQmlPropertyMap, signal: [:0]const u8) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQmlPropertyMap, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQmlPropertyMap, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQmlPropertyMap, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQmlPropertyMap, param1: anytype) void {
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QQmlPropertyMap, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQmlPropertyMap_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QQmlPropertyMap, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQmlPropertyMap_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QQmlPropertyMap`
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, QEvent) callconv(.c) bool) void {
        qtc.QQmlPropertyMap_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQmlPropertyMap, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQmlPropertyMap_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QQmlPropertyMap, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QQmlPropertyMap_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlPropertyMap`
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, QObject, QEvent) callconv(.c) bool) void {
        qtc.QQmlPropertyMap_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QQmlPropertyMap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQmlPropertyMap_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QQmlPropertyMap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QQmlPropertyMap_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlPropertyMap`
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, QTimerEvent) callconv(.c) void) void {
        qtc.QQmlPropertyMap_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QQmlPropertyMap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQmlPropertyMap_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QQmlPropertyMap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QQmlPropertyMap_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlPropertyMap`
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, QChildEvent) callconv(.c) void) void {
        qtc.QQmlPropertyMap_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QQmlPropertyMap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQmlPropertyMap_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QQmlPropertyMap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QQmlPropertyMap_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QQmlPropertyMap`
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, QEvent) callconv(.c) void) void {
        qtc.QQmlPropertyMap_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QQmlPropertyMap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlPropertyMap_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QQmlPropertyMap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlPropertyMap_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlPropertyMap`
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, QMetaMethod) callconv(.c) void) void {
        qtc.QQmlPropertyMap_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QQmlPropertyMap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlPropertyMap_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QQmlPropertyMap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QQmlPropertyMap_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlPropertyMap`
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, QMetaMethod) callconv(.c) void) void {
        qtc.QQmlPropertyMap_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn sender(self: QQmlPropertyMap) QObject {
        return .{ .ptr = qtc.QQmlPropertyMap_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn superSender(self: QQmlPropertyMap) QObject {
        return .{ .ptr = qtc.QQmlPropertyMap_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QQmlPropertyMap`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QQmlPropertyMap, callback: *const fn () callconv(.c) QObject) void {
        qtc.QQmlPropertyMap_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn senderSignalIndex(self: QQmlPropertyMap) i32 {
        return qtc.QQmlPropertyMap_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQmlPropertyMap `
    ///
    pub fn superSenderSignalIndex(self: QQmlPropertyMap) i32 {
        return qtc.QQmlPropertyMap_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QQmlPropertyMap`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QQmlPropertyMap, callback: *const fn () callconv(.c) i32) void {
        qtc.QQmlPropertyMap_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QQmlPropertyMap, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQmlPropertyMap_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QQmlPropertyMap, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QQmlPropertyMap_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QQmlPropertyMap`
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, [*:0]const u8) callconv(.c) i32) void {
        qtc.QQmlPropertyMap_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QQmlPropertyMap, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQmlPropertyMap_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QQmlPropertyMap, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QQmlPropertyMap_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QQmlPropertyMap`
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, QMetaMethod) callconv(.c) bool) void {
        qtc.QQmlPropertyMap_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQmlPropertyMap `
    ///
    /// ` callback: *const fn (self: QQmlPropertyMap, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQmlPropertyMap, callback: *const fn (QQmlPropertyMap, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertymap.html#dtor.QQmlPropertyMap)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlPropertyMap `
    ///
    pub fn delete(self: QQmlPropertyMap) void {
        qtc.QQmlPropertyMap_Delete(@ptrCast(self.ptr));
    }
};
