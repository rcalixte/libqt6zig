const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kcodecs_enums = enums;
const std = @import("std");

/// https://api.kde.org/kcodecs.html
pub const kcodecs = struct {
    /// [Qt documentation](https://api.kde.org/kcodecs.html#quotedPrintableEncode)
    ///
    /// ``` param1: []const u8, param2: bool, allocator: std.mem.Allocator ```
    pub fn QuotedPrintableEncode(param1: []const u8, param2: bool, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KCodecs_QuotedPrintableEncode(param1.ptr, param2);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.QuotedPrintableEncode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcodecs.html#quotedPrintableEncode)
    ///
    /// ``` param1: []const u8, param2: []u8, param3: bool ```
    pub fn QuotedPrintableEncode2(param1: []const u8, param2: []u8, param3: bool) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KCodecs_QuotedPrintableEncode2(param1.ptr, param2_str, param3);
    }

    /// [Qt documentation](https://api.kde.org/kcodecs.html#quotedPrintableDecode)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn QuotedPrintableDecode(param1: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KCodecs_QuotedPrintableDecode(param1.ptr);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.QuotedPrintableDecode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcodecs.html#quotedPrintableDecode)
    ///
    /// ``` param1: []const u8, param2: []u8 ```
    pub fn QuotedPrintableDecode2(param1: []const u8, param2: []u8) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KCodecs_QuotedPrintableDecode2(param1.ptr, param2_str);
    }

    /// [Qt documentation](https://api.kde.org/kcodecs.html#uudecode)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn Uudecode(param1: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KCodecs_Uudecode(param1.ptr);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.Uudecode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcodecs.html#uudecode)
    ///
    /// ``` param1: []const u8, param2: []u8 ```
    pub fn Uudecode2(param1: []const u8, param2: []u8) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KCodecs_Uudecode2(param1.ptr, param2_str);
    }

    /// [Qt documentation](https://api.kde.org/kcodecs.html#base64Encode)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn Base64Encode(param1: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KCodecs_Base64Encode(param1.ptr);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.Base64Encode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcodecs.html#base64Encode)
    ///
    /// ``` param1: []const u8, param2: []u8, param3: bool ```
    pub fn Base64Encode2(param1: []const u8, param2: []u8, param3: bool) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KCodecs_Base64Encode2(param1.ptr, param2_str, param3);
    }

    /// [Qt documentation](https://api.kde.org/kcodecs.html#base64Decode)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn Base64Decode(param1: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KCodecs_Base64Decode(param1.ptr);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.Base64Decode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcodecs.html#base64Decode)
    ///
    /// ``` param1: []const u8, param2: []u8 ```
    pub fn Base64Decode2(param1: []const u8, param2: []u8) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KCodecs_Base64Decode2(param1.ptr, param2_str);
    }

    /// [Qt documentation](https://api.kde.org/kcodecs.html#base45Decode)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn Base45Decode(param1: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KCodecs_Base45Decode(param1.ptr);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs.Base45Decode: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }
};

