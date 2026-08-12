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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJsonArray object in C++ memory
    ///
    pub fn new() QJsonArray {
        return .{ .ptr = qtc.QJsonArray_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJsonArray object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonArray `
    ///
    pub fn new2(other: anytype) QJsonArray {
        comptime _ = @TypeOf(other)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonArray_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` other: QJsonArray `
    ///
    pub fn operatorAssign(self: QJsonArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonArray;
        qtc.QJsonArray_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fromStringList` instead
    ///
    pub const FromStringList = fromStringList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#fromStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` list: []const []const u8 `
    ///
    pub fn fromStringList(allocator: std.mem.Allocator, list: []const []const u8) QJsonArray {
        const list_arr = allocator.alloc(qtc.libqt_string, list.len) catch @panic("QJsonArray.fromStringList: Memory allocation failed");
        defer allocator.free(list_arr);
        for (list, 0..list.len) |str_item, i|
            list_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = list_arr.ptr,
        };
        return .{ .ptr = qtc.QJsonArray_FromStringList(list_list) };
    }

    /// ### DEPRECATED: Use `fromVariantList` instead
    ///
    pub const FromVariantList = fromVariantList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#fromVariantList)
    ///
    /// ## Parameter(s):
    ///
    /// ` list: []QVariant `
    ///
    pub fn fromVariantList(list: []QVariant) QJsonArray {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        return .{ .ptr = qtc.QJsonArray_FromVariantList(list_list) };
    }

    /// ### DEPRECATED: Use `toVariantList` instead
    ///
    pub const ToVariantList = toVariantList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#toVariantList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toVariantList(self: QJsonArray, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QJsonArray_ToVariantList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QJsonArray.toVariantList: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn size(self: QJsonArray) isize {
        return qtc.QJsonArray_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn count(self: QJsonArray) isize {
        return qtc.QJsonArray_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn isEmpty(self: QJsonArray) bool {
        return qtc.QJsonArray_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `at` instead
    ///
    pub const At = at;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    pub fn at(self: QJsonArray, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonArray_At(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `first` instead
    ///
    pub const First = first;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn first(self: QJsonArray) QJsonValue {
        return .{ .ptr = qtc.QJsonArray_First(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `last` instead
    ///
    pub const Last = last;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn last(self: QJsonArray) QJsonValue {
        return .{ .ptr = qtc.QJsonArray_Last(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `prepend` instead
    ///
    pub const Prepend = prepend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#prepend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` value: QJsonValue `
    ///
    pub fn prepend(self: QJsonArray, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QJsonValue;
        qtc.QJsonArray_Prepend(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` value: QJsonValue `
    ///
    pub fn append(self: QJsonArray, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QJsonValue;
        qtc.QJsonArray_Append(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `removeAt` instead
    ///
    pub const RemoveAt = removeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    pub fn removeAt(self: QJsonArray, i: isize) void {
        qtc.QJsonArray_RemoveAt(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `takeAt` instead
    ///
    pub const TakeAt = takeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    pub fn takeAt(self: QJsonArray, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonArray_TakeAt(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `removeFirst` instead
    ///
    pub const RemoveFirst = removeFirst;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#removeFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn removeFirst(self: QJsonArray) void {
        qtc.QJsonArray_RemoveFirst(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeLast` instead
    ///
    pub const RemoveLast = removeLast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#removeLast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn removeLast(self: QJsonArray) void {
        qtc.QJsonArray_RemoveLast(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

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
    pub fn insert(self: QJsonArray, i: isize, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QJsonValue;
        qtc.QJsonArray_Insert(@ptrCast(self.ptr), @bitCast(i), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

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
    pub fn replace(self: QJsonArray, i: isize, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QJsonValue;
        qtc.QJsonArray_Replace(@ptrCast(self.ptr), @bitCast(i), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` element: QJsonValue `
    ///
    pub fn contains(self: QJsonArray, element: anytype) bool {
        comptime _ = @TypeOf(element)._is_QJsonValue;
        return qtc.QJsonArray_Contains(@ptrCast(self.ptr), @ptrCast(element.ptr));
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    pub fn operatorSubscript(self: QJsonArray, i: isize) QJsonValueRef {
        return .{ .ptr = qtc.QJsonArray_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` i: isize `
    ///
    pub fn operatorSubscript2(self: QJsonArray, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonArray_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` other: QJsonArray `
    ///
    pub fn swap(self: QJsonArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonArray;
        qtc.QJsonArray_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn begin(self: QJsonArray) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `begin2` instead
    ///
    pub const Begin2 = begin2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn begin2(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_Begin2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `constBegin` instead
    ///
    pub const ConstBegin = constBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn constBegin(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_ConstBegin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cbegin` instead
    ///
    pub const Cbegin = cbegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn cbegin(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_Cbegin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn end(self: QJsonArray) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end2` instead
    ///
    pub const End2 = end2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn end2(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_End2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `constEnd` instead
    ///
    pub const ConstEnd = constEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn constEnd(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_ConstEnd(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cend` instead
    ///
    pub const Cend = cend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn cend(self: QJsonArray) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray_Cend(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `insert2` instead
    ///
    pub const Insert2 = insert2;

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
    pub fn insert2(self: QJsonArray, before: anytype, value: anytype) QJsonArray__iterator {
        comptime _ = @TypeOf(before)._is_QJsonArray__iterator;
        comptime _ = @TypeOf(value)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonArray_Insert2(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `erase` instead
    ///
    pub const Erase = erase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` it: QJsonArray__iterator `
    ///
    pub fn erase(self: QJsonArray, it: anytype) QJsonArray__iterator {
        comptime _ = @TypeOf(it)._is_QJsonArray__iterator;
        return .{ .ptr = qtc.QJsonArray_Erase(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` v: QJsonValue `
    ///
    pub fn operatorPlus(self: QJsonArray, v: anytype) QJsonArray {
        comptime _ = @TypeOf(v)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonArray_OperatorPlus(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` v: QJsonValue `
    ///
    pub fn operatorPlusAssign(self: QJsonArray, v: anytype) QJsonArray {
        comptime _ = @TypeOf(v)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonArray_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` v: QJsonValue `
    ///
    pub fn operatorShiftLeft(self: QJsonArray, v: anytype) QJsonArray {
        comptime _ = @TypeOf(v)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonArray_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### DEPRECATED: Use `pushBack` instead
    ///
    pub const PushBack = pushBack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#push_back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` t: QJsonValue `
    ///
    pub fn pushBack(self: QJsonArray, t: anytype) void {
        comptime _ = @TypeOf(t)._is_QJsonValue;
        qtc.QJsonArray_PushBack(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### DEPRECATED: Use `pushFront` instead
    ///
    pub const PushFront = pushFront;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#push_front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    /// ` t: QJsonValue `
    ///
    pub fn pushFront(self: QJsonArray, t: anytype) void {
        comptime _ = @TypeOf(t)._is_QJsonValue;
        qtc.QJsonArray_PushFront(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### DEPRECATED: Use `popFront` instead
    ///
    pub const PopFront = popFront;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#pop_front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn popFront(self: QJsonArray) void {
        qtc.QJsonArray_PopFront(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `popBack` instead
    ///
    pub const PopBack = popBack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#pop_back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn popBack(self: QJsonArray) void {
        qtc.QJsonArray_PopBack(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `empty` instead
    ///
    pub const Empty = empty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray `
    ///
    pub fn empty(self: QJsonArray) bool {
        return qtc.QJsonArray_Empty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray.html#dtor.QJsonArray)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonArray `
    ///
    pub fn delete(self: QJsonArray) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJsonArray::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonArray__iterator `
    ///
    pub fn new(other: anytype) QJsonArray__iterator {
        comptime _ = @TypeOf(other)._is_QJsonArray__iterator;
        return .{ .ptr = qtc.QJsonArray__iterator_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJsonArray::iterator object in C++ memory
    ///
    pub fn new2() QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJsonArray::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` array: QJsonArray `
    ///
    /// ` index: isize `
    ///
    pub fn new3(array: anytype, index: isize) QJsonArray__iterator {
        comptime _ = @TypeOf(array)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonArray__iterator_new3(@ptrCast(array.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJsonArray::iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonArray__iterator `
    ///
    pub fn new4(other: anytype) QJsonArray__iterator {
        comptime _ = @TypeOf(other)._is_QJsonArray__iterator;
        return .{ .ptr = qtc.QJsonArray__iterator_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` other: QJsonArray__iterator `
    ///
    pub fn operatorAssign(self: QJsonArray__iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonArray__iterator;
        qtc.QJsonArray__iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn operatorMultiply(self: QJsonArray__iterator) QJsonValueRef {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater` instead
    ///
    pub const OperatorMinusGreater = operatorMinusGreater;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn operatorMinusGreater(self: QJsonArray__iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater2` instead
    ///
    pub const OperatorMinusGreater2 = operatorMinusGreater2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn operatorMinusGreater2(self: QJsonArray__iterator) QJsonValueRef {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinusGreater2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorSubscript(self: QJsonArray__iterator, j: isize) QJsonValueRef {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn operatorPlusPlus(self: QJsonArray__iterator) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QJsonArray__iterator, param1: i32) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn operatorMinusMinus(self: QJsonArray__iterator) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QJsonArray__iterator, param1: i32) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlusAssign(self: QJsonArray__iterator, j: isize) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinusAssign(self: QJsonArray__iterator, j: isize) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlus(self: QJsonArray__iterator, j: isize) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus` instead
    ///
    pub const OperatorMinus = operatorMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinus(self: QJsonArray__iterator, j: isize) QJsonArray__iterator {
        return .{ .ptr = qtc.QJsonArray__iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus2` instead
    ///
    pub const OperatorMinus2 = operatorMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__iterator `
    ///
    /// ` j: QJsonArray__iterator `
    ///
    pub fn operatorMinus2(self: QJsonArray__iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QJsonArray__iterator;
        return qtc.QJsonArray__iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonArray__iterator `
    ///
    pub fn delete(self: QJsonArray__iterator) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJsonArray::const_iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonArray__const_iterator `
    ///
    pub fn new(other: anytype) QJsonArray__const_iterator {
        comptime _ = @TypeOf(other)._is_QJsonArray__const_iterator;
        return .{ .ptr = qtc.QJsonArray__const_iterator_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJsonArray::const_iterator object in C++ memory
    ///
    pub fn new2() QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJsonArray::const_iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` array: QJsonArray `
    ///
    /// ` index: isize `
    ///
    pub fn new3(array: anytype, index: isize) QJsonArray__const_iterator {
        comptime _ = @TypeOf(array)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonArray__const_iterator_new3(@ptrCast(array.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJsonArray::const_iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QJsonArray__iterator `
    ///
    pub fn new4(o: anytype) QJsonArray__const_iterator {
        comptime _ = @TypeOf(o)._is_QJsonArray__iterator;
        return .{ .ptr = qtc.QJsonArray__const_iterator_new4(@ptrCast(o.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QJsonArray::const_iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonArray__const_iterator `
    ///
    pub fn new5(other: anytype) QJsonArray__const_iterator {
        comptime _ = @TypeOf(other)._is_QJsonArray__const_iterator;
        return .{ .ptr = qtc.QJsonArray__const_iterator_new5(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` other: QJsonArray__const_iterator `
    ///
    pub fn operatorAssign(self: QJsonArray__const_iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonArray__const_iterator;
        qtc.QJsonArray__const_iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    pub fn operatorMultiply(self: QJsonArray__const_iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater` instead
    ///
    pub const OperatorMinusGreater = operatorMinusGreater;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    pub fn operatorMinusGreater(self: QJsonArray__const_iterator) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorSubscript(self: QJsonArray__const_iterator, j: isize) QJsonValueConstRef {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    pub fn operatorPlusPlus(self: QJsonArray__const_iterator) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QJsonArray__const_iterator, param1: i32) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    pub fn operatorMinusMinus(self: QJsonArray__const_iterator) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QJsonArray__const_iterator, param1: i32) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlusAssign(self: QJsonArray__const_iterator, j: isize) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinusAssign(self: QJsonArray__const_iterator, j: isize) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlus(self: QJsonArray__const_iterator, j: isize) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus` instead
    ///
    pub const OperatorMinus = operatorMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinus(self: QJsonArray__const_iterator, j: isize) QJsonArray__const_iterator {
        return .{ .ptr = qtc.QJsonArray__const_iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus2` instead
    ///
    pub const OperatorMinus2 = operatorMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonarray-const-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    /// ` j: QJsonArray__const_iterator `
    ///
    pub fn operatorMinus2(self: QJsonArray__const_iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QJsonArray__const_iterator;
        return qtc.QJsonArray__const_iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonArray__const_iterator `
    ///
    pub fn delete(self: QJsonArray__const_iterator) void {
        qtc.QJsonArray__const_iterator_Delete(@ptrCast(self.ptr));
    }
};
