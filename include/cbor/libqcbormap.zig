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

    /// New constructs a new QCborMap object.
    ///
    pub fn New() QCborMap {
        return .{ .ptr = qtc.QCborMap_new() };
    }

    /// New2 constructs a new QCborMap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborMap `
    ///
    pub fn New2(other: anytype) QCborMap {
        comptime _ = @TypeOf(other)._is_QCborMap;
        return .{ .ptr = qtc.QCborMap_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` other: QCborMap `
    ///
    pub fn OperatorAssign(self: QCborMap, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborMap;
        qtc.QCborMap_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` other: QCborMap `
    ///
    pub fn Swap(self: QCborMap, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborMap;
        qtc.QCborMap_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toCborValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn ToCborValue(self: QCborMap) QCborValue {
        return .{ .ptr = qtc.QCborMap_ToCborValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn Size(self: QCborMap) isize {
        return qtc.QCborMap_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn IsEmpty(self: QCborMap) bool {
        return qtc.QCborMap_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn Clear(self: QCborMap) void {
        qtc.QCborMap_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Keys(self: QCborMap, allocator: std.mem.Allocator) []QCborValue {
        const _arr: qtc.libqt_list = qtc.QCborMap_Keys(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QCborValue, _arr.len) catch @panic("qcbormap.Keys: Memory allocation failed");
        const _data: [*]QtC.QCborValue = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Value(self: QCborMap, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborMap_Value(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Value3(self: QCborMap, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Value3(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn Value4(self: QCborMap, key: anytype) QCborValue {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Value4(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript(self: QCborMap, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborMap_OperatorSubscript(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript3(self: QCborMap, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_OperatorSubscript3(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn OperatorSubscript4(self: QCborMap, key: anytype) QCborValue {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_OperatorSubscript4(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript5(self: QCborMap, key: i64) QCborValueRef {
        return .{ .ptr = qtc.QCborMap_OperatorSubscript5(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript7(self: QCborMap, key: []const u8) QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_OperatorSubscript7(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn OperatorSubscript8(self: QCborMap, key: anytype) QCborValueRef {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_OperatorSubscript8(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Take(self: QCborMap, key: i64) QCborValue {
        return .{ .ptr = qtc.QCborMap_Take(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Take3(self: QCborMap, key: []const u8) QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Take3(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn Take4(self: QCborMap, key: anytype) QCborValue {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Take4(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Remove(self: QCborMap, key: i64) void {
        qtc.QCborMap_Remove(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Remove3(self: QCborMap, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QCborMap_Remove3(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn Remove4(self: QCborMap, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QCborValue;
        qtc.QCborMap_Remove4(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Contains(self: QCborMap, key: i64) bool {
        return qtc.QCborMap_Contains(@ptrCast(self.ptr), @bitCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Contains3(self: QCborMap, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Contains3(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn Contains4(self: QCborMap, key: anytype) bool {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return qtc.QCborMap_Contains4(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` other: QCborMap `
    ///
    pub fn Compare(self: QCborMap, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QCborMap;
        return qtc.QCborMap_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn Begin(self: QCborMap) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap_Begin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn ConstBegin(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_ConstBegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn Begin2(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_Begin2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn Cbegin(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_Cbegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn End(self: QCborMap) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn ConstEnd(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_ConstEnd(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn End2(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_End2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn Cend(self: QCborMap) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_Cend(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` it: QCborMap__Iterator `
    ///
    pub fn Erase(self: QCborMap, it: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(it)._is_QCborMap__Iterator;
        return .{ .ptr = qtc.QCborMap_Erase(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` it: QCborMap__ConstIterator `
    ///
    pub fn Erase2(self: QCborMap, it: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(it)._is_QCborMap__ConstIterator;
        return .{ .ptr = qtc.QCborMap_Erase2(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` it: QCborMap__Iterator `
    ///
    pub fn Extract(self: QCborMap, it: anytype) QCborValue {
        comptime _ = @TypeOf(it)._is_QCborMap__Iterator;
        return .{ .ptr = qtc.QCborMap_Extract(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` it: QCborMap__ConstIterator `
    ///
    pub fn Extract2(self: QCborMap, it: anytype) QCborValue {
        comptime _ = @TypeOf(it)._is_QCborMap__ConstIterator;
        return .{ .ptr = qtc.QCborMap_Extract2(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn Empty(self: QCborMap) bool {
        return qtc.QCborMap_Empty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Find(self: QCborMap, key: i64) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap_Find(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Find3(self: QCborMap, key: []const u8) QCborMap__Iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Find3(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn Find4(self: QCborMap, key: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Find4(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn ConstFind(self: QCborMap, key: i64) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_ConstFind(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ConstFind3(self: QCborMap, key: []const u8) QCborMap__ConstIterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_ConstFind3(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn ConstFind4(self: QCborMap, key: anytype) QCborMap__ConstIterator {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_ConstFind4(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Find5(self: QCborMap, key: i64) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap_Find5(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Find7(self: QCborMap, key: []const u8) QCborMap__ConstIterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QCborMap_Find7(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` key: QCborValue `
    ///
    pub fn Find8(self: QCborMap, key: anytype) QCborMap__ConstIterator {
        comptime _ = @TypeOf(key)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Find8(@ptrCast(self.ptr), @ptrCast(key.ptr)) };
    }

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
    pub fn Insert(self: QCborMap, key: i64, value_: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(value_)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Insert(@ptrCast(self.ptr), @bitCast(key), @ptrCast(value_.ptr)) };
    }

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
    pub fn Insert3(self: QCborMap, key: []const u8, value_: anytype) QCborMap__Iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value_)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Insert3(@ptrCast(self.ptr), key_str, @ptrCast(value_.ptr)) };
    }

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
    pub fn Insert4(self: QCborMap, key: anytype, value_: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(key)._is_QCborValue;
        comptime _ = @TypeOf(value_)._is_QCborValue;
        return .{ .ptr = qtc.QCborMap_Insert4(@ptrCast(self.ptr), @ptrCast(key.ptr), @ptrCast(value_.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` v: Struct_QCborValue_QCborValue `
    ///
    pub fn Insert5(self: QCborMap, v: Struct_QCborValue_QCborValue) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap_Insert5(@ptrCast(self.ptr), @bitCast(v)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromVariantMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mapVal: ArrayMap_constu8_QVariant `
    ///
    pub fn FromVariantMap(allocator: std.mem.Allocator, mapVal: ArrayMap_constu8_QVariant) QCborMap {
        const mapVal_count = mapVal.count();
        const mapVal_keys = allocator.alloc(qtc.libqt_string, mapVal_count) catch @panic("qcbormap.FromVariantMap: Memory allocation failed");
        defer allocator.free(mapVal_keys);
        const mapVal_values = allocator.alloc(QtC.QVariant, mapVal_count) catch @panic("qcbormap.FromVariantMap: Memory allocation failed");
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
        return .{ .ptr = qtc.QCborMap_FromVariantMap(mapVal_map) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromVariantHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` hash: Map_constu8_QVariant `
    ///
    pub fn FromVariantHash(allocator: std.mem.Allocator, hash: Map_constu8_QVariant) QCborMap {
        const hash_count = hash.count();
        const hash_keys = allocator.alloc(qtc.libqt_string, hash_count) catch @panic("qcbormap.FromVariantHash: Memory allocation failed");
        defer allocator.free(hash_keys);
        const hash_values = allocator.alloc(QtC.QVariant, hash_count) catch @panic("qcbormap.FromVariantHash: Memory allocation failed");
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromJsonObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QJsonObject `
    ///
    pub fn FromJsonObject(o: anytype) QCborMap {
        comptime _ = @TypeOf(o)._is_QJsonObject;
        return .{ .ptr = qtc.QCborMap_FromJsonObject(@ptrCast(o.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toVariantMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToVariantMap(self: QCborMap, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QCborMap_ToVariantMap(@ptrCast(self.ptr));
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qcbormap.ToVariantMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qcbormap.ToVariantMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toVariantHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToVariantHash(self: QCborMap, allocator: std.mem.Allocator) Map_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.QCborMap_ToVariantHash(@ptrCast(self.ptr));
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qcbormap.ToVariantHash: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("qcbormap.ToVariantHash: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toJsonObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap `
    ///
    pub fn ToJsonObject(self: QCborMap) QJsonObject {
        return .{ .ptr = qtc.QCborMap_ToJsonObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#dtor.QCborMap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborMap `
    ///
    pub fn Delete(self: QCborMap) void {
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

    /// New constructs a new QCborMap::Iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborMap__Iterator `
    ///
    pub fn New(other: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(other)._is_QCborMap__Iterator;
        return .{ .ptr = qtc.QCborMap__Iterator_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QCborMap::Iterator object.
    ///
    pub fn New2() QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_new2() };
    }

    /// New3 constructs a new QCborMap::Iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborMap__Iterator `
    ///
    pub fn New3(param1: anytype) QCborMap__Iterator {
        comptime _ = @TypeOf(param1)._is_QCborMap__Iterator;
        return .{ .ptr = qtc.QCborMap__Iterator_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` other: QCborMap__Iterator `
    ///
    pub fn OperatorAssign(self: QCborMap__Iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborMap__Iterator;
        qtc.QCborMap__Iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn OperatorMultiply(self: QCborMap__Iterator) Struct_QCborValue_QCborValue {
        const _pair = qtc.QCborMap__Iterator_OperatorMultiply(@ptrCast(self.ptr));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorSubscript(self: QCborMap__Iterator, j: isize) Struct_QCborValue_QCborValue {
        const _pair = qtc.QCborMap__Iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn OperatorMinusGreater(self: QCborMap__Iterator) QCborValueRef {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn OperatorMinusGreater2(self: QCborMap__Iterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinusGreater2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn Key(self: QCborMap__Iterator) QCborValue {
        return .{ .ptr = qtc.QCborMap__Iterator_Key(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn Value(self: QCborMap__Iterator) QCborValueRef {
        return .{ .ptr = qtc.QCborMap__Iterator_Value(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn OperatorPlusPlus(self: QCborMap__Iterator) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QCborMap__Iterator, param1: i32) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn OperatorMinusMinus(self: QCborMap__Iterator) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: QCborMap__Iterator, param1: i32) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlusAssign(self: QCborMap__Iterator, j: isize) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinusAssign(self: QCborMap__Iterator, j: isize) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlus(self: QCborMap__Iterator, j: isize) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinus(self: QCborMap__Iterator, j: isize) QCborMap__Iterator {
        return .{ .ptr = qtc.QCborMap__Iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__Iterator `
    ///
    /// ` j: QCborMap__Iterator `
    ///
    pub fn OperatorMinus2(self: QCborMap__Iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QCborMap__Iterator;
        return qtc.QCborMap__Iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborMap__Iterator `
    ///
    pub fn Delete(self: QCborMap__Iterator) void {
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

    /// New constructs a new QCborMap::ConstIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborMap__ConstIterator `
    ///
    pub fn New(other: anytype) QCborMap__ConstIterator {
        comptime _ = @TypeOf(other)._is_QCborMap__ConstIterator;
        return .{ .ptr = qtc.QCborMap__ConstIterator_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QCborMap::ConstIterator object.
    ///
    pub fn New2() QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_new2() };
    }

    /// New3 constructs a new QCborMap::ConstIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborMap__ConstIterator `
    ///
    pub fn New3(param1: anytype) QCborMap__ConstIterator {
        comptime _ = @TypeOf(param1)._is_QCborMap__ConstIterator;
        return .{ .ptr = qtc.QCborMap__ConstIterator_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` other: QCborMap__ConstIterator `
    ///
    pub fn OperatorAssign(self: QCborMap__ConstIterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborMap__ConstIterator;
        qtc.QCborMap__ConstIterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn OperatorMultiply(self: QCborMap__ConstIterator) Struct_QCborValue_QCborValue {
        const _pair = qtc.QCborMap__ConstIterator_OperatorMultiply(@ptrCast(self.ptr));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorSubscript(self: QCborMap__ConstIterator, j: isize) Struct_QCborValue_QCborValue {
        const _pair = qtc.QCborMap__ConstIterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn OperatorMinusGreater(self: QCborMap__ConstIterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn Key(self: QCborMap__ConstIterator) QCborValue {
        return .{ .ptr = qtc.QCborMap__ConstIterator_Key(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn Value(self: QCborMap__ConstIterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborMap__ConstIterator_Value(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn OperatorPlusPlus(self: QCborMap__ConstIterator) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QCborMap__ConstIterator, param1: i32) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn OperatorMinusMinus(self: QCborMap__ConstIterator) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: QCborMap__ConstIterator, param1: i32) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlusAssign(self: QCborMap__ConstIterator, j: isize) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinusAssign(self: QCborMap__ConstIterator, j: isize) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlus(self: QCborMap__ConstIterator, j: isize) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinus(self: QCborMap__ConstIterator, j: isize) QCborMap__ConstIterator {
        return .{ .ptr = qtc.QCborMap__ConstIterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    /// ` j: QCborMap__ConstIterator `
    ///
    pub fn OperatorMinus2(self: QCborMap__ConstIterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QCborMap__ConstIterator;
        return qtc.QCborMap__ConstIterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborMap__ConstIterator `
    ///
    pub fn Delete(self: QCborMap__ConstIterator) void {
        qtc.QCborMap__ConstIterator_Delete(@ptrCast(self.ptr));
    }
};
