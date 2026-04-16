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

    /// New constructs a new QJsonObject object.
    ///
    pub fn New() QJsonObject {
        return .{ .ptr = qtc.QJsonObject_new() };
    }

    /// New2 constructs a new QJsonObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject `
    ///
    pub fn New2(other: anytype) QJsonObject {
        comptime _ = @TypeOf(other)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonObject_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` other: QJsonObject `
    ///
    pub fn OperatorAssign(self: QJsonObject, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonObject;
        qtc.QJsonObject_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` other: QJsonObject `
    ///
    pub fn Swap(self: QJsonObject, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonObject;
        qtc.QJsonObject_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mapVal: ArrayMap_constu8_QVariant `
    ///
    pub fn FromVariantMap(allocator: std.mem.Allocator, mapVal: ArrayMap_constu8_QVariant) QJsonObject {
        const mapVal_count = mapVal.count();
        const mapVal_keys = allocator.alloc(qtc.libqt_string, mapVal_count) catch @panic("qjsonobject.FromVariantMap: Memory allocation failed");
        defer allocator.free(mapVal_keys);
        const mapVal_values = allocator.alloc(QtC.QVariant, mapVal_count) catch @panic("qjsonobject.FromVariantMap: Memory allocation failed");
        defer allocator.free(mapVal_values);
        var i: usize = 0;
        var mapVal_it = mapVal.iterator();
        while (mapVal_it.next()) |it_entry| : (i += 1) {
            const mapVal_key = it_entry.key_ptr.*;
            mapVal_keys[i] = qtc.libqt_string{
                .len = mapVal_key.len,
                .data = mapVal_key.ptr,
            };
            mapVal_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const mapVal_map = qtc.libqt_map{
            .len = mapVal_count,
            .keys = @ptrCast(mapVal_keys.ptr),
            .values = @ptrCast(mapVal_values.ptr),
        };
        return .{ .ptr = qtc.QJsonObject_FromVariantMap(mapVal_map) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#toVariantMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToVariantMap(self: QJsonObject, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QJsonObject_ToVariantMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qjsonobject.ToVariantMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qjsonobject.ToVariantMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#fromVariantHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mapVal: Map_constu8_QVariant `
    ///
    pub fn FromVariantHash(allocator: std.mem.Allocator, mapVal: Map_constu8_QVariant) QJsonObject {
        const mapVal_count = mapVal.count();
        const mapVal_keys = allocator.alloc(qtc.libqt_string, mapVal_count) catch @panic("qjsonobject.FromVariantHash: Memory allocation failed");
        defer allocator.free(mapVal_keys);
        const mapVal_values = allocator.alloc(QtC.QVariant, mapVal_count) catch @panic("qjsonobject.FromVariantHash: Memory allocation failed");
        defer allocator.free(mapVal_values);
        var i: usize = 0;
        var mapVal_it = mapVal.iterator();
        while (mapVal_it.next()) |it_entry| : (i += 1) {
            const mapVal_key = it_entry.key_ptr.*;
            mapVal_keys[i] = qtc.libqt_string{
                .len = mapVal_key.len,
                .data = mapVal_key.ptr,
            };
            mapVal_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const mapVal_map = qtc.libqt_map{
            .len = mapVal_count,
            .keys = @ptrCast(mapVal_keys.ptr),
            .values = @ptrCast(mapVal_values.ptr),
        };
        return .{ .ptr = qtc.QJsonObject_FromVariantHash(mapVal_map) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#toVariantHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToVariantHash(self: QJsonObject, allocator: std.mem.Allocator) Map_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QJsonObject_ToVariantHash(@ptrCast(self.ptr));
        var _ret: Map_constu8_QVariant = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qjsonobject.ToVariantHash: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qjsonobject.ToVariantHash: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Keys(self: QJsonObject, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QJsonObject_Keys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn Size(self: QJsonObject) isize {
        return qtc.QJsonObject_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn Count(self: QJsonObject) isize {
        return qtc.QJsonObject_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn Length(self: QJsonObject) isize {
        return qtc.QJsonObject_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn IsEmpty(self: QJsonObject) bool {
        return qtc.QJsonObject_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Value(self: QJsonObject, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Value(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript(self: QJsonObject, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript2(self: QJsonObject, key: []const u8) QJsonValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_OperatorSubscript2(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Remove(self: QJsonObject, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QJsonObject_Remove(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Take(self: QJsonObject, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Take(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Contains(self: QJsonObject, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonObject_Contains(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn Begin(self: QJsonObject) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject_Begin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn Begin2(self: QJsonObject) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject_Begin2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn ConstBegin(self: QJsonObject) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject_ConstBegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn End(self: QJsonObject) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn End2(self: QJsonObject) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject_End2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn ConstEnd(self: QJsonObject) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject_ConstEnd(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` it: QJsonObject__iterator `
    ///
    pub fn Erase(self: QJsonObject, it: anytype) QJsonObject__iterator {
        comptime _ = @TypeOf(it)._is_QJsonObject__iterator;
        return .{ .ptr = qtc.QJsonObject_Erase(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Find(self: QJsonObject, key: []const u8) QJsonObject__iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Find(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Find2(self: QJsonObject, key: []const u8) QJsonObject__const_iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_Find2(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ConstFind(self: QJsonObject, key: []const u8) QJsonObject__const_iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonObject_ConstFind(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QJsonValue `
    ///
    pub fn Insert(self: QJsonObject, key: []const u8, value: anytype) QJsonObject__iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonObject_Insert(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject `
    ///
    pub fn Empty(self: QJsonObject) bool {
        return qtc.QJsonObject_Empty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject.html#dtor.QJsonObject)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonObject `
    ///
    pub fn Delete(self: QJsonObject) void {
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

    /// New constructs a new QJsonObject::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject__iterator `
    ///
    pub fn New(other: anytype) QJsonObject__iterator {
        comptime _ = @TypeOf(other)._is_QJsonObject__iterator;
        return .{ .ptr = qtc.QJsonObject__iterator_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QJsonObject::iterator object.
    ///
    pub fn New2() QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_new2() };
    }

    /// New3 constructs a new QJsonObject::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QJsonObject `
    ///
    /// ` index: isize `
    ///
    pub fn New3(obj: anytype, index: isize) QJsonObject__iterator {
        comptime _ = @TypeOf(obj)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonObject__iterator_new3(@ptrCast(obj.ptr), @bitCast(index)) };
    }

    /// New4 constructs a new QJsonObject::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject__iterator `
    ///
    pub fn New4(other: anytype) QJsonObject__iterator {
        comptime _ = @TypeOf(other)._is_QJsonObject__iterator;
        return .{ .ptr = qtc.QJsonObject__iterator_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` other: QJsonObject__iterator `
    ///
    pub fn OperatorAssign(self: QJsonObject__iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonObject__iterator;
        qtc.QJsonObject__iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: QJsonObject__iterator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonObject__iterator_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonobject__iterator.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn Value(self: QJsonObject__iterator) QJsonValueRef {
        return .{ .ptr = qtc.QJsonObject__iterator_Value(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn OperatorMultiply(self: QJsonObject__iterator) QJsonValueRef {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn OperatorMinusGreater(self: QJsonObject__iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn OperatorMinusGreater2(self: QJsonObject__iterator) QJsonValueRef {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinusGreater2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorSubscript(self: QJsonObject__iterator, j: isize) QJsonValueRef {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn OperatorPlusPlus(self: QJsonObject__iterator) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QJsonObject__iterator, param1: i32) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn OperatorMinusMinus(self: QJsonObject__iterator) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: QJsonObject__iterator, param1: i32) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlus(self: QJsonObject__iterator, j: isize) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinus(self: QJsonObject__iterator, j: isize) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlusAssign(self: QJsonObject__iterator, j: isize) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinusAssign(self: QJsonObject__iterator, j: isize) QJsonObject__iterator {
        return .{ .ptr = qtc.QJsonObject__iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__iterator `
    ///
    /// ` j: QJsonObject__iterator `
    ///
    pub fn OperatorMinus2(self: QJsonObject__iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QJsonObject__iterator;
        return qtc.QJsonObject__iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonObject__iterator `
    ///
    pub fn Delete(self: QJsonObject__iterator) void {
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

    /// New constructs a new QJsonObject::const_iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject__const_iterator `
    ///
    pub fn New(other: anytype) QJsonObject__const_iterator {
        comptime _ = @TypeOf(other)._is_QJsonObject__const_iterator;
        return .{ .ptr = qtc.QJsonObject__const_iterator_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QJsonObject::const_iterator object.
    ///
    pub fn New2() QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_new2() };
    }

    /// New3 constructs a new QJsonObject::const_iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QJsonObject `
    ///
    /// ` index: isize `
    ///
    pub fn New3(obj: anytype, index: isize) QJsonObject__const_iterator {
        comptime _ = @TypeOf(obj)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonObject__const_iterator_new3(@ptrCast(obj.ptr), @bitCast(index)) };
    }

    /// New4 constructs a new QJsonObject::const_iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject__iterator `
    ///
    pub fn New4(other: anytype) QJsonObject__const_iterator {
        comptime _ = @TypeOf(other)._is_QJsonObject__iterator;
        return .{ .ptr = qtc.QJsonObject__const_iterator_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new QJsonObject::const_iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonObject__const_iterator `
    ///
    pub fn New5(other: anytype) QJsonObject__const_iterator {
        comptime _ = @TypeOf(other)._is_QJsonObject__const_iterator;
        return .{ .ptr = qtc.QJsonObject__const_iterator_new5(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` other: QJsonObject__const_iterator `
    ///
    pub fn OperatorAssign(self: QJsonObject__const_iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonObject__const_iterator;
        qtc.QJsonObject__const_iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Key(self: QJsonObject__const_iterator, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonObject__const_iterator_Key(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonobject__const_iterator.Key: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn Value(self: QJsonObject__const_iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonObject__const_iterator_Value(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn OperatorMultiply(self: QJsonObject__const_iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn OperatorMinusGreater(self: QJsonObject__const_iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorSubscript(self: QJsonObject__const_iterator, j: isize) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn OperatorPlusPlus(self: QJsonObject__const_iterator) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QJsonObject__const_iterator, param1: i32) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn OperatorMinusMinus(self: QJsonObject__const_iterator) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: QJsonObject__const_iterator, param1: i32) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlus(self: QJsonObject__const_iterator, j: isize) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinus(self: QJsonObject__const_iterator, j: isize) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlusAssign(self: QJsonObject__const_iterator, j: isize) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinusAssign(self: QJsonObject__const_iterator, j: isize) QJsonObject__const_iterator {
        return .{ .ptr = qtc.QJsonObject__const_iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonobject-const-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    /// ` j: QJsonObject__const_iterator `
    ///
    pub fn OperatorMinus2(self: QJsonObject__const_iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QJsonObject__const_iterator;
        return qtc.QJsonObject__const_iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonObject__const_iterator `
    ///
    pub fn Delete(self: QJsonObject__const_iterator) void {
        qtc.QJsonObject__const_iterator_Delete(@ptrCast(self.ptr));
    }
};
