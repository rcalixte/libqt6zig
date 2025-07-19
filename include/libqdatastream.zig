const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdatastream_enums = enums;

/// https://doc.qt.io/qt-6/qdatastream.html
pub const qdatastream = struct {
    /// New constructs a new QDataStream object.
    ///
    ///
    pub fn New() QtC.QDataStream {
        return qtc.QDataStream_new();
    }

    /// New2 constructs a new QDataStream object.
    ///
    /// ``` param1: QtC.QIODevice ```
    pub fn New2(param1: ?*anyopaque) QtC.QDataStream {
        return qtc.QDataStream_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QDataStream object.
    ///
    /// ``` param1: []u8 ```
    pub fn New3(param1: []u8) QtC.QDataStream {
        const param1_str = qtc.struct_libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };

        return qtc.QDataStream_new3(param1_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#device)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn Device(self: ?*anyopaque) QtC.QIODevice {
        return qtc.QDataStream_Device(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setDevice)
    ///
    /// ``` self: QtC.QDataStream, device: QtC.QIODevice ```
    pub fn SetDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QDataStream_SetDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#atEnd)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QDataStream_AtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#status)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn Status(self: ?*anyopaque) i64 {
        return qtc.QDataStream_Status(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setStatus)
    ///
    /// ``` self: QtC.QDataStream, status: qdatastream_enums.Status ```
    pub fn SetStatus(self: ?*anyopaque, status: i64) void {
        qtc.QDataStream_SetStatus(@ptrCast(self), @intCast(status));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#resetStatus)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn ResetStatus(self: ?*anyopaque) void {
        qtc.QDataStream_ResetStatus(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#floatingPointPrecision)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn FloatingPointPrecision(self: ?*anyopaque) i64 {
        return qtc.QDataStream_FloatingPointPrecision(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setFloatingPointPrecision)
    ///
    /// ``` self: QtC.QDataStream, precision: qdatastream_enums.FloatingPointPrecision ```
    pub fn SetFloatingPointPrecision(self: ?*anyopaque, precision: i64) void {
        qtc.QDataStream_SetFloatingPointPrecision(@ptrCast(self), @intCast(precision));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#byteOrder)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn ByteOrder(self: ?*anyopaque) i64 {
        return qtc.QDataStream_ByteOrder(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setByteOrder)
    ///
    /// ``` self: QtC.QDataStream, byteOrder: qdatastream_enums.ByteOrder ```
    pub fn SetByteOrder(self: ?*anyopaque, byteOrder: i64) void {
        qtc.QDataStream_SetByteOrder(@ptrCast(self), @intCast(byteOrder));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#version)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QDataStream_Version(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#setVersion)
    ///
    /// ``` self: QtC.QDataStream, version: i32 ```
    pub fn SetVersion(self: ?*anyopaque, version: i32) void {
        qtc.QDataStream_SetVersion(@ptrCast(self), @intCast(version));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, i: *i8 ```
    pub fn OperatorShiftRight(self: ?*anyopaque, i: *i8) void {
        qtc.QDataStream_OperatorShiftRight(@ptrCast(self), @ptrCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, i: *i8 ```
    pub fn OperatorShiftRight2(self: ?*anyopaque, i: *i8) void {
        qtc.QDataStream_OperatorShiftRight2(@ptrCast(self), @ptrCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, i: *u8 ```
    pub fn OperatorShiftRight3(self: ?*anyopaque, i: *u8) void {
        qtc.QDataStream_OperatorShiftRight3(@ptrCast(self), @ptrCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, i: *i16 ```
    pub fn OperatorShiftRight4(self: ?*anyopaque, i: *i16) void {
        qtc.QDataStream_OperatorShiftRight4(@ptrCast(self), @ptrCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, i: *u16 ```
    pub fn OperatorShiftRight5(self: ?*anyopaque, i: *u16) void {
        qtc.QDataStream_OperatorShiftRight5(@ptrCast(self), @ptrCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, i: *i32 ```
    pub fn OperatorShiftRight6(self: ?*anyopaque, i: *i32) void {
        qtc.QDataStream_OperatorShiftRight6(@ptrCast(self), @ptrCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, i: *u32 ```
    pub fn OperatorShiftRight7(self: ?*anyopaque, i: *u32) void {
        qtc.QDataStream_OperatorShiftRight7(@ptrCast(self), @ptrCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, i: *i64 ```
    pub fn OperatorShiftRight8(self: ?*anyopaque, i: *i64) void {
        qtc.QDataStream_OperatorShiftRight8(@ptrCast(self), @ptrCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, i: *u64 ```
    pub fn OperatorShiftRight9(self: ?*anyopaque, i: *u64) void {
        qtc.QDataStream_OperatorShiftRight9(@ptrCast(self), @ptrCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, i: bool ```
    pub fn OperatorShiftRight11(self: ?*anyopaque, i: *bool) void {
        qtc.QDataStream_OperatorShiftRight11(@ptrCast(self), @ptrCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, f: *f32 ```
    pub fn OperatorShiftRight12(self: ?*anyopaque, f: *f32) void {
        qtc.QDataStream_OperatorShiftRight12(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, f: *f64 ```
    pub fn OperatorShiftRight13(self: ?*anyopaque, f: *f64) void {
        qtc.QDataStream_OperatorShiftRight13(@ptrCast(self), @ptrCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ``` self: QtC.QDataStream, str: []const u8 ```
    pub fn OperatorShiftRight14(self: ?*anyopaque, str: []const u8) void {
        const str_Cstring = str.ptr;
        qtc.QDataStream_OperatorShiftRight14(@ptrCast(self), str_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, i: i8 ```
    pub fn OperatorShiftLeft(self: ?*anyopaque, i: i8) void {
        qtc.QDataStream_OperatorShiftLeft(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, i: i8 ```
    pub fn OperatorShiftLeft2(self: ?*anyopaque, i: i8) void {
        qtc.QDataStream_OperatorShiftLeft2(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, i: u8 ```
    pub fn OperatorShiftLeft3(self: ?*anyopaque, i: u8) void {
        qtc.QDataStream_OperatorShiftLeft3(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, i: i16 ```
    pub fn OperatorShiftLeft4(self: ?*anyopaque, i: i16) void {
        qtc.QDataStream_OperatorShiftLeft4(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, i: u16 ```
    pub fn OperatorShiftLeft5(self: ?*anyopaque, i: u16) void {
        qtc.QDataStream_OperatorShiftLeft5(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, i: i32 ```
    pub fn OperatorShiftLeft6(self: ?*anyopaque, i: i32) void {
        qtc.QDataStream_OperatorShiftLeft6(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, i: u32 ```
    pub fn OperatorShiftLeft7(self: ?*anyopaque, i: u32) void {
        qtc.QDataStream_OperatorShiftLeft7(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, i: i64 ```
    pub fn OperatorShiftLeft8(self: ?*anyopaque, i: i64) void {
        qtc.QDataStream_OperatorShiftLeft8(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, i: u64 ```
    pub fn OperatorShiftLeft9(self: ?*anyopaque, i: u64) void {
        qtc.QDataStream_OperatorShiftLeft9(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, f: f32 ```
    pub fn OperatorShiftLeft11(self: ?*anyopaque, f: f32) void {
        qtc.QDataStream_OperatorShiftLeft11(@ptrCast(self), @floatCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, f: f64 ```
    pub fn OperatorShiftLeft12(self: ?*anyopaque, f: f64) void {
        qtc.QDataStream_OperatorShiftLeft12(@ptrCast(self), @floatCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ``` self: QtC.QDataStream, str: []const u8 ```
    pub fn OperatorShiftLeft13(self: ?*anyopaque, str: []const u8) void {
        const str_Cstring = str.ptr;
        qtc.QDataStream_OperatorShiftLeft13(@ptrCast(self), str_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#readBytes)
    ///
    /// ``` self: QtC.QDataStream, param1: []const u8, lenVal: *u32 ```
    pub fn ReadBytes(self: ?*anyopaque, param1: []const u8, lenVal: *u32) QtC.QDataStream {
        const param1_Cstring = param1.ptr;
        return qtc.QDataStream_ReadBytes(@ptrCast(self), param1_Cstring, @ptrCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#readBytes)
    ///
    /// ``` self: QtC.QDataStream, param1: []const u8, lenVal: *i64 ```
    pub fn ReadBytes2(self: ?*anyopaque, param1: []const u8, lenVal: *i64) QtC.QDataStream {
        const param1_Cstring = param1.ptr;
        return qtc.QDataStream_ReadBytes2(@ptrCast(self), param1_Cstring, @ptrCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#readRawData)
    ///
    /// ``` self: QtC.QDataStream, param1: []const u8, lenVal: i64 ```
    pub fn ReadRawData(self: ?*anyopaque, param1: []const u8, lenVal: i64) i64 {
        const param1_Cstring = param1.ptr;
        return qtc.QDataStream_ReadRawData(@ptrCast(self), param1_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#writeBytes)
    ///
    /// ``` self: QtC.QDataStream, param1: []const u8, lenVal: i64 ```
    pub fn WriteBytes(self: ?*anyopaque, param1: []const u8, lenVal: i64) void {
        const param1_Cstring = param1.ptr;
        qtc.QDataStream_WriteBytes(@ptrCast(self), param1_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#writeRawData)
    ///
    /// ``` self: QtC.QDataStream, param1: []const u8, lenVal: i64 ```
    pub fn WriteRawData(self: ?*anyopaque, param1: []const u8, lenVal: i64) i64 {
        const param1_Cstring = param1.ptr;
        return qtc.QDataStream_WriteRawData(@ptrCast(self), param1_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#skipRawData)
    ///
    /// ``` self: QtC.QDataStream, lenVal: i64 ```
    pub fn SkipRawData(self: ?*anyopaque, lenVal: i64) i64 {
        return qtc.QDataStream_SkipRawData(@ptrCast(self), @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#startTransaction)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn StartTransaction(self: ?*anyopaque) void {
        qtc.QDataStream_StartTransaction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#commitTransaction)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn CommitTransaction(self: ?*anyopaque) bool {
        return qtc.QDataStream_CommitTransaction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#rollbackTransaction)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        qtc.QDataStream_RollbackTransaction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#abortTransaction)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn AbortTransaction(self: ?*anyopaque) void {
        qtc.QDataStream_AbortTransaction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#isDeviceTransactionStarted)
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn IsDeviceTransactionStarted(self: ?*anyopaque) bool {
        return qtc.QDataStream_IsDeviceTransactionStarted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdatastream.html#dtor.QDataStream)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDataStream ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDataStream_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdatastream.html#types
pub const enums = struct {
    pub const Version = enum {
        pub const Qt_1_0: i32 = 1;
        pub const Qt_2_0: i32 = 2;
        pub const Qt_2_1: i32 = 3;
        pub const Qt_3_0: i32 = 4;
        pub const Qt_3_1: i32 = 5;
        pub const Qt_3_3: i32 = 6;
        pub const Qt_4_0: i32 = 7;
        pub const Qt_4_1: i32 = 7;
        pub const Qt_4_2: i32 = 8;
        pub const Qt_4_3: i32 = 9;
        pub const Qt_4_4: i32 = 10;
        pub const Qt_4_5: i32 = 11;
        pub const Qt_4_6: i32 = 12;
        pub const Qt_4_7: i32 = 12;
        pub const Qt_4_8: i32 = 12;
        pub const Qt_4_9: i32 = 12;
        pub const Qt_5_0: i32 = 13;
        pub const Qt_5_1: i32 = 14;
        pub const Qt_5_2: i32 = 15;
        pub const Qt_5_3: i32 = 15;
        pub const Qt_5_4: i32 = 16;
        pub const Qt_5_5: i32 = 16;
        pub const Qt_5_6: i32 = 17;
        pub const Qt_5_7: i32 = 17;
        pub const Qt_5_8: i32 = 17;
        pub const Qt_5_9: i32 = 17;
        pub const Qt_5_10: i32 = 17;
        pub const Qt_5_11: i32 = 17;
        pub const Qt_5_12: i32 = 18;
        pub const Qt_5_13: i32 = 19;
        pub const Qt_5_14: i32 = 19;
        pub const Qt_5_15: i32 = 19;
        pub const Qt_6_0: i32 = 20;
        pub const Qt_6_1: i32 = 20;
        pub const Qt_6_2: i32 = 20;
        pub const Qt_6_3: i32 = 20;
        pub const Qt_6_4: i32 = 20;
        pub const Qt_6_5: i32 = 20;
        pub const Qt_6_6: i32 = 21;
        pub const Qt_6_7: i32 = 22;
        pub const Qt_6_8: i32 = 22;
        pub const Qt_DefaultCompiledVersion: i32 = 22;
    };

    pub const ByteOrder = enum {
        pub const BigEndian: i32 = 0;
        pub const LittleEndian: i32 = 1;
    };

    pub const Status = enum {
        pub const Ok: i32 = 0;
        pub const ReadPastEnd: i32 = 1;
        pub const ReadCorruptData: i32 = 2;
        pub const WriteFailed: i32 = 3;
        pub const SizeLimitExceeded: i32 = 4;
    };

    pub const FloatingPointPrecision = enum {
        pub const SinglePrecision: i32 = 0;
        pub const DoublePrecision: i32 = 1;
    };
};
