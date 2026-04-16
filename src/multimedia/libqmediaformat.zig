const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMimeType = @import("libqt6").QMimeType;
const qmediaformat_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html)
pub const QMediaFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMediaFormat,

    pub const _is_QMediaFormat = {};

    /// New constructs a new QMediaFormat object.
    ///
    pub fn New() QMediaFormat {
        return .{ .ptr = qtc.QMediaFormat_new() };
    }

    /// New2 constructs a new QMediaFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMediaFormat `
    ///
    pub fn New2(other: anytype) QMediaFormat {
        comptime _ = @TypeOf(other)._is_QMediaFormat;
        return .{ .ptr = qtc.QMediaFormat_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QMediaFormat object.
    ///
    /// ## Parameter(s):
    ///
    /// ` format: qmediaformat_enums.FileFormat `
    ///
    pub fn New3(format: i32) QMediaFormat {
        return .{ .ptr = qtc.QMediaFormat_new3(@bitCast(format)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` other: QMediaFormat `
    ///
    pub fn OperatorAssign(self: QMediaFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMediaFormat;
        qtc.QMediaFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` other: QMediaFormat `
    ///
    pub fn Swap(self: QMediaFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMediaFormat;
        qtc.QMediaFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#fileFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ## Returns:
    ///
    /// ` qmediaformat_enums.FileFormat `
    ///
    pub fn FileFormat(self: QMediaFormat) i32 {
        return qtc.QMediaFormat_FileFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setFileFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` f: qmediaformat_enums.FileFormat `
    ///
    pub fn SetFileFormat(self: QMediaFormat, f: i32) void {
        qtc.QMediaFormat_SetFileFormat(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setVideoCodec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` codec: qmediaformat_enums.VideoCodec `
    ///
    pub fn SetVideoCodec(self: QMediaFormat, codec: i32) void {
        qtc.QMediaFormat_SetVideoCodec(@ptrCast(self.ptr), @bitCast(codec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#videoCodec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ## Returns:
    ///
    /// ` qmediaformat_enums.VideoCodec `
    ///
    pub fn VideoCodec(self: QMediaFormat) i32 {
        return qtc.QMediaFormat_VideoCodec(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setAudioCodec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` codec: qmediaformat_enums.AudioCodec `
    ///
    pub fn SetAudioCodec(self: QMediaFormat, codec: i32) void {
        qtc.QMediaFormat_SetAudioCodec(@ptrCast(self.ptr), @bitCast(codec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#audioCodec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ## Returns:
    ///
    /// ` qmediaformat_enums.AudioCodec `
    ///
    pub fn AudioCodec(self: QMediaFormat) i32 {
        return qtc.QMediaFormat_AudioCodec(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` mode: qmediaformat_enums.ConversionMode `
    ///
    pub fn IsSupported(self: QMediaFormat, mode: i32) bool {
        return qtc.QMediaFormat_IsSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    pub fn MimeType(self: QMediaFormat) QMimeType {
        return .{ .ptr = qtc.QMediaFormat_MimeType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#supportedFileFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` m: qmediaformat_enums.ConversionMode `
    ///
    /// ## Returns:
    ///
    /// ` []qmediaformat_enums.FileFormat `
    ///
    pub fn SupportedFileFormats(self: QMediaFormat, allocator: std.mem.Allocator, m: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.QMediaFormat_SupportedFileFormats(@ptrCast(self.ptr), @bitCast(m));
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
    /// ` self: QMediaFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` m: qmediaformat_enums.ConversionMode `
    ///
    /// ## Returns:
    ///
    /// ` []qmediaformat_enums.VideoCodec `
    ///
    pub fn SupportedVideoCodecs(self: QMediaFormat, allocator: std.mem.Allocator, m: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.QMediaFormat_SupportedVideoCodecs(@ptrCast(self.ptr), @bitCast(m));
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
    /// ` self: QMediaFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` m: qmediaformat_enums.ConversionMode `
    ///
    /// ## Returns:
    ///
    /// ` []qmediaformat_enums.AudioCodec `
    ///
    pub fn SupportedAudioCodecs(self: QMediaFormat, allocator: std.mem.Allocator, m: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.QMediaFormat_SupportedAudioCodecs(@ptrCast(self.ptr), @bitCast(m));
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileFormat: qmediaformat_enums.FileFormat `
    ///
    pub fn FileFormatName(allocator: std.mem.Allocator, fileFormat: i32) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` codec: qmediaformat_enums.AudioCodec `
    ///
    pub fn AudioCodecName(allocator: std.mem.Allocator, codec: i32) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` codec: qmediaformat_enums.VideoCodec `
    ///
    pub fn VideoCodecName(allocator: std.mem.Allocator, codec: i32) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileFormat: qmediaformat_enums.FileFormat `
    ///
    pub fn FileFormatDescription(allocator: std.mem.Allocator, fileFormat: i32) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` codec: qmediaformat_enums.AudioCodec `
    ///
    pub fn AudioCodecDescription(allocator: std.mem.Allocator, codec: i32) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` codec: qmediaformat_enums.VideoCodec `
    ///
    pub fn VideoCodecDescription(allocator: std.mem.Allocator, codec: i32) []const u8 {
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
    /// ` self: QMediaFormat `
    ///
    /// ` other: QMediaFormat `
    ///
    pub fn OperatorEqual(self: QMediaFormat, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QMediaFormat;
        return qtc.QMediaFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` other: QMediaFormat `
    ///
    pub fn OperatorNotEqual(self: QMediaFormat, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QMediaFormat;
        return qtc.QMediaFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#resolveForEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` flags: qmediaformat_enums.ResolveFlags `
    ///
    pub fn ResolveForEncoding(self: QMediaFormat, flags: i32) void {
        qtc.QMediaFormat_ResolveForEncoding(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#dtor.QMediaFormat)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaFormat `
    ///
    pub fn Delete(self: QMediaFormat) void {
        qtc.QMediaFormat_Delete(@ptrCast(self.ptr));
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
