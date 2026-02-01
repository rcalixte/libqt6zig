const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qmimedatabase_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html)
pub const qmimedatabase = struct {
    /// New constructs a new QMimeDatabase object.
    ///
    pub fn New() QtC.QMimeDatabase {
        return qtc.QMimeDatabase_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` nameOrAlias: []const u8 `
    ///
    pub fn MimeTypeForName(self: ?*anyopaque, nameOrAlias: []const u8) QtC.QMimeType {
        const nameOrAlias_str = qtc.libqt_string{
            .len = nameOrAlias.len,
            .data = nameOrAlias.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForName(@ptrCast(self), nameOrAlias_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn MimeTypeForFile(self: ?*anyopaque, fileName: []const u8) QtC.QMimeType {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForFile(@ptrCast(self), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` fileInfo: QtC.QFileInfo `
    ///
    pub fn MimeTypeForFile2(self: ?*anyopaque, fileInfo: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForFile2(@ptrCast(self), @ptrCast(fileInfo));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypesForFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypesForFileName(self: ?*anyopaque, fileName: []const u8, allocator: std.mem.Allocator) []QtC.QMimeType {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QMimeDatabase_MimeTypesForFileName(@ptrCast(self), fileName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QMimeType, _arr.len) catch @panic("qmimedatabase.MimeTypesForFileName: Memory allocation failed");
        const _data: [*]QtC.QMimeType = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` data: []u8 `
    ///
    pub fn MimeTypeForData(self: ?*anyopaque, data: []u8) QtC.QMimeType {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForData(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn MimeTypeForData2(self: ?*anyopaque, device: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForData2(@ptrCast(self), @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn MimeTypeForUrl(self: ?*anyopaque, url: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForUrl(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFileNameAndData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` device: QtC.QIODevice `
    ///
    pub fn MimeTypeForFileNameAndData(self: ?*anyopaque, fileName: []const u8, device: ?*anyopaque) QtC.QMimeType {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForFileNameAndData(@ptrCast(self), fileName_str, @ptrCast(device));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFileNameAndData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn MimeTypeForFileNameAndData2(self: ?*anyopaque, fileName: []const u8, data: []u8) QtC.QMimeType {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForFileNameAndData2(@ptrCast(self), fileName_str, data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#suffixForFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuffixForFileName(self: ?*anyopaque, fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QMimeDatabase_SuffixForFileName(@ptrCast(self), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimedatabase.SuffixForFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#allMimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QMimeType {
        const _arr: qtc.libqt_list = qtc.QMimeDatabase_AllMimeTypes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QMimeType, _arr.len) catch @panic("qmimedatabase.AllMimeTypes: Memory allocation failed");
        const _data: [*]QtC.QMimeType = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` mode: qmimedatabase_enums.MatchMode `
    ///
    pub fn MimeTypeForFile22(self: ?*anyopaque, fileName: []const u8, mode: i32) QtC.QMimeType {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForFile22(@ptrCast(self), fileName_str, @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    /// ` fileInfo: QtC.QFileInfo `
    ///
    /// ` mode: qmimedatabase_enums.MatchMode `
    ///
    pub fn MimeTypeForFile23(self: ?*anyopaque, fileInfo: ?*anyopaque, mode: i32) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForFile23(@ptrCast(self), @ptrCast(fileInfo), @intCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmimedatabase.html#dtor.QMimeDatabase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QMimeDatabase `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMimeDatabase_Delete(@ptrCast(self));
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
