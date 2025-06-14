const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qjsonarray.html
pub const qjsonarray = struct {
    /// New constructs a new QJsonArray object.
    ///
    ///
    pub fn New() QtC.QJsonArray {
        return qtc.QJsonArray_new();
    }

    /// New2 constructs a new QJsonArray object.
    ///
    /// ``` other: QtC.QJsonArray ```
    pub fn New2(other: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonArray_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator=)
    ///
    /// ``` self: QtC.QJsonArray, other: QtC.QJsonArray ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonArray_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#fromStringList)
    ///
    /// ``` list: [][]const u8, allocator: std.mem.Allocator ```
    pub fn FromStringList(list: [][]const u8, allocator: std.mem.Allocator) QtC.QJsonArray {
        var list_arr = allocator.alloc(qtc.struct_libqt_string, list.len) catch @panic("qjsonarray.FromStringList: Memory allocation failed");
        defer allocator.free(list_arr);
        for (list, 0..list.len) |item, i| {
            list_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const list_list = qtc.struct_libqt_list{
            .len = list.len,
            .data = list_arr.ptr,
        };
        return qtc.QJsonArray_FromStringList(list_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#size)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QJsonArray_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#count)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn Count(self: ?*anyopaque) i64 {
        return qtc.QJsonArray_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#isEmpty)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QJsonArray_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#at)
    ///
    /// ``` self: QtC.QJsonArray, i: i64 ```
    pub fn At(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonArray_At(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#first)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn First(self: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonArray_First(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#last)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn Last(self: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonArray_Last(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#prepend)
    ///
    /// ``` self: QtC.QJsonArray, value: QtC.QJsonValue ```
    pub fn Prepend(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QJsonArray_Prepend(@ptrCast(self), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#append)
    ///
    /// ``` self: QtC.QJsonArray, value: QtC.QJsonValue ```
    pub fn Append(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QJsonArray_Append(@ptrCast(self), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeAt)
    ///
    /// ``` self: QtC.QJsonArray, i: i64 ```
    pub fn RemoveAt(self: ?*anyopaque, i: i64) void {
        qtc.QJsonArray_RemoveAt(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#takeAt)
    ///
    /// ``` self: QtC.QJsonArray, i: i64 ```
    pub fn TakeAt(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonArray_TakeAt(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeFirst)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn RemoveFirst(self: ?*anyopaque) void {
        qtc.QJsonArray_RemoveFirst(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#removeLast)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn RemoveLast(self: ?*anyopaque) void {
        qtc.QJsonArray_RemoveLast(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#insert)
    ///
    /// ``` self: QtC.QJsonArray, i: i64, value: QtC.QJsonValue ```
    pub fn Insert(self: ?*anyopaque, i: i64, value: ?*anyopaque) void {
        qtc.QJsonArray_Insert(@ptrCast(self), @intCast(i), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#replace)
    ///
    /// ``` self: QtC.QJsonArray, i: i64, value: QtC.QJsonValue ```
    pub fn Replace(self: ?*anyopaque, i: i64, value: ?*anyopaque) void {
        qtc.QJsonArray_Replace(@ptrCast(self), @intCast(i), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#contains)
    ///
    /// ``` self: QtC.QJsonArray, element: QtC.QJsonValue ```
    pub fn Contains(self: ?*anyopaque, element: ?*anyopaque) bool {
        return qtc.QJsonArray_Contains(@ptrCast(self), @ptrCast(element));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator[])
    ///
    /// ``` self: QtC.QJsonArray, i: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, i: i64) QtC.QJsonValueRef {
        return qtc.QJsonArray_OperatorSubscript(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator[])
    ///
    /// ``` self: QtC.QJsonArray, i: i64 ```
    pub fn OperatorSubscriptWithQsizetype(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonArray_OperatorSubscriptWithQsizetype(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator==)
    ///
    /// ``` self: QtC.QJsonArray, other: QtC.QJsonArray ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator!=)
    ///
    /// ``` self: QtC.QJsonArray, other: QtC.QJsonArray ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#swap)
    ///
    /// ``` self: QtC.QJsonArray, other: QtC.QJsonArray ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonArray_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#begin)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn Begin(self: ?*anyopaque) QtC.QJsonArray__iterator {
        return qtc.QJsonArray_Begin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#begin)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn Begin2(self: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray_Begin2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#constBegin)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn ConstBegin(self: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray_ConstBegin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#cbegin)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn Cbegin(self: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray_Cbegin(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#end)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn End(self: ?*anyopaque) QtC.QJsonArray__iterator {
        return qtc.QJsonArray_End(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#end)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn End2(self: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray_End2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#constEnd)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn ConstEnd(self: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray_ConstEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#cend)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn Cend(self: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray_Cend(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#insert)
    ///
    /// ``` self: QtC.QJsonArray, before: QtC.QJsonArray__iterator, value: QtC.QJsonValue ```
    pub fn Insert2(self: ?*anyopaque, before: QtC.QJsonArray__iterator, value: ?*anyopaque) QtC.QJsonArray__iterator {
        return qtc.QJsonArray_Insert2(@ptrCast(self), @ptrCast(before), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#erase)
    ///
    /// ``` self: QtC.QJsonArray, it: QtC.QJsonArray__iterator ```
    pub fn Erase(self: ?*anyopaque, it: QtC.QJsonArray__iterator) QtC.QJsonArray__iterator {
        return qtc.QJsonArray_Erase(@ptrCast(self), @ptrCast(it));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator+)
    ///
    /// ``` self: QtC.QJsonArray, v: QtC.QJsonValue ```
    pub fn OperatorPlus(self: ?*anyopaque, v: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonArray_OperatorPlus(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator+=)
    ///
    /// ``` self: QtC.QJsonArray, v: QtC.QJsonValue ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, v: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonArray_OperatorPlusAssign(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#operator<<)
    ///
    /// ``` self: QtC.QJsonArray, v: QtC.QJsonValue ```
    pub fn OperatorShiftLeft(self: ?*anyopaque, v: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonArray_OperatorShiftLeft(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#push_back)
    ///
    /// ``` self: QtC.QJsonArray, t: QtC.QJsonValue ```
    pub fn PushBack(self: ?*anyopaque, t: ?*anyopaque) void {
        qtc.QJsonArray_PushBack(@ptrCast(self), @ptrCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#push_front)
    ///
    /// ``` self: QtC.QJsonArray, t: QtC.QJsonValue ```
    pub fn PushFront(self: ?*anyopaque, t: ?*anyopaque) void {
        qtc.QJsonArray_PushFront(@ptrCast(self), @ptrCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#pop_front)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn PopFront(self: ?*anyopaque) void {
        qtc.QJsonArray_PopFront(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#pop_back)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn PopBack(self: ?*anyopaque) void {
        qtc.QJsonArray_PopBack(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#empty)
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QJsonArray_Empty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#dtor.QJsonArray)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonArray ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonArray_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonarray-iterator.html
pub const qjsonarray__iterator = struct {
    /// New constructs a new QJsonArray::iterator object.
    ///
    /// ``` other: QtC.QJsonArray__iterator ```
    pub fn New(other: ?*anyopaque) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_new(@ptrCast(other));
    }

    /// New2 constructs a new QJsonArray::iterator object.
    ///
    ///
    pub fn New2() QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_new2();
    }

    /// New3 constructs a new QJsonArray::iterator object.
    ///
    /// ``` array: QtC.QJsonArray, index: i64 ```
    pub fn New3(array: ?*anyopaque, index: i64) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_new3(@ptrCast(array), @intCast(index));
    }

    /// New4 constructs a new QJsonArray::iterator object.
    ///
    /// ``` other: QtC.QJsonArray__iterator ```
    pub fn New4(other: ?*anyopaque) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator=)
    ///
    /// ``` self: QtC.QJsonArray__iterator, other: QtC.QJsonArray__iterator ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonArray__iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator*)
    ///
    /// ``` self: QtC.QJsonArray__iterator ```
    pub fn OperatorMultiply(self: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonArray__iterator_OperatorMultiply(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator->)
    ///
    /// ``` self: QtC.QJsonArray__iterator ```
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonArray__iterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator->)
    ///
    /// ``` self: QtC.QJsonArray__iterator ```
    pub fn OperatorMinusGreater2(self: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonArray__iterator_OperatorMinusGreater2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator[])
    ///
    /// ``` self: QtC.QJsonArray__iterator, j: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) QtC.QJsonValueRef {
        return qtc.QJsonArray__iterator_OperatorSubscript(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator==)
    ///
    /// ``` self: QtC.QJsonArray__iterator, o: QtC.QJsonArray__iterator ```
    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator!=)
    ///
    /// ``` self: QtC.QJsonArray__iterator, o: QtC.QJsonArray__iterator ```
    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator<)
    ///
    /// ``` self: QtC.QJsonArray__iterator, other: QtC.QJsonArray__iterator ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator<=)
    ///
    /// ``` self: QtC.QJsonArray__iterator, other: QtC.QJsonArray__iterator ```
    pub fn OperatorLesserOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorLesserOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator>)
    ///
    /// ``` self: QtC.QJsonArray__iterator, other: QtC.QJsonArray__iterator ```
    pub fn OperatorGreater(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorGreater(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator>=)
    ///
    /// ``` self: QtC.QJsonArray__iterator, other: QtC.QJsonArray__iterator ```
    pub fn OperatorGreaterOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorGreaterOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator==)
    ///
    /// ``` self: QtC.QJsonArray__iterator, o: QtC.QJsonArray__const_iterator ```
    pub fn OperatorEqualWithQJsonArrayconstIterator(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorEqualWithQJsonArrayconstIterator(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator!=)
    ///
    /// ``` self: QtC.QJsonArray__iterator, o: QtC.QJsonArray__const_iterator ```
    pub fn OperatorNotEqualWithQJsonArrayconstIterator(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorNotEqualWithQJsonArrayconstIterator(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator<)
    ///
    /// ``` self: QtC.QJsonArray__iterator, other: QtC.QJsonArray__const_iterator ```
    pub fn OperatorLesserWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorLesserWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator<=)
    ///
    /// ``` self: QtC.QJsonArray__iterator, other: QtC.QJsonArray__const_iterator ```
    pub fn OperatorLesserOrEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorLesserOrEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator>)
    ///
    /// ``` self: QtC.QJsonArray__iterator, other: QtC.QJsonArray__const_iterator ```
    pub fn OperatorGreaterWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorGreaterWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator>=)
    ///
    /// ``` self: QtC.QJsonArray__iterator, other: QtC.QJsonArray__const_iterator ```
    pub fn OperatorGreaterOrEqualWithOther(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__iterator_OperatorGreaterOrEqualWithOther(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator++)
    ///
    /// ``` self: QtC.QJsonArray__iterator ```
    pub fn OperatorPlusPlus(self: ?*anyopaque) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator++)
    ///
    /// ``` self: QtC.QJsonArray__iterator, param1: i32 ```
    pub fn OperatorPlusPlusWithInt(self: ?*anyopaque, param1: i32) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_OperatorPlusPlusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonArray__iterator ```
    pub fn OperatorMinusMinus(self: ?*anyopaque) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonArray__iterator, param1: i32 ```
    pub fn OperatorMinusMinusWithInt(self: ?*anyopaque, param1: i32) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_OperatorMinusMinusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator+=)
    ///
    /// ``` self: QtC.QJsonArray__iterator, j: i64 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_OperatorPlusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-=)
    ///
    /// ``` self: QtC.QJsonArray__iterator, j: i64 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_OperatorMinusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator+)
    ///
    /// ``` self: QtC.QJsonArray__iterator, j: i64 ```
    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_OperatorPlus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonArray__iterator, j: i64 ```
    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QJsonArray__iterator {
        return qtc.QJsonArray__iterator_OperatorMinus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonArray__iterator, j: QtC.QJsonArray__iterator ```
    pub fn OperatorMinusWithQJsonArrayiterator(self: ?*anyopaque, j: QtC.QJsonArray__iterator) i64 {
        return qtc.QJsonArray__iterator_OperatorMinusWithQJsonArrayiterator(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonArray__iterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonArray__iterator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonarray-const_iterator.html
pub const qjsonarray__const_iterator = struct {
    /// New constructs a new QJsonArray::const_iterator object.
    ///
    /// ``` other: QtC.QJsonArray__const_iterator ```
    pub fn New(other: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_new(@ptrCast(other));
    }

    /// New2 constructs a new QJsonArray::const_iterator object.
    ///
    ///
    pub fn New2() QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_new2();
    }

    /// New3 constructs a new QJsonArray::const_iterator object.
    ///
    /// ``` array: QtC.QJsonArray, index: i64 ```
    pub fn New3(array: ?*anyopaque, index: i64) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_new3(@ptrCast(array), @intCast(index));
    }

    /// New4 constructs a new QJsonArray::const_iterator object.
    ///
    /// ``` o: QtC.QJsonArray__iterator ```
    pub fn New4(o: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_new4(@ptrCast(o));
    }

    /// New5 constructs a new QJsonArray::const_iterator object.
    ///
    /// ``` other: QtC.QJsonArray__const_iterator ```
    pub fn New5(other: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_new5(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator=)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, other: QtC.QJsonArray__const_iterator ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonArray__const_iterator_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator*)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator ```
    pub fn OperatorMultiply(self: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonArray__const_iterator_OperatorMultiply(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator->)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator ```
    pub fn OperatorMinusGreater(self: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonArray__const_iterator_OperatorMinusGreater(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator[])
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, j: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, j: i64) QtC.QJsonValueConstRef {
        return qtc.QJsonArray__const_iterator_OperatorSubscript(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator==)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, o: QtC.QJsonArray__const_iterator ```
    pub fn OperatorEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QJsonArray__const_iterator_OperatorEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator!=)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, o: QtC.QJsonArray__const_iterator ```
    pub fn OperatorNotEqual(self: ?*anyopaque, o: ?*anyopaque) bool {
        return qtc.QJsonArray__const_iterator_OperatorNotEqual(@ptrCast(self), @ptrCast(o));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator<)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, other: QtC.QJsonArray__const_iterator ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__const_iterator_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator<=)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, other: QtC.QJsonArray__const_iterator ```
    pub fn OperatorLesserOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__const_iterator_OperatorLesserOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator>)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, other: QtC.QJsonArray__const_iterator ```
    pub fn OperatorGreater(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__const_iterator_OperatorGreater(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator>=)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, other: QtC.QJsonArray__const_iterator ```
    pub fn OperatorGreaterOrEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonArray__const_iterator_OperatorGreaterOrEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator++)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator ```
    pub fn OperatorPlusPlus(self: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_OperatorPlusPlus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator++)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, param1: i32 ```
    pub fn OperatorPlusPlusWithInt(self: ?*anyopaque, param1: i32) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_OperatorPlusPlusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator ```
    pub fn OperatorMinusMinus(self: ?*anyopaque) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_OperatorMinusMinus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator--)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, param1: i32 ```
    pub fn OperatorMinusMinusWithInt(self: ?*anyopaque, param1: i32) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_OperatorMinusMinusWithInt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator+=)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, j: i64 ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, j: i64) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_OperatorPlusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-=)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, j: i64 ```
    pub fn OperatorMinusAssign(self: ?*anyopaque, j: i64) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_OperatorMinusAssign(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator+)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, j: i64 ```
    pub fn OperatorPlus(self: ?*anyopaque, j: i64) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_OperatorPlus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, j: i64 ```
    pub fn OperatorMinus(self: ?*anyopaque, j: i64) QtC.QJsonArray__const_iterator {
        return qtc.QJsonArray__const_iterator_OperatorMinus(@ptrCast(self), @intCast(j));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray__const_iterator.html#operator-)
    ///
    /// ``` self: QtC.QJsonArray__const_iterator, j: QtC.QJsonArray__const_iterator ```
    pub fn OperatorMinusWithQJsonArrayconstIterator(self: ?*anyopaque, j: QtC.QJsonArray__const_iterator) i64 {
        return qtc.QJsonArray__const_iterator_OperatorMinusWithQJsonArrayconstIterator(@ptrCast(self), @ptrCast(j));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonArray__const_iterator ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonArray__const_iterator_Delete(@ptrCast(self));
    }
};
