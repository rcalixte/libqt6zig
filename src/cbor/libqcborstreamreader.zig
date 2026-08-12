const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QCborError = @import("libqt6").QCborError;
const QIODevice = @import("libqt6").QIODevice;
const qcborcommon_enums = @import("libqcborcommon.zig").enums;
const qcborstreamreader_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html)
pub const QCborStreamReader = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QCborStreamReader,

    pub const _is_QCborStreamReader = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QCborStreamReader object in C++ memory
    ///
    pub fn new() QCborStreamReader {
        return .{ .ptr = qtc.QCborStreamReader_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QCborStreamReader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    pub fn new2(data: [:0]const u8, len: isize) QCborStreamReader {
        const data_Cstring = data.ptr;
        return .{ .ptr = qtc.QCborStreamReader_new2(data_Cstring, @bitCast(len)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QCborStreamReader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` len: isize `
    ///
    pub fn new3(data: *const u8, len: isize) QCborStreamReader {
        return .{ .ptr = qtc.QCborStreamReader_new3(@ptrCast(data), @bitCast(len)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QCborStreamReader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn new4(data: []u8) QCborStreamReader {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QCborStreamReader_new4(data_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QCborStreamReader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _device: QIODevice `
    ///
    pub fn new5(_device: anytype) QCborStreamReader {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        return .{ .ptr = qtc.QCborStreamReader_new5(@ptrCast(_device.ptr)) };
    }

    /// ### DEPRECATED: Use `setDevice` instead
    ///
    pub const SetDevice = setDevice;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` _device: QIODevice `
    ///
    pub fn setDevice(self: QCborStreamReader, _device: anytype) void {
        comptime _ = @TypeOf(_device)._is_QIODevice;
        qtc.QCborStreamReader_SetDevice(@ptrCast(self.ptr), @ptrCast(_device.ptr));
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn device(self: QCborStreamReader) QIODevice {
        return .{ .ptr = qtc.QCborStreamReader_Device(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addData` instead
    ///
    pub const AddData = addData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` data: []u8 `
    ///
    pub fn addData(self: QCborStreamReader, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QCborStreamReader_AddData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `addData2` instead
    ///
    pub const AddData2 = addData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: isize `
    ///
    pub fn addData2(self: QCborStreamReader, data: [:0]const u8, len: isize) void {
        const data_Cstring = data.ptr;
        qtc.QCborStreamReader_AddData2(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `addData3` instead
    ///
    pub const AddData3 = addData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` data: *const u8 `
    ///
    /// ` len: isize `
    ///
    pub fn addData3(self: QCborStreamReader, data: *const u8, len: isize) void {
        qtc.QCborStreamReader_AddData3(@ptrCast(self.ptr), @ptrCast(data), @bitCast(len));
    }

    /// ### DEPRECATED: Use `reparse` instead
    ///
    pub const Reparse = reparse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#reparse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn reparse(self: QCborStreamReader) void {
        qtc.QCborStreamReader_Reparse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn clear(self: QCborStreamReader) void {
        qtc.QCborStreamReader_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn reset(self: QCborStreamReader) void {
        qtc.QCborStreamReader_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastError` instead
    ///
    pub const LastError = lastError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn lastError(self: QCborStreamReader) QCborError {
        return .{ .ptr = qtc.QCborStreamReader_LastError(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentOffset` instead
    ///
    pub const CurrentOffset = currentOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#currentOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn currentOffset(self: QCborStreamReader) i64 {
        return qtc.QCborStreamReader_CurrentOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isValid(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `containerDepth` instead
    ///
    pub const ContainerDepth = containerDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#containerDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn containerDepth(self: QCborStreamReader) i32 {
        return qtc.QCborStreamReader_ContainerDepth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parentContainerType` instead
    ///
    pub const ParentContainerType = parentContainerType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#parentContainerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ## Returns:
    ///
    /// ` qcborstreamreader_enums.Type `
    ///
    pub fn parentContainerType(self: QCborStreamReader) u8 {
        return qtc.QCborStreamReader_ParentContainerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasNext` instead
    ///
    pub const HasNext = hasNext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#hasNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn hasNext(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_HasNext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `next` instead
    ///
    pub const Next = next;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn next(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_Next(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ## Returns:
    ///
    /// ` qcborstreamreader_enums.Type `
    ///
    pub fn type0(self: QCborStreamReader) u8 {
        return qtc.QCborStreamReader_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUnsignedInteger` instead
    ///
    pub const IsUnsignedInteger = isUnsignedInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isUnsignedInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isUnsignedInteger(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsUnsignedInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNegativeInteger` instead
    ///
    pub const IsNegativeInteger = isNegativeInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isNegativeInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isNegativeInteger(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsNegativeInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInteger` instead
    ///
    pub const IsInteger = isInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isInteger(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isByteArray` instead
    ///
    pub const IsByteArray = isByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isByteArray(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsByteArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isString` instead
    ///
    pub const IsString = isString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isString(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsString(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isArray` instead
    ///
    pub const IsArray = isArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isArray(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMap` instead
    ///
    pub const IsMap = isMap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isMap(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsMap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTag` instead
    ///
    pub const IsTag = isTag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isTag(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsTag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSimpleType` instead
    ///
    pub const IsSimpleType = isSimpleType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isSimpleType(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsSimpleType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFloat16` instead
    ///
    pub const IsFloat16 = isFloat16;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat16)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isFloat16(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsFloat16(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFloat` instead
    ///
    pub const IsFloat = isFloat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isFloat(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsFloat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDouble` instead
    ///
    pub const IsDouble = isDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isDouble(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInvalid` instead
    ///
    pub const IsInvalid = isInvalid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isInvalid(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsInvalid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSimpleType2` instead
    ///
    pub const IsSimpleType2 = isSimpleType2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn isSimpleType2(self: QCborStreamReader, st: u8) bool {
        return qtc.QCborStreamReader_IsSimpleType2(@ptrCast(self.ptr), @bitCast(st));
    }

    /// ### DEPRECATED: Use `isFalse` instead
    ///
    pub const IsFalse = isFalse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isFalse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isFalse(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsFalse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTrue` instead
    ///
    pub const IsTrue = isTrue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isTrue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isTrue(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsTrue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBool` instead
    ///
    pub const IsBool = isBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isBool(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isNull(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndefined` instead
    ///
    pub const IsUndefined = isUndefined;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isUndefined(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLengthKnown` instead
    ///
    pub const IsLengthKnown = isLengthKnown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isLengthKnown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isLengthKnown(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsLengthKnown(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn length(self: QCborStreamReader) u64 {
        return qtc.QCborStreamReader_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isContainer` instead
    ///
    pub const IsContainer = isContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn isContainer(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsContainer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enterContainer` instead
    ///
    pub const EnterContainer = enterContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#enterContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn enterContainer(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_EnterContainer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `leaveContainer` instead
    ///
    pub const LeaveContainer = leaveContainer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#leaveContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn leaveContainer(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_LeaveContainer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readAndAppendToString` instead
    ///
    pub const ReadAndAppendToString = readAndAppendToString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` dst: []const u8 `
    ///
    pub fn readAndAppendToString(self: QCborStreamReader, dst: []const u8) bool {
        const dst_str = qtc.libqt_string{
            .len = dst.len,
            .data = dst.ptr,
        };
        return qtc.QCborStreamReader_ReadAndAppendToString(@ptrCast(self.ptr), dst_str);
    }

    /// ### DEPRECATED: Use `readAndAppendToUtf8String` instead
    ///
    pub const ReadAndAppendToUtf8String = readAndAppendToUtf8String;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToUtf8String)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` dst: []u8 `
    ///
    pub fn readAndAppendToUtf8String(self: QCborStreamReader, dst: []u8) bool {
        const dst_str = qtc.libqt_string{
            .len = dst.len,
            .data = dst.ptr,
        };
        return qtc.QCborStreamReader_ReadAndAppendToUtf8String(@ptrCast(self.ptr), dst_str);
    }

    /// ### DEPRECATED: Use `readAndAppendToByteArray` instead
    ///
    pub const ReadAndAppendToByteArray = readAndAppendToByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` dst: []u8 `
    ///
    pub fn readAndAppendToByteArray(self: QCborStreamReader, dst: []u8) bool {
        const dst_str = qtc.libqt_string{
            .len = dst.len,
            .data = dst.ptr,
        };
        return qtc.QCborStreamReader_ReadAndAppendToByteArray(@ptrCast(self.ptr), dst_str);
    }

    /// ### DEPRECATED: Use `currentStringChunkSize` instead
    ///
    pub const CurrentStringChunkSize = currentStringChunkSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#currentStringChunkSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn currentStringChunkSize(self: QCborStreamReader) isize {
        return qtc.QCborStreamReader_CurrentStringChunkSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn toBool(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toTag` instead
    ///
    pub const ToTag = toTag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborTag `
    ///
    pub fn toTag(self: QCborStreamReader) u64 {
        return qtc.QCborStreamReader_ToTag(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toUnsignedInteger` instead
    ///
    pub const ToUnsignedInteger = toUnsignedInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toUnsignedInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn toUnsignedInteger(self: QCborStreamReader) u64 {
        return qtc.QCborStreamReader_ToUnsignedInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toNegativeInteger` instead
    ///
    pub const ToNegativeInteger = toNegativeInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toNegativeInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborNegativeInteger `
    ///
    pub fn toNegativeInteger(self: QCborStreamReader) u64 {
        return qtc.QCborStreamReader_ToNegativeInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toSimpleType` instead
    ///
    pub const ToSimpleType = toSimpleType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ## Returns:
    ///
    /// ` qcborcommon_enums.QCborSimpleType `
    ///
    pub fn toSimpleType(self: QCborStreamReader) u8 {
        return qtc.QCborStreamReader_ToSimpleType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toFloat` instead
    ///
    pub const ToFloat = toFloat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn toFloat(self: QCborStreamReader) f32 {
        return qtc.QCborStreamReader_ToFloat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toDouble` instead
    ///
    pub const ToDouble = toDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn toDouble(self: QCborStreamReader) f64 {
        return qtc.QCborStreamReader_ToDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toInteger` instead
    ///
    pub const ToInteger = toInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn toInteger(self: QCborStreamReader) i64 {
        return qtc.QCborStreamReader_ToInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readAllString` instead
    ///
    pub const ReadAllString = readAllString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAllString(self: QCborStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborStreamReader_ReadAllString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QCborStreamReader.readAllString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readAllUtf8String` instead
    ///
    pub const ReadAllUtf8String = readAllUtf8String;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllUtf8String)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAllUtf8String(self: QCborStreamReader, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborStreamReader_ReadAllUtf8String(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborStreamReader.readAllUtf8String: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readAllByteArray` instead
    ///
    pub const ReadAllByteArray = readAllByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAllByteArray(self: QCborStreamReader, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborStreamReader_ReadAllByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QCborStreamReader.readAllByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `next1` instead
    ///
    pub const Next1 = next1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` maxRecursion: i32 `
    ///
    pub fn next1(self: QCborStreamReader, maxRecursion: i32) bool {
        return qtc.QCborStreamReader_Next1(@ptrCast(self.ptr), @bitCast(maxRecursion));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#dtor.QCborStreamReader)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn delete(self: QCborStreamReader) void {
        qtc.QCborStreamReader_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#public-types)
pub const enums = struct {
    pub const Type = enum(u8) {
        pub const UnsignedInteger: u8 = 0;
        pub const NegativeInteger: u8 = 32;
        pub const ByteString: u8 = 64;
        pub const ByteArray: u8 = 64;
        pub const TextString: u8 = 96;
        pub const String: u8 = 96;
        pub const Array: u8 = 128;
        pub const Map: u8 = 160;
        pub const Tag: u8 = 192;
        pub const SimpleType: u8 = 224;
        pub const HalfFloat: u8 = 249;
        pub const Float16: u8 = 249;
        pub const Float: u8 = 250;
        pub const Double: u8 = 251;
        pub const Invalid: u8 = 255;
    };

    pub const StringResultCode = enum(i32) {
        pub const EndOfString: i32 = 0;
        pub const Ok: i32 = 1;
        pub const Error: i32 = -1;
    };
};
