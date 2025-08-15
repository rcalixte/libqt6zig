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

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator-eq)
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
        const mapVal_keys = allocator.alloc(qtc.libqt_string, mapVal.count()) catch @panic("qjsonobject.FromVariantMap: Memory allocation failed");
        defer allocator.free(mapVal_keys);
        const mapVal_values = allocator.alloc(QtC.QVariant, mapVal.count()) catch @panic("qjsonobject.FromVariantMap: Memory allocation failed");
        defer allocator.free(mapVal_values);
        var i: usize = 0;
        var mapVal_it = mapVal.iterator();
        while (mapVal_it.next()) |entry| {
            const key = entry.key_ptr.*;
            mapVal_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            mapVal_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const mapVal_map = qtc.libqt_map{
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
        const _map: qtc.libqt_map = qtc.QJsonObject_ToVariantMap(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
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
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("qjsonobject.ToVariantMap: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantHash)
    ///
    /// ``` mapVal: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn FromVariantHash(mapVal: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QJsonObject {
        const mapVal_keys = allocator.alloc(qtc.libqt_string, mapVal.count()) catch @panic("qjsonobject.FromVariantHash: Memory allocation failed");
        defer allocator.free(mapVal_keys);
        const mapVal_values = allocator.alloc(QtC.QVariant, mapVal.count()) catch @panic("qjsonobject.FromVariantHash: Memory allocation failed");
        defer allocator.free(mapVal_values);
        var i: usize = 0;
        var mapVal_it = mapVal.iterator();
        while (mapVal_it.next()) |entry| {
            const key = entry.key_ptr.*;
            mapVal_keys[i] = qtc.libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            mapVal_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const mapVal_map = qtc.libqt_map{
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
        const _map: qtc.libqt_map = qtc.QJsonObject_ToVariantHash(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
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
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("qjsonobject.ToVariantHash: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#keys)
    ///
    /// ``` self: QtC.QJsonObject, allocator: std.mem.Allocator ```
    pub fn Keys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QJsonObject_Keys(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qjsonobject.Keys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qjsonobject.Keys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
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
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Value(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_OperatorSubscript(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn OperatorSubscript2(self: ?*anyopaque, key: []const u8) QtC.QJsonValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_OperatorSubscript2(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#remove)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Remove(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QJsonObject_Remove(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#take)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Take(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Take(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#contains)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Contains(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Contains(@ptrCast(self), key_str);
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
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Find(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#find)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Find2(self: ?*anyopaque, key: []const u8) QtC.QJsonObject__const_iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Find2(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn ConstFind(self: ?*anyopaque, key: []const u8) QtC.QJsonObject__const_iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_ConstFind(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#insert)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8, value: QtC.QJsonValue ```
    pub fn Insert(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) QtC.QJsonObject__iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-eq)
    ///
    /// ``` self: QtC.QJsonObject__iterator, other: QtC.QJsonObject__iterator ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonObject__iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#key)
    ///
    /// ``` self: QtC.QJsonObject__iterator, allocator: std.mem.Allocator ```
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonObject__iterator_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonobject::iterator.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#value)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn Value(self: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonObject__iterator_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2a)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn OperatorMultiply(self: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonObject__iterator_OperatorMultiply(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--gt)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonObject__iterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--gt)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn OperatorMinusGreater2(self: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonObject__iterator_OperatorMinusGreater2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-5b-5d)
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) QtC.QJsonValueRef {
        return qtc.QJsonObject__iterator_OperatorSubscript(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-2b)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn OperatorPlusPlus(self: ?*anyopaque) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-2b)
    ///
    /// ``` self: QtC.QJsonObject__iterator, param1: i32 ```
    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorPlusPlus2(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonObject__iterator ```
    pub fn OperatorMinusMinus(self: ?*anyopaque) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonObject__iterator, param1: i32 ```
    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorMinusMinus2(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b)
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: i64 ```
    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorPlus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: i64 ```
    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorMinus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-eq)
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: i64 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorPlusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--eq)
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: i64 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QJsonObject__iterator {
        return qtc.QJsonObject__iterator_OperatorMinusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonObject__iterator, j: QtC.QJsonObject__iterator ```
    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QJsonObject__iterator) i64 {
        return qtc.QJsonObject__iterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator-eq)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, other: QtC.QJsonObject__const_iterator ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonObject__const_iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#key)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, allocator: std.mem.Allocator ```
    pub fn Key(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonObject__const_iterator_Key(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonobject::const_iterator.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#value)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn Value(self: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonObject__const_iterator_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator-2a)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn OperatorMultiply(self: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonObject__const_iterator_OperatorMultiply(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator--gt)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonObject__const_iterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator-5b-5d)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) QtC.QJsonValueConstRef {
        return qtc.QJsonObject__const_iterator_OperatorSubscript(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator-2b-2b)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn OperatorPlusPlus(self: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator-2b-2b)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, param1: i32 ```
    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorPlusPlus2(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn OperatorMinusMinus(self: ?*anyopaque) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, param1: i32 ```
    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorMinusMinus2(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator-2b)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: i64 ```
    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorPlus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: i64 ```
    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorMinus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator-2b-eq)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: i64 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorPlusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator--eq)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: i64 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QJsonObject__const_iterator {
        return qtc.QJsonObject__const_iterator_OperatorMinusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject-const_iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonObject__const_iterator, j: QtC.QJsonObject__const_iterator ```
    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QJsonObject__const_iterator) i64 {
        return qtc.QJsonObject__const_iterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonObject__const_iterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonObject__const_iterator_Delete(@ptrCast(self));
    }
};
