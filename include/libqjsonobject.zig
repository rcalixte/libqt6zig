const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QJsonValue = @import("libqt6").QJsonValue;
const QJsonValueConstRef = @import("libqt6").QJsonValueConstRef;
const QJsonValueRef = @import("libqt6").QJsonValueRef;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);
const Map_constu8_QVariant = std.StringHashMapUnmanaged(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html)
pub const QJsonObject = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJsonObject,

    pub const _is_QJsonObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJsonObject object in C++ memory
    ///
    pub fn new() QJsonObject {
        return .{ .ptr = qtc.QJsonObject_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJsonObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject `
    ///
    pub fn new2(other: anytype) QJsonObject {
        comptime _ = @TypeOf(other)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonObject_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` other: QJsonObject `
    ///
    pub fn operatorAssign(self: QJsonObject, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonObject;
        qtc.QJsonObject_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` other: QJsonObject `
    ///
    pub fn swap(self: QJsonObject, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonObject;
        qtc.QJsonObject_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fromVariantMap` instead
    ///
    pub const FromVariantMap = fromVariantMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` map: ArrayMap_constu8_QVariant `
    ///
    pub fn fromVariantMap(allocator: std.mem.Allocator, map: ArrayMap_constu8_QVariant) QJsonObject {
        const map_count = map.count();
        const map_keys = allocator.alloc(qtc.libqt_string, map_count) catch @panic("QJsonObject.fromVariantMap: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(QtC.QVariant, map_count) catch @panic("QJsonObject.fromVariantMap: Memory allocation failed");
        defer allocator.free(map_values);
        var i: usize = 0;
        var map_it = map.iterator();
        while (map_it.next()) |it_entry| : (i += 1) {
            const map_key = it_entry.key_ptr.*;
            map_keys[i] = qtc.libqt_string{
                .len = map_key.len,
                .data = map_key.ptr,
            };
            map_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const map_map = qtc.libqt_map{
            .len = map_count,
            .keys = @ptrCast(map_keys.ptr),
            .values = @ptrCast(map_values.ptr),
        };
        return .{ .ptr = qtc.QJsonObject_FromVariantMap(map_map) };
    }

    /// ### DEPRECATED: Use `toVariantMap` instead
    ///
    pub const ToVariantMap = toVariantMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#toVariantMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toVariantMap(self: QJsonObject, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QJsonObject_ToVariantMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QJsonObject.toVariantMap: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QJsonObject.toVariantMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `fromVariantHash` instead
    ///
    pub const FromVariantHash = fromVariantHash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` map: Map_constu8_QVariant `
    ///
    pub fn fromVariantHash(allocator: std.mem.Allocator, map: Map_constu8_QVariant) QJsonObject {
        const map_count = map.count();
        const map_keys = allocator.alloc(qtc.libqt_string, map_count) catch @panic("QJsonObject.fromVariantHash: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(QtC.QVariant, map_count) catch @panic("QJsonObject.fromVariantHash: Memory allocation failed");
        defer allocator.free(map_values);
        var i: usize = 0;
        var map_it = map.iterator();
        while (map_it.next()) |it_entry| : (i += 1) {
            const map_key = it_entry.key_ptr.*;
            map_keys[i] = qtc.libqt_string{
                .len = map_key.len,
                .data = map_key.ptr,
            };
            map_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const map_map = qtc.libqt_map{
            .len = map_count,
            .keys = @ptrCast(map_keys.ptr),
            .values = @ptrCast(map_values.ptr),
        };
        return .{ .ptr = qtc.QJsonObject_FromVariantHash(map_map) };
    }

    /// ### DEPRECATED: Use `toVariantHash` instead
    ///
    pub const ToVariantHash = toVariantHash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#toVariantHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toVariantHash(self: QJsonObject, allocator: std.mem.Allocator) Map_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QJsonObject_ToVariantHash(@ptrCast(self.ptr));
        var _ret: Map_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QJsonObject.toVariantHash: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QJsonObject.toVariantHash: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `keys` instead
    ///
    pub const Keys = keys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keys(self: QJsonObject, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QJsonObject_Keys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QJsonObject.keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QJsonObject.keys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn size(self: QJsonObject) isize {
        return qtc.QJsonObject_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn count(self: QJsonObject) isize {
        return qtc.QJsonObject_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn length(self: QJsonObject) isize {
        return qtc.QJsonObject_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn isEmpty(self: QJsonObject) bool {
        return qtc.QJsonObject_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn value(self: QJsonObject, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Value(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript(self: QJsonObject, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript2(self: QJsonObject, key: []const u8) QJsonValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_OperatorSubscript2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `value2` instead
    ///
    pub const Value2 = value2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn value2(self: QJsonObject, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Value2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `value3` instead
    ///
    pub const Value3 = value3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []u8 `
    ///
    pub fn value3(self: QJsonObject, key: []u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Value3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript3` instead
    ///
    pub const OperatorSubscript3 = operatorSubscript3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript3(self: QJsonObject, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_OperatorSubscript3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript4` instead
    ///
    pub const OperatorSubscript4 = operatorSubscript4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript4(self: QJsonObject, key: []u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_OperatorSubscript4(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript5` instead
    ///
    pub const OperatorSubscript5 = operatorSubscript5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript5(self: QJsonObject, key: []const u8) QJsonValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_OperatorSubscript5(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript6` instead
    ///
    pub const OperatorSubscript6 = operatorSubscript6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript6(self: QJsonObject, key: []u8) QJsonValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_OperatorSubscript6(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn remove(self: QJsonObject, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QJsonObject_Remove(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `take` instead
    ///
    pub const Take = take;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn take(self: QJsonObject, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Take(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn contains(self: QJsonObject, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Contains(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `remove2` instead
    ///
    pub const Remove2 = remove2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn remove2(self: QJsonObject, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QJsonObject_Remove2(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `remove3` instead
    ///
    pub const Remove3 = remove3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []u8 `
    ///
    pub fn remove3(self: QJsonObject, key: []u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QJsonObject_Remove3(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `take2` instead
    ///
    pub const Take2 = take2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn take2(self: QJsonObject, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Take2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `take3` instead
    ///
    pub const Take3 = take3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []u8 `
    ///
    pub fn take3(self: QJsonObject, key: []u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Take3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `contains2` instead
    ///
    pub const Contains2 = contains2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn contains2(self: QJsonObject, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Contains2(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `contains3` instead
    ///
    pub const Contains3 = contains3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []u8 `
    ///
    pub fn contains3(self: QJsonObject, key: []u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Contains3(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn begin(self: QJsonObject) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `begin2` instead
    ///
    pub const Begin2 = begin2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn begin2(self: QJsonObject) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject_Begin2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `constBegin` instead
    ///
    pub const ConstBegin = constBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn constBegin(self: QJsonObject) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject_ConstBegin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn end(self: QJsonObject) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end2` instead
    ///
    pub const End2 = end2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn end2(self: QJsonObject) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject_End2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `constEnd` instead
    ///
    pub const ConstEnd = constEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn constEnd(self: QJsonObject) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject_ConstEnd(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `erase` instead
    ///
    pub const Erase = erase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` it: QJsonObject__iterator `
    ///
    pub fn erase(self: QJsonObject, it: anytype) QJsonObject__iterator {
        comptime _ = @TypeOf(it)._is_QJsonObject__iterator;
        return .{ .ptr = qtc.QJsonObject_Erase(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn find(self: QJsonObject, key: []const u8) QJsonObject__iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Find(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `find2` instead
    ///
    pub const Find2 = find2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn find2(self: QJsonObject, key: []const u8) QJsonObject__const_iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Find2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `constFind` instead
    ///
    pub const ConstFind = constFind;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn constFind(self: QJsonObject, key: []const u8) QJsonObject__const_iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_ConstFind(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    /// ` _value: QJsonValue `
    ///
    pub fn insert(self: QJsonObject, key: []const u8, _value: anytype) QJsonObject__iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(_value)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonObject_Insert(@ptrCast(self.ptr), key_str, @ptrCast(_value.ptr)) };
    }

    /// ### DEPRECATED: Use `find3` instead
    ///
    pub const Find3 = find3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn find3(self: QJsonObject, key: []const u8) QJsonObject__iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Find3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `find4` instead
    ///
    pub const Find4 = find4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []u8 `
    ///
    pub fn find4(self: QJsonObject, key: []u8) QJsonObject__iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Find4(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `find5` instead
    ///
    pub const Find5 = find5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn find5(self: QJsonObject, key: []const u8) QJsonObject__const_iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Find5(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `find6` instead
    ///
    pub const Find6 = find6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []u8 `
    ///
    pub fn find6(self: QJsonObject, key: []u8) QJsonObject__const_iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Find6(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `constFind2` instead
    ///
    pub const ConstFind2 = constFind2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn constFind2(self: QJsonObject, key: []const u8) QJsonObject__const_iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_ConstFind2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `constFind3` instead
    ///
    pub const ConstFind3 = constFind3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []u8 `
    ///
    pub fn constFind3(self: QJsonObject, key: []u8) QJsonObject__const_iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_ConstFind3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `insert2` instead
    ///
    pub const Insert2 = insert2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    /// ` _value: QJsonValue `
    ///
    pub fn insert2(self: QJsonObject, key: []const u8, _value: anytype) QJsonObject__iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(_value)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonObject_Insert2(@ptrCast(self.ptr), key_str, @ptrCast(_value.ptr)) };
    }

    /// ### DEPRECATED: Use `insert3` instead
    ///
    pub const Insert3 = insert3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []u8 `
    ///
    /// ` _value: QJsonValue `
    ///
    pub fn insert3(self: QJsonObject, key: []u8, _value: anytype) QJsonObject__iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(_value)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonObject_Insert3(@ptrCast(self.ptr), key_str, @ptrCast(_value.ptr)) };
    }

    /// ### DEPRECATED: Use `empty` instead
    ///
    pub const Empty = empty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn empty(self: QJsonObject) bool {
        return qtc.QJsonObject_Empty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#dtor.QJsonObject)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonObject `
    ///
    pub fn delete(self: QJsonObject) void {
        qtc.QJsonObject_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html)
pub const QJsonObject__iterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJsonObject__iterator,

    pub const _is_QJsonObject__iterator = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJsonObject::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject__iterator `
    ///
    pub fn new(other: anytype) QJsonObject__iterator {
        comptime _ = @TypeOf(other)._is_QJsonObject__iterator;
        return .{ .ptr = qtc.QJsonObject__iterator_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJsonObject::iterator object in C++ memory
    ///
    pub fn new2() QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJsonObject::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QJsonObject `
    ///
    /// ` index: isize `
    ///
    pub fn new3(obj: anytype, index: isize) QJsonObject__iterator {
        comptime _ = @TypeOf(obj)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonObject__iterator_new3(@ptrCast(obj.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJsonObject::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject__iterator `
    ///
    pub fn new4(other: anytype) QJsonObject__iterator {
        comptime _ = @TypeOf(other)._is_QJsonObject__iterator;
        return .{ .ptr = qtc.QJsonObject__iterator_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` other: QJsonObject__iterator `
    ///
    pub fn operatorAssign(self: QJsonObject__iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonObject__iterator;
        qtc.QJsonObject__iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: QJsonObject__iterator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonObject__iterator_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJsonObject__iterator.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn value(self: QJsonObject__iterator) QJsonValueRef {
        return .{ .ptr = qtc.QJsonObject__iterator_Value(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn operatorMultiply(self: QJsonObject__iterator) QJsonValueRef {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater` instead
    ///
    pub const OperatorMinusGreater = operatorMinusGreater;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn operatorMinusGreater(self: QJsonObject__iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater2` instead
    ///
    pub const OperatorMinusGreater2 = operatorMinusGreater2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn operatorMinusGreater2(self: QJsonObject__iterator) QJsonValueRef {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinusGreater2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorSubscript(self: QJsonObject__iterator, j: isize) QJsonValueRef {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn operatorPlusPlus(self: QJsonObject__iterator) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QJsonObject__iterator, param1: i32) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn operatorMinusMinus(self: QJsonObject__iterator) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QJsonObject__iterator, param1: i32) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlus(self: QJsonObject__iterator, j: isize) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus` instead
    ///
    pub const OperatorMinus = operatorMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinus(self: QJsonObject__iterator, j: isize) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlusAssign(self: QJsonObject__iterator, j: isize) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinusAssign(self: QJsonObject__iterator, j: isize) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus2` instead
    ///
    pub const OperatorMinus2 = operatorMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: QJsonObject__iterator `
    ///
    pub fn operatorMinus2(self: QJsonObject__iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QJsonObject__iterator;
        return qtc.QJsonObject__iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn delete(self: QJsonObject__iterator) void {
        qtc.QJsonObject__iterator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html)
pub const QJsonObject__const_iterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJsonObject__const_iterator,

    pub const _is_QJsonObject__const_iterator = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJsonObject::const_iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject__const_iterator `
    ///
    pub fn new(other: anytype) QJsonObject__const_iterator {
        comptime _ = @TypeOf(other)._is_QJsonObject__const_iterator;
        return .{ .ptr = qtc.QJsonObject__const_iterator_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJsonObject::const_iterator object in C++ memory
    ///
    pub fn new2() QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJsonObject::const_iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QJsonObject `
    ///
    /// ` index: isize `
    ///
    pub fn new3(obj: anytype, index: isize) QJsonObject__const_iterator {
        comptime _ = @TypeOf(obj)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonObject__const_iterator_new3(@ptrCast(obj.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJsonObject::const_iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject__iterator `
    ///
    pub fn new4(other: anytype) QJsonObject__const_iterator {
        comptime _ = @TypeOf(other)._is_QJsonObject__iterator;
        return .{ .ptr = qtc.QJsonObject__const_iterator_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QJsonObject::const_iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject__const_iterator `
    ///
    pub fn new5(other: anytype) QJsonObject__const_iterator {
        comptime _ = @TypeOf(other)._is_QJsonObject__const_iterator;
        return .{ .ptr = qtc.QJsonObject__const_iterator_new5(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` other: QJsonObject__const_iterator `
    ///
    pub fn operatorAssign(self: QJsonObject__const_iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonObject__const_iterator;
        qtc.QJsonObject__const_iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn key(self: QJsonObject__const_iterator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonObject__const_iterator_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJsonObject__const_iterator.key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn value(self: QJsonObject__const_iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonObject__const_iterator_Value(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn operatorMultiply(self: QJsonObject__const_iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater` instead
    ///
    pub const OperatorMinusGreater = operatorMinusGreater;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn operatorMinusGreater(self: QJsonObject__const_iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorSubscript(self: QJsonObject__const_iterator, j: isize) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn operatorPlusPlus(self: QJsonObject__const_iterator) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QJsonObject__const_iterator, param1: i32) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn operatorMinusMinus(self: QJsonObject__const_iterator) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QJsonObject__const_iterator, param1: i32) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlus(self: QJsonObject__const_iterator, j: isize) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus` instead
    ///
    pub const OperatorMinus = operatorMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinus(self: QJsonObject__const_iterator, j: isize) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlusAssign(self: QJsonObject__const_iterator, j: isize) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinusAssign(self: QJsonObject__const_iterator, j: isize) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus2` instead
    ///
    pub const OperatorMinus2 = operatorMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: QJsonObject__const_iterator `
    ///
    pub fn operatorMinus2(self: QJsonObject__const_iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QJsonObject__const_iterator;
        return qtc.QJsonObject__const_iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn delete(self: QJsonObject__const_iterator) void {
        qtc.QJsonObject__const_iterator_Delete(@ptrCast(self.ptr));
    }
};
