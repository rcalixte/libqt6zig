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
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Value(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator[])
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_OperatorSubscript(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#operator[])
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn OperatorSubscript2(self: ?*anyopaque, key: []const u8) QtC.QJsonValueRef {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_OperatorSubscript2(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#remove)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Remove(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QJsonObject_Remove(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#take)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Take(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Take(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonobject.html#contains)
    ///
    /// ``` self: QtC.QJsonObject, key: []const u8 ```
    pub fn Contains(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Contains(@ptrCast(self), key_str);
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
