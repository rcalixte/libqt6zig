const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QCborValue = @import("libqt6").QCborValue;
const QCborValueConstRef = @import("libqt6").QCborValueConstRef;
const QCborValueRef = @import("libqt6").QCborValueRef;
const QJsonObject = @import("libqt6").QJsonObject;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);
const Map_constu8_QVariant = std.StringHashMapUnmanaged(QVariant);
const Struct_QCborValue_QCborValue = extern struct { first: QCborValue, second: QCborValue };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html)
pub const QCborMap = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborMap,

    pub const _is_QCborMap = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborMap object in C++ memory
    ///
    pub fn new() QCborMap {
        return .{ .ptr = qtc.QCborMap_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCborMap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborMap `
    ///
    pub fn new2(other: anytype) QCborMap {
        comptime _ = @TypeOf(other)._is_QCborMap;
        return .{ .ptr = qtc.QCborMap_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` other: QCborMap `
    ///
    pub fn operatorAssign(self: QCborMap, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborMap;
        qtc.QCborMap_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` other: QCborMap `
    ///
    pub fn swap(self: QCborMap, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborMap;
        qtc.QCborMap_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toCborValue` instead
    ///
    pub const ToCborValue = toCborValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toCborValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn toCborValue(self: QCborMap) QCborValue {
        return .{ .ptr = qtc.QCborMap_ToCborValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn size(self: QCborMap) isize {
        return qtc.QCborMap_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn isEmpty(self: QCborMap) bool {
        return qtc.QCborMap_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn clear(self: QCborMap) void {
        qtc.QCborMap_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keys` instead
    ///
    pub const Keys = keys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keys(self: QCborMap, allocator: std.mem.Allocator) []QCborValue {
        const _arr: qtc.libqt_list = qtc.QCborMap_Keys(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QCborValue, _arr.len) catch @panic("QCborMap.keys: Memory allocation failed");
        const _data_val: [*]QtC.QCborValue = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn value(self: QCborMap, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborMap_Value(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `value2` instead
    ///
    pub const Value2 = value2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []u8 `
    ///
    pub fn value2(self: QCborMap, key: []u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Value2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `value3` instead
    ///
    pub const Value3 = value3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn value3(self: QCborMap, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Value3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `value4` instead
    ///
    pub const Value4 = value4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn value4(self: QCborMap, key: anytype) QCborValue {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Value4(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn operatorSubscript(self: QCborMap, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborMap_OperatorSubscript(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript2(self: QCborMap, key: []u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_OperatorSubscript2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript3` instead
    ///
    pub const OperatorSubscript3 = operatorSubscript3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript3(self: QCborMap, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_OperatorSubscript3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript4` instead
    ///
    pub const OperatorSubscript4 = operatorSubscript4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn operatorSubscript4(self: QCborMap, key: anytype) QCborValue {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_OperatorSubscript4(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript5` instead
    ///
    pub const OperatorSubscript5 = operatorSubscript5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn operatorSubscript5(self: QCborMap, key: i64) QCborValueRef {
        return .{ .ptr = qtc.QCborMap_OperatorSubscript5(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript6` instead
    ///
    pub const OperatorSubscript6 = operatorSubscript6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript6(self: QCborMap, key: []u8) QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_OperatorSubscript6(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript7` instead
    ///
    pub const OperatorSubscript7 = operatorSubscript7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript7(self: QCborMap, key: []const u8) QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_OperatorSubscript7(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript8` instead
    ///
    pub const OperatorSubscript8 = operatorSubscript8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn operatorSubscript8(self: QCborMap, key: anytype) QCborValueRef {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_OperatorSubscript8(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### DEPRECATED: Use `take` instead
    ///
    pub const Take = take;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn take(self: QCborMap, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborMap_Take(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `take2` instead
    ///
    pub const Take2 = take2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []u8 `
    ///
    pub fn take2(self: QCborMap, key: []u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Take2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `take3` instead
    ///
    pub const Take3 = take3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn take3(self: QCborMap, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Take3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `take4` instead
    ///
    pub const Take4 = take4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn take4(self: QCborMap, key: anytype) QCborValue {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Take4(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn remove(self: QCborMap, key: i64) void {
        qtc.QCborMap_Remove(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `remove2` instead
    ///
    pub const Remove2 = remove2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []u8 `
    ///
    pub fn remove2(self: QCborMap, key: []u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QCborMap_Remove2(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `remove3` instead
    ///
    pub const Remove3 = remove3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn remove3(self: QCborMap, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QCborMap_Remove3(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `remove4` instead
    ///
    pub const Remove4 = remove4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn remove4(self: QCborMap, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QCborValue;
        qtc.QCborMap_Remove4(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn contains(self: QCborMap, key: i64) bool {
        return qtc.QCborMap_Contains(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### DEPRECATED: Use `contains2` instead
    ///
    pub const Contains2 = contains2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []u8 `
    ///
    pub fn contains2(self: QCborMap, key: []u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Contains2(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `contains3` instead
    ///
    pub const Contains3 = contains3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn contains3(self: QCborMap, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Contains3(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `contains4` instead
    ///
    pub const Contains4 = contains4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn contains4(self: QCborMap, key: anytype) bool {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return qtc.QCborMap_Contains4(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` other: QCborMap `
    ///
    pub fn compare(self: QCborMap, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QCborMap;
        return qtc.QCborMap_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn begin(self: QCborMap) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `constBegin` instead
    ///
    pub const ConstBegin = constBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn constBegin(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_ConstBegin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `begin2` instead
    ///
    pub const Begin2 = begin2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn begin2(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_Begin2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cbegin` instead
    ///
    pub const Cbegin = cbegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn cbegin(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_Cbegin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn end(self: QCborMap) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `constEnd` instead
    ///
    pub const ConstEnd = constEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn constEnd(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_ConstEnd(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end2` instead
    ///
    pub const End2 = end2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn end2(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_End2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cend` instead
    ///
    pub const Cend = cend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn cend(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_Cend(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `erase` instead
    ///
    pub const Erase = erase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` it: QCborMap__Iterator `
    ///
    pub fn erase(self: QCborMap, it: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(it)._is_QCborMap__Iterator;
        return .{ .ptr = qtc.QCborMap_Erase(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### DEPRECATED: Use `erase2` instead
    ///
    pub const Erase2 = erase2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` it: QCborMap__ConstIterator `
    ///
    pub fn erase2(self: QCborMap, it: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(it)._is_QCborMap__ConstIterator;
        return .{ .ptr = qtc.QCborMap_Erase2(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### DEPRECATED: Use `extract` instead
    ///
    pub const Extract = extract;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` it: QCborMap__Iterator `
    ///
    pub fn extract(self: QCborMap, it: anytype) QCborValue {
        comptime _ = @TypeOf(it)._is_QCborMap__Iterator;
        return .{ .ptr = qtc.QCborMap_Extract(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### DEPRECATED: Use `extract2` instead
    ///
    pub const Extract2 = extract2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` it: QCborMap__ConstIterator `
    ///
    pub fn extract2(self: QCborMap, it: anytype) QCborValue {
        comptime _ = @TypeOf(it)._is_QCborMap__ConstIterator;
        return .{ .ptr = qtc.QCborMap_Extract2(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### DEPRECATED: Use `empty` instead
    ///
    pub const Empty = empty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn empty(self: QCborMap) bool {
        return qtc.QCborMap_Empty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn find(self: QCborMap, key: i64) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap_Find(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `find2` instead
    ///
    pub const Find2 = find2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []u8 `
    ///
    pub fn find2(self: QCborMap, key: []u8) QCborMap__Iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Find2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `find3` instead
    ///
    pub const Find3 = find3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn find3(self: QCborMap, key: []const u8) QCborMap__Iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Find3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `find4` instead
    ///
    pub const Find4 = find4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn find4(self: QCborMap, key: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Find4(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### DEPRECATED: Use `constFind` instead
    ///
    pub const ConstFind = constFind;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn constFind(self: QCborMap, key: i64) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_ConstFind(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `constFind2` instead
    ///
    pub const ConstFind2 = constFind2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []u8 `
    ///
    pub fn constFind2(self: QCborMap, key: []u8) QCborMap__ConstIterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_ConstFind2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `constFind3` instead
    ///
    pub const ConstFind3 = constFind3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn constFind3(self: QCborMap, key: []const u8) QCborMap__ConstIterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_ConstFind3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `constFind4` instead
    ///
    pub const ConstFind4 = constFind4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn constFind4(self: QCborMap, key: anytype) QCborMap__ConstIterator {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_ConstFind4(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### DEPRECATED: Use `find5` instead
    ///
    pub const Find5 = find5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn find5(self: QCborMap, key: i64) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_Find5(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `find6` instead
    ///
    pub const Find6 = find6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []u8 `
    ///
    pub fn find6(self: QCborMap, key: []u8) QCborMap__ConstIterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Find6(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `find7` instead
    ///
    pub const Find7 = find7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn find7(self: QCborMap, key: []const u8) QCborMap__ConstIterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Find7(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `find8` instead
    ///
    pub const Find8 = find8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn find8(self: QCborMap, key: anytype) QCborMap__ConstIterator {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Find8(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    /// ` value_: QCborValue `
    ///
    pub fn insert(self: QCborMap, key: i64, value_: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(value_)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Insert(@ptrCast(self.ptr), @bitCast(key), @ptrCast(value_.ptr)) };
    }

    /// ### DEPRECATED: Use `insert2` instead
    ///
    pub const Insert2 = insert2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []u8 `
    ///
    /// ` value_: QCborValue `
    ///
    pub fn insert2(self: QCborMap, key: []u8, value_: anytype) QCborMap__Iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value_)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Insert2(@ptrCast(self.ptr), key_str, @ptrCast(value_.ptr)) };
    }

    /// ### DEPRECATED: Use `insert3` instead
    ///
    pub const Insert3 = insert3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value_: QCborValue `
    ///
    pub fn insert3(self: QCborMap, key: []const u8, value_: anytype) QCborMap__Iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value_)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Insert3(@ptrCast(self.ptr), key_str, @ptrCast(value_.ptr)) };
    }

    /// ### DEPRECATED: Use `insert4` instead
    ///
    pub const Insert4 = insert4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    /// ` value_: QCborValue `
    ///
    pub fn insert4(self: QCborMap, key: anytype, value_: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(key)._is_QCborValue;
        comptime _ = @TypeOf(value_)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Insert4(@ptrCast(self.ptr), @ptrCast(key.ptr), @ptrCast(value_.ptr)) };
    }

    /// ### DEPRECATED: Use `insert5` instead
    ///
    pub const Insert5 = insert5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` v: Struct_QCborValue_QCborValue `
    ///
    pub fn insert5(self: QCborMap, v: Struct_QCborValue_QCborValue) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap_Insert5(@ptrCast(self.ptr), .{
            .first = @ptrCast(v.first.ptr),
            .second = @ptrCast(v.second.ptr),
        }) };
    }

    /// ### DEPRECATED: Use `fromVariantMap` instead
    ///
    pub const FromVariantMap = fromVariantMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromVariantMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` map: ArrayMap_constu8_QVariant `
    ///
    pub fn fromVariantMap(allocator: std.mem.Allocator, map: ArrayMap_constu8_QVariant) QCborMap {
        const map_count = map.count();
        const map_keys = allocator.alloc(qtc.libqt_string, map_count) catch @panic("QCborMap.fromVariantMap: Memory allocation failed");
        defer allocator.free(map_keys);
        const map_values = allocator.alloc(QtC.QVariant, map_count) catch @panic("QCborMap.fromVariantMap: Memory allocation failed");
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
        return .{ .ptr = qtc.QCborMap_FromVariantMap(map_map) };
    }

    /// ### DEPRECATED: Use `fromVariantHash` instead
    ///
    pub const FromVariantHash = fromVariantHash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromVariantHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` hash: Map_constu8_QVariant `
    ///
    pub fn fromVariantHash(allocator: std.mem.Allocator, hash: Map_constu8_QVariant) QCborMap {
        const hash_count = hash.count();
        const hash_keys = allocator.alloc(qtc.libqt_string, hash_count) catch @panic("QCborMap.fromVariantHash: Memory allocation failed");
        defer allocator.free(hash_keys);
        const hash_values = allocator.alloc(QtC.QVariant, hash_count) catch @panic("QCborMap.fromVariantHash: Memory allocation failed");
        defer allocator.free(hash_values);
        var i: usize = 0;
        var hash_it = hash.iterator();
        while (hash_it.next()) |it_entry| : (i += 1) {
            const hash_key = it_entry.key_ptr.*;
            hash_keys[i] = qtc.libqt_string{
                .len = hash_key.len,
                .data = hash_key.ptr,
            };
            hash_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const hash_map = qtc.libqt_map{
            .len = hash_count,
            .keys = @ptrCast(hash_keys.ptr),
            .values = @ptrCast(hash_values.ptr),
        };
        return .{ .ptr = qtc.QCborMap_FromVariantHash(hash_map) };
    }

    /// ### DEPRECATED: Use `fromJsonObject` instead
    ///
    pub const FromJsonObject = fromJsonObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromJsonObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QJsonObject `
    ///
    pub fn fromJsonObject(o: anytype) QCborMap {
        comptime _ = @TypeOf(o)._is_QJsonObject;
        return .{ .ptr = qtc.QCborMap_FromJsonObject(@ptrCast(o.ptr)) };
    }

    /// ### DEPRECATED: Use `toVariantMap` instead
    ///
    pub const ToVariantMap = toVariantMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toVariantMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toVariantMap(self: QCborMap, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QCborMap_ToVariantMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QCborMap.toVariantMap: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QCborMap.toVariantMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `toVariantHash` instead
    ///
    pub const ToVariantHash = toVariantHash;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toVariantHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toVariantHash(self: QCborMap, allocator: std.mem.Allocator) Map_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QCborMap_ToVariantHash(@ptrCast(self.ptr));
        var _ret: Map_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QCborMap.toVariantHash: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("QCborMap.toVariantHash: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `toJsonObject` instead
    ///
    pub const ToJsonObject = toJsonObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toJsonObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn toJsonObject(self: QCborMap) QJsonObject {
        return .{ .ptr = qtc.QCborMap_ToJsonObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#dtor.QCborMap)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborMap `
    ///
    pub fn delete(self: QCborMap) void {
        qtc.QCborMap_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html)
pub const QCborMap__Iterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborMap__Iterator,

    pub const _is_QCborMap__Iterator = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborMap::Iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborMap__Iterator `
    ///
    pub fn new(other: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(other)._is_QCborMap__Iterator;
        return .{ .ptr = qtc.QCborMap__Iterator_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCborMap::Iterator object in C++ memory
    ///
    pub fn new2() QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCborMap::Iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborMap__Iterator `
    ///
    pub fn new3(param1: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(param1)._is_QCborMap__Iterator;
        return .{ .ptr = qtc.QCborMap__Iterator_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` other: QCborMap__Iterator `
    ///
    pub fn operatorAssign(self: QCborMap__Iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborMap__Iterator;
        qtc.QCborMap__Iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn operatorMultiply(self: QCborMap__Iterator) Struct_QCborValue_QCborValue {
        const _pair = qtc.QCborMap__Iterator_OperatorMultiply(@ptrCast(self.ptr));
        return .{
            .first = .{ .ptr = @ptrCast(_pair.first) },
            .second = .{ .ptr = @ptrCast(_pair.second) },
        };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorSubscript(self: QCborMap__Iterator, j: isize) Struct_QCborValue_QCborValue {
        const _pair = qtc.QCborMap__Iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j));
        return .{
            .first = .{ .ptr = @ptrCast(_pair.first) },
            .second = .{ .ptr = @ptrCast(_pair.second) },
        };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater` instead
    ///
    pub const OperatorMinusGreater = operatorMinusGreater;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn operatorMinusGreater(self: QCborMap__Iterator) QCborValueRef {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater2` instead
    ///
    pub const OperatorMinusGreater2 = operatorMinusGreater2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn operatorMinusGreater2(self: QCborMap__Iterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinusGreater2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn key(self: QCborMap__Iterator) QCborValue {
        return .{ .ptr = qtc.QCborMap__Iterator_Key(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn value(self: QCborMap__Iterator) QCborValueRef {
        return .{ .ptr = qtc.QCborMap__Iterator_Value(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn operatorPlusPlus(self: QCborMap__Iterator) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QCborMap__Iterator, param1: i32) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn operatorMinusMinus(self: QCborMap__Iterator) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QCborMap__Iterator, param1: i32) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlusAssign(self: QCborMap__Iterator, j: isize) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinusAssign(self: QCborMap__Iterator, j: isize) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlus(self: QCborMap__Iterator, j: isize) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus` instead
    ///
    pub const OperatorMinus = operatorMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinus(self: QCborMap__Iterator, j: isize) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus2` instead
    ///
    pub const OperatorMinus2 = operatorMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: QCborMap__Iterator `
    ///
    pub fn operatorMinus2(self: QCborMap__Iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QCborMap__Iterator;
        return qtc.QCborMap__Iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn delete(self: QCborMap__Iterator) void {
        qtc.QCborMap__Iterator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html)
pub const QCborMap__ConstIterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborMap__ConstIterator,

    pub const _is_QCborMap__ConstIterator = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborMap::ConstIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborMap__ConstIterator `
    ///
    pub fn new(other: anytype) QCborMap__ConstIterator {
        comptime _ = @TypeOf(other)._is_QCborMap__ConstIterator;
        return .{ .ptr = qtc.QCborMap__ConstIterator_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCborMap::ConstIterator object in C++ memory
    ///
    pub fn new2() QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCborMap::ConstIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborMap__ConstIterator `
    ///
    pub fn new3(param1: anytype) QCborMap__ConstIterator {
        comptime _ = @TypeOf(param1)._is_QCborMap__ConstIterator;
        return .{ .ptr = qtc.QCborMap__ConstIterator_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` other: QCborMap__ConstIterator `
    ///
    pub fn operatorAssign(self: QCborMap__ConstIterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborMap__ConstIterator;
        qtc.QCborMap__ConstIterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn operatorMultiply(self: QCborMap__ConstIterator) Struct_QCborValue_QCborValue {
        const _pair = qtc.QCborMap__ConstIterator_OperatorMultiply(@ptrCast(self.ptr));
        return .{
            .first = .{ .ptr = @ptrCast(_pair.first) },
            .second = .{ .ptr = @ptrCast(_pair.second) },
        };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorSubscript(self: QCborMap__ConstIterator, j: isize) Struct_QCborValue_QCborValue {
        const _pair = qtc.QCborMap__ConstIterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j));
        return .{
            .first = .{ .ptr = @ptrCast(_pair.first) },
            .second = .{ .ptr = @ptrCast(_pair.second) },
        };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater` instead
    ///
    pub const OperatorMinusGreater = operatorMinusGreater;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn operatorMinusGreater(self: QCborMap__ConstIterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `key` instead
    ///
    pub const Key = key;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn key(self: QCborMap__ConstIterator) QCborValue {
        return .{ .ptr = qtc.QCborMap__ConstIterator_Key(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn value(self: QCborMap__ConstIterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborMap__ConstIterator_Value(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn operatorPlusPlus(self: QCborMap__ConstIterator) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QCborMap__ConstIterator, param1: i32) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn operatorMinusMinus(self: QCborMap__ConstIterator) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QCborMap__ConstIterator, param1: i32) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlusAssign(self: QCborMap__ConstIterator, j: isize) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinusAssign(self: QCborMap__ConstIterator, j: isize) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlus(self: QCborMap__ConstIterator, j: isize) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus` instead
    ///
    pub const OperatorMinus = operatorMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinus(self: QCborMap__ConstIterator, j: isize) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus2` instead
    ///
    pub const OperatorMinus2 = operatorMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: QCborMap__ConstIterator `
    ///
    pub fn operatorMinus2(self: QCborMap__ConstIterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QCborMap__ConstIterator;
        return qtc.QCborMap__ConstIterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn delete(self: QCborMap__ConstIterator) void {
        qtc.QCborMap__ConstIterator_Delete(@ptrCast(self.ptr));
    }
};
