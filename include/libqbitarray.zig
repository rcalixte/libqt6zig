const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsysinfo_enums = @import("libqsysinfo.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html)
pub const QBitArray = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBitArray,

    pub const _is_QBitArray = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBitArray object in C++ memory
    ///
    pub fn new() QBitArray {
        return .{ .ptr = qtc.QBitArray_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBitArray object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: isize `
    ///
    pub fn new2(_size: isize) QBitArray {
        return .{ .ptr = qtc.QBitArray_new2(@bitCast(_size)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBitArray object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBitArray `
    ///
    pub fn new3(other: anytype) QBitArray {
        comptime _ = @TypeOf(other)._is_QBitArray;
        return .{ .ptr = qtc.QBitArray_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QBitArray object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _size: isize `
    ///
    /// ` val: bool `
    ///
    pub fn new4(_size: isize, val: bool) QBitArray {
        return .{ .ptr = qtc.QBitArray_new4(@bitCast(_size), val) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` other: QBitArray `
    ///
    pub fn operatorAssign(self: QBitArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBitArray;
        qtc.QBitArray_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` other: QBitArray `
    ///
    pub fn swap(self: QBitArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBitArray;
        qtc.QBitArray_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn size(self: QBitArray) isize {
        return qtc.QBitArray_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn count(self: QBitArray) isize {
        return qtc.QBitArray_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count2` instead
    ///
    pub const Count2 = count2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` on: bool `
    ///
    pub fn count2(self: QBitArray, on: bool) isize {
        return qtc.QBitArray_Count2(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn isEmpty(self: QBitArray) bool {
        return qtc.QBitArray_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn isNull(self: QBitArray) bool {
        return qtc.QBitArray_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` _size: isize `
    ///
    pub fn resize(self: QBitArray, _size: isize) void {
        qtc.QBitArray_Resize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn detach(self: QBitArray) void {
        qtc.QBitArray_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDetached` instead
    ///
    pub const IsDetached = isDetached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn isDetached(self: QBitArray) bool {
        return qtc.QBitArray_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn clear(self: QBitArray) void {
        qtc.QBitArray_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `testBit` instead
    ///
    pub const TestBit = testBit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#testBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn testBit(self: QBitArray, i: isize) bool {
        return qtc.QBitArray_TestBit(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `setBit` instead
    ///
    pub const SetBit = setBit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#setBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn setBit(self: QBitArray, i: isize) void {
        qtc.QBitArray_SetBit(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `setBit2` instead
    ///
    pub const SetBit2 = setBit2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#setBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    /// ` val: bool `
    ///
    pub fn setBit2(self: QBitArray, i: isize, val: bool) void {
        qtc.QBitArray_SetBit2(@ptrCast(self.ptr), @bitCast(i), val);
    }

    /// ### DEPRECATED: Use `clearBit` instead
    ///
    pub const ClearBit = clearBit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#clearBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn clearBit(self: QBitArray, i: isize) void {
        qtc.QBitArray_ClearBit(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `toggleBit` instead
    ///
    pub const ToggleBit = toggleBit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#toggleBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn toggleBit(self: QBitArray, i: isize) bool {
        return qtc.QBitArray_ToggleBit(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `at` instead
    ///
    pub const At = at;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn at(self: QBitArray, i: isize) bool {
        return qtc.QBitArray_At(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn operatorSubscript(self: QBitArray, i: isize) QBitRef {
        return .{ .ptr = qtc.QBitArray_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn operatorSubscript2(self: QBitArray, i: isize) bool {
        return qtc.QBitArray_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `operatorBitwiseAndAssign` instead
    ///
    pub const OperatorBitwiseAndAssign = operatorBitwiseAndAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` param1: QBitArray `
    ///
    pub fn operatorBitwiseAndAssign(self: QBitArray, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QBitArray;
        qtc.QBitArray_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseOrAssign` instead
    ///
    pub const OperatorBitwiseOrAssign = operatorBitwiseOrAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` param1: QBitArray `
    ///
    pub fn operatorBitwiseOrAssign(self: QBitArray, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QBitArray;
        qtc.QBitArray_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorBitwiseNotAssign` instead
    ///
    pub const OperatorBitwiseNotAssign = operatorBitwiseNotAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5e-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` param1: QBitArray `
    ///
    pub fn operatorBitwiseNotAssign(self: QBitArray, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QBitArray;
        qtc.QBitArray_OperatorBitwiseNotAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `fill` instead
    ///
    pub const Fill = fill;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` aval: bool `
    ///
    pub fn fill(self: QBitArray, aval: bool) bool {
        return qtc.QBitArray_Fill(@ptrCast(self.ptr), aval);
    }

    /// ### DEPRECATED: Use `fill2` instead
    ///
    pub const Fill2 = fill2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` val: bool `
    ///
    /// ` first: isize `
    ///
    /// ` last: isize `
    ///
    pub fn fill2(self: QBitArray, val: bool, first: isize, last: isize) void {
        qtc.QBitArray_Fill2(@ptrCast(self.ptr), val, @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `truncate` instead
    ///
    pub const Truncate = truncate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` pos: isize `
    ///
    pub fn truncate(self: QBitArray, pos: isize) void {
        qtc.QBitArray_Truncate(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `bits` instead
    ///
    pub const Bits = bits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn bits(self: QBitArray) [:0]const u8 {
        const _ret = qtc.QBitArray_Bits(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `fromBits` instead
    ///
    pub const FromBits = fromBits;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fromBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    pub fn fromBits(data: [:0]const u8, len: isize) QBitArray {
        const data_Cstring = data.ptr;
        return .{ .ptr = qtc.QBitArray_FromBits(data_Cstring, @bitCast(len)) };
    }

    /// ### DEPRECATED: Use `toUInt32` instead
    ///
    pub const ToUInt32 = toUInt32;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` endianness: qsysinfo_enums.Endian `
    ///
    pub fn toUInt32(self: QBitArray, endianness: i32) u32 {
        return qtc.QBitArray_ToUInt32(@ptrCast(self.ptr), @bitCast(endianness));
    }

    /// ### DEPRECATED: Use `fill22` instead
    ///
    pub const Fill22 = fill22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` aval: bool `
    ///
    /// ` asize: isize `
    ///
    pub fn fill22(self: QBitArray, aval: bool, asize: isize) bool {
        return qtc.QBitArray_Fill22(@ptrCast(self.ptr), aval, @bitCast(asize));
    }

    /// ### DEPRECATED: Use `toUInt322` instead
    ///
    pub const ToUInt322 = toUInt322;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` endianness: qsysinfo_enums.Endian `
    ///
    /// ` ok: *bool `
    ///
    pub fn toUInt322(self: QBitArray, endianness: i32, ok: *bool) u32 {
        return qtc.QBitArray_ToUInt322(@ptrCast(self.ptr), @bitCast(endianness), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#dtor.QBitArray)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBitArray `
    ///
    pub fn delete(self: QBitArray) void {
        qtc.QBitArray_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html)
pub const QBitRef = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBitRef,

    pub const _is_QBitRef = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBitRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBitRef `
    ///
    pub fn new(other: anytype) QBitRef {
        comptime _ = @TypeOf(other)._is_QBitRef;
        return .{ .ptr = qtc.QBitRef_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBitRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QBitRef `
    ///
    pub fn new2(param1: anytype) QBitRef {
        comptime _ = @TypeOf(param1)._is_QBitRef;
        return .{ .ptr = qtc.QBitRef_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitRef `
    ///
    pub fn toBool(self: QBitRef) bool {
        return qtc.QBitRef_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorNot` instead
    ///
    pub const OperatorNot = operatorNot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-not)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitRef `
    ///
    pub fn operatorNot(self: QBitRef) bool {
        return qtc.QBitRef_OperatorNot(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitRef `
    ///
    /// ` val: QBitRef `
    ///
    pub fn operatorAssign(self: QBitRef, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QBitRef;
        qtc.QBitRef_OperatorAssign(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign2` instead
    ///
    pub const OperatorAssign2 = operatorAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitRef `
    ///
    /// ` val: bool `
    ///
    pub fn operatorAssign2(self: QBitRef, val: bool) void {
        qtc.QBitRef_OperatorAssign2(@ptrCast(self.ptr), val);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#dtor.QBitRef)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBitRef `
    ///
    pub fn delete(self: QBitRef) void {
        qtc.QBitRef_Delete(@ptrCast(self.ptr));
    }
};
