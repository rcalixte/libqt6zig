const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// https://doc.qt.io/qt-6/qjsonobject.html
pub const qjsonobject = struct {
    /// New constructs a new QJsonObject object.
    ///
    ///
    pub fn New() QtC.QJsonObject {
        return qtc.QJsonObject_new();
    }

    /// New2 constructs a new QJsonObject object.
    ///
    /// ``` other: QtC.QJsonObject ```
    pub fn New2(other: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonObject_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator=)
    ///
    /// ``` self: QtC.QJsonObject, other: QtC.QJsonObject ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonObject_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#swap)
    ///
    /// ``` self: QtC.QJsonObject, other: QtC.QJsonObject ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonObject_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantMap)
    ///
    /// ``` mapVal: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn FromVariantMap(mapVal: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QJsonObject {
        const mapVal_keys = allocator.alloc(qtc.struct_libqt_string, mapVal.count()) catch @panic("qjsonobject.FromVariantMap: Memory allocation failed");
        defer allocator.free(mapVal_keys);
        const mapVal_values = allocator.alloc(QtC.QVariant, mapVal.count()) catch @panic("qjsonobject.FromVariantMap: Memory allocation failed");
        defer allocator.free(mapVal_values);
        var _i: usize = 0;
        var mapVal_it = mapVal.iterator();
        while (mapVal_it.next()) |entry| {
            const key = entry.key_ptr.*;
            mapVal_keys[_i] = qtc.struct_libqt_string{
                .len = key.len,
                .data = @ptrCast(@constCast(key.ptr)),
            };
            mapVal_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const mapVal_map = qtc.struct_libqt_map{
            .len = mapVal.count(),
            .keys = @ptrCast(mapVal_keys.ptr),
            .values = @ptrCast(mapVal_values.ptr),
        };
        return qtc.QJsonObject_FromVariantMap(mapVal_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#toVariantMap)
    ///
    /// ``` self: QtC.QJsonObject, allocator: std.mem.Allocator ```
    pub fn ToVariantMap(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QJsonObject_ToVariantMap(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
        defer {
            const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |_i| {
                qtc.libqt_free(_keys[_i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[_i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("qjsonobject.ToVariantMap: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantHash)
    ///
    /// ``` mapVal: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn FromVariantHash(mapVal: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QJsonObject {
        const mapVal_keys = allocator.alloc(qtc.struct_libqt_string, mapVal.count()) catch @panic("qjsonobject.FromVariantHash: Memory allocation failed");
        defer allocator.free(mapVal_keys);
        const mapVal_values = allocator.alloc(QtC.QVariant, mapVal.count()) catch @panic("qjsonobject.FromVariantHash: Memory allocation failed");
        defer allocator.free(mapVal_values);
        var _i: usize = 0;
        var mapVal_it = mapVal.iterator();
        while (mapVal_it.next()) |entry| {
            const key = entry.key_ptr.*;
            mapVal_keys[_i] = qtc.struct_libqt_string{
                .len = key.len,
                .data = @ptrCast(@constCast(key.ptr)),
            };
            mapVal_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const mapVal_map = qtc.struct_libqt_map{
            .len = mapVal.count(),
            .keys = @ptrCast(mapVal_keys.ptr),
            .values = @ptrCast(mapVal_values.ptr),
        };
        return qtc.QJsonObject_FromVariantHash(mapVal_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#toVariantHash)
    ///
    /// ``` self: QtC.QJsonObject, allocator: std.mem.Allocator ```
    pub fn ToVariantHash(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QJsonObject_ToVariantHash(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
        defer {
            const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |_i| {
                qtc.libqt_free(_keys[_i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[_i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("qjsonobject.ToVariantHash: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#keys)
    ///
    /// ``` self: QtC.QJsonObject, allocator: std.mem.Allocator ```
    pub fn Keys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QJsonObject_Keys(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qjsonobject.Keys: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qjsonobject.Keys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#size)
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QJsonObject_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#count)
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn Count(self: ?*anyopaque) i64 {
        return qtc.QJsonObject_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#length)
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn Length(self: ?*anyopaque) i64 {
        return qtc.QJsonObject_Length(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#isEmpty)
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QJsonObject_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#value)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Value(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };
        return qtc.QJsonObject_Value(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator[])
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };
        return qtc.QJsonObject_OperatorSubscript(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator[])
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn OperatorSubscriptWithKey(self: ?*anyopaque, key: []const u8) QtC.QJsonValueRef {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };
        return qtc.QJsonObject_OperatorSubscriptWithKey(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#remove)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Remove(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };
        qtc.QJsonObject_Remove(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#take)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Take(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };
        return qtc.QJsonObject_Take(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#contains)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Contains(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };
        return qtc.QJsonObject_Contains(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator==)
    ///
    /// ``` self: QtC.QJsonObject, other: QtC.QJsonObject ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator!=)
    ///
    /// ``` self: QtC.QJsonObject, other: QtC.QJsonObject ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#begin)
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn Begin(self: ?*anyopaque) QtC.QJsonObject__iterator {
        return qtc.QJsonObject_Begin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#begin)
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn Begin2(self: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject_Begin2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#constBegin)
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn ConstBegin(self: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject_ConstBegin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#end)
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn End(self: ?*anyopaque) QtC.QJsonObject__iterator {
        return qtc.QJsonObject_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#end)
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn End2(self: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject_End2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#constEnd)
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn ConstEnd(self: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject_ConstEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#erase)
    ///
    /// ``` self: QtC.QJsonObject, it: QtC.QJsonObject__iterator ```
    pub fn Erase(self: ?*anyopaque, it: QtC.QJsonObject__iterator) QtC.QJsonObject__iterator {
        return qtc.QJsonObject_Erase(@ptrCast(self), @ptrCast(it));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#find)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Find(self: ?*anyopaque, key: []const u8) QtC.QJsonObject__iterator {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };
        return qtc.QJsonObject_Find(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#find)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn FindWithKey(self: ?*anyopaque, key: []const u8) QtC.QJsonObject__const_iterator {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };
        return qtc.QJsonObject_FindWithKey(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn ConstFind(self: ?*anyopaque, key: []const u8) QtC.QJsonObject__const_iterator {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };
        return qtc.QJsonObject_ConstFind(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#insert)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8, value: QtC.QJsonValue ```
    pub fn Insert(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) QtC.QJsonObject__iterator {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };
        return qtc.QJsonObject_Insert(@ptrCast(self), key_str, @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#empty)
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QJsonObject_Empty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#dtor.QJsonObject)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonObject ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonObject_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonobject-iterator.html
pub const qjsonobject__iterator = struct {
    /// New constructs a new QJsonObject::iterator object.
    ///
    /// ``` other: QtC.QJsonObject__iterator ```
    pub fn New(other: ?*anyopaque) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_new(@ptrCast(other));
    }

    /// New2 constructs a new QJsonObject::iterator object.
    ///
    ///
    pub fn New2() QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_new2();
    }

    /// New3 constructs a new QJsonObject::iterator object.
    ///
    /// ``` obj: QtC.QJsonObject, index: i64 ```
    pub fn New3(obj: ?*anyopaque, index: i64) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_new3(@ptrCast(obj), @intCast(index));
    }

    /// New4 constructs a new QJsonObject::iterator object.
    ///
    /// ``` other: QtC.QJsonObject__iterator ```
    pub fn New4(other: ?*anyopaque) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator=)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonObject__iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#key)
    ///
    /// ``` self: QtC.QJsonObject__iterator, allocator: std.mem.Allocator ```
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonObject__iterator_Key(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonobject::iterator.Key: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#value)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn Value(self: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonObject__iterator_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator*)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn OperatorMultiply(self: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonObject__iterator_OperatorMultiply(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator->)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonObject__iterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator->)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn OperatorMinusGreater2(self: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonObject__iterator_OperatorMinusGreater2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator[])
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) QtC.QJsonValueRef {
        return qtc.QJsonObject__iterator_OperatorSubscript(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator==)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator!=)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator<)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator<=)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorLesserOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorLesserOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator>)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorGreater(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorGreater(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator>=)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorGreaterOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorGreaterOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator++)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn OperatorPlusPlus(self: ?*anyopaque) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator++)
    ///
    /// ``` self: QtC.QJsonObject__iterator, param1: i32 ```
    pub fn OperatorPlusPlusWithInt(self: ?*anyopaque, param1: i32) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorPlusPlusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn OperatorMinusMinus(self: ?*anyopaque) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonObject__iterator, param1: i32 ```
    pub fn OperatorMinusMinusWithInt(self: ?*anyopaque, param1: i32) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorMinusMinusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator+)
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: i64 ```
    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorPlus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: i64 ```
    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorMinus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator+=)
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: i64 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorPlusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-=)
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: i64 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorMinusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: QtC.QJsonObject__iterator ```
    pub fn OperatorMinusWithQJsonObjectiterator(self: ?*anyopaque, j: QtC.QJsonObject__iterator) i64 {
        return qtc.QJsonObject__iterator_OperatorMinusWithQJsonObjectiterator(@ptrCast(self), @ptrCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator==)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator!=)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorNotEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorNotEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator<)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorLesserWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorLesserWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator<=)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorLesserOrEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorLesserOrEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator>)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorGreaterWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorGreaterWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__iterator.html#operator>=)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorGreaterOrEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__iterator_OperatorGreaterOrEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonObject__iterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonobject-const_iterator.html
pub const qjsonobject__const_iterator = struct {
    /// New constructs a new QJsonObject::const_iterator object.
    ///
    /// ``` other: QtC.QJsonObject__const_iterator ```
    pub fn New(other: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new(@ptrCast(other));
    }

    /// New2 constructs a new QJsonObject::const_iterator object.
    ///
    ///
    pub fn New2() QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new2();
    }

    /// New3 constructs a new QJsonObject::const_iterator object.
    ///
    /// ``` obj: QtC.QJsonObject, index: i64 ```
    pub fn New3(obj: ?*anyopaque, index: i64) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new3(@ptrCast(obj), @intCast(index));
    }

    /// New4 constructs a new QJsonObject::const_iterator object.
    ///
    /// ``` other: QtC.QJsonObject__iterator ```
    pub fn New4(other: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new4(@ptrCast(other));
    }

    /// New5 constructs a new QJsonObject::const_iterator object.
    ///
    /// ``` other: QtC.QJsonObject__const_iterator ```
    pub fn New5(other: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_new5(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator=)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonObject__const_iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#key)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, allocator: std.mem.Allocator ```
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonObject__const_iterator_Key(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonobject::const_iterator.Key: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#value)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn Value(self: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonObject__const_iterator_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator*)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn OperatorMultiply(self: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonObject__const_iterator_OperatorMultiply(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator->)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonObject__const_iterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator[])
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) QtC.QJsonValueConstRef {
        return qtc.QJsonObject__const_iterator_OperatorSubscript(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator==)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator!=)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator<)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator<=)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorLesserOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorLesserOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator>)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorGreater(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorGreater(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator>=)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorGreaterOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorGreaterOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator++)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn OperatorPlusPlus(self: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator++)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, param1: i32 ```
    pub fn OperatorPlusPlusWithInt(self: ?*anyopaque, param1: i32) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorPlusPlusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn OperatorMinusMinus(self: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, param1: i32 ```
    pub fn OperatorMinusMinusWithInt(self: ?*anyopaque, param1: i32) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorMinusMinusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator+)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: i64 ```
    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorPlus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: i64 ```
    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorMinus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator+=)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: i64 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorPlusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-=)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: i64 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorMinusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: QtC.QJsonObject__const_iterator ```
    pub fn OperatorMinusWithQJsonObjectconstIterator(self: ?*anyopaque, j: QtC.QJsonObject__const_iterator) i64 {
        return qtc.QJsonObject__const_iterator_OperatorMinusWithQJsonObjectconstIterator(@ptrCast(self), @ptrCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator==)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator!=)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorNotEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorNotEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator<)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorLesserWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorLesserWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator<=)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorLesserOrEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorLesserOrEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator>)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorGreaterWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorGreaterWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject__const_iterator.html#operator>=)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorGreaterOrEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonObject__const_iterator_OperatorGreaterOrEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonObject__const_iterator_Delete(@ptrCast(self));
    }
};
