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
    pub fn OperatorSubscript2(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonArray_OperatorSubscript2(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonarray.html#swap)
    ///
    /// ``` self: QtC.QJsonArray, other: QtC.QJsonArray ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonArray_Swap(@ptrCast(self), @ptrCast(other));
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
