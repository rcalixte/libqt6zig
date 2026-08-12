const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QIODevice = @import("libqt6").QIODevice;
const qdatastream_enums = enums;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html)
pub const QDataStream = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDataStream,

    pub const _is_QDataStream = {};
    pub const _is_QIODeviceBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDataStream object in C++ memory
    ///
    pub fn new() QDataStream {
        return .{ .ptr = qtc.QDataStream_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDataStream object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QIODevice `
    ///
    pub fn new2(param1: anytype) QDataStream {
        comptime _ = @TypeOf(param1)._is_QIODevice;
        return .{ .ptr = qtc.QDataStream_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDataStream object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    pub fn new3(param1: []u8) QDataStream {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.QDataStream_new3(param1_str) };
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    pub fn device(self: QDataStream) QIODevice {
        return .{ .ptr = qtc.QDataStream_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn setDevice(self: QDataStream, _device: anytype) void {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        qtc.QDataStream_SetDevice(@ptrCast(self.ptr), @ptrCast(_device.ptr));
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    pub fn atEnd(self: QDataStream) bool {
        return qtc.QDataStream_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ## Returns:
    ///
    /// ` qdatastream_enums.Status `
    ///
    pub fn status(self: QDataStream) i32 {
        return qtc.QDataStream_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStatus` instead
    ///
    pub const SetStatus = setStatus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` _status: qdatastream_enums.Status `
    ///
    pub fn setStatus(self: QDataStream, _status: i32) void {
        qtc.QDataStream_SetStatus(@ptrCast(self.ptr), @bitCast(_status));
    }

    /// ### DEPRECATED: Use `resetStatus` instead
    ///
    pub const ResetStatus = resetStatus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#resetStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    pub fn resetStatus(self: QDataStream) void {
        qtc.QDataStream_ResetStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `floatingPointPrecision` instead
    ///
    pub const FloatingPointPrecision = floatingPointPrecision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#floatingPointPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ## Returns:
    ///
    /// ` qdatastream_enums.FloatingPointPrecision `
    ///
    pub fn floatingPointPrecision(self: QDataStream) i32 {
        return qtc.QDataStream_FloatingPointPrecision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFloatingPointPrecision` instead
    ///
    pub const SetFloatingPointPrecision = setFloatingPointPrecision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#setFloatingPointPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` precision: qdatastream_enums.FloatingPointPrecision `
    ///
    pub fn setFloatingPointPrecision(self: QDataStream, precision: i32) void {
        qtc.QDataStream_SetFloatingPointPrecision(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// ### DEPRECATED: Use `byteOrder` instead
    ///
    pub const ByteOrder = byteOrder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#byteOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ## Returns:
    ///
    /// ` qdatastream_enums.ByteOrder `
    ///
    pub fn byteOrder(self: QDataStream) i32 {
        return qtc.QDataStream_ByteOrder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setByteOrder` instead
    ///
    pub const SetByteOrder = setByteOrder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#setByteOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` _byteOrder: qdatastream_enums.ByteOrder `
    ///
    pub fn setByteOrder(self: QDataStream, _byteOrder: i32) void {
        qtc.QDataStream_SetByteOrder(@ptrCast(self.ptr), @bitCast(_byteOrder));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    pub fn version(self: QDataStream) i32 {
        return qtc.QDataStream_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` _version: i32 `
    ///
    pub fn setVersion(self: QDataStream, _version: i32) void {
        qtc.QDataStream_SetVersion(@ptrCast(self.ptr), @bitCast(_version));
    }

    /// ### DEPRECATED: Use `operatorShiftRight` instead
    ///
    pub const OperatorShiftRight = operatorShiftRight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: *u8 `
    ///
    pub fn operatorShiftRight(self: QDataStream, i: *u8) void {
        qtc.QDataStream_OperatorShiftRight(@ptrCast(self.ptr), @ptrCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftRight2` instead
    ///
    pub const OperatorShiftRight2 = operatorShiftRight2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: *i8 `
    ///
    pub fn operatorShiftRight2(self: QDataStream, i: *i8) void {
        qtc.QDataStream_OperatorShiftRight2(@ptrCast(self.ptr), @ptrCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftRight3` instead
    ///
    pub const OperatorShiftRight3 = operatorShiftRight3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: *u8 `
    ///
    pub fn operatorShiftRight3(self: QDataStream, i: *u8) void {
        qtc.QDataStream_OperatorShiftRight3(@ptrCast(self.ptr), @ptrCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftRight4` instead
    ///
    pub const OperatorShiftRight4 = operatorShiftRight4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: *i16 `
    ///
    pub fn operatorShiftRight4(self: QDataStream, i: *i16) void {
        qtc.QDataStream_OperatorShiftRight4(@ptrCast(self.ptr), @ptrCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftRight5` instead
    ///
    pub const OperatorShiftRight5 = operatorShiftRight5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: *u16 `
    ///
    pub fn operatorShiftRight5(self: QDataStream, i: *u16) void {
        qtc.QDataStream_OperatorShiftRight5(@ptrCast(self.ptr), @ptrCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftRight6` instead
    ///
    pub const OperatorShiftRight6 = operatorShiftRight6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: *i32 `
    ///
    pub fn operatorShiftRight6(self: QDataStream, i: *i32) void {
        qtc.QDataStream_OperatorShiftRight6(@ptrCast(self.ptr), @ptrCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftRight7` instead
    ///
    pub const OperatorShiftRight7 = operatorShiftRight7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: *u32 `
    ///
    pub fn operatorShiftRight7(self: QDataStream, i: *u32) void {
        qtc.QDataStream_OperatorShiftRight7(@ptrCast(self.ptr), @ptrCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftRight8` instead
    ///
    pub const OperatorShiftRight8 = operatorShiftRight8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: *i64 `
    ///
    pub fn operatorShiftRight8(self: QDataStream, i: *i64) void {
        qtc.QDataStream_OperatorShiftRight8(@ptrCast(self.ptr), @ptrCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftRight9` instead
    ///
    pub const OperatorShiftRight9 = operatorShiftRight9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: *u64 `
    ///
    pub fn operatorShiftRight9(self: QDataStream, i: *u64) void {
        qtc.QDataStream_OperatorShiftRight9(@ptrCast(self.ptr), @ptrCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftRight11` instead
    ///
    pub const OperatorShiftRight11 = operatorShiftRight11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: *bool `
    ///
    pub fn operatorShiftRight11(self: QDataStream, i: *bool) void {
        qtc.QDataStream_OperatorShiftRight11(@ptrCast(self.ptr), @ptrCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftRight12` instead
    ///
    pub const OperatorShiftRight12 = operatorShiftRight12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` f: *f32 `
    ///
    pub fn operatorShiftRight12(self: QDataStream, f: *f32) void {
        qtc.QDataStream_OperatorShiftRight12(@ptrCast(self.ptr), @ptrCast(f));
    }

    /// ### DEPRECATED: Use `operatorShiftRight13` instead
    ///
    pub const OperatorShiftRight13 = operatorShiftRight13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` f: *f64 `
    ///
    pub fn operatorShiftRight13(self: QDataStream, f: *f64) void {
        qtc.QDataStream_OperatorShiftRight13(@ptrCast(self.ptr), @ptrCast(f));
    }

    /// ### DEPRECATED: Use `operatorShiftRight14` instead
    ///
    pub const OperatorShiftRight14 = operatorShiftRight14;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-gt-gt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` str: [:0]u8 `
    ///
    pub fn operatorShiftRight14(self: QDataStream, str: [:0]u8) void {
        const str_Cstring = str.ptr;
        qtc.QDataStream_OperatorShiftRight14(@ptrCast(self.ptr), str_Cstring);
    }

    /// ### DEPRECATED: Use `operatorShiftLeft` instead
    ///
    pub const OperatorShiftLeft = operatorShiftLeft;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: u8 `
    ///
    pub fn operatorShiftLeft(self: QDataStream, i: u8) void {
        qtc.QDataStream_OperatorShiftLeft(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft2` instead
    ///
    pub const OperatorShiftLeft2 = operatorShiftLeft2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: i8 `
    ///
    pub fn operatorShiftLeft2(self: QDataStream, i: i8) void {
        qtc.QDataStream_OperatorShiftLeft2(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft3` instead
    ///
    pub const OperatorShiftLeft3 = operatorShiftLeft3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: u8 `
    ///
    pub fn operatorShiftLeft3(self: QDataStream, i: u8) void {
        qtc.QDataStream_OperatorShiftLeft3(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft4` instead
    ///
    pub const OperatorShiftLeft4 = operatorShiftLeft4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: i16 `
    ///
    pub fn operatorShiftLeft4(self: QDataStream, i: i16) void {
        qtc.QDataStream_OperatorShiftLeft4(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft5` instead
    ///
    pub const OperatorShiftLeft5 = operatorShiftLeft5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: u16 `
    ///
    pub fn operatorShiftLeft5(self: QDataStream, i: u16) void {
        qtc.QDataStream_OperatorShiftLeft5(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft6` instead
    ///
    pub const OperatorShiftLeft6 = operatorShiftLeft6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: i32 `
    ///
    pub fn operatorShiftLeft6(self: QDataStream, i: i32) void {
        qtc.QDataStream_OperatorShiftLeft6(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft7` instead
    ///
    pub const OperatorShiftLeft7 = operatorShiftLeft7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: u32 `
    ///
    pub fn operatorShiftLeft7(self: QDataStream, i: u32) void {
        qtc.QDataStream_OperatorShiftLeft7(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft8` instead
    ///
    pub const OperatorShiftLeft8 = operatorShiftLeft8;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: i64 `
    ///
    pub fn operatorShiftLeft8(self: QDataStream, i: i64) void {
        qtc.QDataStream_OperatorShiftLeft8(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft9` instead
    ///
    pub const OperatorShiftLeft9 = operatorShiftLeft9;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` i: u64 `
    ///
    pub fn operatorShiftLeft9(self: QDataStream, i: u64) void {
        qtc.QDataStream_OperatorShiftLeft9(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft11` instead
    ///
    pub const OperatorShiftLeft11 = operatorShiftLeft11;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` f: f32 `
    ///
    pub fn operatorShiftLeft11(self: QDataStream, f: f32) void {
        qtc.QDataStream_OperatorShiftLeft11(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft12` instead
    ///
    pub const OperatorShiftLeft12 = operatorShiftLeft12;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` f: f64 `
    ///
    pub fn operatorShiftLeft12(self: QDataStream, f: f64) void {
        qtc.QDataStream_OperatorShiftLeft12(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `operatorShiftLeft13` instead
    ///
    pub const OperatorShiftLeft13 = operatorShiftLeft13;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#operator-lt-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` str: [:0]const u8 `
    ///
    pub fn operatorShiftLeft13(self: QDataStream, str: [:0]const u8) void {
        const str_Cstring = str.ptr;
        qtc.QDataStream_OperatorShiftLeft13(@ptrCast(self.ptr), str_Cstring);
    }

    /// ### DEPRECATED: Use `readBytes` instead
    ///
    pub const ReadBytes = readBytes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#readBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` param1: [:0]u8 `
    ///
    /// ` len: *u32 `
    ///
    pub fn readBytes(self: QDataStream, param1: [:0]u8, len: *u32) QDataStream {
        const param1_Cstring = param1.ptr;
        return .{ .ptr = qtc.QDataStream_ReadBytes(@ptrCast(self.ptr), param1_Cstring, @ptrCast(len)) };
    }

    /// ### DEPRECATED: Use `readBytes2` instead
    ///
    pub const ReadBytes2 = readBytes2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#readBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` param1: [:0]u8 `
    ///
    /// ` len: *i64 `
    ///
    pub fn readBytes2(self: QDataStream, param1: [:0]u8, len: *i64) QDataStream {
        const param1_Cstring = param1.ptr;
        return .{ .ptr = qtc.QDataStream_ReadBytes2(@ptrCast(self.ptr), param1_Cstring, @ptrCast(len)) };
    }

    /// ### DEPRECATED: Use `readRawData` instead
    ///
    pub const ReadRawData = readRawData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#readRawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` param1: [:0]u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn readRawData(self: QDataStream, param1: [:0]u8, len: i64) i64 {
        const param1_Cstring = param1.ptr;
        return qtc.QDataStream_ReadRawData(@ptrCast(self.ptr), param1_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `writeBytes` instead
    ///
    pub const WriteBytes = writeBytes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#writeBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` param1: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn writeBytes(self: QDataStream, param1: [:0]const u8, len: i64) void {
        const param1_Cstring = param1.ptr;
        qtc.QDataStream_WriteBytes(@ptrCast(self.ptr), param1_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `writeRawData` instead
    ///
    pub const WriteRawData = writeRawData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#writeRawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` param1: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn writeRawData(self: QDataStream, param1: [:0]const u8, len: i64) i64 {
        const param1_Cstring = param1.ptr;
        return qtc.QDataStream_WriteRawData(@ptrCast(self.ptr), param1_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `skipRawData` instead
    ///
    pub const SkipRawData = skipRawData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#skipRawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    /// ` len: i64 `
    ///
    pub fn skipRawData(self: QDataStream, len: i64) i64 {
        return qtc.QDataStream_SkipRawData(@ptrCast(self.ptr), @bitCast(len));
    }

    /// ### DEPRECATED: Use `startTransaction` instead
    ///
    pub const StartTransaction = startTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    pub fn startTransaction(self: QDataStream) void {
        qtc.QDataStream_StartTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `commitTransaction` instead
    ///
    pub const CommitTransaction = commitTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    pub fn commitTransaction(self: QDataStream) bool {
        return qtc.QDataStream_CommitTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rollbackTransaction` instead
    ///
    pub const RollbackTransaction = rollbackTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    pub fn rollbackTransaction(self: QDataStream) void {
        qtc.QDataStream_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `abortTransaction` instead
    ///
    pub const AbortTransaction = abortTransaction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#abortTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    pub fn abortTransaction(self: QDataStream) void {
        qtc.QDataStream_AbortTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDeviceTransactionStarted` instead
    ///
    pub const IsDeviceTransactionStarted = isDeviceTransactionStarted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#isDeviceTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDataStream `
    ///
    pub fn isDeviceTransactionStarted(self: QDataStream) bool {
        return qtc.QDataStream_IsDeviceTransactionStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#dtor.QDataStream)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDataStream `
    ///
    pub fn delete(self: QDataStream) void {
        qtc.QDataStream_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdatastream.html#public-types)
pub const enums = struct {
    pub const Version = enum(i32) {
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

    pub const ByteOrder = enum(i32) {
        pub const BigEndian: i32 = 0;
        pub const LittleEndian: i32 = 1;
    };

    pub const Status = enum(i32) {
        pub const Ok: i32 = 0;
        pub const ReadPastEnd: i32 = 1;
        pub const ReadCorruptData: i32 = 2;
        pub const WriteFailed: i32 = 3;
        pub const SizeLimitExceeded: i32 = 4;
    };

    pub const FloatingPointPrecision = enum(i32) {
        pub const SinglePrecision: i32 = 0;
        pub const DoublePrecision: i32 = 1;
    };
};
