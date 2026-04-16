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

    /// New constructs a new QCborStreamReader object.
    ///
    pub fn New() QCborStreamReader {
        return .{ .ptr = qtc.QCborStreamReader_new() };
    }

    /// New2 constructs a new QCborStreamReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn New2(data: [:0]const u8, lenVal: isize) QCborStreamReader {
        const data_Cstring = data.ptr;
        return .{ .ptr = qtc.QCborStreamReader_new2(data_Cstring, @bitCast(lenVal)) };
    }

    /// New3 constructs a new QCborStreamReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: *const u8 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn New3(data: *const u8, lenVal: isize) QCborStreamReader {
        return .{ .ptr = qtc.QCborStreamReader_new3(@ptrCast(data), @bitCast(lenVal)) };
    }

    /// New4 constructs a new QCborStreamReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn New4(data: []u8) QCborStreamReader {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QCborStreamReader_new4(data_str) };
    }

    /// New5 constructs a new QCborStreamReader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` device: QIODevice `
    ///
    pub fn New5(device: anytype) QCborStreamReader {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QCborStreamReader_new5(@ptrCast(device.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#setDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SetDevice(self: QCborStreamReader, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QCborStreamReader_SetDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn Device(self: QCborStreamReader) QIODevice {
        return .{ .ptr = qtc.QCborStreamReader_Device(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` data: []u8 `
    ///
    pub fn AddData(self: QCborStreamReader, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QCborStreamReader_AddData(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn AddData2(self: QCborStreamReader, data: [:0]const u8, lenVal: isize) void {
        const data_Cstring = data.ptr;
        qtc.QCborStreamReader_AddData2(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#addData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` data: *const u8 `
    ///
    /// ` lenVal: isize `
    ///
    pub fn AddData3(self: QCborStreamReader, data: *const u8, lenVal: isize) void {
        qtc.QCborStreamReader_AddData3(@ptrCast(self.ptr), @ptrCast(data), @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#reparse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn Reparse(self: QCborStreamReader) void {
        qtc.QCborStreamReader_Reparse(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn Clear(self: QCborStreamReader) void {
        qtc.QCborStreamReader_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn Reset(self: QCborStreamReader) void {
        qtc.QCborStreamReader_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn LastError(self: QCborStreamReader) QCborError {
        return .{ .ptr = qtc.QCborStreamReader_LastError(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#currentOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn CurrentOffset(self: QCborStreamReader) i64 {
        return qtc.QCborStreamReader_CurrentOffset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsValid(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#containerDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn ContainerDepth(self: QCborStreamReader) i32 {
        return qtc.QCborStreamReader_ContainerDepth(@ptrCast(self.ptr));
    }

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
    pub fn ParentContainerType(self: QCborStreamReader) u8 {
        return qtc.QCborStreamReader_ParentContainerType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#hasNext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn HasNext(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_HasNext(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn Next(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_Next(@ptrCast(self.ptr));
    }

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
    pub fn Type(self: QCborStreamReader) u8 {
        return qtc.QCborStreamReader_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isUnsignedInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsUnsignedInteger(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsUnsignedInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isNegativeInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsNegativeInteger(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsNegativeInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsInteger(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsByteArray(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsByteArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsString(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsString(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsArray(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsMap(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsMap(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsTag(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsTag(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsSimpleType(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsSimpleType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat16)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsFloat16(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsFloat16(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsFloat(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsFloat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsDouble(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isInvalid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsInvalid(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsInvalid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isSimpleType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` st: qcborcommon_enums.QCborSimpleType `
    ///
    pub fn IsSimpleType2(self: QCborStreamReader, st: u8) bool {
        return qtc.QCborStreamReader_IsSimpleType2(@ptrCast(self.ptr), @bitCast(st));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isFalse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsFalse(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsFalse(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isTrue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsTrue(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsTrue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsBool(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsNull(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsUndefined(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isLengthKnown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsLengthKnown(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsLengthKnown(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn Length(self: QCborStreamReader) u64 {
        return qtc.QCborStreamReader_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#isContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn IsContainer(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_IsContainer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#enterContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn EnterContainer(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_EnterContainer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#leaveContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn LeaveContainer(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_LeaveContainer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` dst: []const u8 `
    ///
    pub fn ReadAndAppendToString(self: QCborStreamReader, dst: []const u8) bool {
        const dst_str = qtc.libqt_string{
            .len = dst.len,
            .data = dst.ptr,
        };
        return qtc.QCborStreamReader_ReadAndAppendToString(@ptrCast(self.ptr), dst_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToUtf8String)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` dst: []u8 `
    ///
    pub fn ReadAndAppendToUtf8String(self: QCborStreamReader, dst: []u8) bool {
        const dst_str = qtc.libqt_string{
            .len = dst.len,
            .data = dst.ptr,
        };
        return qtc.QCborStreamReader_ReadAndAppendToUtf8String(@ptrCast(self.ptr), dst_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAndAppendToByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` dst: []u8 `
    ///
    pub fn ReadAndAppendToByteArray(self: QCborStreamReader, dst: []u8) bool {
        const dst_str = qtc.libqt_string{
            .len = dst.len,
            .data = dst.ptr,
        };
        return qtc.QCborStreamReader_ReadAndAppendToByteArray(@ptrCast(self.ptr), dst_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#currentStringChunkSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn CurrentStringChunkSize(self: QCborStreamReader) isize {
        return qtc.QCborStreamReader_CurrentStringChunkSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn ToBool(self: QCborStreamReader) bool {
        return qtc.QCborStreamReader_ToBool(@ptrCast(self.ptr));
    }

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
    pub fn ToTag(self: QCborStreamReader) u64 {
        return qtc.QCborStreamReader_ToTag(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toUnsignedInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn ToUnsignedInteger(self: QCborStreamReader) u64 {
        return qtc.QCborStreamReader_ToUnsignedInteger(@ptrCast(self.ptr));
    }

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
    pub fn ToNegativeInteger(self: QCborStreamReader) u64 {
        return qtc.QCborStreamReader_ToNegativeInteger(@ptrCast(self.ptr));
    }

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
    pub fn ToSimpleType(self: QCborStreamReader) u8 {
        return qtc.QCborStreamReader_ToSimpleType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toFloat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn ToFloat(self: QCborStreamReader) f32 {
        return qtc.QCborStreamReader_ToFloat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn ToDouble(self: QCborStreamReader) f64 {
        return qtc.QCborStreamReader_ToDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn ToInteger(self: QCborStreamReader) i64 {
        return qtc.QCborStreamReader_ToInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAllString(self: QCborStreamReader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QCborStreamReader_ReadAllString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborstreamreader.ReadAllString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllUtf8String)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAllUtf8String(self: QCborStreamReader, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborStreamReader_ReadAllUtf8String(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborstreamreader.ReadAllUtf8String: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#readAllByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAllByteArray(self: QCborStreamReader, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QCborStreamReader_ReadAllByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborstreamreader.ReadAllByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QCborStreamReader `
    ///
    /// ` maxRecursion: i32 `
    ///
    pub fn Next1(self: QCborStreamReader, maxRecursion: i32) bool {
        return qtc.QCborStreamReader_Next1(@ptrCast(self.ptr), @bitCast(maxRecursion));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qcborstreamreader.html#dtor.QCborStreamReader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QCborStreamReader `
    ///
    pub fn Delete(self: QCborStreamReader) void {
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
