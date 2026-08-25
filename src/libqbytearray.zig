const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qbytearray_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html)
pub const QByteArray = extern struct {
    /// ### DEPRECATED: Use `number` instead
    ///
    pub const Number = number;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: i32 `
    ///
    pub fn number(allocator: std.mem.Allocator, param1: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number2` instead
    ///
    pub const Number2 = number2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: u32 `
    ///
    pub fn number2(allocator: std.mem.Allocator, param1: u32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number2(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number3` instead
    ///
    pub const Number3 = number3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    pub fn number3(allocator: std.mem.Allocator, param1: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number3(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number3: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number4` instead
    ///
    pub const Number4 = number4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    pub fn number4(allocator: std.mem.Allocator, param1: usize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number4(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number4: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number5` instead
    ///
    pub const Number5 = number5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: isize `
    ///
    pub fn number5(allocator: std.mem.Allocator, param1: isize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number5(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number5: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number6` instead
    ///
    pub const Number6 = number6;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: usize `
    ///
    pub fn number6(allocator: std.mem.Allocator, param1: usize) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number6(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number6: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number7` instead
    ///
    pub const Number7 = number7;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#number)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: f64 `
    ///
    pub fn number7(allocator: std.mem.Allocator, param1: f64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number7(@bitCast(param1));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number7: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromRawData` instead
    ///
    pub const FromRawData = fromRawData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromRawData)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _data: [:0]const u8 `
    ///
    /// ` _size: isize `
    ///
    pub fn fromRawData(allocator: std.mem.Allocator, _data: [:0]const u8, _size: isize) []u8 {
        const data_Cstring = _data.ptr;
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromRawData(data_Cstring, @bitCast(_size));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.fromRawData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromBase64Encoding` instead
    ///
    pub const FromBase64Encoding = fromBase64Encoding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromBase64Encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` base64: []u8 `
    ///
    pub fn fromBase64Encoding(base64: []u8) QByteArray__FromBase64Result {
        const base64_str = qtc.libqt_string{
            .len = base64.len,
            .data = base64.ptr,
        };
        return .{ .ptr = qtc.QByteArray_FromBase64Encoding(base64_str) };
    }

    /// ### DEPRECATED: Use `fromBase64` instead
    ///
    pub const FromBase64 = fromBase64;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromBase64)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` base64: []u8 `
    ///
    pub fn fromBase64(allocator: std.mem.Allocator, base64: []u8) []u8 {
        const base64_str = qtc.libqt_string{
            .len = base64.len,
            .data = base64.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromBase64(base64_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.fromBase64: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromHex` instead
    ///
    pub const FromHex = fromHex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromHex)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` hexEncoded: []u8 `
    ///
    pub fn fromHex(allocator: std.mem.Allocator, hexEncoded: []u8) []u8 {
        const hexEncoded_str = qtc.libqt_string{
            .len = hexEncoded.len,
            .data = hexEncoded.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromHex(hexEncoded_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.fromHex: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromPercentEncoding` instead
    ///
    pub const FromPercentEncoding = fromPercentEncoding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromPercentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pctEncoded: []u8 `
    ///
    pub fn fromPercentEncoding(allocator: std.mem.Allocator, pctEncoded: []u8) []u8 {
        const pctEncoded_str = qtc.libqt_string{
            .len = pctEncoded.len,
            .data = pctEncoded.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromPercentEncoding(pctEncoded_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.fromPercentEncoding: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `maxSize2` instead
    ///
    pub const MaxSize2 = maxSize2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#maxSize)
    ///
    pub fn maxSize2() isize {
        return qtc.QByteArray_MaxSize2();
    }

    /// ### DEPRECATED: Use `number22` instead
    ///
    pub const Number22 = number22;

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
    pub fn number22(allocator: std.mem.Allocator, param1: i32, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number22(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number22: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number23` instead
    ///
    pub const Number23 = number23;

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
    pub fn number23(allocator: std.mem.Allocator, param1: u32, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number23(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number23: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number24` instead
    ///
    pub const Number24 = number24;

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
    pub fn number24(allocator: std.mem.Allocator, param1: isize, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number24(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number24: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number25` instead
    ///
    pub const Number25 = number25;

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
    pub fn number25(allocator: std.mem.Allocator, param1: usize, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number25(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number25: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number26` instead
    ///
    pub const Number26 = number26;

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
    pub fn number26(allocator: std.mem.Allocator, param1: isize, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number26(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number26: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number27` instead
    ///
    pub const Number27 = number27;

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
    pub fn number27(allocator: std.mem.Allocator, param1: usize, base: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number27(@bitCast(param1), @bitCast(base));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number27: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number28` instead
    ///
    pub const Number28 = number28;

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
    pub fn number28(allocator: std.mem.Allocator, param1: f64, format: u8) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number28(@bitCast(param1), @bitCast(format));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number28: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `number32` instead
    ///
    pub const Number32 = number32;

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
    pub fn number32(allocator: std.mem.Allocator, param1: f64, format: u8, precision: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray_Number32(@bitCast(param1), @bitCast(format), @bitCast(precision));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.number32: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromBase64Encoding2` instead
    ///
    pub const FromBase64Encoding2 = fromBase64Encoding2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#fromBase64Encoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` base64: []u8 `
    ///
    /// ` options: flag of qbytearray_enums.Base64Option `
    ///
    pub fn fromBase64Encoding2(base64: []u8, options: i32) QByteArray__FromBase64Result {
        const base64_str = qtc.libqt_string{
            .len = base64.len,
            .data = base64.ptr,
        };
        return .{ .ptr = qtc.QByteArray_FromBase64Encoding2(base64_str, @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `fromBase642` instead
    ///
    pub const FromBase642 = fromBase642;

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
    pub fn fromBase642(allocator: std.mem.Allocator, base64: []u8, options: i32) []u8 {
        const base64_str = qtc.libqt_string{
            .len = base64.len,
            .data = base64.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromBase642(base64_str, @bitCast(options));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.fromBase642: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromPercentEncoding2` instead
    ///
    pub const FromPercentEncoding2 = fromPercentEncoding2;

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
    pub fn fromPercentEncoding2(allocator: std.mem.Allocator, pctEncoded: []u8, percent: u8) []u8 {
        const pctEncoded_str = qtc.libqt_string{
            .len = pctEncoded.len,
            .data = pctEncoded.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QByteArray_FromPercentEncoding2(pctEncoded_str, @bitCast(percent));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray.fromPercentEncoding2: Memory allocation failed");
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QByteArray::FromBase64Result object in C++ memory
    ///
    pub fn new() QByteArray__FromBase64Result {
        return .{ .ptr = qtc.QByteArray__FromBase64Result_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QByteArray::FromBase64Result object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QByteArray__FromBase64Result `
    ///
    pub fn new2(param1: anytype) QByteArray__FromBase64Result {
        comptime _ = @TypeOf(param1)._is_QByteArray__FromBase64Result;
        return .{ .ptr = qtc.QByteArray__FromBase64Result_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `decoded` instead
    ///
    pub const Decoded = decoded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#decoded-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn decoded(self: QByteArray__FromBase64Result, allocator: std.mem.Allocator) []u8 {
        var decoded_bytearray: qtc.libqt_string = qtc.QByteArray__FromBase64Result_Decoded(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&decoded_bytearray);
        const decoded_ret = allocator.alloc(u8, decoded_bytearray.len) catch @panic("QByteArray__FromBase64Result.decoded: Memory allocation failed");
        @memcpy(decoded_ret, decoded_bytearray.data[0..decoded_bytearray.len]);
        return decoded_ret;
    }

    /// ### DEPRECATED: Use `setDecoded` instead
    ///
    pub const SetDecoded = setDecoded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#decoded-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` _decoded: []u8 `
    ///
    pub fn setDecoded(self: QByteArray__FromBase64Result, _decoded: []u8) void {
        const decoded_str = qtc.libqt_string{
            .len = _decoded.len,
            .data = _decoded.ptr,
        };
        qtc.QByteArray__FromBase64Result_SetDecoded(@ptrCast(self.ptr), decoded_str);
    }

    /// ### DEPRECATED: Use `decodingStatus` instead
    ///
    pub const DecodingStatus = decodingStatus;

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
    pub fn decodingStatus(self: QByteArray__FromBase64Result) i32 {
        return qtc.QByteArray__FromBase64Result_DecodingStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDecodingStatus` instead
    ///
    pub const SetDecodingStatus = setDecodingStatus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#decodingStatus-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` _decodingStatus: qbytearray_enums.Base64DecodingStatus `
    ///
    pub fn setDecodingStatus(self: QByteArray__FromBase64Result, _decodingStatus: i32) void {
        qtc.QByteArray__FromBase64Result_SetDecodingStatus(@ptrCast(self.ptr), @bitCast(_decodingStatus));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` other: QByteArray__FromBase64Result `
    ///
    pub fn swap(self: QByteArray__FromBase64Result, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QByteArray__FromBase64Result;
        qtc.QByteArray__FromBase64Result_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    pub fn toBool(self: QByteArray__FromBase64Result) bool {
        return qtc.QByteArray__FromBase64Result_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorMultiply` instead
    ///
    pub const OperatorMultiply = operatorMultiply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn operatorMultiply(self: QByteArray__FromBase64Result, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray__FromBase64Result_OperatorMultiply(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray__FromBase64Result.operatorMultiply: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorMultiply2` instead
    ///
    pub const OperatorMultiply2 = operatorMultiply2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator-2a)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn operatorMultiply2(self: QByteArray__FromBase64Result, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QByteArray__FromBase64Result_OperatorMultiply2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QByteArray__FromBase64Result.operatorMultiply2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray-frombase64result.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    /// ` param1: QByteArray__FromBase64Result `
    ///
    pub fn operatorAssign(self: QByteArray__FromBase64Result, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QByteArray__FromBase64Result;
        qtc.QByteArray__FromBase64Result_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QByteArray__FromBase64Result `
    ///
    pub fn delete(self: QByteArray__FromBase64Result) void {
        qtc.QByteArray__FromBase64Result_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbytearray.html#public-types)
pub const enums = struct {
    pub const Base64Option = enum {
        pub const Base64Encoding: i32 = 0;
        pub const Base64UrlEncoding: i32 = 1;
        pub const KeepTrailingEquals: i32 = 0;
        pub const OmitTrailingEquals: i32 = 2;
        pub const IgnoreBase64DecodingErrors: i32 = 0;
        pub const AbortOnBase64DecodingErrors: i32 = 4;
    };

    pub const Base64DecodingStatus = enum {
        pub const Ok: i32 = 0;
        pub const IllegalInputLength: i32 = 1;
        pub const IllegalCharacter: i32 = 2;
        pub const IllegalPadding: i32 = 3;
    };
};
