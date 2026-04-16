const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDir = @import("libqt6").QDir;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html)
pub const QStorageInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStorageInfo,

    pub const _is_QStorageInfo = {};

    /// New constructs a new QStorageInfo object.
    ///
    pub fn New() QStorageInfo {
        return .{ .ptr = qtc.QStorageInfo_new() };
    }

    /// New2 constructs a new QStorageInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn New2(path: []const u8) QStorageInfo {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QStorageInfo_new2(path_str) };
    }

    /// New3 constructs a new QStorageInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dir: QDir `
    ///
    pub fn New3(dir: anytype) QStorageInfo {
        comptime _ = @TypeOf(dir)._is_QDir;
        return .{ .ptr = qtc.QStorageInfo_new3(@ptrCast(dir.ptr)) };
    }

    /// New4 constructs a new QStorageInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStorageInfo `
    ///
    pub fn New4(other: anytype) QStorageInfo {
        comptime _ = @TypeOf(other)._is_QStorageInfo;
        return .{ .ptr = qtc.QStorageInfo_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` other: QStorageInfo `
    ///
    pub fn OperatorAssign(self: QStorageInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStorageInfo;
        qtc.QStorageInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` other: QStorageInfo `
    ///
    pub fn Swap(self: QStorageInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStorageInfo;
        qtc.QStorageInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` path: []const u8 `
    ///
    pub fn SetPath(self: QStorageInfo, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QStorageInfo_SetPath(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#rootPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RootPath(self: QStorageInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStorageInfo_RootPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstorageinfo.RootPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Device(self: QStorageInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStorageInfo_Device(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstorageinfo.Device: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#subvolume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subvolume(self: QStorageInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStorageInfo_Subvolume(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstorageinfo.Subvolume: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#fileSystemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileSystemType(self: QStorageInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStorageInfo_FileSystemType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qstorageinfo.FileSystemType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QStorageInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStorageInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstorageinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: QStorageInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStorageInfo_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstorageinfo.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#bytesTotal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn BytesTotal(self: QStorageInfo) i64 {
        return qtc.QStorageInfo_BytesTotal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#bytesFree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn BytesFree(self: QStorageInfo) i64 {
        return qtc.QStorageInfo_BytesFree(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#bytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn BytesAvailable(self: QStorageInfo) i64 {
        return qtc.QStorageInfo_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#blockSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn BlockSize(self: QStorageInfo) i32 {
        return qtc.QStorageInfo_BlockSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn IsRoot(self: QStorageInfo) bool {
        return qtc.QStorageInfo_IsRoot(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn IsReadOnly(self: QStorageInfo) bool {
        return qtc.QStorageInfo_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn IsReady(self: QStorageInfo) bool {
        return qtc.QStorageInfo_IsReady(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn IsValid(self: QStorageInfo) bool {
        return qtc.QStorageInfo_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#refresh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn Refresh(self: QStorageInfo) void {
        qtc.QStorageInfo_Refresh(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#mountedVolumes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MountedVolumes(allocator: std.mem.Allocator) []QStorageInfo {
        const _arr: qtc.libqt_list = qtc.QStorageInfo_MountedVolumes();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QStorageInfo, _arr.len) catch @panic("qstorageinfo.MountedVolumes: Memory allocation failed");
        const _data: [*]QtC.QStorageInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#root)
    ///
    pub fn Root() QStorageInfo {
        return .{ .ptr = qtc.QStorageInfo_Root() };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#dtor.QStorageInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn Delete(self: QStorageInfo) void {
        qtc.QStorageInfo_Delete(@ptrCast(self.ptr));
    }
};
