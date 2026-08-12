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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMediaFormat object in C++ memory
    ///
    pub fn new() QMediaFormat {
        return .{ .ptr = qtc.QMediaFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMediaFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMediaFormat `
    ///
    pub fn new2(other: anytype) QMediaFormat {
        comptime _ = @TypeOf(other)._is_QMediaFormat;
        return .{ .ptr = qtc.QMediaFormat_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMediaFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` format: qmediaformat_enums.FileFormat `
    ///
    pub fn new3(format: i32) QMediaFormat {
        return .{ .ptr = qtc.QMediaFormat_new3(@bitCast(format)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` other: QMediaFormat `
    ///
    pub fn operatorAssign(self: QMediaFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMediaFormat;
        qtc.QMediaFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` other: QMediaFormat `
    ///
    pub fn swap(self: QMediaFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QMediaFormat;
        qtc.QMediaFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fileFormat` instead
    ///
    pub const FileFormat = fileFormat;

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
    pub fn fileFormat(self: QMediaFormat) i32 {
        return qtc.QMediaFormat_FileFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFileFormat` instead
    ///
    pub const SetFileFormat = setFileFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setFileFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` f: qmediaformat_enums.FileFormat `
    ///
    pub fn setFileFormat(self: QMediaFormat, f: i32) void {
        qtc.QMediaFormat_SetFileFormat(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `setVideoCodec` instead
    ///
    pub const SetVideoCodec = setVideoCodec;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setVideoCodec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` codec: qmediaformat_enums.VideoCodec `
    ///
    pub fn setVideoCodec(self: QMediaFormat, codec: i32) void {
        qtc.QMediaFormat_SetVideoCodec(@ptrCast(self.ptr), @bitCast(codec));
    }

    /// ### DEPRECATED: Use `videoCodec` instead
    ///
    pub const VideoCodec = videoCodec;

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
    pub fn videoCodec(self: QMediaFormat) i32 {
        return qtc.QMediaFormat_VideoCodec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAudioCodec` instead
    ///
    pub const SetAudioCodec = setAudioCodec;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#setAudioCodec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` codec: qmediaformat_enums.AudioCodec `
    ///
    pub fn setAudioCodec(self: QMediaFormat, codec: i32) void {
        qtc.QMediaFormat_SetAudioCodec(@ptrCast(self.ptr), @bitCast(codec));
    }

    /// ### DEPRECATED: Use `audioCodec` instead
    ///
    pub const AudioCodec = audioCodec;

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
    pub fn audioCodec(self: QMediaFormat) i32 {
        return qtc.QMediaFormat_AudioCodec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSupported` instead
    ///
    pub const IsSupported = isSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#isSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` mode: qmediaformat_enums.ConversionMode `
    ///
    pub fn isSupported(self: QMediaFormat, mode: i32) bool {
        return qtc.QMediaFormat_IsSupported(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    pub fn mimeType(self: QMediaFormat) QMimeType {
        return .{ .ptr = qtc.QMediaFormat_MimeType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `supportedFileFormats` instead
    ///
    pub const SupportedFileFormats = supportedFileFormats;

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
    pub fn supportedFileFormats(self: QMediaFormat, allocator: std.mem.Allocator, m: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.QMediaFormat_SupportedFileFormats(@ptrCast(self.ptr), @bitCast(m));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QMediaFormat.supportedFileFormats: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedVideoCodecs` instead
    ///
    pub const SupportedVideoCodecs = supportedVideoCodecs;

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
    pub fn supportedVideoCodecs(self: QMediaFormat, allocator: std.mem.Allocator, m: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.QMediaFormat_SupportedVideoCodecs(@ptrCast(self.ptr), @bitCast(m));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QMediaFormat.supportedVideoCodecs: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedAudioCodecs` instead
    ///
    pub const SupportedAudioCodecs = supportedAudioCodecs;

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
    pub fn supportedAudioCodecs(self: QMediaFormat, allocator: std.mem.Allocator, m: i32) []i32 {
        const _arr: qtc.libqt_list = qtc.QMediaFormat_SupportedAudioCodecs(@ptrCast(self.ptr), @bitCast(m));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QMediaFormat.supportedAudioCodecs: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fileFormatName` instead
    ///
    pub const FileFormatName = fileFormatName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#fileFormatName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _fileFormat: qmediaformat_enums.FileFormat `
    ///
    pub fn fileFormatName(allocator: std.mem.Allocator, _fileFormat: i32) []const u8 {
        var _str = qtc.QMediaFormat_FileFormatName(@bitCast(_fileFormat));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaFormat.fileFormatName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `audioCodecName` instead
    ///
    pub const AudioCodecName = audioCodecName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#audioCodecName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` codec: qmediaformat_enums.AudioCodec `
    ///
    pub fn audioCodecName(allocator: std.mem.Allocator, codec: i32) []const u8 {
        var _str = qtc.QMediaFormat_AudioCodecName(@bitCast(codec));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaFormat.audioCodecName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `videoCodecName` instead
    ///
    pub const VideoCodecName = videoCodecName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#videoCodecName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` codec: qmediaformat_enums.VideoCodec `
    ///
    pub fn videoCodecName(allocator: std.mem.Allocator, codec: i32) []const u8 {
        var _str = qtc.QMediaFormat_VideoCodecName(@bitCast(codec));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaFormat.videoCodecName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fileFormatDescription` instead
    ///
    pub const FileFormatDescription = fileFormatDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#fileFormatDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _fileFormat: qmediaformat_enums.FileFormat `
    ///
    pub fn fileFormatDescription(allocator: std.mem.Allocator, _fileFormat: i32) []const u8 {
        var _str = qtc.QMediaFormat_FileFormatDescription(@bitCast(_fileFormat));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaFormat.fileFormatDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `audioCodecDescription` instead
    ///
    pub const AudioCodecDescription = audioCodecDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#audioCodecDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` codec: qmediaformat_enums.AudioCodec `
    ///
    pub fn audioCodecDescription(allocator: std.mem.Allocator, codec: i32) []const u8 {
        var _str = qtc.QMediaFormat_AudioCodecDescription(@bitCast(codec));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaFormat.audioCodecDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `videoCodecDescription` instead
    ///
    pub const VideoCodecDescription = videoCodecDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#videoCodecDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` codec: qmediaformat_enums.VideoCodec `
    ///
    pub fn videoCodecDescription(allocator: std.mem.Allocator, codec: i32) []const u8 {
        var _str = qtc.QMediaFormat_VideoCodecDescription(@bitCast(codec));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaFormat.videoCodecDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` other: QMediaFormat `
    ///
    pub fn operatorEqual(self: QMediaFormat, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QMediaFormat;
        return qtc.QMediaFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` other: QMediaFormat `
    ///
    pub fn operatorNotEqual(self: QMediaFormat, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QMediaFormat;
        return qtc.QMediaFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `resolveForEncoding` instead
    ///
    pub const ResolveForEncoding = resolveForEncoding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#resolveForEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaFormat `
    ///
    /// ` flags: qmediaformat_enums.ResolveFlags `
    ///
    pub fn resolveForEncoding(self: QMediaFormat, flags: i32) void {
        qtc.QMediaFormat_ResolveForEncoding(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediaformat.html#dtor.QMediaFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaFormat `
    ///
    pub fn delete(self: QMediaFormat) void {
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
