const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QObject = @import("libqt6").QObject;
const QQmlEngine = @import("libqt6").QQmlEngine;
const QUrl = @import("libqt6").QUrl;
const qqmlfile_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html)
pub const QQmlFile = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlFile,

    pub const _is_QQmlFile = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlFile object in C++ memory
    ///
    pub fn new() QQmlFile {
        return .{ .ptr = qtc.QQmlFile_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQmlFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` engine: QQmlEngine `
    ///
    /// ` _url: QUrl `
    ///
    pub fn new2(engine: anytype, _url: anytype) QQmlFile {
        comptime _ = @TypeOf(engine)._is_QQmlEngine;
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.QQmlFile_new2(@ptrCast(engine.ptr), @ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQmlFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` engine: QQmlEngine `
    ///
    /// ` _url: []const u8 `
    ///
    pub fn new3(engine: anytype, _url: []const u8) QQmlFile {
        comptime _ = @TypeOf(engine)._is_QQmlEngine;
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        return .{ .ptr = qtc.QQmlFile_new3(@ptrCast(engine.ptr), url_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    pub fn isNull(self: QQmlFile) bool {
        return qtc.QQmlFile_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReady` instead
    ///
    pub const IsReady = isReady;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    pub fn isReady(self: QQmlFile) bool {
        return qtc.QQmlFile_IsReady(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isError` instead
    ///
    pub const IsError = isError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    pub fn isError(self: QQmlFile) bool {
        return qtc.QQmlFile_IsError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLoading` instead
    ///
    pub const IsLoading = isLoading;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isLoading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    pub fn isLoading(self: QQmlFile) bool {
        return qtc.QQmlFile_IsLoading(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    pub fn url(self: QQmlFile) QUrl {
        return .{ .ptr = qtc.QQmlFile_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    /// ## Returns:
    ///
    /// ` qqmlfile_enums.Status `
    ///
    pub fn status(self: QQmlFile) i32 {
        return qtc.QQmlFile_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn error0(self: QQmlFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QQmlFile_Error(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlFile.error0: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    pub fn size(self: QQmlFile) i64 {
        return qtc.QQmlFile_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    pub fn data(self: QQmlFile) [:0]const u8 {
        const _ret = qtc.QQmlFile_Data(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `dataByteArray` instead
    ///
    pub const DataByteArray = dataByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#dataByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dataByteArray(self: QQmlFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QQmlFile_DataByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QQmlFile.dataByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    /// ` param1: QQmlEngine `
    ///
    /// ` param2: QUrl `
    ///
    pub fn load(self: QQmlFile, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        comptime _ = @TypeOf(param2)._is_QUrl;
        qtc.QQmlFile_Load(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `load2` instead
    ///
    pub const Load2 = load2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    /// ` param1: QQmlEngine `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn load2(self: QQmlFile, param1: anytype, param2: []const u8) void {
        comptime _ = @TypeOf(param1)._is_QQmlEngine;
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.QQmlFile_Load2(@ptrCast(self.ptr), @ptrCast(param1.ptr), param2_str);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    pub fn clear(self: QQmlFile) void {
        qtc.QQmlFile_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear2` instead
    ///
    pub const Clear2 = clear2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    /// ` object: QObject `
    ///
    pub fn clear2(self: QQmlFile, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QQmlFile_Clear2(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `connectFinished` instead
    ///
    pub const ConnectFinished = connectFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#connectFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: [:0]const u8 `
    ///
    pub fn connectFinished(self: QQmlFile, param1: anytype, param2: [:0]const u8) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        const param2_Cstring = param2.ptr;
        return qtc.QQmlFile_ConnectFinished(@ptrCast(self.ptr), @ptrCast(param1.ptr), param2_Cstring);
    }

    /// ### DEPRECATED: Use `connectFinished2` instead
    ///
    pub const ConnectFinished2 = connectFinished2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#connectFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: i32 `
    ///
    pub fn connectFinished2(self: QQmlFile, param1: anytype, param2: i32) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        return qtc.QQmlFile_ConnectFinished2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `connectDownloadProgress` instead
    ///
    pub const ConnectDownloadProgress = connectDownloadProgress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#connectDownloadProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: [:0]const u8 `
    ///
    pub fn connectDownloadProgress(self: QQmlFile, param1: anytype, param2: [:0]const u8) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        const param2_Cstring = param2.ptr;
        return qtc.QQmlFile_ConnectDownloadProgress(@ptrCast(self.ptr), @ptrCast(param1.ptr), param2_Cstring);
    }

    /// ### DEPRECATED: Use `connectDownloadProgress2` instead
    ///
    pub const ConnectDownloadProgress2 = connectDownloadProgress2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#connectDownloadProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlFile `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: i32 `
    ///
    pub fn connectDownloadProgress2(self: QQmlFile, param1: anytype, param2: i32) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        return qtc.QQmlFile_ConnectDownloadProgress2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `isSynchronous` instead
    ///
    pub const IsSynchronous = isSynchronous;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isSynchronous)
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: []const u8 `
    ///
    pub fn isSynchronous(_url: []const u8) bool {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        return qtc.QQmlFile_IsSynchronous(url_str);
    }

    /// ### DEPRECATED: Use `isSynchronous2` instead
    ///
    pub const IsSynchronous2 = isSynchronous2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isSynchronous)
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    pub fn isSynchronous2(_url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.QQmlFile_IsSynchronous2(@ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `isLocalFile` instead
    ///
    pub const IsLocalFile = isLocalFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: []const u8 `
    ///
    pub fn isLocalFile(_url: []const u8) bool {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        return qtc.QQmlFile_IsLocalFile(url_str);
    }

    /// ### DEPRECATED: Use `isLocalFile2` instead
    ///
    pub const IsLocalFile2 = isLocalFile2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#isLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    pub fn isLocalFile2(_url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.QQmlFile_IsLocalFile2(@ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `urlToLocalFileOrQrc` instead
    ///
    pub const UrlToLocalFileOrQrc = urlToLocalFileOrQrc;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#urlToLocalFileOrQrc)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn urlToLocalFileOrQrc(allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.QQmlFile_UrlToLocalFileOrQrc(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlFile.urlToLocalFileOrQrc: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `urlToLocalFileOrQrc2` instead
    ///
    pub const UrlToLocalFileOrQrc2 = urlToLocalFileOrQrc2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#urlToLocalFileOrQrc)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: QUrl `
    ///
    pub fn urlToLocalFileOrQrc2(allocator: std.mem.Allocator, param1: anytype) []const u8 {
        comptime _ = @TypeOf(param1)._is_QUrl;
        var _str = qtc.QQmlFile_UrlToLocalFileOrQrc2(@ptrCast(param1.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQmlFile.urlToLocalFileOrQrc2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#dtor.QQmlFile)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlFile `
    ///
    pub fn delete(self: QQmlFile) void {
        qtc.QQmlFile_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlfile.html#public-types)
pub const enums = struct {
    pub const Status = enum {
        pub const Null: i32 = 0;
        pub const Ready: i32 = 1;
        pub const Error: i32 = 2;
        pub const Loading: i32 = 3;
    };
};
