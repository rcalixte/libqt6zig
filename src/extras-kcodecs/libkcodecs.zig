const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcodecs_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kcodecs.html)
pub const KCodecs = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcodecs.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCodecs,

    pub const _is_KCodecs = {};

    /// ### DEPRECATED: Use `quotedPrintableEncode` instead
    ///
    pub const QuotedPrintableEncode = quotedPrintableEncode;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableEncode)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` in: []u8 `
    ///
    /// ` useCRLF: bool `
    ///
    pub fn quotedPrintableEncode(allocator: std.mem.Allocator, in: []u8, useCRLF: bool) []u8 {
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_QuotedPrintableEncode(in_str, useCRLF);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KCodecs.quotedPrintableEncode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `quotedPrintableEncode2` instead
    ///
    pub const QuotedPrintableEncode2 = quotedPrintableEncode2;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableEncode)
    ///
    /// ## Parameter(s):
    ///
    /// ` in: []u8 `
    ///
    /// ` out: []u8 `
    ///
    /// ` useCRLF: bool `
    ///
    pub fn quotedPrintableEncode2(in: []u8, out: []u8, useCRLF: bool) void {
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        const out_str = qtc.libqt_string{
            .len = out.len,
            .data = out.ptr,
        };
        qtc.KCodecs_QuotedPrintableEncode2(in_str, out_str, useCRLF);
    }

    /// ### DEPRECATED: Use `quotedPrintableDecode` instead
    ///
    pub const QuotedPrintableDecode = quotedPrintableDecode;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableDecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` in: []u8 `
    ///
    pub fn quotedPrintableDecode(allocator: std.mem.Allocator, in: []u8) []u8 {
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_QuotedPrintableDecode(in_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KCodecs.quotedPrintableDecode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `quotedPrintableDecode2` instead
    ///
    pub const QuotedPrintableDecode2 = quotedPrintableDecode2;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#quotedPrintableDecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` in: []u8 `
    ///
    /// ` out: []u8 `
    ///
    pub fn quotedPrintableDecode2(in: []u8, out: []u8) void {
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        const out_str = qtc.libqt_string{
            .len = out.len,
            .data = out.ptr,
        };
        qtc.KCodecs_QuotedPrintableDecode2(in_str, out_str);
    }

    /// ### DEPRECATED: Use `uudecode` instead
    ///
    pub const Uudecode = uudecode;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#uudecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` in: []u8 `
    ///
    pub fn uudecode(allocator: std.mem.Allocator, in: []u8) []u8 {
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_Uudecode(in_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KCodecs.uudecode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `uudecode2` instead
    ///
    pub const Uudecode2 = uudecode2;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#uudecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` in: []u8 `
    ///
    /// ` out: []u8 `
    ///
    pub fn uudecode2(in: []u8, out: []u8) void {
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        const out_str = qtc.libqt_string{
            .len = out.len,
            .data = out.ptr,
        };
        qtc.KCodecs_Uudecode2(in_str, out_str);
    }

    /// ### DEPRECATED: Use `base64Encode` instead
    ///
    pub const Base64Encode = base64Encode;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#base64Encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` in: []u8 `
    ///
    pub fn base64Encode(allocator: std.mem.Allocator, in: []u8) []u8 {
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_Base64Encode(in_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KCodecs.base64Encode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `base64Encode2` instead
    ///
    pub const Base64Encode2 = base64Encode2;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#base64Encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` in: []u8 `
    ///
    /// ` out: []u8 `
    ///
    /// ` insertLFs: bool `
    ///
    pub fn base64Encode2(in: []u8, out: []u8, insertLFs: bool) void {
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        const out_str = qtc.libqt_string{
            .len = out.len,
            .data = out.ptr,
        };
        qtc.KCodecs_Base64Encode2(in_str, out_str, insertLFs);
    }

    /// ### DEPRECATED: Use `base64Decode` instead
    ///
    pub const Base64Decode = base64Decode;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#base64Decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` in: []u8 `
    ///
    pub fn base64Decode(allocator: std.mem.Allocator, in: []u8) []u8 {
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_Base64Decode(in_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KCodecs.base64Decode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `base64Decode2` instead
    ///
    pub const Base64Decode2 = base64Decode2;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#base64Decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` in: []u8 `
    ///
    /// ` out: []u8 `
    ///
    pub fn base64Decode2(in: []u8, out: []u8) void {
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        const out_str = qtc.libqt_string{
            .len = out.len,
            .data = out.ptr,
        };
        qtc.KCodecs_Base64Decode2(in_str, out_str);
    }

    /// ### DEPRECATED: Use `decodeRFC2047String` instead
    ///
    pub const DecodeRFC2047String = decodeRFC2047String;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#decodeRFC2047String)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn decodeRFC2047String(allocator: std.mem.Allocator, text: []const u8) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.KCodecs_DecodeRFC2047String(text_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCodecs.decodeRFC2047String: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `encodeRFC2047String` instead
    ///
    pub const EncodeRFC2047String = encodeRFC2047String;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#encodeRFC2047String)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` src: []const u8 `
    ///
    /// ` charset: []u8 `
    ///
    pub fn encodeRFC2047String(allocator: std.mem.Allocator, src: []const u8, charset: []u8) []u8 {
        const src_str = qtc.libqt_string{
            .len = src.len,
            .data = src.ptr,
        };
        const charset_str = qtc.libqt_string{
            .len = charset.len,
            .data = charset.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_EncodeRFC2047String(src_str, charset_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KCodecs.encodeRFC2047String: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `base45Decode` instead
    ///
    pub const Base45Decode = base45Decode;

    /// ### [Upstream resources](https://api.kde.org/kcodecs.html#base45Decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` in: []u8 `
    ///
    pub fn base45Decode(allocator: std.mem.Allocator, in: []u8) []u8 {
        const in_str = qtc.libqt_string{
            .len = in.len,
            .data = in.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs_Base45Decode(in_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KCodecs.base45Decode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }
};

/// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html)
pub const KCodecs__Codec = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCodecs__Codec,

    pub const _is_KCodecs__Codec = {};

    /// ### DEPRECATED: Use `codecForName` instead
    ///
    pub const CodecForName = codecForName;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#codecForName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []u8 `
    ///
    pub fn codecForName(_name: []u8) KCodecs__Codec {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KCodecs__Codec_CodecForName(name_str) };
    }

    /// ### DEPRECATED: Use `maxEncodedSizeFor` instead
    ///
    pub const MaxEncodedSizeFor = maxEncodedSizeFor;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#maxEncodedSizeFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Codec `
    ///
    /// ` insize: isize `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn maxEncodedSizeFor(self: KCodecs__Codec, insize: isize, newline: i32) isize {
        return qtc.KCodecs__Codec_MaxEncodedSizeFor(@ptrCast(self.ptr), @bitCast(insize), @bitCast(newline));
    }

    /// ### DEPRECATED: Use `maxDecodedSizeFor` instead
    ///
    pub const MaxDecodedSizeFor = maxDecodedSizeFor;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#maxDecodedSizeFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Codec `
    ///
    /// ` insize: isize `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn maxDecodedSizeFor(self: KCodecs__Codec, insize: isize, newline: i32) isize {
        return qtc.KCodecs__Codec_MaxDecodedSizeFor(@ptrCast(self.ptr), @bitCast(insize), @bitCast(newline));
    }

    /// ### DEPRECATED: Use `makeEncoder` instead
    ///
    pub const MakeEncoder = makeEncoder;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#makeEncoder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Codec `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn makeEncoder(self: KCodecs__Codec, newline: i32) KCodecs__Encoder {
        return .{ .ptr = qtc.KCodecs__Codec_MakeEncoder(@ptrCast(self.ptr), @bitCast(newline)) };
    }

    /// ### DEPRECATED: Use `makeDecoder` instead
    ///
    pub const MakeDecoder = makeDecoder;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#makeDecoder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Codec `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn makeDecoder(self: KCodecs__Codec, newline: i32) KCodecs__Decoder {
        return .{ .ptr = qtc.KCodecs__Codec_MakeDecoder(@ptrCast(self.ptr), @bitCast(newline)) };
    }

    /// ### DEPRECATED: Use `encode` instead
    ///
    pub const Encode = encode;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Codec `
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
    pub fn encode(self: KCodecs__Codec, scursor: [:0]const u8, send: [:0]const u8, dcursor: [:0]u8, dend: [:0]const u8, newline: i32) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Codec_Encode(@ptrCast(self.ptr), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring, @bitCast(newline));
    }

    /// ### DEPRECATED: Use `decode` instead
    ///
    pub const Decode = decode;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Codec `
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
    pub fn decode(self: KCodecs__Codec, scursor: [:0]const u8, send: [:0]const u8, dcursor: [:0]u8, dend: [:0]const u8, newline: i32) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Codec_Decode(@ptrCast(self.ptr), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring, @bitCast(newline));
    }

    /// ### DEPRECATED: Use `encode2` instead
    ///
    pub const Encode2 = encode2;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Codec `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` src: []u8 `
    ///
    pub fn encode2(self: KCodecs__Codec, allocator: std.mem.Allocator, src: []u8) []u8 {
        const src_str = qtc.libqt_string{
            .len = src.len,
            .data = src.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Encode2(@ptrCast(self.ptr), src_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KCodecs__Codec.encode2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `decode2` instead
    ///
    pub const Decode2 = decode2;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Codec `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` src: []u8 `
    ///
    pub fn decode2(self: KCodecs__Codec, allocator: std.mem.Allocator, src: []u8) []u8 {
        const src_str = qtc.libqt_string{
            .len = src.len,
            .data = src.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Decode2(@ptrCast(self.ptr), src_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KCodecs__Codec.decode2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Codec `
    ///
    pub fn name(self: KCodecs__Codec) [:0]const u8 {
        const _ret = qtc.KCodecs__Codec_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `encode22` instead
    ///
    pub const Encode22 = encode22;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Codec `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` src: []u8 `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn encode22(self: KCodecs__Codec, allocator: std.mem.Allocator, src: []u8, newline: i32) []u8 {
        const src_str = qtc.libqt_string{
            .len = src.len,
            .data = src.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Encode22(@ptrCast(self.ptr), src_str, @bitCast(newline));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KCodecs__Codec.encode22: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `decode22` instead
    ///
    pub const Decode22 = decode22;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-codec.html#decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Codec `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` src: []u8 `
    ///
    /// ` newline: kcodecs_enums.NewlineType `
    ///
    pub fn decode22(self: KCodecs__Codec, allocator: std.mem.Allocator, src: []u8, newline: i32) []u8 {
        const src_str = qtc.libqt_string{
            .len = src.len,
            .data = src.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Decode22(@ptrCast(self.ptr), src_str, @bitCast(newline));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KCodecs__Codec.decode22: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCodecs__Codec `
    ///
    pub fn delete(self: KCodecs__Codec) void {
        qtc.KCodecs__Codec_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcodecs-decoder.html)
pub const KCodecs__Decoder = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcodecs-decoder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCodecs__Decoder,

    pub const _is_KCodecs__Decoder = {};

    /// ### DEPRECATED: Use `decode` instead
    ///
    pub const Decode = decode;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-decoder.html#decode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Decoder `
    ///
    /// ` scursor: [:0]const u8 `
    ///
    /// ` send: [:0]const u8 `
    ///
    /// ` dcursor: [:0]u8 `
    ///
    /// ` dend: [:0]const u8 `
    ///
    pub fn decode(self: KCodecs__Decoder, scursor: [:0]const u8, send: [:0]const u8, dcursor: [:0]u8, dend: [:0]const u8) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Decoder_Decode(@ptrCast(self.ptr), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring);
    }

    /// ### DEPRECATED: Use `finish` instead
    ///
    pub const Finish = finish;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-decoder.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Decoder `
    ///
    /// ` dcursor: [:0]u8 `
    ///
    /// ` dend: [:0]const u8 `
    ///
    pub fn finish(self: KCodecs__Decoder, dcursor: [:0]u8, dend: [:0]const u8) bool {
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Decoder_Finish(@ptrCast(self.ptr), dcursor_Cstring, dend_Cstring);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCodecs__Decoder `
    ///
    pub fn delete(self: KCodecs__Decoder) void {
        qtc.KCodecs__Decoder_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcodecs-encoder.html)
pub const KCodecs__Encoder = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcodecs-encoder.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCodecs__Encoder,

    pub const _is_KCodecs__Encoder = {};

    /// ### DEPRECATED: Use `encode` instead
    ///
    pub const Encode = encode;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-encoder.html#encode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Encoder `
    ///
    /// ` scursor: [:0]const u8 `
    ///
    /// ` send: [:0]const u8 `
    ///
    /// ` dcursor: [:0]u8 `
    ///
    /// ` dend: [:0]const u8 `
    ///
    pub fn encode(self: KCodecs__Encoder, scursor: [:0]const u8, send: [:0]const u8, dcursor: [:0]u8, dend: [:0]const u8) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Encoder_Encode(@ptrCast(self.ptr), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring);
    }

    /// ### DEPRECATED: Use `finish` instead
    ///
    pub const Finish = finish;

    /// ### [Upstream resources](https://api.kde.org/kcodecs-encoder.html#finish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCodecs__Encoder `
    ///
    /// ` dcursor: [:0]u8 `
    ///
    /// ` dend: [:0]const u8 `
    ///
    pub fn finish(self: KCodecs__Encoder, dcursor: [:0]u8, dend: [:0]const u8) bool {
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Encoder_Finish(@ptrCast(self.ptr), dcursor_Cstring, dend_Cstring);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCodecs__Encoder `
    ///
    pub fn delete(self: KCodecs__Encoder) void {
        qtc.KCodecs__Encoder_Delete(@ptrCast(self.ptr));
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
