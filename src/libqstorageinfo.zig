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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStorageInfo object in C++ memory
    ///
    pub fn new() QStorageInfo {
        return .{ .ptr = qtc.QStorageInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStorageInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn new2(path: []const u8) QStorageInfo {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QStorageInfo_new2(path_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStorageInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` dir: QDir `
    ///
    pub fn new3(dir: anytype) QStorageInfo {
        comptime _ = @TypeOf(dir)._is_QDir;
        return .{ .ptr = qtc.QStorageInfo_new3(@ptrCast(dir.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QStorageInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QStorageInfo `
    ///
    pub fn new4(other: anytype) QStorageInfo {
        comptime _ = @TypeOf(other)._is_QStorageInfo;
        return .{ .ptr = qtc.QStorageInfo_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` other: QStorageInfo `
    ///
    pub fn operatorAssign(self: QStorageInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStorageInfo;
        qtc.QStorageInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` other: QStorageInfo `
    ///
    pub fn swap(self: QStorageInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QStorageInfo;
        qtc.QStorageInfo_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setPath` instead
    ///
    pub const SetPath = setPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` path: []const u8 `
    ///
    pub fn setPath(self: QStorageInfo, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QStorageInfo_SetPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `rootPath` instead
    ///
    pub const RootPath = rootPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#rootPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rootPath(self: QStorageInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStorageInfo_RootPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStorageInfo.rootPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `device` instead
    ///
    pub const Device = device;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#device)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn device(self: QStorageInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStorageInfo_Device(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QStorageInfo.device: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `subvolume` instead
    ///
    pub const Subvolume = subvolume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#subvolume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subvolume(self: QStorageInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStorageInfo_Subvolume(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QStorageInfo.subvolume: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fileSystemType` instead
    ///
    pub const FileSystemType = fileSystemType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#fileSystemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileSystemType(self: QStorageInfo, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QStorageInfo_FileSystemType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QStorageInfo.fileSystemType: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QStorageInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStorageInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStorageInfo.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: QStorageInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStorageInfo_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStorageInfo.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `bytesTotal` instead
    ///
    pub const BytesTotal = bytesTotal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#bytesTotal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn bytesTotal(self: QStorageInfo) i64 {
        return qtc.QStorageInfo_BytesTotal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesFree` instead
    ///
    pub const BytesFree = bytesFree;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#bytesFree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn bytesFree(self: QStorageInfo) i64 {
        return qtc.QStorageInfo_BytesFree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesAvailable` instead
    ///
    pub const BytesAvailable = bytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#bytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn bytesAvailable(self: QStorageInfo) i64 {
        return qtc.QStorageInfo_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSize` instead
    ///
    pub const BlockSize = blockSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#blockSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn blockSize(self: QStorageInfo) i32 {
        return qtc.QStorageInfo_BlockSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRoot` instead
    ///
    pub const IsRoot = isRoot;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn isRoot(self: QStorageInfo) bool {
        return qtc.QStorageInfo_IsRoot(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn isReadOnly(self: QStorageInfo) bool {
        return qtc.QStorageInfo_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReady` instead
    ///
    pub const IsReady = isReady;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn isReady(self: QStorageInfo) bool {
        return qtc.QStorageInfo_IsReady(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn isValid(self: QStorageInfo) bool {
        return qtc.QStorageInfo_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `refresh` instead
    ///
    pub const Refresh = refresh;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#refresh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn refresh(self: QStorageInfo) void {
        qtc.QStorageInfo_Refresh(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mountedVolumes` instead
    ///
    pub const MountedVolumes = mountedVolumes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#mountedVolumes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mountedVolumes(allocator: std.mem.Allocator) []QStorageInfo {
        const _arr: qtc.libqt_list = qtc.QStorageInfo_MountedVolumes();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QStorageInfo, _arr.len) catch @panic("QStorageInfo.mountedVolumes: Memory allocation failed");
        const _data_val: [*]QtC.QStorageInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `root` instead
    ///
    pub const Root = root;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#root)
    ///
    pub fn root() QStorageInfo {
        return .{ .ptr = qtc.QStorageInfo_Root() };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstorageinfo.html#dtor.QStorageInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStorageInfo `
    ///
    pub fn delete(self: QStorageInfo) void {
        qtc.QStorageInfo_Delete(@ptrCast(self.ptr));
    }
};
