const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qcborarray.html
pub const qcborarray = struct {
    /// New constructs a new QCborArray object.
    ///
    ///
    pub fn New() QtC.QCborArray {
        return qtc.QCborArray_new();
    }

    /// New2 constructs a new QCborArray object.
    ///
    /// ``` other: QtC.QCborArray ```
    pub fn New2(other: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborArray_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator=)
    ///
    /// ``` self: QtC.QCborArray, other: QtC.QCborArray ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborArray_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#swap)
    ///
    /// ``` self: QtC.QCborArray, other: QtC.QCborArray ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborArray_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#toCborValue)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn ToCborValue(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborArray_ToCborValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#size)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QCborArray_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#isEmpty)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QCborArray_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#clear)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QCborArray_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#at)
    ///
    /// ``` self: QtC.QCborArray, i: i64 ```
    pub fn At(self: ?*anyopaque, i: i64) QtC.QCborValue {
        return qtc.QCborArray_At(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#first)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn First(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborArray_First(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#last)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn Last(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborArray_Last(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator[])
    ///
    /// ``` self: QtC.QCborArray, i: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, i: i64) QtC.QCborValue {
        return qtc.QCborArray_OperatorSubscript(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#first)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn First2(self: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborArray_First2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#last)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn Last2(self: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborArray_Last2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator[])
    ///
    /// ``` self: QtC.QCborArray, i: i64 ```
    pub fn OperatorSubscript2(self: ?*anyopaque, i: i64) QtC.QCborValueRef {
        return qtc.QCborArray_OperatorSubscript2(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#insert)
    ///
    /// ``` self: QtC.QCborArray, i: i64, value: QtC.QCborValue ```
    pub fn Insert(self: ?*anyopaque, i: i64, value: ?*anyopaque) void {
        qtc.QCborArray_Insert(@ptrCast(self), @intCast(i), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#prepend)
    ///
    /// ``` self: QtC.QCborArray, value: QtC.QCborValue ```
    pub fn Prepend(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QCborArray_Prepend(@ptrCast(self), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#append)
    ///
    /// ``` self: QtC.QCborArray, value: QtC.QCborValue ```
    pub fn Append(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QCborArray_Append(@ptrCast(self), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeAt)
    ///
    /// ``` self: QtC.QCborArray, i: i64 ```
    pub fn RemoveAt(self: ?*anyopaque, i: i64) void {
        qtc.QCborArray_RemoveAt(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeAt)
    ///
    /// ``` self: QtC.QCborArray, i: i64 ```
    pub fn TakeAt(self: ?*anyopaque, i: i64) QtC.QCborValue {
        return qtc.QCborArray_TakeAt(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeFirst)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn RemoveFirst(self: ?*anyopaque) void {
        qtc.QCborArray_RemoveFirst(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#removeLast)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn RemoveLast(self: ?*anyopaque) void {
        qtc.QCborArray_RemoveLast(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeFirst)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn TakeFirst(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborArray_TakeFirst(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#takeLast)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn TakeLast(self: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborArray_TakeLast(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#contains)
    ///
    /// ``` self: QtC.QCborArray, value: QtC.QCborValue ```
    pub fn Contains(self: ?*anyopaque, value: ?*anyopaque) bool {
        return qtc.QCborArray_Contains(@ptrCast(self), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#compare)
    ///
    /// ``` self: QtC.QCborArray, other: QtC.QCborArray ```
    pub fn Compare(self: ?*anyopaque, other: ?*anyopaque) i32 {
        return qtc.QCborArray_Compare(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#push_back)
    ///
    /// ``` self: QtC.QCborArray, t: QtC.QCborValue ```
    pub fn PushBack(self: ?*anyopaque, t: ?*anyopaque) void {
        qtc.QCborArray_PushBack(@ptrCast(self), @ptrCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#push_front)
    ///
    /// ``` self: QtC.QCborArray, t: QtC.QCborValue ```
    pub fn PushFront(self: ?*anyopaque, t: ?*anyopaque) void {
        qtc.QCborArray_PushFront(@ptrCast(self), @ptrCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#pop_front)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn PopFront(self: ?*anyopaque) void {
        qtc.QCborArray_PopFront(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#pop_back)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn PopBack(self: ?*anyopaque) void {
        qtc.QCborArray_PopBack(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#empty)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn Empty(self: ?*anyopaque) bool {
        return qtc.QCborArray_Empty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator+)
    ///
    /// ``` self: QtC.QCborArray, v: QtC.QCborValue ```
    pub fn OperatorPlus(self: ?*anyopaque, v: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborArray_OperatorPlus(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator+=)
    ///
    /// ``` self: QtC.QCborArray, v: QtC.QCborValue ```
    pub fn OperatorPlusAssign(self: ?*anyopaque, v: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborArray_OperatorPlusAssign(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#operator<<)
    ///
    /// ``` self: QtC.QCborArray, v: QtC.QCborValue ```
    pub fn OperatorShiftLeft(self: ?*anyopaque, v: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborArray_OperatorShiftLeft(@ptrCast(self), @ptrCast(v));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#fromStringList)
    ///
    /// ``` list: [][]const u8, allocator: std.mem.Allocator ```
    pub fn FromStringList(list: [][]const u8, allocator: std.mem.Allocator) QtC.QCborArray {
        var list_arr = allocator.alloc(qtc.struct_libqt_string, list.len) catch @panic("qcborarray.FromStringList: Memory allocation failed");
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
        return qtc.QCborArray_FromStringList(list_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#fromJsonArray)
    ///
    /// ``` array: QtC.QJsonArray ```
    pub fn FromJsonArray(array: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborArray_FromJsonArray(@ptrCast(array));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#toJsonArray)
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn ToJsonArray(self: ?*anyopaque) QtC.QJsonArray {
        return qtc.QCborArray_ToJsonArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qcborarray.html#dtor.QCborArray)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QCborArray ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborArray_Delete(@ptrCast(self));
    }
};
