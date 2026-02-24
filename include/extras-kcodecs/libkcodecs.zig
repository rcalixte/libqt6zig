const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcodecs_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcodecs.html)
pub const kcodecs = struct {
    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableEncode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` param2: bool `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QuotedPrintableEncode(param1: []u8, param2: bool, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_QuotedPrintableEncode(param1_str, param2);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.QuotedPrintableEncode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableEncode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` param2: []u8 `
    ///
    /// ` param3: bool `
    ///
    pub fn QuotedPrintableEncode2(param1: []u8, param2: []u8, param3: bool) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KCodecs_QuotedPrintableEncode2(param1_str, param2_str, param3);
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableDecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QuotedPrintableDecode(param1: []u8, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_QuotedPrintableDecode(param1_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.QuotedPrintableDecode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableDecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` param2: []u8 `
    ///
    pub fn QuotedPrintableDecode2(param1: []u8, param2: []u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KCodecs_QuotedPrintableDecode2(param1_str, param2_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#uudecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Uudecode(param1: []u8, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_Uudecode(param1_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.Uudecode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#uudecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` param2: []u8 `
    ///
    pub fn Uudecode2(param1: []u8, param2: []u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KCodecs_Uudecode2(param1_str, param2_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#base64Encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Base64Encode(param1: []u8, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_Base64Encode(param1_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.Base64Encode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#base64Encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` param2: []u8 `
    ///
    /// ` param3: bool `
    ///
    pub fn Base64Encode2(param1: []u8, param2: []u8, param3: bool) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KCodecs_Base64Encode2(param1_str, param2_str, param3);
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#base64Decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Base64Decode(param1: []u8, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_Base64Decode(param1_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.Base64Decode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#base64Decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` param2: []u8 `
    ///
    pub fn Base64Decode2(param1: []u8, param2: []u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KCodecs_Base64Decode2(param1_str, param2_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#base45Decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Base45Decode(param1: []u8, allocator: std.mem.Allocator) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_Base45Decode(param1_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.Base45Decode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html)
pub const kcodecs__codec = struct {
    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#codecForName)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []u8 `
    ///
    pub fn CodecForName(name: []u8) QtC.KCodecs__Codec {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.KCodecs__Codec_CodecForName(name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#maxEncodedSizeFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    /// ` insize: i64 `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn MaxEncodedSizeFor(self: ?*anyopaque, insize: i64, newline: i32) i64 {
        return qtc.KCodecs__Codec_MaxEncodedSizeFor(@ptrCast(self), @bitCast(insize), @bitCast(newline));
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#maxDecodedSizeFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    /// ` insize: i64 `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn MaxDecodedSizeFor(self: ?*anyopaque, insize: i64, newline: i32) i64 {
        return qtc.KCodecs__Codec_MaxDecodedSizeFor(@ptrCast(self), @bitCast(insize), @bitCast(newline));
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#makeEncoder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn MakeEncoder(self: ?*anyopaque, newline: i32) QtC.KCodecs__Encoder {
        return qtc.KCodecs__Codec_MakeEncoder(@ptrCast(self), @bitCast(newline));
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#makeDecoder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn MakeDecoder(self: ?*anyopaque, newline: i32) QtC.KCodecs__Decoder {
        return qtc.KCodecs__Codec_MakeDecoder(@ptrCast(self), @bitCast(newline));
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    /// ` scursor: [:0]const u8 `
    ///
    /// ` send: [:0]const u8 `
    ///
    /// ` dcursor: [:0]u8 `
    ///
    /// ` dend: [:0]const u8 `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn Encode(self: ?*anyopaque, scursor: [:0]const u8, send: [:0]const u8, dcursor: [:0]u8, dend: [:0]const u8, newline: i32) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Codec_Encode(@ptrCast(self), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring, @bitCast(newline));
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    /// ` scursor: [:0]const u8 `
    ///
    /// ` send: [:0]const u8 `
    ///
    /// ` dcursor: [:0]u8 `
    ///
    /// ` dend: [:0]const u8 `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn Decode(self: ?*anyopaque, scursor: [:0]const u8, send: [:0]const u8, dcursor: [:0]u8, dend: [:0]const u8, newline: i32) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Codec_Decode(@ptrCast(self), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring, @bitCast(newline));
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    /// ` src: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Encode2(self: ?*anyopaque, src: []u8, allocator: std.mem.Allocator) []u8 {
        const src_str = qtc.libqt_string{
            .len = src.len,
            .data = src.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Encode2(@ptrCast(self), src_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs__codec.Encode2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    /// ` src: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Decode2(self: ?*anyopaque, src: []u8, allocator: std.mem.Allocator) []u8 {
        const src_str = qtc.libqt_string{
            .len = src.len,
            .data = src.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Decode2(@ptrCast(self), src_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs__codec.Decode2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    pub fn Name(self: ?*anyopaque) [:0]const u8 {
        const _ret = qtc.KCodecs__Codec_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    /// ` src: []u8 `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Encode22(self: ?*anyopaque, src: []u8, newline: i32, allocator: std.mem.Allocator) []u8 {
        const src_str = qtc.libqt_string{
            .len = src.len,
            .data = src.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Encode22(@ptrCast(self), src_str, @bitCast(newline));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs__codec.Encode22: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    /// ` src: []u8 `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Decode22(self: ?*anyopaque, src: []u8, newline: i32, allocator: std.mem.Allocator) []u8 {
        const src_str = qtc.libqt_string{
            .len = src.len,
            .data = src.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Decode22(@ptrCast(self), src_str, @bitCast(newline));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs__codec.Decode22: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCodecs__Codec `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KCodecs__Codec_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcodecs-decoder.html)
pub const kcodecs__decoder = struct {
    /// ### [Upstream resources](https://api.kde.org/kcodecs-decoder.html#decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Decoder `
    ///
    /// ` scursor: [:0]const u8 `
    ///
    /// ` send: [:0]const u8 `
    ///
    /// ` dcursor: [:0]u8 `
    ///
    /// ` dend: [:0]const u8 `
    ///
    pub fn Decode(self: ?*anyopaque, scursor: [:0]const u8, send: [:0]const u8, dcursor: [:0]u8, dend: [:0]const u8) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Decoder_Decode(@ptrCast(self), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-decoder.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Decoder `
    ///
    /// ` dcursor: [:0]u8 `
    ///
    /// ` dend: [:0]const u8 `
    ///
    pub fn Finish(self: ?*anyopaque, dcursor: [:0]u8, dend: [:0]const u8) bool {
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Decoder_Finish(@ptrCast(self), dcursor_Cstring, dend_Cstring);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCodecs__Decoder `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KCodecs__Decoder_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcodecs-encoder.html)
pub const kcodecs__encoder = struct {
    /// ### [Upstream resources](https://api.kde.org/kcodecs-encoder.html#encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Encoder `
    ///
    /// ` scursor: [:0]const u8 `
    ///
    /// ` send: [:0]const u8 `
    ///
    /// ` dcursor: [:0]u8 `
    ///
    /// ` dend: [:0]const u8 `
    ///
    pub fn Encode(self: ?*anyopaque, scursor: [:0]const u8, send: [:0]const u8, dcursor: [:0]u8, dend: [:0]const u8) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Encoder_Encode(@ptrCast(self), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring);
    }

    /// ### [Upstream resources](https://api.kde.org/kcodecs-encoder.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KCodecs__Encoder `
    ///
    /// ` dcursor: [:0]u8 `
    ///
    /// ` dend: [:0]const u8 `
    ///
    pub fn Finish(self: ?*anyopaque, dcursor: [:0]u8, dend: [:0]const u8) bool {
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Encoder_Finish(@ptrCast(self), dcursor_Cstring, dend_Cstring);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KCodecs__Encoder `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KCodecs__Encoder_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcodecs.html#public-types)
pub const enums = struct {
    pub const CharsetOption = enum(i32) {
        pub const NoOption: i32 = 0;
        pub const ForceDefaultCharset: i32 = 1;
    };

    pub const NewlineType = enum(i32) {
        pub const NewlineLF: i32 = 0;
        pub const NewlineCRLF: i32 = 1;
    };

    pub const KCodecs__Encoder = enum(i32) {
        pub const MaxBufferedChars: i32 = 8;
    };
};
