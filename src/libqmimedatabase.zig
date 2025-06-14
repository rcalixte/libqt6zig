const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qmimedatabase_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qmimedatabase.html
pub const qmimedatabase = struct {
    /// New constructs a new QMimeDatabase object.
    ///
    ///
    pub fn New() QtC.QMimeDatabase {
        return qtc.QMimeDatabase_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForName)
    ///
    /// ``` self: QtC.QMimeDatabase, nameOrAlias: []const u8 ```
    pub fn MimeTypeForName(self: ?*anyopaque, nameOrAlias: []const u8) QtC.QMimeType {
        const nameOrAlias_str = qtc.struct_libqt_string{
            .len = nameOrAlias.len,
            .data = nameOrAlias.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForName(@ptrCast(self), nameOrAlias_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ``` self: QtC.QMimeDatabase, fileName: []const u8 ```
    pub fn MimeTypeForFile(self: ?*anyopaque, fileName: []const u8) QtC.QMimeType {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForFile(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ``` self: QtC.QMimeDatabase, fileInfo: QtC.QFileInfo ```
    pub fn MimeTypeForFileWithFileInfo(self: ?*anyopaque, fileInfo: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForFileWithFileInfo(@ptrCast(self), @ptrCast(fileInfo));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypesForFileName)
    ///
    /// ``` self: QtC.QMimeDatabase, fileName: []const u8, allocator: std.mem.Allocator ```
    pub fn MimeTypesForFileName(self: ?*anyopaque, fileName: []const u8, allocator: std.mem.Allocator) []QtC.QMimeType {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QMimeDatabase_MimeTypesForFileName(@ptrCast(self), fileName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QMimeType, _arr.len) catch @panic("qmimedatabase.MimeTypesForFileName: Memory allocation failed");
        const _data: [*]QtC.QMimeType = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForData)
    ///
    /// ``` self: QtC.QMimeDatabase, data: []u8 ```
    pub fn MimeTypeForData(self: ?*anyopaque, data: []u8) QtC.QMimeType {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForData(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForData)
    ///
    /// ``` self: QtC.QMimeDatabase, device: QtC.QIODevice ```
    pub fn MimeTypeForDataWithDevice(self: ?*anyopaque, device: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForDataWithDevice(@ptrCast(self), @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForUrl)
    ///
    /// ``` self: QtC.QMimeDatabase, url: QtC.QUrl ```
    pub fn MimeTypeForUrl(self: ?*anyopaque, url: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFileNameAndData)
    ///
    /// ``` self: QtC.QMimeDatabase, fileName: []const u8, device: QtC.QIODevice ```
    pub fn MimeTypeForFileNameAndData(self: ?*anyopaque, fileName: []const u8, device: ?*anyopaque) QtC.QMimeType {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForFileNameAndData(@ptrCast(self), fileName_str, @ptrCast(device));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFileNameAndData)
    ///
    /// ``` self: QtC.QMimeDatabase, fileName: []const u8, data: []u8 ```
    pub fn MimeTypeForFileNameAndData2(self: ?*anyopaque, fileName: []const u8, data: []u8) QtC.QMimeType {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForFileNameAndData2(@ptrCast(self), fileName_str, data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#suffixForFileName)
    ///
    /// ``` self: QtC.QMimeDatabase, fileName: []const u8, allocator: std.mem.Allocator ```
    pub fn SuffixForFileName(self: ?*anyopaque, fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const _str = qtc.QMimeDatabase_SuffixForFileName(@ptrCast(self), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimedatabase.SuffixForFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#allMimeTypes)
    ///
    /// ``` self: QtC.QMimeDatabase, allocator: std.mem.Allocator ```
    pub fn AllMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QMimeType {
        const _arr: qtc.struct_libqt_list = qtc.QMimeDatabase_AllMimeTypes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QMimeType, _arr.len) catch @panic("qmimedatabase.AllMimeTypes: Memory allocation failed");
        const _data: [*]QtC.QMimeType = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ``` self: QtC.QMimeDatabase, fileName: []const u8, mode: qmimedatabase_enums.MatchMode ```
    pub fn MimeTypeForFile2(self: ?*anyopaque, fileName: []const u8, mode: i64) QtC.QMimeType {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QMimeDatabase_MimeTypeForFile2(@ptrCast(self), fileName_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#mimeTypeForFile)
    ///
    /// ``` self: QtC.QMimeDatabase, fileInfo: QtC.QFileInfo, mode: qmimedatabase_enums.MatchMode ```
    pub fn MimeTypeForFile22(self: ?*anyopaque, fileInfo: ?*anyopaque, mode: i64) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForFile22(@ptrCast(self), @ptrCast(fileInfo), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qmimedatabase.html#dtor.QMimeDatabase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QMimeDatabase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMimeDatabase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmimedatabase.html#types
pub const enums = struct {
    pub const MatchMode = enum {
        pub const MatchDefault: i32 = 0;
        pub const MatchExtension: i32 = 1;
        pub const MatchContent: i32 = 2;
    };
};
