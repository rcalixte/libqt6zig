const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QFileInfo = @import("libqt6").QFileInfo;
const QIODevice = @import("libqt6").QIODevice;
const QMimeType = @import("libqt6").QMimeType;
const QUrl = @import("libqt6").QUrl;
const qmimedatabase_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html)
pub const QMimeDatabase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMimeDatabase,

    pub const _is_QMimeDatabase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMimeDatabase object in C++ memory
    ///
    pub fn new() QMimeDatabase {
        return .{ .ptr = qtc.QMimeDatabase_new() };
    }

    /// ### DEPRECATED: Use `mimeTypeForName` instead
    ///
    pub const MimeTypeForName = mimeTypeForName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` nameOrAlias: []const u8 `
    ///
    pub fn mimeTypeForName(self: QMimeDatabase, nameOrAlias: []const u8) QMimeType {
        const nameOrAlias_str = qtc.libqt_string{
            .len = nameOrAlias.len,
            .data = nameOrAlias.ptr,
        };
        return .{ .ptr = qtc.QMimeDatabase_MimeTypeForName(@ptrCast(self.ptr), nameOrAlias_str) };
    }

    /// ### DEPRECATED: Use `mimeTypeForFile` instead
    ///
    pub const MimeTypeForFile = mimeTypeForFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn mimeTypeForFile(self: QMimeDatabase, fileName: []const u8) QMimeType {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QMimeDatabase_MimeTypeForFile(@ptrCast(self.ptr), fileName_str) };
    }

    /// ### DEPRECATED: Use `mimeTypeForFile2` instead
    ///
    pub const MimeTypeForFile2 = mimeTypeForFile2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` fileInfo: QFileInfo `
    ///
    pub fn mimeTypeForFile2(self: QMimeDatabase, fileInfo: anytype) QMimeType {
        comptime _ = @TypeOf(fileInfo)._is_QFileInfo;
        return .{ .ptr = qtc.QMimeDatabase_MimeTypeForFile2(@ptrCast(self.ptr), @ptrCast(fileInfo.ptr)) };
    }

    /// ### DEPRECATED: Use `mimeTypesForFileName` instead
    ///
    pub const MimeTypesForFileName = mimeTypesForFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypesForFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn mimeTypesForFileName(self: QMimeDatabase, allocator: std.mem.Allocator, fileName: []const u8) []QMimeType {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QMimeDatabase_MimeTypesForFileName(@ptrCast(self.ptr), fileName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QMimeType, _arr.len) catch @panic("QMimeDatabase.mimeTypesForFileName: Memory allocation failed");
        const _data_val: [*]QtC.QMimeType = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeTypeForData` instead
    ///
    pub const MimeTypeForData = mimeTypeForData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` data: []u8 `
    ///
    pub fn mimeTypeForData(self: QMimeDatabase, data: []u8) QMimeType {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QMimeDatabase_MimeTypeForData(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `mimeTypeForData2` instead
    ///
    pub const MimeTypeForData2 = mimeTypeForData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` device: QIODevice `
    ///
    pub fn mimeTypeForData2(self: QMimeDatabase, device: anytype) QMimeType {
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QMimeDatabase_MimeTypeForData2(@ptrCast(self.ptr), @ptrCast(device.ptr)) };
    }

    /// ### DEPRECATED: Use `mimeTypeForUrl` instead
    ///
    pub const MimeTypeForUrl = mimeTypeForUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` url: QUrl `
    ///
    pub fn mimeTypeForUrl(self: QMimeDatabase, url: anytype) QMimeType {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QMimeDatabase_MimeTypeForUrl(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `mimeTypeForFileNameAndData` instead
    ///
    pub const MimeTypeForFileNameAndData = mimeTypeForFileNameAndData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFileNameAndData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` device: QIODevice `
    ///
    pub fn mimeTypeForFileNameAndData(self: QMimeDatabase, fileName: []const u8, device: anytype) QMimeType {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        comptime _ = @TypeOf(device)._is_QIODevice;
        return .{ .ptr = qtc.QMimeDatabase_MimeTypeForFileNameAndData(@ptrCast(self.ptr), fileName_str, @ptrCast(device.ptr)) };
    }

    /// ### DEPRECATED: Use `mimeTypeForFileNameAndData2` instead
    ///
    pub const MimeTypeForFileNameAndData2 = mimeTypeForFileNameAndData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFileNameAndData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn mimeTypeForFileNameAndData2(self: QMimeDatabase, fileName: []const u8, data: []u8) QMimeType {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QMimeDatabase_MimeTypeForFileNameAndData2(@ptrCast(self.ptr), fileName_str, data_str) };
    }

    /// ### DEPRECATED: Use `suffixForFileName` instead
    ///
    pub const SuffixForFileName = suffixForFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#suffixForFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn suffixForFileName(self: QMimeDatabase, allocator: std.mem.Allocator, fileName: []const u8) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QMimeDatabase_SuffixForFileName(@ptrCast(self.ptr), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QMimeDatabase.suffixForFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allMimeTypes` instead
    ///
    pub const AllMimeTypes = allMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#allMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allMimeTypes(self: QMimeDatabase, allocator: std.mem.Allocator) []QMimeType {
        const _arr: qtc.libqt_list = qtc.QMimeDatabase_AllMimeTypes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QMimeType, _arr.len) catch @panic("QMimeDatabase.allMimeTypes: Memory allocation failed");
        const _data_val: [*]QtC.QMimeType = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeTypeForFile22` instead
    ///
    pub const MimeTypeForFile22 = mimeTypeForFile22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mode: qmimedatabase_enums.MatchMode `
    ///
    pub fn mimeTypeForFile22(self: QMimeDatabase, fileName: []const u8, mode: i32) QMimeType {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QMimeDatabase_MimeTypeForFile22(@ptrCast(self.ptr), fileName_str, @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `mimeTypeForFile23` instead
    ///
    pub const MimeTypeForFile23 = mimeTypeForFile23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMimeDatabase `
    ///
    /// ` fileInfo: QFileInfo `
    ///
    /// ` mode: qmimedatabase_enums.MatchMode `
    ///
    pub fn mimeTypeForFile23(self: QMimeDatabase, fileInfo: anytype, mode: i32) QMimeType {
        comptime _ = @TypeOf(fileInfo)._is_QFileInfo;
        return .{ .ptr = qtc.QMimeDatabase_MimeTypeForFile23(@ptrCast(self.ptr), @ptrCast(fileInfo.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#dtor.QMimeDatabase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMimeDatabase `
    ///
    pub fn delete(self: QMimeDatabase) void {
        qtc.QMimeDatabase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#public-types)
pub const enums = struct {
    pub const MatchMode = enum(i32) {
        pub const MatchDefault: i32 = 0;
        pub const MatchExtension: i32 = 1;
        pub const MatchContent: i32 = 2;
    };
};
