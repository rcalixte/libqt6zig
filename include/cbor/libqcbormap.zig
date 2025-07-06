const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// https://doc.qt.io/qt-6/qcbormap.html
pub const qcbormap = struct {
    /// New constructs a new QCborMap object.
    ///
    ///
    pub fn New() QtC.QCborMap {
        return qtc.QCborMap_new();
    }

    /// New2 constructs a new QCborMap object.
    ///
    /// ``` other: QtC.QCborMap ```
    pub fn New2(other: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborMap_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator=)
    ///
    /// ``` self: QtC.QCborMap, other: QtC.QCborMap ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#swap)
    ///
    /// ``` self: QtC.QCborMap, other: QtC.QCborMap ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toCborValue)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn ToCborValue(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap_ToCborValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#size)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QCborMap_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#isEmpty)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QCborMap_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#clear)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QCborMap_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#keys)
    ///
    /// ``` self: QtC.QCborMap, allocator: std.mem.Allocator ```
    pub fn Keys(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QCborValue {
        const _arr: qtc.struct_libqt_list = qtc.QCborMap_Keys(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QCborValue, _arr.len) catch @panic("qcbormap.Keys: Memory allocation failed");
        const _data: [*]QtC.QCborValue = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ``` self: QtC.QCborMap, key: i64 ```
    pub fn Value(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborMap_Value(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ``` self: QtC.QCborMap, key: []const u8 ```
    pub fn Value2(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Value2(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ``` self: QtC.QCborMap, key: QtC.QCborValue ```
    pub fn Value3(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap_Value3(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
    ///
    /// ``` self: QtC.QCborMap, key: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborMap_OperatorSubscript(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
    ///
    /// ``` self: QtC.QCborMap, key: []const u8 ```
    pub fn OperatorSubscript2(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_OperatorSubscript2(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
    ///
    /// ``` self: QtC.QCborMap, key: QtC.QCborValue ```
    pub fn OperatorSubscript3(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap_OperatorSubscript3(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
    ///
    /// ``` self: QtC.QCborMap, key: i64 ```
    pub fn OperatorSubscript4(self: ?*anyopaque, key: i64) QtC.QCborValueRef {
        return qtc.QCborMap_OperatorSubscript4(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
    ///
    /// ``` self: QtC.QCborMap, key: []const u8 ```
    pub fn OperatorSubscript6(self: ?*anyopaque, key: []const u8) QtC.QCborValueRef {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_OperatorSubscript6(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator[])
    ///
    /// ``` self: QtC.QCborMap, key: QtC.QCborValue ```
    pub fn OperatorSubscript7(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborMap_OperatorSubscript7(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ``` self: QtC.QCborMap, key: i64 ```
    pub fn Take(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborMap_Take(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ``` self: QtC.QCborMap, key: []const u8 ```
    pub fn Take2(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Take2(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ``` self: QtC.QCborMap, key: QtC.QCborValue ```
    pub fn Take3(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap_Take3(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ``` self: QtC.QCborMap, key: i64 ```
    pub fn Remove(self: ?*anyopaque, key: i64) void {
        qtc.QCborMap_Remove(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ``` self: QtC.QCborMap, key: []const u8 ```
    pub fn Remove2(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QCborMap_Remove2(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ``` self: QtC.QCborMap, key: QtC.QCborValue ```
    pub fn Remove3(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QCborMap_Remove3(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ``` self: QtC.QCborMap, key: i64 ```
    pub fn Contains(self: ?*anyopaque, key: i64) bool {
        return qtc.QCborMap_Contains(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ``` self: QtC.QCborMap, key: []const u8 ```
    pub fn Contains2(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Contains2(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ``` self: QtC.QCborMap, key: QtC.QCborValue ```
    pub fn Contains3(self: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QCborMap_Contains3(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#compare)
    ///
    /// ``` self: QtC.QCborMap, other: QtC.QCborMap ```
    pub fn Compare(self: ?*anyopaque, other: ?*anyopaque) i32 {
        return qtc.QCborMap_Compare(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#empty)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QCborMap_Empty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromVariantMap)
    ///
    /// ``` mapVal: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn FromVariantMap(mapVal: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QCborMap {
        const mapVal_keys = allocator.alloc(qtc.struct_libqt_string, mapVal.count()) catch @panic("qcbormap.FromVariantMap: Memory allocation failed");
        defer allocator.free(mapVal_keys);
        const mapVal_values = allocator.alloc(QtC.QVariant, mapVal.count()) catch @panic("qcbormap.FromVariantMap: Memory allocation failed");
        defer allocator.free(mapVal_values);
        var i: usize = 0;
        var mapVal_it = mapVal.iterator();
        while (mapVal_it.next()) |entry| {
            const key = entry.key_ptr.*;
            mapVal_keys[i] = qtc.struct_libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            mapVal_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const mapVal_map = qtc.struct_libqt_map{
            .len = mapVal.count(),
            .keys = @ptrCast(mapVal_keys.ptr),
            .values = @ptrCast(mapVal_values.ptr),
        };
        return qtc.QCborMap_FromVariantMap(mapVal_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromVariantHash)
    ///
    /// ``` hash: map_constu8_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn FromVariantHash(hash: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QCborMap {
        const hash_keys = allocator.alloc(qtc.struct_libqt_string, hash.count()) catch @panic("qcbormap.FromVariantHash: Memory allocation failed");
        defer allocator.free(hash_keys);
        const hash_values = allocator.alloc(QtC.QVariant, hash.count()) catch @panic("qcbormap.FromVariantHash: Memory allocation failed");
        defer allocator.free(hash_values);
        var i: usize = 0;
        var hash_it = hash.iterator();
        while (hash_it.next()) |entry| {
            const key = entry.key_ptr.*;
            hash_keys[i] = qtc.struct_libqt_string{
                .len = key.len,
                .data = key.ptr,
            };
            hash_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const hash_map = qtc.struct_libqt_map{
            .len = hash.count(),
            .keys = @ptrCast(hash_keys.ptr),
            .values = @ptrCast(hash_values.ptr),
        };
        return qtc.QCborMap_FromVariantHash(hash_map);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#fromJsonObject)
    ///
    /// ``` o: QtC.QJsonObject ```
    pub fn FromJsonObject(o: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborMap_FromJsonObject(@ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toVariantMap)
    ///
    /// ``` self: QtC.QCborMap, allocator: std.mem.Allocator ```
    pub fn ToVariantMap(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QCborMap_ToVariantMap(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
        defer {
            const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("qcbormap.ToVariantMap: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toVariantHash)
    ///
    /// ``` self: QtC.QCborMap, allocator: std.mem.Allocator ```
    pub fn ToVariantHash(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.struct_libqt_map = qtc.QCborMap_ToVariantHash(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
        defer {
            const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("qcbormap.ToVariantHash: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#toJsonObject)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn ToJsonObject(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QCborMap_ToJsonObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#dtor.QCborMap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborMap_Delete(@ptrCast(self));
    }
};
