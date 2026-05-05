const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qbytearray_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html)
pub const QByteArray = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: i32 `
    ///
    pub fn Number(allocator: std.mem.Allocator, param1: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: u32 `
    ///
    pub fn Number2(allocator: std.mem.Allocator, param1: u32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number2(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    pub fn Number3(allocator: std.mem.Allocator, param1: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number3(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number3: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    pub fn Number4(allocator: std.mem.Allocator, param1: usize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number4(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number4: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    pub fn Number5(allocator: std.mem.Allocator, param1: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number5(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number5: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    pub fn Number6(allocator: std.mem.Allocator, param1: usize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number6(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number6: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: f64 `
    ///
    pub fn Number7(allocator: std.mem.Allocator, param1: f64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number7(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number7: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromRawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` size: isize `
    ///
    pub fn FromRawData(allocator: std.mem.Allocator, data: [:0]const u8, size: isize) []u8 {
        const data_Cstring = data.ptr;
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromRawData(data_Cstring, @bitCast(size));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromRawData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromBase64Encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` base64: []u8 `
    ///
    pub fn FromBase64Encoding(base64: []u8) QByteArray__FromBase64Result {
        const base64_str = qtc.libqt_string{
            .len = base64.len,
            .data = base64.ptr,
        };
        return .{ .ptr = qtc.QByteArray_FromBase64Encoding(base64_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromBase64)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` base64: []u8 `
    ///
    pub fn FromBase64(allocator: std.mem.Allocator, base64: []u8) []u8 {
        const base64_str = qtc.libqt_string{
            .len = base64.len,
            .data = base64.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromBase64(base64_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromBase64: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromHex)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` hexEncoded: []u8 `
    ///
    pub fn FromHex(allocator: std.mem.Allocator, hexEncoded: []u8) []u8 {
        const hexEncoded_str = qtc.libqt_string{
            .len = hexEncoded.len,
            .data = hexEncoded.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromHex(hexEncoded_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromHex: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromPercentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pctEncoded: []u8 `
    ///
    pub fn FromPercentEncoding(allocator: std.mem.Allocator, pctEncoded: []u8) []u8 {
        const pctEncoded_str = qtc.libqt_string{
            .len = pctEncoded.len,
            .data = pctEncoded.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromPercentEncoding(pctEncoded_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromPercentEncoding: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#maxSize)
    ///
    pub fn MaxSize2() isize {
        return qtc.QByteArray_MaxSize2();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: i32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Number22(allocator: std.mem.Allocator, param1: i32, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number22(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number22: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: u32 `
    ///
    /// ` base: i32 `
    ///
    pub fn Number23(allocator: std.mem.Allocator, param1: u32, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number23(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number23: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    /// ` base: i32 `
    ///
    pub fn Number24(allocator: std.mem.Allocator, param1: isize, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number24(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number24: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    /// ` base: i32 `
    ///
    pub fn Number25(allocator: std.mem.Allocator, param1: usize, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number25(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number25: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    /// ` base: i32 `
    ///
    pub fn Number26(allocator: std.mem.Allocator, param1: isize, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number26(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number26: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    /// ` base: i32 `
    ///
    pub fn Number27(allocator: std.mem.Allocator, param1: usize, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number27(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number27: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: f64 `
    ///
    /// ` format: u8 `
    ///
    pub fn Number28(allocator: std.mem.Allocator, param1: f64, format: u8) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number28(@bitCast(param1), @bitCast(format));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number28: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: f64 `
    ///
    /// ` format: u8 `
    ///
    /// ` precision: i32 `
    ///
    pub fn Number32(allocator: std.mem.Allocator, param1: f64, format: u8, precision: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number32(@bitCast(param1), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.Number32: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromBase64Encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` base64: []u8 `
    ///
    /// ` options: flag of qbytearray_enums.Base64Option `
    ///
    pub fn FromBase64Encoding2(base64: []u8, options: i32) QByteArray__FromBase64Result {
        const base64_str = qtc.libqt_string{
            .len = base64.len,
            .data = base64.ptr,
        };
        return .{ .ptr = qtc.QByteArray_FromBase64Encoding2(base64_str, @bitCast(options)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromBase64)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` base64: []u8 `
    ///
    /// ` options: flag of qbytearray_enums.Base64Option `
    ///
    pub fn FromBase642(allocator: std.mem.Allocator, base64: []u8, options: i32) []u8 {
        const base64_str = qtc.libqt_string{
            .len = base64.len,
            .data = base64.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromBase642(base64_str, @bitCast(options));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromBase642: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromPercentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pctEncoded: []u8 `
    ///
    /// ` percent: u8 `
    ///
    pub fn FromPercentEncoding2(allocator: std.mem.Allocator, pctEncoded: []u8, percent: u8) []u8 {
        const pctEncoded_str = qtc.libqt_string{
            .len = pctEncoded.len,
            .data = pctEncoded.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromPercentEncoding2(pctEncoded_str, @bitCast(percent));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray.FromPercentEncoding2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html)
pub const QByteArray__FromBase64Result = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QByteArray__FromBase64Result,

    pub const _is_QByteArray__FromBase64Result = {};

    /// New constructs a new QByteArray::FromBase64Result object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QByteArray__FromBase64Result `
    ///
    pub fn New(param1: anytype) QByteArray__FromBase64Result {
        comptime _ = @TypeOf(param1)._is_QByteArray__FromBase64Result;
        return .{ .ptr = qtc.QByteArray__FromBase64Result_new(@ptrCast(param1.ptr)) };
    }

    /// New2 constructs a new QByteArray::FromBase64Result object.
    ///
    pub fn New2() QByteArray__FromBase64Result {
        return .{ .ptr = qtc.QByteArray__FromBase64Result_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#decoded-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Decoded(self: QByteArray__FromBase64Result, allocator: std.mem.Allocator) []u8 {
        var decoded_bytearray: qtc.libqt_string = qtc.QByteArray__FromBase64Result_Decoded(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&decoded_bytearray);
        const decoded_ret = allocator.alloc(u8, decoded_bytearray.len) catch @panic("qbytearray__frombase64result.Decoded: Memory allocation failed");
        @memcpy(decoded_ret, decoded_bytearray.data[0..decoded_bytearray.len]);
        return decoded_ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#decoded-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` decoded: []u8 `
    ///
    pub fn SetDecoded(self: QByteArray__FromBase64Result, decoded: []u8) void {
        const decoded_str = qtc.libqt_string{
            .len = decoded.len,
            .data = decoded.ptr,
        };
        qtc.QByteArray__FromBase64Result_SetDecoded(@ptrCast(self.ptr), decoded_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#decodingStatus-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ## Returns:
    ///
    /// ` qbytearray_enums.Base64DecodingStatus `
    ///
    pub fn DecodingStatus(self: QByteArray__FromBase64Result) i32 {
        return qtc.QByteArray__FromBase64Result_DecodingStatus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#decodingStatus-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` decodingStatus: qbytearray_enums.Base64DecodingStatus `
    ///
    pub fn SetDecodingStatus(self: QByteArray__FromBase64Result, decodingStatus: i32) void {
        qtc.QByteArray__FromBase64Result_SetDecodingStatus(@ptrCast(self.ptr), @bitCast(decodingStatus));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` other: QByteArray__FromBase64Result `
    ///
    pub fn Swap(self: QByteArray__FromBase64Result, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QByteArray__FromBase64Result;
        qtc.QByteArray__FromBase64Result_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    pub fn ToBool(self: QByteArray__FromBase64Result) bool {
        return qtc.QByteArray__FromBase64Result_ToBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OperatorMultiply(self: QByteArray__FromBase64Result, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray__FromBase64Result_OperatorMultiply(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray__frombase64result.OperatorMultiply: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OperatorMultiply2(self: QByteArray__FromBase64Result, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray__FromBase64Result_OperatorMultiply2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbytearray__frombase64result.OperatorMultiply2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` param1: QByteArray__FromBase64Result `
    ///
    pub fn OperatorAssign(self: QByteArray__FromBase64Result, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QByteArray__FromBase64Result;
        qtc.QByteArray__FromBase64Result_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    pub fn Delete(self: QByteArray__FromBase64Result) void {
        qtc.QByteArray__FromBase64Result_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#public-types)
pub const enums = struct {
    pub const Base64Option = enum(i32) {
        pub const Base64Encoding: i32 = 0;
        pub const Base64UrlEncoding: i32 = 1;
        pub const KeepTrailingEquals: i32 = 0;
        pub const OmitTrailingEquals: i32 = 2;
        pub const IgnoreBase64DecodingErrors: i32 = 0;
        pub const AbortOnBase64DecodingErrors: i32 = 4;
    };

    pub const Base64DecodingStatus = enum(i32) {
        pub const Ok: i32 = 0;
        pub const IllegalInputLength: i32 = 1;
        pub const IllegalCharacter: i32 = 2;
        pub const IllegalPadding: i32 = 3;
    };
};
