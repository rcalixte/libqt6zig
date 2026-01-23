const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);
const struct_qtcqcborvalue_qtcqcborvalue = extern struct { first: QtC.QCborValue, second: QtC.QCborValue };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html)
pub const qcbormap = struct {
    /// New constructs a new QCborMap object.
    ///
    pub fn New() QtC.QCborMap {
        return qtc.QCborMap_new();
    }

    /// New2 constructs a new QCborMap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QCborMap `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborMap_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` other: QtC.QCborMap `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` other: QtC.QCborMap `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toCborValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn ToCborValue(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap_ToCborValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QCborMap_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QCborMap_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QCborMap_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Keys(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QCborValue {
        const _arr: qtc.libqt_list = qtc.QCborMap_Keys(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QCborValue, _arr.len) catch @panic("qcbormap.Keys: Memory allocation failed");
        const _data: [*]QtC.QCborValue = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Value(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborMap_Value(@ptrCast(self), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Value3(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Value3(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: QtC.QCborValue `
    ///
    pub fn Value4(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap_Value4(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborMap_OperatorSubscript(@ptrCast(self), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript3(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_OperatorSubscript3(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: QtC.QCborValue `
    ///
    pub fn OperatorSubscript4(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap_OperatorSubscript4(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn OperatorSubscript5(self: ?*anyopaque, key: i64) QtC.QCborValueRef {
        return qtc.QCborMap_OperatorSubscript5(@ptrCast(self), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript7(self: ?*anyopaque, key: []const u8) QtC.QCborValueRef {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_OperatorSubscript7(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: QtC.QCborValue `
    ///
    pub fn OperatorSubscript8(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborMap_OperatorSubscript8(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Take(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborMap_Take(@ptrCast(self), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Take3(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Take3(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#take)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: QtC.QCborValue `
    ///
    pub fn Take4(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap_Take4(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Remove(self: ?*anyopaque, key: i64) void {
        qtc.QCborMap_Remove(@ptrCast(self), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Remove3(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QCborMap_Remove3(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: QtC.QCborValue `
    ///
    pub fn Remove4(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QCborMap_Remove4(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Contains(self: ?*anyopaque, key: i64) bool {
        return qtc.QCborMap_Contains(@ptrCast(self), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Contains3(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Contains3(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: QtC.QCborValue `
    ///
    pub fn Contains4(self: ?*anyopaque, key: ?*anyopaque) bool {
        return qtc.QCborMap_Contains4(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` other: QtC.QCborMap `
    ///
    pub fn Compare(self: ?*anyopaque, other: ?*anyopaque) i32 {
        return qtc.QCborMap_Compare(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn Begin(self: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Begin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn ConstBegin(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstBegin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn Begin2(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Begin2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn Cbegin(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Cbegin(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn End(self: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_End(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn ConstEnd(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn End2(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_End2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn Cend(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Cend(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` it: QtC.QCborMap__Iterator `
    ///
    pub fn Erase(self: ?*anyopaque, it: QtC.QCborMap__Iterator) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Erase(@ptrCast(self), @ptrCast(it));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` it: QtC.QCborMap__ConstIterator `
    ///
    pub fn Erase2(self: ?*anyopaque, it: QtC.QCborMap__ConstIterator) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Erase2(@ptrCast(self), @ptrCast(it));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` it: QtC.QCborMap__Iterator `
    ///
    pub fn Extract(self: ?*anyopaque, it: QtC.QCborMap__Iterator) QtC.QCborValue {
        return qtc.QCborMap_Extract(@ptrCast(self), @ptrCast(it));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` it: QtC.QCborMap__ConstIterator `
    ///
    pub fn Extract2(self: ?*anyopaque, it: QtC.QCborMap__ConstIterator) QtC.QCborValue {
        return qtc.QCborMap_Extract2(@ptrCast(self), @ptrCast(it));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QCborMap_Empty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Find(self: ?*anyopaque, key: i64) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Find(@ptrCast(self), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Find3(self: ?*anyopaque, key: []const u8) QtC.QCborMap__Iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Find3(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: QtC.QCborValue `
    ///
    pub fn Find4(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Find4(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn ConstFind(self: ?*anyopaque, key: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstFind(@ptrCast(self), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ConstFind3(self: ?*anyopaque, key: []const u8) QtC.QCborMap__ConstIterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_ConstFind3(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#constFind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: QtC.QCborValue `
    ///
    pub fn ConstFind4(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_ConstFind4(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: i64 `
    ///
    pub fn Find5(self: ?*anyopaque, key: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Find5(@ptrCast(self), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Find7(self: ?*anyopaque, key: []const u8) QtC.QCborMap__ConstIterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Find7(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: QtC.QCborValue `
    ///
    pub fn Find8(self: ?*anyopaque, key: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap_Find8(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: i64 `
    ///
    /// ` value_: QtC.QCborValue `
    ///
    pub fn Insert(self: ?*anyopaque, key: i64, value_: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Insert(@ptrCast(self), @intCast(key), @ptrCast(value_));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value_: QtC.QCborValue `
    ///
    pub fn Insert3(self: ?*anyopaque, key: []const u8, value_: ?*anyopaque) QtC.QCborMap__Iterator {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QCborMap_Insert3(@ptrCast(self), key_str, @ptrCast(value_));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` key: QtC.QCborValue `
    ///
    /// ` value_: QtC.QCborValue `
    ///
    pub fn Insert4(self: ?*anyopaque, key: ?*anyopaque, value_: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Insert4(@ptrCast(self), @ptrCast(key), @ptrCast(value_));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` v: struct_qtcqcborvalue_qtcqcborvalue `
    ///
    pub fn Insert5(self: ?*anyopaque, v: struct_qtcqcborvalue_qtcqcborvalue) QtC.QCborMap__Iterator {
        return qtc.QCborMap_Insert5(@ptrCast(self), @bitCast(v));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromVariantMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` mapVal: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FromVariantMap(mapVal: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QCborMap {
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
            mapVal_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const mapVal_map = qtc.libqt_map{
            .len = mapVal_count,
            .keys = @ptrCast(mapVal_keys.ptr),
            .values = @ptrCast(mapVal_values.ptr),
        };
        return qtc.QCborMap_FromVariantMap(mapVal_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromVariantHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` hash: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FromVariantHash(hash: map_constu8_qtcqvariant, allocator: std.mem.Allocator) QtC.QCborMap {
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
            hash_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const hash_map = qtc.libqt_map{
            .len = hash_count,
            .keys = @ptrCast(hash_keys.ptr),
            .values = @ptrCast(hash_values.ptr),
        };
        return qtc.QCborMap_FromVariantHash(hash_map);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#fromJsonObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QtC.QJsonObject `
    ///
    pub fn FromJsonObject(o: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborMap_FromJsonObject(@ptrCast(o));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toVariantMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToVariantMap(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QCborMap_ToVariantMap(@ptrCast(self));
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qcbormap.ToVariantMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("qcbormap.ToVariantMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toVariantHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToVariantHash(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QCborMap_ToVariantHash(@ptrCast(self));
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("qcbormap.ToVariantHash: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("qcbormap.ToVariantHash: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#toJsonObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn ToJsonObject(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QCborMap_ToJsonObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap.html#dtor.QCborMap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCborMap `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborMap_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html)
pub const qcbormap__iterator = struct {
    /// New constructs a new QCborMap::Iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QCborMap__Iterator `
    ///
    pub fn New(other: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_new(@ptrCast(other));
    }

    /// New2 constructs a new QCborMap::Iterator object.
    ///
    pub fn New2() QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_new2();
    }

    /// New3 constructs a new QCborMap::Iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QCborMap__Iterator `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    /// ` other: QtC.QCborMap__Iterator `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap__Iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    pub fn OperatorMultiply(self: ?*anyopaque) struct_qtcqcborvalue_qtcqcborvalue {
        const _pair = qtc.QCborMap__Iterator_OperatorMultiply(@ptrCast(self));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    /// ` j: i64 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) struct_qtcqcborvalue_qtcqcborvalue {
        const _pair = qtc.QCborMap__Iterator_OperatorSubscript(@ptrCast(self), @intCast(j));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborMap__Iterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    pub fn OperatorMinusGreater2(self: ?*anyopaque) QtC.QCborValueConstRef {
        return qtc.QCborMap__Iterator_OperatorMinusGreater2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    pub fn Key(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap__Iterator_Key(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    pub fn Value(self: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborMap__Iterator_Value(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    pub fn OperatorPlusPlus(self: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorPlusPlus2(@ptrCast(self), @intCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    pub fn OperatorMinusMinus(self: ?*anyopaque) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorMinusMinus2(@ptrCast(self), @intCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    /// ` j: i64 `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorPlusAssign(@ptrCast(self), @intCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    /// ` j: i64 `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorMinusAssign(@ptrCast(self), @intCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    /// ` j: i64 `
    ///
    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorPlus(@ptrCast(self), @intCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    /// ` j: i64 `
    ///
    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QCborMap__Iterator {
        return qtc.QCborMap__Iterator_OperatorMinus(@ptrCast(self), @intCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    /// ` j: QtC.QCborMap__Iterator `
    ///
    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QCborMap__Iterator) i64 {
        return qtc.QCborMap__Iterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCborMap__Iterator `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborMap__Iterator_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html)
pub const qcbormap__constiterator = struct {
    /// New constructs a new QCborMap::ConstIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QCborMap__ConstIterator `
    ///
    pub fn New(other: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_new(@ptrCast(other));
    }

    /// New2 constructs a new QCborMap::ConstIterator object.
    ///
    pub fn New2() QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_new2();
    }

    /// New3 constructs a new QCborMap::ConstIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QCborMap__ConstIterator `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    /// ` other: QtC.QCborMap__ConstIterator `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborMap__ConstIterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    pub fn OperatorMultiply(self: ?*anyopaque) struct_qtcqcborvalue_qtcqcborvalue {
        const _pair = qtc.QCborMap__ConstIterator_OperatorMultiply(@ptrCast(self));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    /// ` j: i64 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) struct_qtcqcborvalue_qtcqcborvalue {
        const _pair = qtc.QCborMap__ConstIterator_OperatorSubscript(@ptrCast(self), @intCast(j));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QCborValueConstRef {
        return qtc.QCborMap__ConstIterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#key)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    pub fn Key(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborMap__ConstIterator_Key(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    pub fn Value(self: ?*anyopaque) QtC.QCborValueConstRef {
        return qtc.QCborMap__ConstIterator_Value(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    pub fn OperatorPlusPlus(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: ?*anyopaque, param1: i32) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorPlusPlus2(@ptrCast(self), @intCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    pub fn OperatorMinusMinus(self: ?*anyopaque) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: ?*anyopaque, param1: i32) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorMinusMinus2(@ptrCast(self), @intCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    /// ` j: i64 `
    ///
    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorPlusAssign(@ptrCast(self), @intCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    /// ` j: i64 `
    ///
    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorMinusAssign(@ptrCast(self), @intCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    /// ` j: i64 `
    ///
    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorPlus(@ptrCast(self), @intCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    /// ` j: i64 `
    ///
    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QCborMap__ConstIterator {
        return qtc.QCborMap__ConstIterator_OperatorMinus(@ptrCast(self), @intCast(j));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcbormap-constiterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    /// ` j: QtC.QCborMap__ConstIterator `
    ///
    pub fn OperatorMinus2(self: ?*anyopaque, j: QtC.QCborMap__ConstIterator) i64 {
        return qtc.QCborMap__ConstIterator_OperatorMinus2(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QCborMap__ConstIterator `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborMap__ConstIterator_Delete(@ptrCast(self));
    }
};
