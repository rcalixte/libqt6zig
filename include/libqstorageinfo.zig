const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qstorageinfo.html
pub const qstorageinfo = struct {
    /// New constructs a new QStorageInfo object.
    ///
    ///
    pub fn New() QtC.QStorageInfo {
        return qtc.QStorageInfo_new();
    }

    /// New2 constructs a new QStorageInfo object.
    ///
    /// ``` path: []const u8 ```
    pub fn New2(path: []const u8) QtC.QStorageInfo {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };

        return qtc.QStorageInfo_new2(path_str);
    }

    /// New3 constructs a new QStorageInfo object.
    ///
    /// ``` dir: QtC.QDir ```
    pub fn New3(dir: ?*anyopaque) QtC.QStorageInfo {
        return qtc.QStorageInfo_new3(@ptrCast(dir));
    }

    /// New4 constructs a new QStorageInfo object.
    ///
    /// ``` other: QtC.QStorageInfo ```
    pub fn New4(other: ?*anyopaque) QtC.QStorageInfo {
        return qtc.QStorageInfo_new4(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#operator-eq)
    ///
    /// ``` self: QtC.QStorageInfo, other: QtC.QStorageInfo ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStorageInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#swap)
    ///
    /// ``` self: QtC.QStorageInfo, other: QtC.QStorageInfo ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStorageInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#setPath)
    ///
    /// ``` self: QtC.QStorageInfo, path: []const u8 ```
    pub fn SetPath(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QStorageInfo_SetPath(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#rootPath)
    ///
    /// ``` self: QtC.QStorageInfo, allocator: std.mem.Allocator ```
    pub fn RootPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStorageInfo_RootPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstorageinfo.RootPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#device)
    ///
    /// ``` self: QtC.QStorageInfo, allocator: std.mem.Allocator ```
    pub fn Device(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QStorageInfo_Device(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstorageinfo.Device: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#subvolume)
    ///
    /// ``` self: QtC.QStorageInfo, allocator: std.mem.Allocator ```
    pub fn Subvolume(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QStorageInfo_Subvolume(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstorageinfo.Subvolume: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#fileSystemType)
    ///
    /// ``` self: QtC.QStorageInfo, allocator: std.mem.Allocator ```
    pub fn FileSystemType(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QStorageInfo_FileSystemType(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstorageinfo.FileSystemType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#name)
    ///
    /// ``` self: QtC.QStorageInfo, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStorageInfo_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstorageinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#displayName)
    ///
    /// ``` self: QtC.QStorageInfo, allocator: std.mem.Allocator ```
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStorageInfo_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstorageinfo.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesTotal)
    ///
    /// ``` self: QtC.QStorageInfo ```
    pub fn BytesTotal(self: ?*anyopaque) i64 {
        return qtc.QStorageInfo_BytesTotal(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesFree)
    ///
    /// ``` self: QtC.QStorageInfo ```
    pub fn BytesFree(self: ?*anyopaque) i64 {
        return qtc.QStorageInfo_BytesFree(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#bytesAvailable)
    ///
    /// ``` self: QtC.QStorageInfo ```
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QStorageInfo_BytesAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#blockSize)
    ///
    /// ``` self: QtC.QStorageInfo ```
    pub fn BlockSize(self: ?*anyopaque) i32 {
        return qtc.QStorageInfo_BlockSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isRoot)
    ///
    /// ``` self: QtC.QStorageInfo ```
    pub fn IsRoot(self: ?*anyopaque) bool {
        return qtc.QStorageInfo_IsRoot(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isReadOnly)
    ///
    /// ``` self: QtC.QStorageInfo ```
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.QStorageInfo_IsReadOnly(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isReady)
    ///
    /// ``` self: QtC.QStorageInfo ```
    pub fn IsReady(self: ?*anyopaque) bool {
        return qtc.QStorageInfo_IsReady(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#isValid)
    ///
    /// ``` self: QtC.QStorageInfo ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QStorageInfo_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#refresh)
    ///
    /// ``` self: QtC.QStorageInfo ```
    pub fn Refresh(self: ?*anyopaque) void {
        qtc.QStorageInfo_Refresh(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#mountedVolumes)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn MountedVolumes(allocator: std.mem.Allocator) []QtC.QStorageInfo {
        const _arr: qtc.struct_libqt_list = qtc.QStorageInfo_MountedVolumes();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QStorageInfo, _arr.len) catch @panic("qstorageinfo.MountedVolumes: Memory allocation failed");
        const _data: [*]QtC.QStorageInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#root)
    ///
    ///
    pub fn Root() QtC.QStorageInfo {
        return qtc.QStorageInfo_Root();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstorageinfo.html#dtor.QStorageInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QStorageInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStorageInfo_Delete(@ptrCast(self));
    }
};
