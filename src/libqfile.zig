const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfiledevice_enums = @import("libqfiledevice.zig").enums;
const qiodevicebase_enums = @import("libqiodevicebase.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qfile.html
pub const qfile = struct {
    /// New constructs a new QFile object.
    ///
    ///
    pub fn New() QtC.QFile {
        return qtc.QFile_new();
    }

    /// New2 constructs a new QFile object.
    ///
    /// ``` name: []const u8 ```
    pub fn New2(name: []const u8) QtC.QFile {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QFile_new2(name_str);
    }

    /// New3 constructs a new QFile object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New3(parent: ?*anyopaque) QtC.QFile {
        return qtc.QFile_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QFile object.
    ///
    /// ``` name: []const u8, parent: QtC.QObject ```
    pub fn New4(name: []const u8, parent: ?*anyopaque) QtC.QFile {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QFile_new4(name_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QFile ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QFile_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QFile, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFile_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QFile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QFile_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QFile_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QFile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QFile_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QFile_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// ``` self: QtC.QFile, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFile_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnFileName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QFile_OnFileName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFile, allocator: std.mem.Allocator ```
    pub fn QBaseFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFile_QBaseFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setFileName)
    ///
    /// ``` self: QtC.QFile, name: []const u8 ```
    pub fn SetFileName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QFile_SetFileName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#encodeName)
    ///
    /// ``` fileName: []const u8, allocator: std.mem.Allocator ```
    pub fn EncodeName(fileName: []const u8, allocator: std.mem.Allocator) []u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const _bytearray: qtc.libqt_string = qtc.QFile_EncodeName(fileName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.EncodeName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
    ///
    /// ``` localFileName: []u8, allocator: std.mem.Allocator ```
    pub fn DecodeName(localFileName: []u8, allocator: std.mem.Allocator) []const u8 {
        const localFileName_str = qtc.libqt_string{
            .len = localFileName.len,
            .data = localFileName.ptr,
        };
        const _str = qtc.QFile_DecodeName(localFileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.DecodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
    ///
    /// ``` localFileName: []const u8, allocator: std.mem.Allocator ```
    pub fn DecodeName2(localFileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const localFileName_Cstring = localFileName.ptr;
        const _str = qtc.QFile_DecodeName2(localFileName_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.DecodeName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
    ///
    /// ``` self: QtC.QFile ```
    pub fn Exists(self: ?*anyopaque) bool {
        return qtc.QFile_Exists(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
    ///
    /// ``` fileName: []const u8 ```
    pub fn Exists2(fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QFile_Exists2(fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
    ///
    /// ``` self: QtC.QFile, allocator: std.mem.Allocator ```
    pub fn SymLinkTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFile_SymLinkTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
    ///
    /// ``` fileName: []const u8, allocator: std.mem.Allocator ```
    pub fn SymLinkTarget2(fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const _str = qtc.QFile_SymLinkTarget2(fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.SymLinkTarget2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
    ///
    /// ``` self: QtC.QFile ```
    pub fn Remove(self: ?*anyopaque) bool {
        return qtc.QFile_Remove(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
    ///
    /// ``` fileName: []const u8 ```
    pub fn Remove2(fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QFile_Remove2(fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
    ///
    /// ``` self: QtC.QFile ```
    pub fn MoveToTrash(self: ?*anyopaque) bool {
        return qtc.QFile_MoveToTrash(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
    ///
    /// ``` fileName: []const u8 ```
    pub fn MoveToTrash2(fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QFile_MoveToTrash2(fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#rename)
    ///
    /// ``` self: QtC.QFile, newName: []const u8 ```
    pub fn Rename(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Rename(@ptrCast(self), newName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#rename)
    ///
    /// ``` oldName: []const u8, newName: []const u8 ```
    pub fn Rename2(oldName: []const u8, newName: []const u8) bool {
        const oldName_str = qtc.libqt_string{
            .len = oldName.len,
            .data = oldName.ptr,
        };
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Rename2(oldName_str, newName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
    ///
    /// ``` self: QtC.QFile, newName: []const u8 ```
    pub fn Link(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Link(@ptrCast(self), newName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
    ///
    /// ``` fileName: []const u8, newName: []const u8 ```
    pub fn Link2(fileName: []const u8, newName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Link2(fileName_str, newName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
    ///
    /// ``` self: QtC.QFile, newName: []const u8 ```
    pub fn Copy(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Copy(@ptrCast(self), newName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
    ///
    /// ``` fileName: []const u8, newName: []const u8 ```
    pub fn Copy2(fileName: []const u8, newName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Copy2(fileName_str, newName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ``` self: QtC.QFile, flags: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn Open(self: ?*anyopaque, flags: i32) bool {
        return qtc.QFile_Open(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, flags: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool ```
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFile_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFile, flags: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn QBaseOpen(self: ?*anyopaque, flags: i32) bool {
        return qtc.QFile_QBaseOpen(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ``` self: QtC.QFile, flags: flag of qiodevicebase_enums.OpenModeFlag, permissions: flag of qfiledevice_enums.Permission ```
    pub fn Open2(self: ?*anyopaque, flags: i32, permissions: i32) bool {
        return qtc.QFile_Open2(@ptrCast(self), @intCast(flags), @intCast(permissions));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ``` self: QtC.QFile, fd: i32, ioFlags: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn Open4(self: ?*anyopaque, fd: i32, ioFlags: i32) bool {
        return qtc.QFile_Open4(@ptrCast(self), @intCast(fd), @intCast(ioFlags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// ``` self: QtC.QFile ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QFile_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) i64 ```
    pub fn OnSize(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QFile_OnSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFile ```
    pub fn QBaseSize(self: ?*anyopaque) i64 {
        return qtc.QFile_QBaseSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// ``` self: QtC.QFile, sz: i64 ```
    pub fn Resize(self: ?*anyopaque, sz: i64) bool {
        return qtc.QFile_Resize(@ptrCast(self), @intCast(sz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, sz: i64) callconv(.c) bool ```
    pub fn OnResize(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QFile_OnResize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFile, sz: i64 ```
    pub fn QBaseResize(self: ?*anyopaque, sz: i64) bool {
        return qtc.QFile_QBaseResize(@ptrCast(self), @intCast(sz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// ``` filename: []const u8, sz: i64 ```
    pub fn Resize2(filename: []const u8, sz: i64) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QFile_Resize2(filename_str, @intCast(sz));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// ``` self: QtC.QFile ```
    ///
    /// Returns: ``` flag of qfiledevice_enums.Permission ```
    pub fn Permissions(self: ?*anyopaque) i32 {
        return qtc.QFile_Permissions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) i32 ```
    pub fn OnPermissions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QFile_OnPermissions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFile ```
    ///
    /// Returns: ``` flag of qfiledevice_enums.Permission ```
    pub fn QBasePermissions(self: ?*anyopaque) i32 {
        return qtc.QFile_QBasePermissions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// ``` filename: []const u8 ```
    ///
    /// Returns: ``` flag of qfiledevice_enums.Permission ```
    pub fn Permissions2(filename: []const u8) i32 {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QFile_Permissions2(filename_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// ``` self: QtC.QFile, permissionSpec: flag of qfiledevice_enums.Permission ```
    pub fn SetPermissions(self: ?*anyopaque, permissionSpec: i32) bool {
        return qtc.QFile_SetPermissions(@ptrCast(self), @intCast(permissionSpec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, permissionSpec: flag of qfiledevice_enums.Permission) callconv(.c) bool ```
    pub fn OnSetPermissions(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFile_OnSetPermissions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QFile, permissionSpec: flag of qfiledevice_enums.Permission ```
    pub fn QBaseSetPermissions(self: ?*anyopaque, permissionSpec: i32) bool {
        return qtc.QFile_QBaseSetPermissions(@ptrCast(self), @intCast(permissionSpec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// ``` filename: []const u8, permissionSpec: flag of qfiledevice_enums.Permission ```
    pub fn SetPermissions2(filename: []const u8, permissionSpec: i32) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QFile_SetPermissions2(filename_str, @intCast(permissionSpec));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QFile_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QFile_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ``` self: QtC.QFile, fd: i32, ioFlags: flag of qiodevicebase_enums.OpenModeFlag, handleFlags: flag of qfiledevice_enums.FileHandleFlag ```
    pub fn Open33(self: ?*anyopaque, fd: i32, ioFlags: i32, handleFlags: i32) bool {
        return qtc.QFile_Open33(@ptrCast(self), @intCast(fd), @intCast(ioFlags), @intCast(handleFlags));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
    ///
    /// ``` self: QtC.QFile ```
    ///
    /// Returns: ``` qfiledevice_enums.FileError ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QFileDevice_Error(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
    ///
    /// ``` self: QtC.QFile ```
    pub fn UnsetError(self: ?*anyopaque) void {
        qtc.QFileDevice_UnsetError(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
    ///
    /// ``` self: QtC.QFile ```
    pub fn Handle(self: ?*anyopaque) i32 {
        return qtc.QFileDevice_Handle(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
    ///
    /// ``` self: QtC.QFile ```
    pub fn Flush(self: ?*anyopaque) bool {
        return qtc.QFileDevice_Flush(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ``` self: QtC.QFile, offset: i64, size: i64 ```
    pub fn Map(self: ?*anyopaque, offset: i64, size: i64) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map(@ptrCast(self), @intCast(offset), @intCast(size)));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
    ///
    /// ``` self: QtC.QFile, address: *u8 ```
    pub fn Unmap(self: ?*anyopaque, address: *u8) bool {
        return qtc.QFileDevice_Unmap(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
    ///
    /// ``` self: QtC.QFile, time: qfiledevice_enums.FileTime ```
    pub fn FileTime(self: ?*anyopaque, time: i32) QtC.QDateTime {
        return qtc.QFileDevice_FileTime(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
    ///
    /// ``` self: QtC.QFile, newDate: QtC.QDateTime, fileTime: qfiledevice_enums.FileTime ```
    pub fn SetFileTime(self: ?*anyopaque, newDate: ?*anyopaque, fileTime: i32) bool {
        return qtc.QFileDevice_SetFileTime(@ptrCast(self), @ptrCast(newDate), @intCast(fileTime));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ``` self: QtC.QFile, offset: i64, size: i64, flags: flag of qfiledevice_enums.MemoryMapFlag ```
    pub fn Map3(self: ?*anyopaque, offset: i64, size: i64, flags: i32) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map3(@ptrCast(self), @intCast(offset), @intCast(size), @intCast(flags)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ``` self: QtC.QFile ```
    ///
    /// Returns: ``` flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn OpenMode(self: ?*anyopaque) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ``` self: QtC.QFile, enabled: bool ```
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ``` self: QtC.QFile ```
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ``` self: QtC.QFile ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ``` self: QtC.QFile ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ``` self: QtC.QFile ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ``` self: QtC.QFile ```
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ``` self: QtC.QFile ```
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ``` self: QtC.QFile ```
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ``` self: QtC.QFile, channel: i32 ```
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ``` self: QtC.QFile ```
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ``` self: QtC.QFile, channel: i32 ```
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: QtC.QFile, data: []const u8, maxlen: i64 ```
    pub fn Read(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: QtC.QFile, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn Read2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ``` self: QtC.QFile, allocator: std.mem.Allocator ```
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QFile, data: []const u8, maxlen: i64 ```
    pub fn ReadLine(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QFile, allocator: std.mem.Allocator ```
    pub fn ReadLine2(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ``` self: QtC.QFile ```
    pub fn StartTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ``` self: QtC.QFile ```
    pub fn CommitTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ``` self: QtC.QFile ```
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ``` self: QtC.QFile ```
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QFile, data: []const u8, lenVal: i64 ```
    pub fn Write(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QFile, data: []const u8 ```
    pub fn Write2(self: ?*anyopaque, data: []const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QFile, data: []u8 ```
    pub fn Write3(self: ?*anyopaque, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: QtC.QFile, data: []const u8, maxlen: i64 ```
    pub fn Peek(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: QtC.QFile, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn Peek2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ``` self: QtC.QFile, maxSize: i64 ```
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ``` self: QtC.QFile, c: i8 ```
    pub fn UngetChar(self: ?*anyopaque, c: i8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ``` self: QtC.QFile, c: i8 ```
    pub fn PutChar(self: ?*anyopaque, c: i8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ``` self: QtC.QFile, c: []const u8 ```
    pub fn GetChar(self: ?*anyopaque, c: []const u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ``` self: QtC.QFile, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIODevice_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: QtC.QFile ```
    pub fn ReadyRead(self: ?*anyopaque) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile) callconv(.c) void ```
    pub fn OnReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: QtC.QFile, channel: i32 ```
    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, channel: i32) callconv(.c) void ```
    pub fn OnChannelReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: QtC.QFile, bytes: i64 ```
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, bytes: i64) callconv(.c) void ```
    pub fn OnBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: QtC.QFile, channel: i32, bytes: i64 ```
    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self), @intCast(channel), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, channel: i32, bytes: i64) callconv(.c) void ```
    pub fn OnChannelBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: QtC.QFile ```
    pub fn AboutToClose(self: ?*anyopaque) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile) callconv(.c) void ```
    pub fn OnAboutToClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: QtC.QFile ```
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile) callconv(.c) void ```
    pub fn OnReadChannelFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QFile, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QFile, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QFile, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QFile ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QFile ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QFile ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QFile ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QFile, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QFile ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QFile, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QFile, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QFile, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QFile, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QFile, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qfile.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QFile, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QFile, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QFile, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QFile, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QFile ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QFile ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QFile, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QFile, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QFile, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qfile.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfile.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QFile ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QFile ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QFile ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QFile ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QFile, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QFile ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QFile, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QFile, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QFile, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QFile, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn Close(self: ?*anyopaque) void {
        qtc.QFile_Close(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn QBaseClose(self: ?*anyopaque) void {
        qtc.QFile_QBaseClose(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) void ```
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QFile_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn IsSequential(self: ?*anyopaque) bool {
        return qtc.QFile_IsSequential(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn QBaseIsSequential(self: ?*anyopaque) bool {
        return qtc.QFile_QBaseIsSequential(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) bool ```
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QFile_OnIsSequential(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn Pos(self: ?*anyopaque) i64 {
        return qtc.QFile_Pos(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn QBasePos(self: ?*anyopaque) i64 {
        return qtc.QFile_QBasePos(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) i64 ```
    pub fn OnPos(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QFile_OnPos(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, offset: i64 ```
    pub fn Seek(self: ?*anyopaque, offset: i64) bool {
        return qtc.QFile_Seek(@ptrCast(self), @intCast(offset));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, offset: i64 ```
    pub fn QBaseSeek(self: ?*anyopaque, offset: i64) bool {
        return qtc.QFile_QBaseSeek(@ptrCast(self), @intCast(offset));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, offset: i64) callconv(.c) bool ```
    pub fn OnSeek(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QFile_OnSeek(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QFile_AtEnd(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn QBaseAtEnd(self: ?*anyopaque) bool {
        return qtc.QFile_QBaseAtEnd(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) bool ```
    pub fn OnAtEnd(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QFile_OnAtEnd(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, data: []const u8, maxlen: i64 ```
    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_ReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_QBaseReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, data: [*:0]const u8, maxlen: i64) callconv(.c) i64 ```
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QFile_OnReadData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, data: []const u8, lenVal: i64 ```
    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_WriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, data: []const u8, lenVal: i64 ```
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_QBaseWriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 ```
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QFile_OnWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, data: []const u8, maxlen: i64 ```
    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_ReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_QBaseReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, data: [*:0]const u8, maxlen: i64) callconv(.c) i64 ```
    pub fn OnReadLineData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QFile_OnReadLineData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn Reset(self: ?*anyopaque) bool {
        return qtc.QFile_Reset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn QBaseReset(self: ?*anyopaque) bool {
        return qtc.QFile_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) bool ```
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QFile_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QFile_BytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn QBaseBytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QFile_QBaseBytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) i64 ```
    pub fn OnBytesAvailable(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QFile_OnBytesAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QFile_BytesToWrite(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn QBaseBytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QFile_QBaseBytesToWrite(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) i64 ```
    pub fn OnBytesToWrite(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QFile_OnBytesToWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return qtc.QFile_CanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn QBaseCanReadLine(self: ?*anyopaque) bool {
        return qtc.QFile_QBaseCanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) bool ```
    pub fn OnCanReadLine(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QFile_OnCanReadLine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, msecs: i32 ```
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QFile_WaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, msecs: i32 ```
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QFile_QBaseWaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFile_OnWaitForReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, msecs: i32 ```
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QFile_WaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, msecs: i32 ```
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QFile_QBaseWaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFile_OnWaitForBytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, maxSize: i64 ```
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QFile_SkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, maxSize: i64 ```
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QFile_QBaseSkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, maxSize: i64) callconv(.c) i64 ```
    pub fn OnSkipData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.QFile_OnSkipData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFile_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFile_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFile_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFile_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFile_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFile_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFile_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFile_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFile_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFile_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFile_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFile_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFile_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFile_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFile_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, openMode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.QFile_SetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, openMode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn QBaseSetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.QFile_QBaseSetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void ```
    pub fn OnSetOpenMode(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFile_OnSetOpenMode(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, errorString: []const u8 ```
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QFile_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, errorString: []const u8 ```
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QFile_QBaseSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, errorString: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetErrorString(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFile_OnSetErrorString(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QFile_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QFile_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QFile_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QFile_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QFile_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QFile_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFile_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFile_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QFile_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QFile, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QFile_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QFile_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFile_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QFile, callback: *const fn (self: QtC.QFile, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#dtor.QFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFile ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFile_Delete(@ptrCast(self));
    }
};
