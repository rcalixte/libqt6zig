const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QCborValue = @import("libqt6").QCborValue;
const QCborValueConstRef = @import("libqt6").QCborValueConstRef;
const QCborValueRef = @import("libqt6").QCborValueRef;
const QJsonArray = @import("libqt6").QJsonArray;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html)
pub const QCborArray = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborArray,

    pub const _is_QCborArray = {};

    /// New constructs a new QCborArray object.
    ///
    pub fn New() QCborArray {
        return .{ .ptr = qtc.QCborArray_new() };
    }

    /// New2 constructs a new QCborArray object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborArray `
    ///
    pub fn New2(other: anytype) QCborArray {
        comptime _ = @TypeOf(other)._is_QCborArray;
        return .{ .ptr = qtc.QCborArray_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` other: QCborArray `
    ///
    pub fn OperatorAssign(self: QCborArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborArray;
        qtc.QCborArray_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` other: QCborArray `
    ///
    pub fn Swap(self: QCborArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborArray;
        qtc.QCborArray_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#toCborValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn ToCborValue(self: QCborArray) QCborValue {
        return .{ .ptr = qtc.QCborArray_ToCborValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn Size(self: QCborArray) isize {
        return qtc.QCborArray_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn IsEmpty(self: QCborArray) bool {
        return qtc.QCborArray_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn Clear(self: QCborArray) void {
        qtc.QCborArray_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` i: isize `
    ///
    pub fn At(self: QCborArray, i: isize) QCborValue {
        return .{ .ptr = qtc.QCborArray_At(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn First(self: QCborArray) QCborValue {
        return .{ .ptr = qtc.QCborArray_First(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn Last(self: QCborArray) QCborValue {
        return .{ .ptr = qtc.QCborArray_Last(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorSubscript(self: QCborArray, i: isize) QCborValue {
        return .{ .ptr = qtc.QCborArray_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn First2(self: QCborArray) QCborValueRef {
        return .{ .ptr = qtc.QCborArray_First2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn Last2(self: QCborArray) QCborValueRef {
        return .{ .ptr = qtc.QCborArray_Last2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorSubscript2(self: QCborArray, i: isize) QCborValueRef {
        return .{ .ptr = qtc.QCborArray_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` i: isize `
    ///
    /// ` value: QCborValue `
    ///
    pub fn Insert(self: QCborArray, i: isize, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QCborValue;
        qtc.QCborArray_Insert(@ptrCast(self.ptr), @bitCast(i), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#prepend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` value: QCborValue `
    ///
    pub fn Prepend(self: QCborArray, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QCborValue;
        qtc.QCborArray_Prepend(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` value: QCborValue `
    ///
    pub fn Append(self: QCborArray, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QCborValue;
        qtc.QCborArray_Append(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` it: QCborArray__ConstIterator `
    ///
    pub fn Extract(self: QCborArray, it: anytype) QCborValue {
        comptime _ = @TypeOf(it)._is_QCborArray__ConstIterator;
        return .{ .ptr = qtc.QCborArray_Extract(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` it: QCborArray__Iterator `
    ///
    pub fn Extract2(self: QCborArray, it: anytype) QCborValue {
        comptime _ = @TypeOf(it)._is_QCborArray__Iterator;
        return .{ .ptr = qtc.QCborArray_Extract2(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` i: isize `
    ///
    pub fn RemoveAt(self: QCborArray, i: isize) void {
        qtc.QCborArray_RemoveAt(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` i: isize `
    ///
    pub fn TakeAt(self: QCborArray, i: isize) QCborValue {
        return .{ .ptr = qtc.QCborArray_TakeAt(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#removeFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn RemoveFirst(self: QCborArray) void {
        qtc.QCborArray_RemoveFirst(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#removeLast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn RemoveLast(self: QCborArray) void {
        qtc.QCborArray_RemoveLast(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#takeFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn TakeFirst(self: QCborArray) QCborValue {
        return .{ .ptr = qtc.QCborArray_TakeFirst(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#takeLast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn TakeLast(self: QCborArray) QCborValue {
        return .{ .ptr = qtc.QCborArray_TakeLast(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` value: QCborValue `
    ///
    pub fn Contains(self: QCborArray, value: anytype) bool {
        comptime _ = @TypeOf(value)._is_QCborValue;
        return qtc.QCborArray_Contains(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` other: QCborArray `
    ///
    pub fn Compare(self: QCborArray, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QCborArray;
        return qtc.QCborArray_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn Begin(self: QCborArray) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray_Begin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn ConstBegin(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_ConstBegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn Begin2(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_Begin2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn Cbegin(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_Cbegin(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn End(self: QCborArray) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray_End(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn ConstEnd(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_ConstEnd(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn End2(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_End2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn Cend(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_Cend(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` before: QCborArray__Iterator `
    ///
    /// ` value: QCborValue `
    ///
    pub fn Insert2(self: QCborArray, before: anytype, value: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(before)._is_QCborArray__Iterator;
        comptime _ = @TypeOf(value)._is_QCborValue;
        return .{ .ptr = qtc.QCborArray_Insert2(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(value.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` before: QCborArray__ConstIterator `
    ///
    /// ` value: QCborValue `
    ///
    pub fn Insert3(self: QCborArray, before: anytype, value: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(before)._is_QCborArray__ConstIterator;
        comptime _ = @TypeOf(value)._is_QCborValue;
        return .{ .ptr = qtc.QCborArray_Insert3(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(value.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` it: QCborArray__Iterator `
    ///
    pub fn Erase(self: QCborArray, it: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(it)._is_QCborArray__Iterator;
        return .{ .ptr = qtc.QCborArray_Erase(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` it: QCborArray__ConstIterator `
    ///
    pub fn Erase2(self: QCborArray, it: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(it)._is_QCborArray__ConstIterator;
        return .{ .ptr = qtc.QCborArray_Erase2(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#push_back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` t: QCborValue `
    ///
    pub fn PushBack(self: QCborArray, t: anytype) void {
        comptime _ = @TypeOf(t)._is_QCborValue;
        qtc.QCborArray_PushBack(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#push_front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` t: QCborValue `
    ///
    pub fn PushFront(self: QCborArray, t: anytype) void {
        comptime _ = @TypeOf(t)._is_QCborValue;
        qtc.QCborArray_PushFront(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#pop_front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn PopFront(self: QCborArray) void {
        qtc.QCborArray_PopFront(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#pop_back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn PopBack(self: QCborArray) void {
        qtc.QCborArray_PopBack(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn Empty(self: QCborArray) bool {
        return qtc.QCborArray_Empty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` v: QCborValue `
    ///
    pub fn OperatorPlus(self: QCborArray, v: anytype) QCborArray {
        comptime _ = @TypeOf(v)._is_QCborValue;
        return .{ .ptr = qtc.QCborArray_OperatorPlus(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` v: QCborValue `
    ///
    pub fn OperatorPlusAssign(self: QCborArray, v: anytype) QCborArray {
        comptime _ = @TypeOf(v)._is_QCborValue;
        return .{ .ptr = qtc.QCborArray_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` v: QCborValue `
    ///
    pub fn OperatorShiftLeft(self: QCborArray, v: anytype) QCborArray {
        comptime _ = @TypeOf(v)._is_QCborValue;
        return .{ .ptr = qtc.QCborArray_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#fromStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` list: []const []const u8 `
    ///
    pub fn FromStringList(allocator: std.mem.Allocator, list: []const []const u8) QCborArray {
        const list_arr = allocator.alloc(qtc.libqt_string, list.len) catch @panic("qcborarray.FromStringList: Memory allocation failed");
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
        return .{ .ptr = qtc.QCborArray_FromStringList(list_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#fromVariantList)
    ///
    /// ## Parameter(s):
    ///
    /// ` list: []QVariant `
    ///
    pub fn FromVariantList(list: []QVariant) QCborArray {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        return .{ .ptr = qtc.QCborArray_FromVariantList(list_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#fromJsonArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` array: QJsonArray `
    ///
    pub fn FromJsonArray(array: anytype) QCborArray {
        comptime _ = @TypeOf(array)._is_QJsonArray;
        return .{ .ptr = qtc.QCborArray_FromJsonArray(@ptrCast(array.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#toVariantList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToVariantList(self: QCborArray, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QCborArray_ToVariantList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("qcborarray.ToVariantList: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#toJsonArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn ToJsonArray(self: QCborArray) QJsonArray {
        return .{ .ptr = qtc.QCborArray_ToJsonArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#dtor.QCborArray)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborArray `
    ///
    pub fn Delete(self: QCborArray) void {
        qtc.QCborArray_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html)
pub const QCborArray__Iterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborArray__Iterator,

    pub const _is_QCborArray__Iterator = {};

    /// New constructs a new QCborArray::Iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborArray__Iterator `
    ///
    pub fn New(other: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(other)._is_QCborArray__Iterator;
        return .{ .ptr = qtc.QCborArray__Iterator_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QCborArray::Iterator object.
    ///
    pub fn New2() QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_new2() };
    }

    /// New3 constructs a new QCborArray::Iterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborArray__Iterator `
    ///
    pub fn New3(param1: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(param1)._is_QCborArray__Iterator;
        return .{ .ptr = qtc.QCborArray__Iterator_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` other: QCborArray__Iterator `
    ///
    pub fn OperatorAssign(self: QCborArray__Iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborArray__Iterator;
        qtc.QCborArray__Iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn OperatorMultiply(self: QCborArray__Iterator) QCborValueRef {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn OperatorMinusGreater(self: QCborArray__Iterator) QCborValueRef {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn OperatorMinusGreater2(self: QCborArray__Iterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinusGreater2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorSubscript(self: QCborArray__Iterator, j: isize) QCborValueRef {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn OperatorPlusPlus(self: QCborArray__Iterator) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QCborArray__Iterator, param1: i32) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn OperatorMinusMinus(self: QCborArray__Iterator) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: QCborArray__Iterator, param1: i32) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlusAssign(self: QCborArray__Iterator, j: isize) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinusAssign(self: QCborArray__Iterator, j: isize) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlus(self: QCborArray__Iterator, j: isize) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinus(self: QCborArray__Iterator, j: isize) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: QCborArray__Iterator `
    ///
    pub fn OperatorMinus2(self: QCborArray__Iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QCborArray__Iterator;
        return qtc.QCborArray__Iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn Delete(self: QCborArray__Iterator) void {
        qtc.QCborArray__Iterator_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html)
pub const QCborArray__ConstIterator = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborArray__ConstIterator,

    pub const _is_QCborArray__ConstIterator = {};

    /// New constructs a new QCborArray::ConstIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborArray__ConstIterator `
    ///
    pub fn New(other: anytype) QCborArray__ConstIterator {
        comptime _ = @TypeOf(other)._is_QCborArray__ConstIterator;
        return .{ .ptr = qtc.QCborArray__ConstIterator_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QCborArray::ConstIterator object.
    ///
    pub fn New2() QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_new2() };
    }

    /// New3 constructs a new QCborArray::ConstIterator object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborArray__ConstIterator `
    ///
    pub fn New3(param1: anytype) QCborArray__ConstIterator {
        comptime _ = @TypeOf(param1)._is_QCborArray__ConstIterator;
        return .{ .ptr = qtc.QCborArray__ConstIterator_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` other: QCborArray__ConstIterator `
    ///
    pub fn OperatorAssign(self: QCborArray__ConstIterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborArray__ConstIterator;
        qtc.QCborArray__ConstIterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    pub fn OperatorMultiply(self: QCborArray__ConstIterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    pub fn OperatorMinusGreater(self: QCborArray__ConstIterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorSubscript(self: QCborArray__ConstIterator, j: isize) QCborValueConstRef {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    pub fn OperatorPlusPlus(self: QCborArray__ConstIterator) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorPlusPlus2(self: QCborArray__ConstIterator, param1: i32) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    pub fn OperatorMinusMinus(self: QCborArray__ConstIterator) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn OperatorMinusMinus2(self: QCborArray__ConstIterator, param1: i32) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlusAssign(self: QCborArray__ConstIterator, j: isize) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinusAssign(self: QCborArray__ConstIterator, j: isize) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorPlus(self: QCborArray__ConstIterator, j: isize) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn OperatorMinus(self: QCborArray__ConstIterator, j: isize) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: QCborArray__ConstIterator `
    ///
    pub fn OperatorMinus2(self: QCborArray__ConstIterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QCborArray__ConstIterator;
        return qtc.QCborArray__ConstIterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    pub fn Delete(self: QCborArray__ConstIterator) void {
        qtc.QCborArray__ConstIterator_Delete(@ptrCast(self.ptr));
    }
};
