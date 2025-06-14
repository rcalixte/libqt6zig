const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qbitarray.html
pub const qbitarray = struct {
    /// New constructs a new QBitArray object.
    ///
    ///
    pub fn New() QtC.QBitArray {
        return qtc.QBitArray_new();
    }

    /// New2 constructs a new QBitArray object.
    ///
    /// ``` size: i64 ```
    pub fn New2(size: i64) QtC.QBitArray {
        return qtc.QBitArray_new2(@intCast(size));
    }

    /// New3 constructs a new QBitArray object.
    ///
    /// ``` other: QtC.QBitArray ```
    pub fn New3(other: ?*anyopaque) QtC.QBitArray {
        return qtc.QBitArray_new3(@ptrCast(other));
    }

    /// New4 constructs a new QBitArray object.
    ///
    /// ``` size: i64, val: bool ```
    pub fn New4(size: i64, val: bool) QtC.QBitArray {
        return qtc.QBitArray_new4(@intCast(size), val);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator=)
    ///
    /// ``` self: QtC.QBitArray, other: QtC.QBitArray ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBitArray_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#swap)
    ///
    /// ``` self: QtC.QBitArray, other: QtC.QBitArray ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBitArray_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#size)
    ///
    /// ``` self: QtC.QBitArray ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QBitArray_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#count)
    ///
    /// ``` self: QtC.QBitArray ```
    pub fn Count(self: ?*anyopaque) i64 {
        return qtc.QBitArray_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#count)
    ///
    /// ``` self: QtC.QBitArray, on: bool ```
    pub fn CountWithOn(self: ?*anyopaque, on: bool) i64 {
        return qtc.QBitArray_CountWithOn(@ptrCast(self), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#isEmpty)
    ///
    /// ``` self: QtC.QBitArray ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QBitArray_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#isNull)
    ///
    /// ``` self: QtC.QBitArray ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QBitArray_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#resize)
    ///
    /// ``` self: QtC.QBitArray, size: i64 ```
    pub fn Resize(self: ?*anyopaque, size: i64) void {
        qtc.QBitArray_Resize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#detach)
    ///
    /// ``` self: QtC.QBitArray ```
    pub fn Detach(self: ?*anyopaque) void {
        qtc.QBitArray_Detach(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#isDetached)
    ///
    /// ``` self: QtC.QBitArray ```
    pub fn IsDetached(self: ?*anyopaque) bool {
        return qtc.QBitArray_IsDetached(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#clear)
    ///
    /// ``` self: QtC.QBitArray ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QBitArray_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#testBit)
    ///
    /// ``` self: QtC.QBitArray, i: i64 ```
    pub fn TestBit(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_TestBit(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#setBit)
    ///
    /// ``` self: QtC.QBitArray, i: i64 ```
    pub fn SetBit(self: ?*anyopaque, i: i64) void {
        qtc.QBitArray_SetBit(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#setBit)
    ///
    /// ``` self: QtC.QBitArray, i: i64, val: bool ```
    pub fn SetBit2(self: ?*anyopaque, i: i64, val: bool) void {
        qtc.QBitArray_SetBit2(@ptrCast(self), @intCast(i), val);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#clearBit)
    ///
    /// ``` self: QtC.QBitArray, i: i64 ```
    pub fn ClearBit(self: ?*anyopaque, i: i64) void {
        qtc.QBitArray_ClearBit(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#toggleBit)
    ///
    /// ``` self: QtC.QBitArray, i: i64 ```
    pub fn ToggleBit(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_ToggleBit(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#at)
    ///
    /// ``` self: QtC.QBitArray, i: i64 ```
    pub fn At(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_At(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator[])
    ///
    /// ``` self: QtC.QBitArray, i: i64 ```
    pub fn OperatorSubscript(self: ?*anyopaque, i: i64) QtC.QBitRef {
        return qtc.QBitArray_OperatorSubscript(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator[])
    ///
    /// ``` self: QtC.QBitArray, i: i64 ```
    pub fn OperatorSubscriptWithQsizetype(self: ?*anyopaque, i: i64) bool {
        return qtc.QBitArray_OperatorSubscriptWithQsizetype(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator&=)
    ///
    /// ``` self: QtC.QBitArray, param1: QtC.QBitArray ```
    pub fn OperatorBitwiseAndAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitArray_OperatorBitwiseAndAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator|=)
    ///
    /// ``` self: QtC.QBitArray, param1: QtC.QBitArray ```
    pub fn OperatorBitwiseOrAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitArray_OperatorBitwiseOrAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator^=)
    ///
    /// ``` self: QtC.QBitArray, param1: QtC.QBitArray ```
    pub fn OperatorBitwiseNotAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBitArray_OperatorBitwiseNotAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator==)
    ///
    /// ``` self: QtC.QBitArray, other: QtC.QBitArray ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QBitArray_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#operator!=)
    ///
    /// ``` self: QtC.QBitArray, other: QtC.QBitArray ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QBitArray_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fill)
    ///
    /// ``` self: QtC.QBitArray, val: bool ```
    pub fn Fill(self: ?*anyopaque, val: bool) bool {
        return qtc.QBitArray_Fill(@ptrCast(self), val);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fill)
    ///
    /// ``` self: QtC.QBitArray, val: bool, first: i64, last: i64 ```
    pub fn Fill2(self: ?*anyopaque, val: bool, first: i64, last: i64) void {
        qtc.QBitArray_Fill2(@ptrCast(self), val, @intCast(first), @intCast(last));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#truncate)
    ///
    /// ``` self: QtC.QBitArray, pos: i64 ```
    pub fn Truncate(self: ?*anyopaque, pos: i64) void {
        qtc.QBitArray_Truncate(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#bits)
    ///
    /// ``` self: QtC.QBitArray ```
    pub fn Bits(self: ?*anyopaque) []const u8 {
        const _ret = qtc.QBitArray_Bits(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fromBits)
    ///
    /// ``` data: []const u8, lenVal: i64 ```
    pub fn FromBits(data: []const u8, lenVal: i64) QtC.QBitArray {
        const data_Cstring = data.ptr;
        return qtc.QBitArray_FromBits(data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
    ///
    /// ``` self: QtC.QBitArray, endianness: qsysinfo_enums.Endian ```
    pub fn ToUInt32(self: ?*anyopaque, endianness: i64) u32 {
        return qtc.QBitArray_ToUInt32(@ptrCast(self), @intCast(endianness));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#fill)
    ///
    /// ``` self: QtC.QBitArray, val: bool, size: i64 ```
    pub fn Fill22(self: ?*anyopaque, val: bool, size: i64) bool {
        return qtc.QBitArray_Fill22(@ptrCast(self), val, @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#toUInt32)
    ///
    /// ``` self: QtC.QBitArray, endianness: qsysinfo_enums.Endian, ok: bool ```
    pub fn ToUInt322(self: ?*anyopaque, endianness: i64, ok: ?*anyopaque) u32 {
        return qtc.QBitArray_ToUInt322(@ptrCast(self), @intCast(endianness), @ptrCast(ok));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitarray.html#dtor.QBitArray)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QBitArray ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBitArray_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qbitref.html
pub const qbitref = struct {
    /// New constructs a new QBitRef object.
    ///
    /// ``` other: QtC.QBitRef ```
    pub fn New(other: ?*anyopaque) QtC.QBitRef {
        return qtc.QBitRef_new(@ptrCast(other));
    }

    /// New2 constructs a new QBitRef object.
    ///
    /// ``` param1: QtC.QBitRef ```
    pub fn New2(param1: ?*anyopaque) QtC.QBitRef {
        return qtc.QBitRef_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator bool)
    ///
    /// ``` self: QtC.QBitRef ```
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QBitRef_ToBool(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator!)
    ///
    /// ``` self: QtC.QBitRef ```
    pub fn OperatorNot(self: ?*anyopaque) bool {
        return qtc.QBitRef_OperatorNot(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator=)
    ///
    /// ``` self: QtC.QBitRef, val: QtC.QBitRef ```
    pub fn OperatorAssign(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QBitRef_OperatorAssign(@ptrCast(self), @ptrCast(val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#operator=)
    ///
    /// ``` self: QtC.QBitRef, val: bool ```
    pub fn OperatorAssignWithVal(self: ?*anyopaque, val: bool) void {
        qtc.QBitRef_OperatorAssignWithVal(@ptrCast(self), val);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qbitref.html#dtor.QBitRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QBitRef ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBitRef_Delete(@ptrCast(self));
    }
};
