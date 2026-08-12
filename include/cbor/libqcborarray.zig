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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborArray object in C++ memory
    ///
    pub fn new() QCborArray {
        return .{ .ptr = qtc.QCborArray_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCborArray object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborArray `
    ///
    pub fn new2(other: anytype) QCborArray {
        comptime _ = @TypeOf(other)._is_QCborArray;
        return .{ .ptr = qtc.QCborArray_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` other: QCborArray `
    ///
    pub fn operatorAssign(self: QCborArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborArray;
        qtc.QCborArray_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` other: QCborArray `
    ///
    pub fn swap(self: QCborArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborArray;
        qtc.QCborArray_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toCborValue` instead
    ///
    pub const ToCborValue = toCborValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#toCborValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn toCborValue(self: QCborArray) QCborValue {
        return .{ .ptr = qtc.QCborArray_ToCborValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn size(self: QCborArray) isize {
        return qtc.QCborArray_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn isEmpty(self: QCborArray) bool {
        return qtc.QCborArray_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn clear(self: QCborArray) void {
        qtc.QCborArray_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `at` instead
    ///
    pub const At = at;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` i: isize `
    ///
    pub fn at(self: QCborArray, i: isize) QCborValue {
        return .{ .ptr = qtc.QCborArray_At(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `first` instead
    ///
    pub const First = first;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn first(self: QCborArray) QCborValue {
        return .{ .ptr = qtc.QCborArray_First(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `last` instead
    ///
    pub const Last = last;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn last(self: QCborArray) QCborValue {
        return .{ .ptr = qtc.QCborArray_Last(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` i: isize `
    ///
    pub fn operatorSubscript(self: QCborArray, i: isize) QCborValue {
        return .{ .ptr = qtc.QCborArray_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `first2` instead
    ///
    pub const First2 = first2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn first2(self: QCborArray) QCborValueRef {
        return .{ .ptr = qtc.QCborArray_First2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `last2` instead
    ///
    pub const Last2 = last2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#last)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn last2(self: QCborArray) QCborValueRef {
        return .{ .ptr = qtc.QCborArray_Last2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` i: isize `
    ///
    pub fn operatorSubscript2(self: QCborArray, i: isize) QCborValueRef {
        return .{ .ptr = qtc.QCborArray_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

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
    pub fn insert(self: QCborArray, i: isize, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QCborValue;
        qtc.QCborArray_Insert(@ptrCast(self.ptr), @bitCast(i), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `prepend` instead
    ///
    pub const Prepend = prepend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#prepend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` value: QCborValue `
    ///
    pub fn prepend(self: QCborArray, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QCborValue;
        qtc.QCborArray_Prepend(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` value: QCborValue `
    ///
    pub fn append(self: QCborArray, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QCborValue;
        qtc.QCborArray_Append(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `extract` instead
    ///
    pub const Extract = extract;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` it: QCborArray__ConstIterator `
    ///
    pub fn extract(self: QCborArray, it: anytype) QCborValue {
        comptime _ = @TypeOf(it)._is_QCborArray__ConstIterator;
        return .{ .ptr = qtc.QCborArray_Extract(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### DEPRECATED: Use `extract2` instead
    ///
    pub const Extract2 = extract2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#extract)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` it: QCborArray__Iterator `
    ///
    pub fn extract2(self: QCborArray, it: anytype) QCborValue {
        comptime _ = @TypeOf(it)._is_QCborArray__Iterator;
        return .{ .ptr = qtc.QCborArray_Extract2(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### DEPRECATED: Use `removeAt` instead
    ///
    pub const RemoveAt = removeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#removeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` i: isize `
    ///
    pub fn removeAt(self: QCborArray, i: isize) void {
        qtc.QCborArray_RemoveAt(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `takeAt` instead
    ///
    pub const TakeAt = takeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` i: isize `
    ///
    pub fn takeAt(self: QCborArray, i: isize) QCborValue {
        return .{ .ptr = qtc.QCborArray_TakeAt(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `removeFirst` instead
    ///
    pub const RemoveFirst = removeFirst;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#removeFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn removeFirst(self: QCborArray) void {
        qtc.QCborArray_RemoveFirst(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeLast` instead
    ///
    pub const RemoveLast = removeLast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#removeLast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn removeLast(self: QCborArray) void {
        qtc.QCborArray_RemoveLast(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `takeFirst` instead
    ///
    pub const TakeFirst = takeFirst;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#takeFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn takeFirst(self: QCborArray) QCborValue {
        return .{ .ptr = qtc.QCborArray_TakeFirst(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `takeLast` instead
    ///
    pub const TakeLast = takeLast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#takeLast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn takeLast(self: QCborArray) QCborValue {
        return .{ .ptr = qtc.QCborArray_TakeLast(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` value: QCborValue `
    ///
    pub fn contains(self: QCborArray, value: anytype) bool {
        comptime _ = @TypeOf(value)._is_QCborValue;
        return qtc.QCborArray_Contains(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` other: QCborArray `
    ///
    pub fn compare(self: QCborArray, other: anytype) i32 {
        comptime _ = @TypeOf(other)._is_QCborArray;
        return qtc.QCborArray_Compare(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `begin` instead
    ///
    pub const Begin = begin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn begin(self: QCborArray) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray_Begin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `constBegin` instead
    ///
    pub const ConstBegin = constBegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#constBegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn constBegin(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_ConstBegin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `begin2` instead
    ///
    pub const Begin2 = begin2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#begin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn begin2(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_Begin2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cbegin` instead
    ///
    pub const Cbegin = cbegin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#cbegin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn cbegin(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_Cbegin(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn end(self: QCborArray) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray_End(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `constEnd` instead
    ///
    pub const ConstEnd = constEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#constEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn constEnd(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_ConstEnd(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `end2` instead
    ///
    pub const End2 = end2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn end2(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_End2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cend` instead
    ///
    pub const Cend = cend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#cend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn cend(self: QCborArray) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray_Cend(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `insert2` instead
    ///
    pub const Insert2 = insert2;

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
    pub fn insert2(self: QCborArray, before: anytype, value: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(before)._is_QCborArray__Iterator;
        comptime _ = @TypeOf(value)._is_QCborValue;
        return .{ .ptr = qtc.QCborArray_Insert2(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `insert3` instead
    ///
    pub const Insert3 = insert3;

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
    pub fn insert3(self: QCborArray, before: anytype, value: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(before)._is_QCborArray__ConstIterator;
        comptime _ = @TypeOf(value)._is_QCborValue;
        return .{ .ptr = qtc.QCborArray_Insert3(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(value.ptr)) };
    }

    /// ### DEPRECATED: Use `erase` instead
    ///
    pub const Erase = erase;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` it: QCborArray__Iterator `
    ///
    pub fn erase(self: QCborArray, it: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(it)._is_QCborArray__Iterator;
        return .{ .ptr = qtc.QCborArray_Erase(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### DEPRECATED: Use `erase2` instead
    ///
    pub const Erase2 = erase2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#erase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` it: QCborArray__ConstIterator `
    ///
    pub fn erase2(self: QCborArray, it: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(it)._is_QCborArray__ConstIterator;
        return .{ .ptr = qtc.QCborArray_Erase2(@ptrCast(self.ptr), @ptrCast(it.ptr)) };
    }

    /// ### DEPRECATED: Use `pushBack` instead
    ///
    pub const PushBack = pushBack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#push_back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` t: QCborValue `
    ///
    pub fn pushBack(self: QCborArray, t: anytype) void {
        comptime _ = @TypeOf(t)._is_QCborValue;
        qtc.QCborArray_PushBack(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### DEPRECATED: Use `pushFront` instead
    ///
    pub const PushFront = pushFront;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#push_front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` t: QCborValue `
    ///
    pub fn pushFront(self: QCborArray, t: anytype) void {
        comptime _ = @TypeOf(t)._is_QCborValue;
        qtc.QCborArray_PushFront(@ptrCast(self.ptr), @ptrCast(t.ptr));
    }

    /// ### DEPRECATED: Use `popFront` instead
    ///
    pub const PopFront = popFront;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#pop_front)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn popFront(self: QCborArray) void {
        qtc.QCborArray_PopFront(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `popBack` instead
    ///
    pub const PopBack = popBack;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#pop_back)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn popBack(self: QCborArray) void {
        qtc.QCborArray_PopBack(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `empty` instead
    ///
    pub const Empty = empty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#empty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn empty(self: QCborArray) bool {
        return qtc.QCborArray_Empty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` v: QCborValue `
    ///
    pub fn operatorPlus(self: QCborArray, v: anytype) QCborArray {
        comptime _ = @TypeOf(v)._is_QCborValue;
        return .{ .ptr = qtc.QCborArray_OperatorPlus(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` v: QCborValue `
    ///
    pub fn operatorPlusAssign(self: QCborArray, v: anytype) QCborArray {
        comptime _ = @TypeOf(v)._is_QCborValue;
        return .{ .ptr = qtc.QCborArray_OperatorPlusAssign(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` v: QCborValue `
    ///
    pub fn operatorShiftLeft(self: QCborArray, v: anytype) QCborArray {
        comptime _ = @TypeOf(v)._is_QCborValue;
        return .{ .ptr = qtc.QCborArray_OperatorShiftLeft(@ptrCast(self.ptr), @ptrCast(v.ptr)) };
    }

    /// ### DEPRECATED: Use `fromStringList` instead
    ///
    pub const FromStringList = fromStringList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#fromStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` list: []const []const u8 `
    ///
    pub fn fromStringList(allocator: std.mem.Allocator, list: []const []const u8) QCborArray {
        const list_arr = allocator.alloc(qtc.libqt_string, list.len) catch @panic("QCborArray.fromStringList: Memory allocation failed");
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
        return .{ .ptr = qtc.QCborArray_FromStringList(list_list) };
    }

    /// ### DEPRECATED: Use `fromVariantList` instead
    ///
    pub const FromVariantList = fromVariantList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#fromVariantList)
    ///
    /// ## Parameter(s):
    ///
    /// ` list: []QVariant `
    ///
    pub fn fromVariantList(list: []QVariant) QCborArray {
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = @ptrCast(list.ptr),
        };
        return .{ .ptr = qtc.QCborArray_FromVariantList(list_list) };
    }

    /// ### DEPRECATED: Use `fromJsonArray` instead
    ///
    pub const FromJsonArray = fromJsonArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#fromJsonArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` array: QJsonArray `
    ///
    pub fn fromJsonArray(array: anytype) QCborArray {
        comptime _ = @TypeOf(array)._is_QJsonArray;
        return .{ .ptr = qtc.QCborArray_FromJsonArray(@ptrCast(array.ptr)) };
    }

    /// ### DEPRECATED: Use `toVariantList` instead
    ///
    pub const ToVariantList = toVariantList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#toVariantList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toVariantList(self: QCborArray, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QCborArray_ToVariantList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QCborArray.toVariantList: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `toJsonArray` instead
    ///
    pub const ToJsonArray = toJsonArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#toJsonArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray `
    ///
    pub fn toJsonArray(self: QCborArray) QJsonArray {
        return .{ .ptr = qtc.QCborArray_ToJsonArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray.html#dtor.QCborArray)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborArray `
    ///
    pub fn delete(self: QCborArray) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborArray::Iterator object in C++ memory
    ///
    pub fn new() QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCborArray::Iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborArray__Iterator `
    ///
    pub fn new2(other: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(other)._is_QCborArray__Iterator;
        return .{ .ptr = qtc.QCborArray__Iterator_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCborArray::Iterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborArray__Iterator `
    ///
    pub fn new3(param1: anytype) QCborArray__Iterator {
        comptime _ = @TypeOf(param1)._is_QCborArray__Iterator;
        return .{ .ptr = qtc.QCborArray__Iterator_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` other: QCborArray__Iterator `
    ///
    pub fn operatorAssign(self: QCborArray__Iterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborArray__Iterator;
        qtc.QCborArray__Iterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn operatorMultiply(self: QCborArray__Iterator) QCborValueRef {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater` instead
    ///
    pub const OperatorMinusGreater = operatorMinusGreater;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn operatorMinusGreater(self: QCborArray__Iterator) QCborValueRef {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater2` instead
    ///
    pub const OperatorMinusGreater2 = operatorMinusGreater2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn operatorMinusGreater2(self: QCborArray__Iterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinusGreater2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorSubscript(self: QCborArray__Iterator, j: isize) QCborValueRef {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn operatorPlusPlus(self: QCborArray__Iterator) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QCborArray__Iterator, param1: i32) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn operatorMinusMinus(self: QCborArray__Iterator) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QCborArray__Iterator, param1: i32) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlusAssign(self: QCborArray__Iterator, j: isize) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinusAssign(self: QCborArray__Iterator, j: isize) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlus(self: QCborArray__Iterator, j: isize) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus` instead
    ///
    pub const OperatorMinus = operatorMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinus(self: QCborArray__Iterator, j: isize) QCborArray__Iterator {
        return .{ .ptr = qtc.QCborArray__Iterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus2` instead
    ///
    pub const OperatorMinus2 = operatorMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-iterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__Iterator `
    ///
    /// ` j: QCborArray__Iterator `
    ///
    pub fn operatorMinus2(self: QCborArray__Iterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QCborArray__Iterator;
        return qtc.QCborArray__Iterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborArray__Iterator `
    ///
    pub fn delete(self: QCborArray__Iterator) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborArray::ConstIterator object in C++ memory
    ///
    pub fn new() QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCborArray::ConstIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QCborArray__ConstIterator `
    ///
    pub fn new2(other: anytype) QCborArray__ConstIterator {
        comptime _ = @TypeOf(other)._is_QCborArray__ConstIterator;
        return .{ .ptr = qtc.QCborArray__ConstIterator_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCborArray::ConstIterator object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QCborArray__ConstIterator `
    ///
    pub fn new3(param1: anytype) QCborArray__ConstIterator {
        comptime _ = @TypeOf(param1)._is_QCborArray__ConstIterator;
        return .{ .ptr = qtc.QCborArray__ConstIterator_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` other: QCborArray__ConstIterator `
    ///
    pub fn operatorAssign(self: QCborArray__ConstIterator, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QCborArray__ConstIterator;
        qtc.QCborArray__ConstIterator_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    pub fn operatorMultiply(self: QCborArray__ConstIterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMultiply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusGreater` instead
    ///
    pub const OperatorMinusGreater = operatorMinusGreater;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    pub fn operatorMinusGreater(self: QCborArray__ConstIterator) QCborValueConstRef {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMinusGreater(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorSubscript(self: QCborArray__ConstIterator, j: isize) QCborValueConstRef {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorSubscript(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    pub fn operatorPlusPlus(self: QCborArray__ConstIterator) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QCborArray__ConstIterator, param1: i32) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    pub fn operatorMinusMinus(self: QCborArray__ConstIterator) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QCborArray__ConstIterator, param1: i32) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorPlusAssign` instead
    ///
    pub const OperatorPlusAssign = operatorPlusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlusAssign(self: QCborArray__ConstIterator, j: isize) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorPlusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinusAssign` instead
    ///
    pub const OperatorMinusAssign = operatorMinusAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator--eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinusAssign(self: QCborArray__ConstIterator, j: isize) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMinusAssign(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorPlus(self: QCborArray__ConstIterator, j: isize) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorPlus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus` instead
    ///
    pub const OperatorMinus = operatorMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: isize `
    ///
    pub fn operatorMinus(self: QCborArray__ConstIterator, j: isize) QCborArray__ConstIterator {
        return .{ .ptr = qtc.QCborArray__ConstIterator_OperatorMinus(@ptrCast(self.ptr), @bitCast(j)) };
    }

    /// ### DEPRECATED: Use `operatorMinus2` instead
    ///
    pub const OperatorMinus2 = operatorMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborarray-constiterator.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    /// ` j: QCborArray__ConstIterator `
    ///
    pub fn operatorMinus2(self: QCborArray__ConstIterator, j: anytype) isize {
        comptime _ = @TypeOf(j)._is_QCborArray__ConstIterator;
        return qtc.QCborArray__ConstIterator_OperatorMinus2(@ptrCast(self.ptr), @ptrCast(j.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborArray__ConstIterator `
    ///
    pub fn delete(self: QCborArray__ConstIterator) void {
        qtc.QCborArray__ConstIterator_Delete(@ptrCast(self.ptr));
    }
};
