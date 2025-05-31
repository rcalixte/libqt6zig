const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qmediaformat_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qmediaformat.html
pub const qmediaformat = struct {
    /// New constructs a new QMediaFormat object.
    ///
    ///
    pub fn New() QtC.QMediaFormat {
        return qtc.QMediaFormat_new();
    }

    /// New2 constructs a new QMediaFormat object.
    ///
    /// ``` other: QtC.QMediaFormat ```
    pub fn New2(other: ?*anyopaque) QtC.QMediaFormat {
        return qtc.QMediaFormat_new2(@ptrCast(other));
    }

    /// New3 constructs a new QMediaFormat object.
    ///
    /// ``` format: qmediaformat_enums.FileFormat ```
    pub fn New3(format: i64) QtC.QMediaFormat {
        return qtc.QMediaFormat_new3(@intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#operator=)
    ///
    /// ``` self: QtC.QMediaFormat, other: QtC.QMediaFormat ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaFormat_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#swap)
    ///
    /// ``` self: QtC.QMediaFormat, other: QtC.QMediaFormat ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#fileFormat)
    ///
    /// ``` self: QtC.QMediaFormat ```
    pub fn FileFormat(self: ?*anyopaque) i64 {
        return qtc.QMediaFormat_FileFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#setFileFormat)
    ///
    /// ``` self: QtC.QMediaFormat, f: qmediaformat_enums.FileFormat ```
    pub fn SetFileFormat(self: ?*anyopaque, f: i64) void {
        qtc.QMediaFormat_SetFileFormat(@ptrCast(self), @intCast(f));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#setVideoCodec)
    ///
    /// ``` self: QtC.QMediaFormat, codec: qmediaformat_enums.VideoCodec ```
    pub fn SetVideoCodec(self: ?*anyopaque, codec: i64) void {
        qtc.QMediaFormat_SetVideoCodec(@ptrCast(self), @intCast(codec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#videoCodec)
    ///
    /// ``` self: QtC.QMediaFormat ```
    pub fn VideoCodec(self: ?*anyopaque) i64 {
        return qtc.QMediaFormat_VideoCodec(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#setAudioCodec)
    ///
    /// ``` self: QtC.QMediaFormat, codec: qmediaformat_enums.AudioCodec ```
    pub fn SetAudioCodec(self: ?*anyopaque, codec: i64) void {
        qtc.QMediaFormat_SetAudioCodec(@ptrCast(self), @intCast(codec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#audioCodec)
    ///
    /// ``` self: QtC.QMediaFormat ```
    pub fn AudioCodec(self: ?*anyopaque) i64 {
        return qtc.QMediaFormat_AudioCodec(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#isSupported)
    ///
    /// ``` self: QtC.QMediaFormat, mode: qmediaformat_enums.ConversionMode ```
    pub fn IsSupported(self: ?*anyopaque, mode: i64) bool {
        return qtc.QMediaFormat_IsSupported(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#mimeType)
    ///
    /// ``` self: QtC.QMediaFormat ```
    pub fn MimeType(self: ?*anyopaque) QtC.QMimeType {
        return qtc.QMediaFormat_MimeType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#supportedFileFormats)
    ///
    /// ``` self: QtC.QMediaFormat, m: qmediaformat_enums.ConversionMode, allocator: std.mem.Allocator ```
    pub fn SupportedFileFormats(self: ?*anyopaque, m: i64, allocator: std.mem.Allocator) []i64 {
        const _arr: qtc.struct_libqt_list = qtc.QMediaFormat_SupportedFileFormats(@ptrCast(self), @intCast(m));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(qmediaformat_enums.FileFormat, _arr.len) catch @panic("qmediaformat.SupportedFileFormats: Memory allocation failed");
        const _data: [*]qmediaformat_enums.FileFormat = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#supportedVideoCodecs)
    ///
    /// ``` self: QtC.QMediaFormat, m: qmediaformat_enums.ConversionMode, allocator: std.mem.Allocator ```
    pub fn SupportedVideoCodecs(self: ?*anyopaque, m: i64, allocator: std.mem.Allocator) []i64 {
        const _arr: qtc.struct_libqt_list = qtc.QMediaFormat_SupportedVideoCodecs(@ptrCast(self), @intCast(m));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(qmediaformat_enums.VideoCodec, _arr.len) catch @panic("qmediaformat.SupportedVideoCodecs: Memory allocation failed");
        const _data: [*]qmediaformat_enums.VideoCodec = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#supportedAudioCodecs)
    ///
    /// ``` self: QtC.QMediaFormat, m: qmediaformat_enums.ConversionMode, allocator: std.mem.Allocator ```
    pub fn SupportedAudioCodecs(self: ?*anyopaque, m: i64, allocator: std.mem.Allocator) []i64 {
        const _arr: qtc.struct_libqt_list = qtc.QMediaFormat_SupportedAudioCodecs(@ptrCast(self), @intCast(m));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(qmediaformat_enums.AudioCodec, _arr.len) catch @panic("qmediaformat.SupportedAudioCodecs: Memory allocation failed");
        const _data: [*]qmediaformat_enums.AudioCodec = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#fileFormatName)
    ///
    /// ``` fileFormat: qmediaformat_enums.FileFormat, allocator: std.mem.Allocator ```
    pub fn FileFormatName(fileFormat: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_FileFormatName(@intCast(fileFormat));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.FileFormatName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#audioCodecName)
    ///
    /// ``` codec: qmediaformat_enums.AudioCodec, allocator: std.mem.Allocator ```
    pub fn AudioCodecName(codec: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_AudioCodecName(@intCast(codec));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.AudioCodecName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#videoCodecName)
    ///
    /// ``` codec: qmediaformat_enums.VideoCodec, allocator: std.mem.Allocator ```
    pub fn VideoCodecName(codec: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_VideoCodecName(@intCast(codec));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.VideoCodecName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#fileFormatDescription)
    ///
    /// ``` fileFormat: qmediaformat_enums.FileFormat, allocator: std.mem.Allocator ```
    pub fn FileFormatDescription(fileFormat: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_FileFormatDescription(@intCast(fileFormat));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.FileFormatDescription: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#audioCodecDescription)
    ///
    /// ``` codec: qmediaformat_enums.AudioCodec, allocator: std.mem.Allocator ```
    pub fn AudioCodecDescription(codec: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_AudioCodecDescription(@intCast(codec));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.AudioCodecDescription: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#videoCodecDescription)
    ///
    /// ``` codec: qmediaformat_enums.VideoCodec, allocator: std.mem.Allocator ```
    pub fn VideoCodecDescription(codec: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_VideoCodecDescription(@intCast(codec));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.VideoCodecDescription: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#operator==)
    ///
    /// ``` self: QtC.QMediaFormat, other: QtC.QMediaFormat ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMediaFormat_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#operator!=)
    ///
    /// ``` self: QtC.QMediaFormat, other: QtC.QMediaFormat ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMediaFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#resolveForEncoding)
    ///
    /// ``` self: QtC.QMediaFormat, flags: qmediaformat_enums.ResolveFlags ```
    pub fn ResolveForEncoding(self: ?*anyopaque, flags: i64) void {
        qtc.QMediaFormat_ResolveForEncoding(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmediaformat.html#dtor.QMediaFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMediaFormat ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmediaformat.html#types
pub const enums = struct {
    pub const FileFormat = enum {
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

    pub const AudioCodec = enum {
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

    pub const VideoCodec = enum {
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

    pub const ConversionMode = enum {
        pub const Encode: i32 = 0;
        pub const Decode: i32 = 1;
    };

    pub const ResolveFlags = enum {
        pub const NoFlags: i32 = 0;
        pub const RequiresVideo: i32 = 1;
    };
};
