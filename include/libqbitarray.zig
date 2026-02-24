const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsysinfo_enums = @import("libqsysinfo.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html)
pub const qbitarray = struct {
    /// New constructs a new QBitArray object.
    ///
    pub fn New() QtC.QBitArray {
        return qtc.QBitArray_new();
    }

    /// New2 constructs a new QBitArray object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: i64 `
    ///
    pub fn New2(size: i64) QtC.QBitArray {
        return qtc.QBitArray_new2(@bitCast(size));
    }

    /// New3 constructs a new QBitArray object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QBitArray `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QBitArray {
        return qtc.QBitArray_new3(@ptrCast(other));
    }

    /// New4 constructs a new QBitArray object.
    ///
    /// ## Parameter(s):
    ///
    /// ` size: i64 `
    ///
    /// ` val: bool `
    ///
    pub fn New4(size: i64, val: bool) QtC.QBitArray {
        return qtc.QBitArray_new4(@bitCast(size), val);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` other: QtC.QBitArray `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBitArray_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` other: QtC.QBitArray `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBitArray_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QBitArray_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    pub fn Count(self: ?*anyopaque) i64 {
        return qtc.QBitArray_Count(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` on: bool `
    ///
    pub fn Count2(self: ?*anyopaque, on: bool) i64 {
        return qtc.QBitArray_Count2(@ptrCast(self), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QBitArray_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QBitArray_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` size: i64 `
    ///
    pub fn Resize(self: ?*anyopaque, size: i64) void {
        qtc.QBitArray_Resize(@ptrCast(self), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QBitArray_Detach(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QBitArray_IsDetached(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QBitArray_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#testBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` i: i64 `
    ///
    pub fn TestBit(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_TestBit(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#setBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` i: i64 `
    ///
    pub fn SetBit(self: ?*anyopaque, i: i64) void {
        qtc.QBitArray_SetBit(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#setBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` i: i64 `
    ///
    /// ` val: bool `
    ///
    pub fn SetBit2(self: ?*anyopaque, i: i64, val: bool) void {
        qtc.QBitArray_SetBit2(@ptrCast(self), @bitCast(i), val);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#clearBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` i: i64 `
    ///
    pub fn ClearBit(self: ?*anyopaque, i: i64) void {
        qtc.QBitArray_ClearBit(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#toggleBit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` i: i64 `
    ///
    pub fn ToggleBit(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_ToggleBit(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` i: i64 `
    ///
    pub fn At(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_At(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` i: i64 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, i: i64) QtC.QBitRef {
        return qtc.QBitArray_OperatorSubscript(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` i: i64 `
    ///
    pub fn OperatorSubscript2(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_OperatorSubscript2(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-and-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` param1: QtC.QBitArray `
    ///
    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitArray_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-7c-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` param1: QtC.QBitArray `
    ///
    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitArray_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#operator-5e-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` param1: QtC.QBitArray `
    ///
    pub fn OperatorBitwiseNotAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitArray_OperatorBitwiseNotAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` aval: bool `
    ///
    pub fn Fill(self: ?*anyopaque, aval: bool) bool {
        return qtc.QBitArray_Fill(@ptrCast(self), aval);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` val: bool `
    ///
    /// ` first: i64 `
    ///
    /// ` last: i64 `
    ///
    pub fn Fill2(self: ?*anyopaque, val: bool, first: i64, last: i64) void {
        qtc.QBitArray_Fill2(@ptrCast(self), val, @bitCast(first), @bitCast(last));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#truncate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` pos: i64 `
    ///
    pub fn Truncate(self: ?*anyopaque, pos: i64) void {
        qtc.QBitArray_Truncate(@ptrCast(self), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#bits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    pub fn Bits(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.QBitArray_Bits(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fromBits)
    ///
    /// ## Parameter(s):
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn FromBits(data: [:0]const u8, lenVal: i64) QtC.QBitArray {
        const data_Cstring = data.ptr;
        return qtc.QBitArray_FromBits(data_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` endianness: qsysinfo_enums.Endian `
    ///
    pub fn ToUInt32(self: ?*anyopaque, endianness: i32) u32 {
        return qtc.QBitArray_ToUInt32(@ptrCast(self), @bitCast(endianness));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#fill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` aval: bool `
    ///
    /// ` asize: i64 `
    ///
    pub fn Fill22(self: ?*anyopaque, aval: bool, asize: i64) bool {
        return qtc.QBitArray_Fill22(@ptrCast(self), aval, @bitCast(asize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitArray `
    ///
    /// ` endianness: qsysinfo_enums.Endian `
    ///
    /// ` ok: *bool `
    ///
    pub fn ToUInt322(self: ?*anyopaque, endianness: i32, ok: *bool) u32 {
        return qtc.QBitArray_ToUInt322(@ptrCast(self), @bitCast(endianness), @ptrCast(ok));
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
    /// ` self: QtC.QBitArray `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBitArray_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html)
pub const qbitref = struct {
    /// New constructs a new QBitRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QBitRef `
    ///
    pub fn New(other: ?*anyopaque) QtC.QBitRef {
        return qtc.QBitRef_new(@ptrCast(other));
    }

    /// New2 constructs a new QBitRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QBitRef `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QBitRef {
        return qtc.QBitRef_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitRef `
    ///
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QBitRef_ToBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-not)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitRef `
    ///
    pub fn OperatorNot(self: ?*anyopaque) bool {
        return qtc.QBitRef_OperatorNot(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitRef `
    ///
    /// ` val: QtC.QBitRef `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QBitRef_OperatorAssign(@ptrCast(self), @ptrCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbitref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBitRef `
    ///
    /// ` val: bool `
    ///
    pub fn OperatorAssign2(self: ?*anyopaque, val: bool) void {
        qtc.QBitRef_OperatorAssign2(@ptrCast(self), val);
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
    /// ` self: QtC.QBitRef `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBitRef_Delete(@ptrCast(self));
    }
};
