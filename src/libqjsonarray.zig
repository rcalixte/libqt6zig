const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QJsonValue = @import("libqt6").QJsonValue;
const QJsonValueConstRef = @import("libqt6").QJsonValueConstRef;
const QJsonValueRef = @import("libqt6").QJsonValueRef;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html)
pub const QJsonArray = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJsonArray,

    pub const _is_QJsonArray = {};

    /// New constructs a new QJsonArray object.
    ///
    pub fn New() QJsonArray {
        return .{ .ptr = qtc.QJsonArray_new() };
    }

    /// New2 constructs a new QJsonArray object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonArray `
    ///
    pub fn New2(other: anytype) QJsonArray {
        comptime _ = @TypeOf(other)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonArray_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` other: QJsonArray `
    ///
    pub fn OperatorAssign(self: QJsonArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonArray;
        qtc.QJsonArray_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#fromStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` list: []const []const u8 `
    ///
    pub fn FromStringList(allocator: std.mem.Allocator, list: []const []const u8) QJsonArray {
        const list_arr = allocator.alloc(qtc.libqt_string, list.len) catch @panic("qjsonarray.FromStringList: Memory allocation failed");
        defer allocator.free(list_arr);
        for (list, 0..list.len) |item, i|
            list_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = list_arr.ptr,
        };
        return .{ .ptr = qtc.QJsonArray_FromStringList(list_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#fromVariantList)
    ///
    /// ## Parameter(s):
    ///
    /// ` list: []QVariant `
    ///
    pub fn FromVariantList(list: []QVariant) QJsonArray {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        return .{ .ptr = qtc.QJsonArray_FromVariantList(list_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#toVariantList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToVariantList(self: QJsonArray, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QJsonArray_ToVariantList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("qjsonarray.ToVariantList: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn Size(self: QJsonArray) isize {
        return qtc.QJsonArray_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn Count(self: QJsonArray) isize {
        return qtc.QJsonArray_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn IsEmpty(self: QJsonArray) bool {
        return qtc.QJsonArray_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    pub fn At(self: QJsonArray, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonArray_At(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn First(self: QJsonArray) QJsonValue {
        return .{ .ptr = qtc.QJsonArray_First(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn Last(self: QJsonArray) QJsonValue {
        return .{ .ptr = qtc.QJsonArray_Last(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#prepend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` value: QJsonValue `
    ///
    pub fn Prepend(self: QJsonArray, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QJsonValue;
        qtc.QJsonArray_Prepend(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` value: QJsonValue `
    ///
    pub fn Append(self: QJsonArray, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QJsonValue;
        qtc.QJsonArray_Append(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    pub fn RemoveAt(self: QJsonArray, i: isize) void {
        qtc.QJsonArray_RemoveAt(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    pub fn TakeAt(self: QJsonArray, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonArray_TakeAt(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#removeFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn RemoveFirst(self: QJsonArray) void {
        qtc.QJsonArray_RemoveFirst(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#removeLast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn RemoveLast(self: QJsonArray) void {
        qtc.QJsonArray_RemoveLast(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    /// ` value: QJsonValue `
    ///
    pub fn Insert(self: QJsonArray, i: isize, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QJsonValue;
        qtc.QJsonArray_Insert(@ptrCast(self.ptr), @bitCast(i), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    /// ` value: QJsonValue `
    ///
    pub fn Replace(self: QJsonArray, i: isize, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QJsonValue;
        qtc.QJsonArray_Replace(@ptrCast(self.ptr), @bitCast(i), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` element: QJsonValue `
    ///
    pub fn Contains(self: QJsonArray, element: anytype) bool {
        comptime _ = @TypeOf(element)._is_QJsonValue;
        return qtc.QJsonArray_Contains(@ptrCast(self.ptr), @ptrCast(element.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorSubscript(self: QJsonArray, i: isize) QJsonValueRef {
        return .{ .ptr = qtc.QJsonArray_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorSubscript2(self: QJsonArray, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonArray_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` other: QJsonArray `
    ///
    pub fn Swap(self: QJsonArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonArray;
        qtc.QJsonArray_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn Begin(self: QJsonArray) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray_Begin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn Begin2(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_Begin2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn ConstBegin(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_ConstBegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn Cbegin(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_Cbegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn End(self: QJsonArray) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn End2(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_End2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn ConstEnd(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_ConstEnd(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn Cend(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_Cend(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` before: QJsonArray__iterator `
    ///
    /// ` value: QJsonValue `
    ///
    pub fn Insert2(self: QJsonArray, before: anytype, value: anytype) QJsonArray__iterator {
        comptime _ = @TypeOf(before)._is_QJsonArray__iterator;
        comptime _ = @TypeOf(value)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonArray_Insert2(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(value.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` it: QJsonArray__iterator `
    ///
    pub fn Erase(self: QJsonArray, it: anytype) QJsonArray__iterator {
        comptime _ = @TypeOf(it)._is_QJsonArray__iterator;
        return .{ .ptr = qtc.QJsonArray_Erase(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` v: QJsonValue `
    ///
    pub fn OperatorPlus(self: QJsonArray, v: anytype) QJsonArray {
        comptime _ = @TypeOf(v)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonArray_OperatorPlus(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` v: QJsonValue `
    ///
    pub fn OperatorPlusAssign(self: QJsonArray, v: anytype) QJsonArray {
        comptime _ = @TypeOf(v)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonArray_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` v: QJsonValue `
    ///
    pub fn OperatorShiftLeft(self: QJsonArray, v: anytype) QJsonArray {
        comptime _ = @TypeOf(v)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonArray_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#push_back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` t: QJsonValue `
    ///
    pub fn PushBack(self: QJsonArray, t: anytype) void {
        comptime _ = @TypeOf(t)._is_QJsonValue;
        qtc.QJsonArray_PushBack(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#push_front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` t: QJsonValue `
    ///
    pub fn PushFront(self: QJsonArray, t: anytype) void {
        comptime _ = @TypeOf(t)._is_QJsonValue;
        qtc.QJsonArray_PushFront(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#pop_front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn PopFront(self: QJsonArray) void {
        qtc.QJsonArray_PopFront(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#pop_back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn PopBack(self: QJsonArray) void {
        qtc.QJsonArray_PopBack(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn Empty(self: QJsonArray) bool {
        return qtc.QJsonArray_Empty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#dtor.QJsonArray)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonArray `
    ///
    pub fn Delete(self: QJsonArray) void {
        qtc.QJsonArray_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html)
pub const QJsonArray__iterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJsonArray__iterator,

    pub const _is_QJsonArray__iterator = {};

    /// New constructs a new QJsonArray::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonArray__iterator `
    ///
    pub fn New(other: anytype) QJsonArray__iterator {
        comptime _ = @TypeOf(other)._is_QJsonArray__iterator;
        return .{ .ptr = qtc.QJsonArray__iterator_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QJsonArray::iterator object.
    ///
    pub fn New2() QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_new2() };
    }

    /// New3 constructs a new QJsonArray::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` array: QJsonArray `
    ///
    /// ` index: isize `
    ///
    pub fn New3(array: anytype, index: isize) QJsonArray__iterator {
        comptime _ = @TypeOf(array)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonArray__iterator_new3(@ptrCast(array.ptr), @bitCast(index)) };
    }

    /// New4 constructs a new QJsonArray::iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonArray__iterator `
    ///
    pub fn New4(other: anytype) QJsonArray__iterator {
        comptime _ = @TypeOf(other)._is_QJsonArray__iterator;
        return .{ .ptr = qtc.QJsonArray__iterator_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` other: QJsonArray__iterator `
    ///
    pub fn OperatorAssign(self: QJsonArray__iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonArray__iterator;
        qtc.QJsonArray__iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn OperatorMultiply(self: QJsonArray__iterator) QJsonValueRef {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn OperatorMinusGreater(self: QJsonArray__iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn OperatorMinusGreater2(self: QJsonArray__iterator) QJsonValueRef {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinusGreater2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorSubscript(self: QJsonArray__iterator, j: isize) QJsonValueRef {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn OperatorPlusPlus(self: QJsonArray__iterator) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QJsonArray__iterator, param1: i32) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn OperatorMinusMinus(self: QJsonArray__iterator) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: QJsonArray__iterator, param1: i32) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlusAssign(self: QJsonArray__iterator, j: isize) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinusAssign(self: QJsonArray__iterator, j: isize) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlus(self: QJsonArray__iterator, j: isize) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinus(self: QJsonArray__iterator, j: isize) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: QJsonArray__iterator `
    ///
    pub fn OperatorMinus2(self: QJsonArray__iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QJsonArray__iterator;
        return qtc.QJsonArray__iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn Delete(self: QJsonArray__iterator) void {
        qtc.QJsonArray__iterator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html)
pub const QJsonArray__const_iterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJsonArray__const_iterator,

    pub const _is_QJsonArray__const_iterator = {};

    /// New constructs a new QJsonArray::const_iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonArray__const_iterator `
    ///
    pub fn New(other: anytype) QJsonArray__const_iterator {
        comptime _ = @TypeOf(other)._is_QJsonArray__const_iterator;
        return .{ .ptr = qtc.QJsonArray__const_iterator_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QJsonArray::const_iterator object.
    ///
    pub fn New2() QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_new2() };
    }

    /// New3 constructs a new QJsonArray::const_iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` array: QJsonArray `
    ///
    /// ` index: isize `
    ///
    pub fn New3(array: anytype, index: isize) QJsonArray__const_iterator {
        comptime _ = @TypeOf(array)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonArray__const_iterator_new3(@ptrCast(array.ptr), @bitCast(index)) };
    }

    /// New4 constructs a new QJsonArray::const_iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QJsonArray__iterator `
    ///
    pub fn New4(o: anytype) QJsonArray__const_iterator {
        comptime _ = @TypeOf(o)._is_QJsonArray__iterator;
        return .{ .ptr = qtc.QJsonArray__const_iterator_new4(@ptrCast(o.ptr)) };
    }

    /// New5 constructs a new QJsonArray::const_iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonArray__const_iterator `
    ///
    pub fn New5(other: anytype) QJsonArray__const_iterator {
        comptime _ = @TypeOf(other)._is_QJsonArray__const_iterator;
        return .{ .ptr = qtc.QJsonArray__const_iterator_new5(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` other: QJsonArray__const_iterator `
    ///
    pub fn OperatorAssign(self: QJsonArray__const_iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonArray__const_iterator;
        qtc.QJsonArray__const_iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    pub fn OperatorMultiply(self: QJsonArray__const_iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    pub fn OperatorMinusGreater(self: QJsonArray__const_iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorSubscript(self: QJsonArray__const_iterator, j: isize) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    pub fn OperatorPlusPlus(self: QJsonArray__const_iterator) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QJsonArray__const_iterator, param1: i32) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    pub fn OperatorMinusMinus(self: QJsonArray__const_iterator) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: QJsonArray__const_iterator, param1: i32) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlusAssign(self: QJsonArray__const_iterator, j: isize) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinusAssign(self: QJsonArray__const_iterator, j: isize) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlus(self: QJsonArray__const_iterator, j: isize) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinus(self: QJsonArray__const_iterator, j: isize) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: QJsonArray__const_iterator `
    ///
    pub fn OperatorMinus2(self: QJsonArray__const_iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QJsonArray__const_iterator;
        return qtc.QJsonArray__const_iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    pub fn Delete(self: QJsonArray__const_iterator) void {
        qtc.QJsonArray__const_iterator_Delete(@ptrCast(self.ptr));
    }
};
