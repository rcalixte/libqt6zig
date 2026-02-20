const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qmediaformat_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html)
pub const qmediaformat = struct {
    /// New constructs a new QMediaFormat object.
    ///
    pub fn New() QtC.QMediaFormat {
        return qtc.QMediaFormat_new();
    }

    /// New2 constructs a new QMediaFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QMediaFormat `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QMediaFormat {
        return qtc.QMediaFormat_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMediaFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` format: qmediaformat_enums.FileFormat `
    ///
    pub fn New3(format: i32) QtC.QMediaFormat {
        return qtc.QMediaFormat_new3(@bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` other: QtC.QMediaFormat `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaFormat_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` other: QtC.QMediaFormat `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#fileFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ## Returns:
    ///
    /// ` qmediaformat_enums.FileFormat `
    ///
    pub fn FileFormat(self: ?*anyopaque) i32 {
        return qtc.QMediaFormat_FileFormat(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setFileFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` f: qmediaformat_enums.FileFormat `
    ///
    pub fn SetFileFormat(self: ?*anyopaque, f: i32) void {
        qtc.QMediaFormat_SetFileFormat(@ptrCast(self), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setVideoCodec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` codec: qmediaformat_enums.VideoCodec `
    ///
    pub fn SetVideoCodec(self: ?*anyopaque, codec: i32) void {
        qtc.QMediaFormat_SetVideoCodec(@ptrCast(self), @bitCast(codec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#videoCodec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ## Returns:
    ///
    /// ` qmediaformat_enums.VideoCodec `
    ///
    pub fn VideoCodec(self: ?*anyopaque) i32 {
        return qtc.QMediaFormat_VideoCodec(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setAudioCodec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` codec: qmediaformat_enums.AudioCodec `
    ///
    pub fn SetAudioCodec(self: ?*anyopaque, codec: i32) void {
        qtc.QMediaFormat_SetAudioCodec(@ptrCast(self), @bitCast(codec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#audioCodec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ## Returns:
    ///
    /// ` qmediaformat_enums.AudioCodec `
    ///
    pub fn AudioCodec(self: ?*anyopaque) i32 {
        return qtc.QMediaFormat_AudioCodec(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` mode: qmediaformat_enums.ConversionMode `
    ///
    pub fn IsSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QMediaFormat_IsSupported(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    pub fn MimeType(self: ?*anyopaque) QtC.QMimeType {
        return qtc.QMediaFormat_MimeType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#supportedFileFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` m: qmediaformat_enums.ConversionMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qmediaformat_enums.FileFormat `
    ///
    pub fn SupportedFileFormats(self: ?*anyopaque, m: i32, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QMediaFormat_SupportedFileFormats(@ptrCast(self), @bitCast(m));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qmediaformat.SupportedFileFormats: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#supportedVideoCodecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` m: qmediaformat_enums.ConversionMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qmediaformat_enums.VideoCodec `
    ///
    pub fn SupportedVideoCodecs(self: ?*anyopaque, m: i32, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QMediaFormat_SupportedVideoCodecs(@ptrCast(self), @bitCast(m));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qmediaformat.SupportedVideoCodecs: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#supportedAudioCodecs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` m: qmediaformat_enums.ConversionMode `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qmediaformat_enums.AudioCodec `
    ///
    pub fn SupportedAudioCodecs(self: ?*anyopaque, m: i32, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QMediaFormat_SupportedAudioCodecs(@ptrCast(self), @bitCast(m));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qmediaformat.SupportedAudioCodecs: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#fileFormatName)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileFormat: qmediaformat_enums.FileFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileFormatName(fileFormat: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMediaFormat_FileFormatName(@bitCast(fileFormat));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.FileFormatName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#audioCodecName)
    ///
    /// ## Parameter(s):
    ///
    /// ` codec: qmediaformat_enums.AudioCodec `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AudioCodecName(codec: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMediaFormat_AudioCodecName(@bitCast(codec));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.AudioCodecName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#videoCodecName)
    ///
    /// ## Parameter(s):
    ///
    /// ` codec: qmediaformat_enums.VideoCodec `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VideoCodecName(codec: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMediaFormat_VideoCodecName(@bitCast(codec));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.VideoCodecName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#fileFormatDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileFormat: qmediaformat_enums.FileFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileFormatDescription(fileFormat: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMediaFormat_FileFormatDescription(@bitCast(fileFormat));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.FileFormatDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#audioCodecDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` codec: qmediaformat_enums.AudioCodec `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AudioCodecDescription(codec: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMediaFormat_AudioCodecDescription(@bitCast(codec));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.AudioCodecDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#videoCodecDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` codec: qmediaformat_enums.VideoCodec `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VideoCodecDescription(codec: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMediaFormat_VideoCodecDescription(@bitCast(codec));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.VideoCodecDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` other: QtC.QMediaFormat `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMediaFormat_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` other: QtC.QMediaFormat `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMediaFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#resolveForEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    /// ` flags: qmediaformat_enums.ResolveFlags `
    ///
    pub fn ResolveForEncoding(self: ?*anyopaque, flags: i32) void {
        qtc.QMediaFormat_ResolveForEncoding(@ptrCast(self), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#dtor.QMediaFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QMediaFormat `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaFormat_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#public-types)
pub const enums = struct {
    pub const FileFormat = enum(i32) {
        pub const UnspecifiedFormat: i32 = -1;
        pub const WMV: i32 = 0;
        pub const AVI: i32 = 1;
        pub const Matroska: i32 = 2;
        pub const MPEG4: i32 = 3;
        pub const Ogg: i32 = 4;
        pub const QuickTime: i32 = 5;
        pub const WebM: i32 = 6;
        pub const Mpeg4Audio: i32 = 7;
        pub const AAC: i32 = 8;
        pub const WMA: i32 = 9;
        pub const MP3: i32 = 10;
        pub const FLAC: i32 = 11;
        pub const Wave: i32 = 12;
        pub const LastFileFormat: i32 = 12;
    };

    pub const AudioCodec = enum(i32) {
        pub const Unspecified: i32 = -1;
        pub const MP3: i32 = 0;
        pub const AAC: i32 = 1;
        pub const AC3: i32 = 2;
        pub const EAC3: i32 = 3;
        pub const FLAC: i32 = 4;
        pub const DolbyTrueHD: i32 = 5;
        pub const Opus: i32 = 6;
        pub const Vorbis: i32 = 7;
        pub const Wave: i32 = 8;
        pub const WMA: i32 = 9;
        pub const ALAC: i32 = 10;
        pub const LastAudioCodec: i32 = 10;
    };

    pub const VideoCodec = enum(i32) {
        pub const Unspecified: i32 = -1;
        pub const MPEG1: i32 = 0;
        pub const MPEG2: i32 = 1;
        pub const MPEG4: i32 = 2;
        pub const H264: i32 = 3;
        pub const H265: i32 = 4;
        pub const VP8: i32 = 5;
        pub const VP9: i32 = 6;
        pub const AV1: i32 = 7;
        pub const Theora: i32 = 8;
        pub const WMV: i32 = 9;
        pub const MotionJPEG: i32 = 10;
        pub const LastVideoCodec: i32 = 10;
    };

    pub const ConversionMode = enum(i32) {
        pub const Encode: i32 = 0;
        pub const Decode: i32 = 1;
    };

    pub const ResolveFlags = enum(i32) {
        pub const NoFlags: i32 = 0;
        pub const RequiresVideo: i32 = 1;
    };
};