/// https://api.kde.org/kcodecs-codec.html
pub const kcodecs__codec = struct {
    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#codecForName)
    ///
    /// ``` name: []const u8 ```
    pub fn CodecForName(name: []const u8) QtC.KCodecs__Codec {
        return qtc.KCodecs__Codec_CodecForName(name.ptr);
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#maxEncodedSizeFor)
    ///
    /// ``` self: QtC.KCodecs__Codec, insize: i64, newline: kcodecs_enums.NewlineType ```
    pub fn MaxEncodedSizeFor(self: ?*anyopaque, insize: i64, newline: i32) i64 {
        return qtc.KCodecs__Codec_MaxEncodedSizeFor(@ptrCast(self), @intCast(insize), @intCast(newline));
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#maxDecodedSizeFor)
    ///
    /// ``` self: QtC.KCodecs__Codec, insize: i64, newline: kcodecs_enums.NewlineType ```
    pub fn MaxDecodedSizeFor(self: ?*anyopaque, insize: i64, newline: i32) i64 {
        return qtc.KCodecs__Codec_MaxDecodedSizeFor(@ptrCast(self), @intCast(insize), @intCast(newline));
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#makeEncoder)
    ///
    /// ``` self: QtC.KCodecs__Codec, newline: kcodecs_enums.NewlineType ```
    pub fn MakeEncoder(self: ?*anyopaque, newline: i32) QtC.KCodecs__Encoder {
        return qtc.KCodecs__Codec_MakeEncoder(@ptrCast(self), @intCast(newline));
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#makeDecoder)
    ///
    /// ``` self: QtC.KCodecs__Codec, newline: kcodecs_enums.NewlineType ```
    pub fn MakeDecoder(self: ?*anyopaque, newline: i32) QtC.KCodecs__Decoder {
        return qtc.KCodecs__Codec_MakeDecoder(@ptrCast(self), @intCast(newline));
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#encode)
    ///
    /// ``` self: QtC.KCodecs__Codec, scursor: []const u8, send: []const u8, dcursor: []const u8, dend: []const u8, newline: kcodecs_enums.NewlineType ```
    pub fn Encode(self: ?*anyopaque, scursor: []const u8, send: []const u8, dcursor: []const u8, dend: []const u8, newline: i32) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Codec_Encode(@ptrCast(self), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring, @intCast(newline));
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#decode)
    ///
    /// ``` self: QtC.KCodecs__Codec, scursor: []const u8, send: []const u8, dcursor: []const u8, dend: []const u8, newline: kcodecs_enums.NewlineType ```
    pub fn Decode(self: ?*anyopaque, scursor: []const u8, send: []const u8, dcursor: []const u8, dend: []const u8, newline: i32) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Codec_Decode(@ptrCast(self), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring, @intCast(newline));
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#encode)
    ///
    /// ``` self: QtC.KCodecs__Codec, src: []const u8, allocator: std.mem.Allocator ```
    pub fn Encode2(self: ?*anyopaque, src: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Encode2(@ptrCast(self), src.ptr);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs::codec.Encode2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#decode)
    ///
    /// ``` self: QtC.KCodecs__Codec, src: []const u8, allocator: std.mem.Allocator ```
    pub fn Decode2(self: ?*anyopaque, src: []const u8, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Decode2(@ptrCast(self), src.ptr);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs::codec.Decode2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#name)
    ///
    /// ``` self: QtC.KCodecs__Codec ```
    pub fn Name(self: ?*anyopaque) []const u8 {
        const _ret = qtc.KCodecs__Codec_Name(@ptrCast(self));
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#encode)
    ///
    /// ``` self: QtC.KCodecs__Codec, src: []const u8, newline: kcodecs_enums.NewlineType, allocator: std.mem.Allocator ```
    pub fn Encode22(self: ?*anyopaque, src: []const u8, newline: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Encode22(@ptrCast(self), src.ptr, @intCast(newline));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs::codec.Encode22: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-codec.html#decode)
    ///
    /// ``` self: QtC.KCodecs__Codec, src: []const u8, newline: kcodecs_enums.NewlineType, allocator: std.mem.Allocator ```
    pub fn Decode22(self: ?*anyopaque, src: []const u8, newline: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KCodecs__Codec_Decode22(@ptrCast(self), src.ptr, @intCast(newline));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcodecs::codec.Decode22: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCodecs__Codec ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCodecs__Codec_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kcodecs-decoder.html
pub const kcodecs__decoder = struct {
    /// [Qt documentation](https://api.kde.org/kcodecs-decoder.html#decode)
    ///
    /// ``` self: QtC.KCodecs__Decoder, scursor: []const u8, send: []const u8, dcursor: []const u8, dend: []const u8 ```
    pub fn Decode(self: ?*anyopaque, scursor: []const u8, send: []const u8, dcursor: []const u8, dend: []const u8) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Decoder_Decode(@ptrCast(self), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-decoder.html#finish)
    ///
    /// ``` self: QtC.KCodecs__Decoder, dcursor: []const u8, dend: []const u8 ```
    pub fn Finish(self: ?*anyopaque, dcursor: []const u8, dend: []const u8) bool {
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Decoder_Finish(@ptrCast(self), dcursor_Cstring, dend_Cstring);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCodecs__Decoder ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCodecs__Decoder_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kcodecs-encoder.html
pub const kcodecs__encoder = struct {
    /// [Qt documentation](https://api.kde.org/kcodecs-encoder.html#encode)
    ///
    /// ``` self: QtC.KCodecs__Encoder, scursor: []const u8, send: []const u8, dcursor: []const u8, dend: []const u8 ```
    pub fn Encode(self: ?*anyopaque, scursor: []const u8, send: []const u8, dcursor: []const u8, dend: []const u8) bool {
        const scursor_Cstring = scursor.ptr;
        const send_Cstring = send.ptr;
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Encoder_Encode(@ptrCast(self), scursor_Cstring, send_Cstring, dcursor_Cstring, dend_Cstring);
    }

    /// [Qt documentation](https://api.kde.org/kcodecs-encoder.html#finish)
    ///
    /// ``` self: QtC.KCodecs__Encoder, dcursor: []const u8, dend: []const u8 ```
    pub fn Finish(self: ?*anyopaque, dcursor: []const u8, dend: []const u8) bool {
        const dcursor_Cstring = dcursor.ptr;
        const dend_Cstring = dend.ptr;
        return qtc.KCodecs__Encoder_Finish(@ptrCast(self), dcursor_Cstring, dend_Cstring);
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCodecs__Encoder ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCodecs__Encoder_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kcodecs.html#types
pub const enums = struct {
    pub const CharsetOption = enum {
        pub const NoOption: i32 = 0;
        pub const ForceDefaultCharset: i32 = 1;
    };

    pub const NewlineType = enum {
        pub const NewlineLF: i32 = 0;
        pub const NewlineCRLF: i32 = 1;
    };

    pub const KCodecs__Encoder = enum {
        pub const MaxBufferedChars: i32 = 8;
    };
};
