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

    /// New constructs a new QBitArray object.
    ///
    pub fn New() QBitArray {
        return .{ .ptr = qtc.QBitArray_new() };
    }

    /// New2 constructs a new QBitArray object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: isize `
    ///
    pub fn New2(size: isize) QBitArray {
        return .{ .ptr = qtc.QBitArray_new2(@bitCast(size)) };
    }

    /// New3 constructs a new QBitArray object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBitArray `
    ///
    pub fn New3(other: anytype) QBitArray {
        comptime _ = @TypeOf(other)._is_QBitArray;
        return .{ .ptr = qtc.QBitArray_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QBitArray object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: isize `
    ///
    /// ` val: bool `
    ///
    pub fn New4(size: isize, val: bool) QBitArray {
        return .{ .ptr = qtc.QBitArray_new4(@bitCast(size), val) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` other: QBitArray `
    ///
    pub fn OperatorAssign(self: QBitArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBitArray;
        qtc.QBitArray_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` other: QBitArray `
    ///
    pub fn Swap(self: QBitArray, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBitArray;
        qtc.QBitArray_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn Size(self: QBitArray) isize {
        return qtc.QBitArray_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn Count(self: QBitArray) isize {
        return qtc.QBitArray_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` on: bool `
    ///
    pub fn Count2(self: QBitArray, on: bool) isize {
        return qtc.QBitArray_Count2(@ptrCast(self.ptr), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn IsEmpty(self: QBitArray) bool {
        return qtc.QBitArray_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn IsNull(self: QBitArray) bool {
        return qtc.QBitArray_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` size: isize `
    ///
    pub fn Resize(self: QBitArray, size: isize) void {
        qtc.QBitArray_Resize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn Detach(self: QBitArray) void {
        qtc.QBitArray_Detach(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn IsDetached(self: QBitArray) bool {
        return qtc.QBitArray_IsDetached(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn Clear(self: QBitArray) void {
        qtc.QBitArray_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#testBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn TestBit(self: QBitArray, i: isize) bool {
        return qtc.QBitArray_TestBit(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#setBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn SetBit(self: QBitArray, i: isize) void {
        qtc.QBitArray_SetBit(@ptrCast(self.ptr), @bitCast(i));
    }

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
    pub fn SetBit2(self: QBitArray, i: isize, val: bool) void {
        qtc.QBitArray_SetBit2(@ptrCast(self.ptr), @bitCast(i), val);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#clearBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn ClearBit(self: QBitArray, i: isize) void {
        qtc.QBitArray_ClearBit(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#toggleBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn ToggleBit(self: QBitArray, i: isize) bool {
        return qtc.QBitArray_ToggleBit(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn At(self: QBitArray, i: isize) bool {
        return qtc.QBitArray_At(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorSubscript(self: QBitArray, i: isize) QBitRef {
        return .{ .ptr = qtc.QBitArray_OperatorSubscript(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorSubscript2(self: QBitArray, i: isize) bool {
        return qtc.QBitArray_OperatorSubscript2(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` param1: QBitArray `
    ///
    pub fn OperatorBitwiseAndAssign(self: QBitArray, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QBitArray;
        qtc.QBitArray_OperatorBitwiseAndAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` param1: QBitArray `
    ///
    pub fn OperatorBitwiseOrAssign(self: QBitArray, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QBitArray;
        qtc.QBitArray_OperatorBitwiseOrAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5e-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` param1: QBitArray `
    ///
    pub fn OperatorBitwiseNotAssign(self: QBitArray, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QBitArray;
        qtc.QBitArray_OperatorBitwiseNotAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` aval: bool `
    ///
    pub fn Fill(self: QBitArray, aval: bool) bool {
        return qtc.QBitArray_Fill(@ptrCast(self.ptr), aval);
    }

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
    pub fn Fill2(self: QBitArray, val: bool, first: isize, last: isize) void {
        qtc.QBitArray_Fill2(@ptrCast(self.ptr), val, @bitCast(first), @bitCast(last));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` pos: isize `
    ///
    pub fn Truncate(self: QBitArray, pos: isize) void {
        qtc.QBitArray_Truncate(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    pub fn Bits(self: QBitArray) [:0]const u8 {
        const _ret = qtc.QBitArray_Bits(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fromBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn FromBits(data: [:0]const u8, lenVal: isize) QBitArray {
        const data_Cstring = data.ptr;
        return .{ .ptr = qtc.QBitArray_FromBits(data_Cstring, @bitCast(lenVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitArray `
    ///
    /// ` endianness: qsysinfo_enums.Endian `
    ///
    pub fn ToUInt32(self: QBitArray, endianness: i32) u32 {
        return qtc.QBitArray_ToUInt32(@ptrCast(self.ptr), @bitCast(endianness));
    }

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
    pub fn Fill22(self: QBitArray, aval: bool, asize: isize) bool {
        return qtc.QBitArray_Fill22(@ptrCast(self.ptr), aval, @bitCast(asize));
    }

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
    pub fn ToUInt322(self: QBitArray, endianness: i32, ok: *bool) u32 {
        return qtc.QBitArray_ToUInt322(@ptrCast(self.ptr), @bitCast(endianness), @ptrCast(ok));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#dtor.QBitArray)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBitArray `
    ///
    pub fn Delete(self: QBitArray) void {
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

    /// New constructs a new QBitRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBitRef `
    ///
    pub fn New(other: anytype) QBitRef {
        comptime _ = @TypeOf(other)._is_QBitRef;
        return .{ .ptr = qtc.QBitRef_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QBitRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QBitRef `
    ///
    pub fn New2(param1: anytype) QBitRef {
        comptime _ = @TypeOf(param1)._is_QBitRef;
        return .{ .ptr = qtc.QBitRef_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitRef `
    ///
    pub fn ToBool(self: QBitRef) bool {
        return qtc.QBitRef_ToBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-not)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitRef `
    ///
    pub fn OperatorNot(self: QBitRef) bool {
        return qtc.QBitRef_OperatorNot(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitRef `
    ///
    /// ` val: QBitRef `
    ///
    pub fn OperatorAssign(self: QBitRef, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QBitRef;
        qtc.QBitRef_OperatorAssign(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBitRef `
    ///
    /// ` val: bool `
    ///
    pub fn OperatorAssign2(self: QBitRef, val: bool) void {
        qtc.QBitRef_OperatorAssign2(@ptrCast(self.ptr), val);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#dtor.QBitRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBitRef `
    ///
    pub fn Delete(self: QBitRef) void {
        qtc.QBitRef_Delete(@ptrCast(self.ptr));
    }
};
