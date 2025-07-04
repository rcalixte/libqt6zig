const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);
pub const struct_qtcqcborvalue_qtcqcborvalue = struct { first: QtC.QCborValue, second: QtC.QCborValue };
pub const struct_qtcqcborvalueconstref_qtcqcborvalueconstref = struct { first: QtC.QCborValueConstRef, second: QtC.QCborValueConstRef };
pub const struct_qtcqcborvalueconstref_qtcqcborvalueref = struct { first: QtC.QCborValueConstRef, second: QtC.QCborValueRef };

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

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator==)
    ///
    /// ``` self: QtC.QCborMap, other: QtC.QCborMap ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator!=)
    ///
    /// ``` self: QtC.QCborMap, other: QtC.QCborMap ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#operator<)
    ///
    /// ``` self: QtC.QCborMap, other: QtC.QCborMap ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#begin)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn Begin(self: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Begin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constBegin)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn ConstBegin(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstBegin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#begin)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn Begin2(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Begin2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#cbegin)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn Cbegin(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Cbegin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#end)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn End(self: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constEnd)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn ConstEnd(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#end)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn End2(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_End2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#cend)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn Cend(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Cend(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#erase)
    ///
    /// ``` self: QtC.QCborMap, it: QtC.QCborMap__Iterator ```
    pub fn Erase(self: ?*anyopaque, it: QtC.QCborMap__Iterator) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Erase(@ptrCast(self), @ptrCast(it));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#erase)
    ///
    /// ``` self: QtC.QCborMap, it: QtC.QCborMap__ConstIterator ```
    pub fn EraseWithIt(self: ?*anyopaque, it: QtC.QCborMap__ConstIterator) QtC.QCborMap__Iterator {
        return qtc.QCborMap_EraseWithIt(@ptrCast(self), @ptrCast(it));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#extract)
    ///
    /// ``` self: QtC.QCborMap, it: QtC.QCborMap__Iterator ```
    pub fn Extract(self: ?*anyopaque, it: QtC.QCborMap__Iterator) QtC.QCborValue {
        return qtc.QCborMap_Extract(@ptrCast(self), @ptrCast(it));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#extract)
    ///
    /// ``` self: QtC.QCborMap, it: QtC.QCborMap__ConstIterator ```
    pub fn ExtractWithIt(self: ?*anyopaque, it: QtC.QCborMap__ConstIterator) QtC.QCborValue {
        return qtc.QCborMap_ExtractWithIt(@ptrCast(self), @ptrCast(it));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#empty)
    ///
    /// ``` self: QtC.QCborMap ```
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QCborMap_Empty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ``` self: QtC.QCborMap, key: i64 ```
    pub fn Find(self: ?*anyopaque, key: i64) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Find(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ``` self: QtC.QCborMap, key: []const u8 ```
    pub fn Find2(self: ?*anyopaque, key: []const u8) QtC.QCborMap__Iterator {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Find2(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ``` self: QtC.QCborMap, key: QtC.QCborValue ```
    pub fn Find3(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Find3(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ``` self: QtC.QCborMap, key: i64 ```
    pub fn ConstFind(self: ?*anyopaque, key: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstFind(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ``` self: QtC.QCborMap, key: []const u8 ```
    pub fn ConstFind2(self: ?*anyopaque, key: []const u8) QtC.QCborMap__ConstIterator {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_ConstFind2(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ``` self: QtC.QCborMap, key: QtC.QCborValue ```
    pub fn ConstFind3(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstFind3(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ``` self: QtC.QCborMap, key: i64 ```
    pub fn Find4(self: ?*anyopaque, key: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Find4(@ptrCast(self), @intCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ``` self: QtC.QCborMap, key: []const u8 ```
    pub fn Find6(self: ?*anyopaque, key: []const u8) QtC.QCborMap__ConstIterator {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Find6(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ``` self: QtC.QCborMap, key: QtC.QCborValue ```
    pub fn Find7(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Find7(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ``` self: QtC.QCborMap, key: i64, value_: QtC.QCborValue ```
    pub fn Insert(self: ?*anyopaque, key: i64, value_: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Insert(@ptrCast(self), @intCast(key), @ptrCast(value_));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ``` self: QtC.QCborMap, key: []const u8, value_: QtC.QCborValue ```
    pub fn Insert3(self: ?*anyopaque, key: []const u8, value_: ?*anyopaque) QtC.QCborMap__Iterator {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Insert3(@ptrCast(self), key_str, @ptrCast(value_));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ``` self: QtC.QCborMap, key: QtC.QCborValue, value_: QtC.QCborValue ```
    pub fn Insert4(self: ?*anyopaque, key: ?*anyopaque, value_: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Insert4(@ptrCast(self), @ptrCast(key), @ptrCast(value_));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ``` self: QtC.QCborMap, v: struct_qtcqcborvalue_qtcqcborvalue ```
    pub fn InsertWithQCborMapvalueType(self: ?*anyopaque, v: struct_qtcqcborvalue_qtcqcborvalue) QtC.QCborMap__Iterator {
        const v_pair = qtc.struct_libqt_pair{
            .first = @ptrCast(v.first),
            .second = @ptrCast(v.second),
        };
        return qtc.QCborMap_InsertWithQCborMapvalueType(@ptrCast(self), v_pair);
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

/// https://doc.qt.io/qt-6/qcbormap-iterator.html
pub const qcbormap__iterator = struct {
    /// New constructs a new QCborMap::Iterator object.
    ///
    /// ``` other: QtC.QCborMap__Iterator ```
    pub fn New(other: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_new(@ptrCast(other));
    }

    /// New2 constructs a new QCborMap::Iterator object.
    ///
    ///
    pub fn New2() QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_new2();
    }

    /// New3 constructs a new QCborMap::Iterator object.
    ///
    /// ``` param1: QtC.QCborMap__Iterator ```
    pub fn New3(param1: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_new3(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator=)
    ///
    /// ``` self: QtC.QCborMap__Iterator, other: QtC.QCborMap__Iterator ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap__Iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator*)
    ///
    /// ``` self: QtC.QCborMap__Iterator ```
    pub fn OperatorMultiply(self: ?*anyopaque) struct_qtcqcborvalueconstref_qtcqcborvalueref {
        const _pair: qtc.struct_libqt_pair = qtc.QCborMap__Iterator_OperatorMultiply(@ptrCast(self));
        return struct_qtcqcborvalueconstref_qtcqcborvalueref{ .first = @ptrCast(_pair.first), .second = @ptrCast(_pair.second) };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator[])
    ///
    /// ``` self: QtC.QCborMap__Iterator, j: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) struct_qtcqcborvalueconstref_qtcqcborvalueref {
        const _pair: qtc.struct_libqt_pair = qtc.QCborMap__Iterator_OperatorSubscript(@ptrCast(self), @intCast(j));
        return struct_qtcqcborvalueconstref_qtcqcborvalueref{ .first = @ptrCast(_pair.first), .second = @ptrCast(_pair.second) };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator->)
    ///
    /// ``` self: QtC.QCborMap__Iterator ```
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborMap__Iterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator->)
    ///
    /// ``` self: QtC.QCborMap__Iterator ```
    pub fn OperatorMinusGreater2(self: ?*anyopaque) QtC.QCborValueConstRef {
        return qtc.QCborMap__Iterator_OperatorMinusGreater2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#key)
    ///
    /// ``` self: QtC.QCborMap__Iterator ```
    pub fn Key(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap__Iterator_Key(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#value)
    ///
    /// ``` self: QtC.QCborMap__Iterator ```
    pub fn Value(self: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborMap__Iterator_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator==)
    ///
    /// ``` self: QtC.QCborMap__Iterator, o: QtC.QCborMap__Iterator ```
    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator!=)
    ///
    /// ``` self: QtC.QCborMap__Iterator, o: QtC.QCborMap__Iterator ```
    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<)
    ///
    /// ``` self: QtC.QCborMap__Iterator, other: QtC.QCborMap__Iterator ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<=)
    ///
    /// ``` self: QtC.QCborMap__Iterator, other: QtC.QCborMap__Iterator ```
    pub fn OperatorLesserOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorLesserOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>)
    ///
    /// ``` self: QtC.QCborMap__Iterator, other: QtC.QCborMap__Iterator ```
    pub fn OperatorGreater(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorGreater(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>=)
    ///
    /// ``` self: QtC.QCborMap__Iterator, other: QtC.QCborMap__Iterator ```
    pub fn OperatorGreaterOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorGreaterOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator==)
    ///
    /// ``` self: QtC.QCborMap__Iterator, o: QtC.QCborMap__ConstIterator ```
    pub fn OperatorEqualWithQCborMapConstIterator(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorEqualWithQCborMapConstIterator(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator!=)
    ///
    /// ``` self: QtC.QCborMap__Iterator, o: QtC.QCborMap__ConstIterator ```
    pub fn OperatorNotEqualWithQCborMapConstIterator(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorNotEqualWithQCborMapConstIterator(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<)
    ///
    /// ``` self: QtC.QCborMap__Iterator, other: QtC.QCborMap__ConstIterator ```
    pub fn OperatorLesserWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorLesserWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator<=)
    ///
    /// ``` self: QtC.QCborMap__Iterator, other: QtC.QCborMap__ConstIterator ```
    pub fn OperatorLesserOrEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorLesserOrEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>)
    ///
    /// ``` self: QtC.QCborMap__Iterator, other: QtC.QCborMap__ConstIterator ```
    pub fn OperatorGreaterWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorGreaterWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator>=)
    ///
    /// ``` self: QtC.QCborMap__Iterator, other: QtC.QCborMap__ConstIterator ```
    pub fn OperatorGreaterOrEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__Iterator_OperatorGreaterOrEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator++)
    ///
    /// ``` self: QtC.QCborMap__Iterator ```
    pub fn OperatorPlusPlus(self: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator++)
    ///
    /// ``` self: QtC.QCborMap__Iterator, param1: i32 ```
    pub fn OperatorPlusPlusWithInt(self: ?*anyopaque, param1: i32) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorPlusPlusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator--)
    ///
    /// ``` self: QtC.QCborMap__Iterator ```
    pub fn OperatorMinusMinus(self: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator--)
    ///
    /// ``` self: QtC.QCborMap__Iterator, param1: i32 ```
    pub fn OperatorMinusMinusWithInt(self: ?*anyopaque, param1: i32) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorMinusMinusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator+=)
    ///
    /// ``` self: QtC.QCborMap__Iterator, j: i64 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorPlusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator-=)
    ///
    /// ``` self: QtC.QCborMap__Iterator, j: i64 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorMinusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator+)
    ///
    /// ``` self: QtC.QCborMap__Iterator, j: i64 ```
    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorPlus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator-)
    ///
    /// ``` self: QtC.QCborMap__Iterator, j: i64 ```
    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorMinus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__iterator.html#operator-)
    ///
    /// ``` self: QtC.QCborMap__Iterator, j: QtC.QCborMap__Iterator ```
    pub fn OperatorMinusWithQCborMapIterator(self: ?*anyopaque, j: QtC.QCborMap__Iterator) i64 {
        return qtc.QCborMap__Iterator_OperatorMinusWithQCborMapIterator(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCborMap__Iterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborMap__Iterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcbormap-constiterator.html
pub const qcbormap__constiterator = struct {
    /// New constructs a new QCborMap::ConstIterator object.
    ///
    /// ``` other: QtC.QCborMap__ConstIterator ```
    pub fn New(other: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_new(@ptrCast(other));
    }

    /// New2 constructs a new QCborMap::ConstIterator object.
    ///
    ///
    pub fn New2() QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_new2();
    }

    /// New3 constructs a new QCborMap::ConstIterator object.
    ///
    /// ``` param1: QtC.QCborMap__ConstIterator ```
    pub fn New3(param1: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_new3(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator=)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, other: QtC.QCborMap__ConstIterator ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap__ConstIterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator*)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator ```
    pub fn OperatorMultiply(self: ?*anyopaque) struct_qtcqcborvalueconstref_qtcqcborvalueconstref {
        const _pair: qtc.struct_libqt_pair = qtc.QCborMap__ConstIterator_OperatorMultiply(@ptrCast(self));
        return struct_qtcqcborvalueconstref_qtcqcborvalueconstref{ .first = @ptrCast(_pair.first), .second = @ptrCast(_pair.second) };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator[])
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, j: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) struct_qtcqcborvalueconstref_qtcqcborvalueconstref {
        const _pair: qtc.struct_libqt_pair = qtc.QCborMap__ConstIterator_OperatorSubscript(@ptrCast(self), @intCast(j));
        return struct_qtcqcborvalueconstref_qtcqcborvalueconstref{ .first = @ptrCast(_pair.first), .second = @ptrCast(_pair.second) };
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator->)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator ```
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QCborValueConstRef {
        return qtc.QCborMap__ConstIterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#key)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator ```
    pub fn Key(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap__ConstIterator_Key(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#value)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator ```
    pub fn Value(self: ?*anyopaque) QtC.QCborValueConstRef {
        return qtc.QCborMap__ConstIterator_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator==)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, o: QtC.QCborMap__Iterator ```
    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator!=)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, o: QtC.QCborMap__Iterator ```
    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, other: QtC.QCborMap__Iterator ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<=)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, other: QtC.QCborMap__Iterator ```
    pub fn OperatorLesserOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorLesserOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, other: QtC.QCborMap__Iterator ```
    pub fn OperatorGreater(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorGreater(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>=)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, other: QtC.QCborMap__Iterator ```
    pub fn OperatorGreaterOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorGreaterOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator==)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, o: QtC.QCborMap__ConstIterator ```
    pub fn OperatorEqualWithQCborMapConstIterator(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorEqualWithQCborMapConstIterator(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator!=)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, o: QtC.QCborMap__ConstIterator ```
    pub fn OperatorNotEqualWithQCborMapConstIterator(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorNotEqualWithQCborMapConstIterator(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, other: QtC.QCborMap__ConstIterator ```
    pub fn OperatorLesserWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorLesserWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator<=)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, other: QtC.QCborMap__ConstIterator ```
    pub fn OperatorLesserOrEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorLesserOrEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, other: QtC.QCborMap__ConstIterator ```
    pub fn OperatorGreaterWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorGreaterWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator>=)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, other: QtC.QCborMap__ConstIterator ```
    pub fn OperatorGreaterOrEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QCborMap__ConstIterator_OperatorGreaterOrEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator++)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator ```
    pub fn OperatorPlusPlus(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator++)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, param1: i32 ```
    pub fn OperatorPlusPlusWithInt(self: ?*anyopaque, param1: i32) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorPlusPlusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator--)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator ```
    pub fn OperatorMinusMinus(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator--)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, param1: i32 ```
    pub fn OperatorMinusMinusWithInt(self: ?*anyopaque, param1: i32) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorMinusMinusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator+=)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, j: i64 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorPlusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator-=)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, j: i64 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorMinusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator+)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, j: i64 ```
    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorPlus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator-)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, j: i64 ```
    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorMinus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcbormap__constiterator.html#operator-)
    ///
    /// ``` self: QtC.QCborMap__ConstIterator, j: QtC.QCborMap__ConstIterator ```
    pub fn OperatorMinusWithQCborMapConstIterator(self: ?*anyopaque, j: QtC.QCborMap__ConstIterator) i64 {
        return qtc.QCborMap__ConstIterator_OperatorMinusWithQCborMapConstIterator(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCborMap__ConstIterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborMap__ConstIterator_Delete(@ptrCast(self));
    }
};
