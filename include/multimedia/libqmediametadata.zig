const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;
const qmediametadata_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html)
pub const QMediaMetaData = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMediaMetaData,

    pub const _is_QMediaMetaData = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMediaMetaData object in C++ memory
    ///
    pub fn new() QMediaMetaData {
        return .{ .ptr = qtc.QMediaMetaData_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMediaMetaData object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMediaMetaData `
    ///
    pub fn new2(param1: anytype) QMediaMetaData {
        comptime _ = @TypeOf(param1)._is_QMediaMetaData;
        return .{ .ptr = qtc.QMediaMetaData_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaMetaData `
    ///
    /// ` k: qmediametadata_enums.Key `
    ///
    pub fn value(self: QMediaMetaData, k: i32) QVariant {
        return .{ .ptr = qtc.QMediaMetaData_Value(@ptrCast(self.ptr), @bitCast(k)) };
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaMetaData `
    ///
    /// ` k: qmediametadata_enums.Key `
    ///
    /// ` _value: QVariant `
    ///
    pub fn insert(self: QMediaMetaData, k: i32, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QMediaMetaData_Insert(@ptrCast(self.ptr), @bitCast(k), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaMetaData `
    ///
    /// ` k: qmediametadata_enums.Key `
    ///
    pub fn remove(self: QMediaMetaData, k: i32) void {
        qtc.QMediaMetaData_Remove(@ptrCast(self.ptr), @bitCast(k));
    }

    /// ### DEPRECATED: Use `keys` instead
    ///
    pub const Keys = keys;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html#keys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qmediametadata_enums.Key `
    ///
    pub fn keys(self: QMediaMetaData, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QMediaMetaData_Keys(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QMediaMetaData.keys: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaMetaData `
    ///
    /// ` k: qmediametadata_enums.Key `
    ///
    pub fn operatorSubscript(self: QMediaMetaData, k: i32) QVariant {
        return .{ .ptr = qtc.QMediaMetaData_OperatorSubscript(@ptrCast(self.ptr), @bitCast(k)) };
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaMetaData `
    ///
    pub fn clear(self: QMediaMetaData) void {
        qtc.QMediaMetaData_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaMetaData `
    ///
    pub fn isEmpty(self: QMediaMetaData) bool {
        return qtc.QMediaMetaData_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stringValue` instead
    ///
    pub const StringValue = stringValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html#stringValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMediaMetaData `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` k: qmediametadata_enums.Key `
    ///
    pub fn stringValue(self: QMediaMetaData, allocator: std.mem.Allocator, k: i32) []const u8 {
        var _str = qtc.QMediaMetaData_StringValue(@ptrCast(self.ptr), @bitCast(k));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaMetaData.stringValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `metaDataKeyToString` instead
    ///
    pub const MetaDataKeyToString = metaDataKeyToString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html#metaDataKeyToString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` k: qmediametadata_enums.Key `
    ///
    pub fn metaDataKeyToString(allocator: std.mem.Allocator, k: i32) []const u8 {
        var _str = qtc.QMediaMetaData_MetaDataKeyToString(@bitCast(k));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMediaMetaData.metaDataKeyToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html#dtor.QMediaMetaData)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMediaMetaData `
    ///
    pub fn delete(self: QMediaMetaData) void {
        qtc.QMediaMetaData_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmediametadata.html#public-types)
pub const enums = struct {
    pub const Key = enum(i32) {
        pub const Title: i32 = 0;
        pub const Author: i32 = 1;
        pub const Comment: i32 = 2;
        pub const Description: i32 = 3;
        pub const Genre: i32 = 4;
        pub const Date: i32 = 5;
        pub const Language: i32 = 6;
        pub const Publisher: i32 = 7;
        pub const Copyright: i32 = 8;
        pub const Url: i32 = 9;
        pub const Duration: i32 = 10;
        pub const MediaType: i32 = 11;
        pub const FileFormat: i32 = 12;
        pub const AudioBitRate: i32 = 13;
        pub const AudioCodec: i32 = 14;
        pub const VideoBitRate: i32 = 15;
        pub const VideoCodec: i32 = 16;
        pub const VideoFrameRate: i32 = 17;
        pub const AlbumTitle: i32 = 18;
        pub const AlbumArtist: i32 = 19;
        pub const ContributingArtist: i32 = 20;
        pub const TrackNumber: i32 = 21;
        pub const Composer: i32 = 22;
        pub const LeadPerformer: i32 = 23;
        pub const ThumbnailImage: i32 = 24;
        pub const CoverArtImage: i32 = 25;
        pub const Orientation: i32 = 26;
        pub const Resolution: i32 = 27;
        pub const HasHdrContent: i32 = 28;
    };
};
