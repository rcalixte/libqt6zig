const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfiledevice_enums = @import("../libqfiledevice.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api-staging.kde.org/kautosavefile.html
pub const kautosavefile = struct {
    /// New constructs a new KAutoSaveFile object.
    ///
    /// ``` filename: QtC.QUrl ```
    pub fn New(filename: ?*anyopaque) QtC.KAutoSaveFile {
        return qtc.KAutoSaveFile_new(@ptrCast(filename));
    }

    /// New2 constructs a new KAutoSaveFile object.
    ///
    ///
    pub fn New2() QtC.KAutoSaveFile {
        return qtc.KAutoSaveFile_new2();
    }

    /// New3 constructs a new KAutoSaveFile object.
    ///
    /// ``` filename: QtC.QUrl, parent: QtC.QObject ```
    pub fn New3(filename: ?*anyopaque, parent: ?*anyopaque) QtC.KAutoSaveFile {
        return qtc.KAutoSaveFile_new3(@ptrCast(filename), @ptrCast(parent));
    }

    /// New4 constructs a new KAutoSaveFile object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New4(parent: ?*anyopaque) QtC.KAutoSaveFile {
        return qtc.KAutoSaveFile_new4(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KAutoSaveFile_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KAutoSaveFile, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KAutoSaveFile_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KAutoSaveFile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KAutoSaveFile_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KAutoSaveFile, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KAutoSaveFile_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KAutoSaveFile_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#managedFile)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn ManagedFile(self: ?*anyopaque) QtC.QUrl {
        return qtc.KAutoSaveFile_ManagedFile(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#setManagedFile)
    ///
    /// ``` self: QtC.KAutoSaveFile, filename: QtC.QUrl ```
    pub fn SetManagedFile(self: ?*anyopaque, filename: ?*anyopaque) void {
        qtc.KAutoSaveFile_SetManagedFile(@ptrCast(self), @ptrCast(filename));
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#releaseLock)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn ReleaseLock(self: ?*anyopaque) void {
        qtc.KAutoSaveFile_ReleaseLock(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#releaseLock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) void ```
    pub fn OnReleaseLock(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KAutoSaveFile_OnReleaseLock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#releaseLock)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBaseReleaseLock(self: ?*anyopaque) void {
        qtc.KAutoSaveFile_QBaseReleaseLock(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#open)
    ///
    /// ``` self: QtC.KAutoSaveFile, openmode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn Open(self: ?*anyopaque, openmode: i32) bool {
        return qtc.KAutoSaveFile_Open(@ptrCast(self), @intCast(openmode));
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, openmode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#open)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KAutoSaveFile, openmode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn QBaseOpen(self: ?*anyopaque, openmode: i32) bool {
        return qtc.KAutoSaveFile_QBaseOpen(@ptrCast(self), @intCast(openmode));
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#staleFiles)
    ///
    /// ``` url: QtC.QUrl, allocator: std.mem.Allocator ```
    pub fn StaleFiles(url: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KAutoSaveFile {
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_StaleFiles(@ptrCast(url));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAutoSaveFile, _arr.len) catch @panic("kautosavefile.StaleFiles: Memory allocation failed");
        const _data: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#allStaleFiles)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AllStaleFiles(allocator: std.mem.Allocator) []QtC.KAutoSaveFile {
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_AllStaleFiles();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAutoSaveFile, _arr.len) catch @panic("kautosavefile.AllStaleFiles: Memory allocation failed");
        const _data: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KAutoSaveFile_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KAutoSaveFile_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#staleFiles)
    ///
    /// ``` url: QtC.QUrl, applicationName: []const u8, allocator: std.mem.Allocator ```
    pub fn StaleFiles2(url: ?*anyopaque, applicationName: []const u8, allocator: std.mem.Allocator) []QtC.KAutoSaveFile {
        const applicationName_str = qtc.libqt_string{
            .len = applicationName.len,
            .data = applicationName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_StaleFiles2(@ptrCast(url), applicationName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAutoSaveFile, _arr.len) catch @panic("kautosavefile.StaleFiles2: Memory allocation failed");
        const _data: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#allStaleFiles)
    ///
    /// ``` applicationName: []const u8, allocator: std.mem.Allocator ```
    pub fn AllStaleFiles1(applicationName: []const u8, allocator: std.mem.Allocator) []QtC.KAutoSaveFile {
        const applicationName_str = qtc.libqt_string{
            .len = applicationName.len,
            .data = applicationName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_AllStaleFiles1(applicationName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KAutoSaveFile, _arr.len) catch @panic("kautosavefile.AllStaleFiles1: Memory allocation failed");
        const _data: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setFileName)
    ///
    /// ``` self: QtC.KAutoSaveFile, name: []const u8 ```
    pub fn SetFileName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QFile_SetFileName(@ptrCast(self), name_str);
    }

    /// Inherited from QFile
    ///
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.EncodeName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.DecodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#decodeName)
    ///
    /// ``` localFileName: []const u8, allocator: std.mem.Allocator ```
    pub fn DecodeName2(localFileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const localFileName_Cstring = localFileName.ptr;
        const _str = qtc.QFile_DecodeName2(localFileName_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.DecodeName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#exists)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Exists(self: ?*anyopaque) bool {
        return qtc.QFile_Exists(@ptrCast(self));
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
    ///
    /// ``` self: QtC.KAutoSaveFile, allocator: std.mem.Allocator ```
    pub fn SymLinkTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFile_SymLinkTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.SymLinkTarget2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#remove)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Remove(self: ?*anyopaque) bool {
        return qtc.QFile_Remove(@ptrCast(self));
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn MoveToTrash(self: ?*anyopaque) bool {
        return qtc.QFile_MoveToTrash(@ptrCast(self));
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#rename)
    ///
    /// ``` self: QtC.KAutoSaveFile, newName: []const u8 ```
    pub fn Rename(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Rename(@ptrCast(self), newName_str);
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#link)
    ///
    /// ``` self: QtC.KAutoSaveFile, newName: []const u8 ```
    pub fn Link(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Link(@ptrCast(self), newName_str);
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#copy)
    ///
    /// ``` self: QtC.KAutoSaveFile, newName: []const u8 ```
    pub fn Copy(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Copy(@ptrCast(self), newName_str);
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ``` self: QtC.KAutoSaveFile, flags: flag of qiodevicebase_enums.OpenModeFlag, permissions: flag of qfiledevice_enums.Permission ```
    pub fn Open2(self: ?*anyopaque, flags: i32, permissions: i32) bool {
        return qtc.QFile_Open2(@ptrCast(self), @intCast(flags), @intCast(permissions));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ``` self: QtC.KAutoSaveFile, fd: i32, ioFlags: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn Open4(self: ?*anyopaque, fd: i32, ioFlags: i32) bool {
        return qtc.QFile_Open4(@ptrCast(self), @intCast(fd), @intCast(ioFlags));
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ``` self: QtC.KAutoSaveFile, fd: i32, ioFlags: flag of qiodevicebase_enums.OpenModeFlag, handleFlags: flag of qfiledevice_enums.FileHandleFlag ```
    pub fn Open33(self: ?*anyopaque, fd: i32, ioFlags: i32, handleFlags: i32) bool {
        return qtc.QFile_Open33(@ptrCast(self), @intCast(fd), @intCast(ioFlags), @intCast(handleFlags));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#error)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    ///
    /// Returns: ``` qfiledevice_enums.FileError ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QFileDevice_Error(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn UnsetError(self: ?*anyopaque) void {
        qtc.QFileDevice_UnsetError(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#handle)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Handle(self: ?*anyopaque) i32 {
        return qtc.QFileDevice_Handle(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#flush)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Flush(self: ?*anyopaque) bool {
        return qtc.QFileDevice_Flush(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ``` self: QtC.KAutoSaveFile, offset: i64, size: i64 ```
    pub fn Map(self: ?*anyopaque, offset: i64, size: i64) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map(@ptrCast(self), @intCast(offset), @intCast(size)));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
    ///
    /// ``` self: QtC.KAutoSaveFile, address: *u8 ```
    pub fn Unmap(self: ?*anyopaque, address: *u8) bool {
        return qtc.QFileDevice_Unmap(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
    ///
    /// ``` self: QtC.KAutoSaveFile, time: qfiledevice_enums.FileTime ```
    pub fn FileTime(self: ?*anyopaque, time: i32) QtC.QDateTime {
        return qtc.QFileDevice_FileTime(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
    ///
    /// ``` self: QtC.KAutoSaveFile, newDate: QtC.QDateTime, fileTime: qfiledevice_enums.FileTime ```
    pub fn SetFileTime(self: ?*anyopaque, newDate: ?*anyopaque, fileTime: i32) bool {
        return qtc.QFileDevice_SetFileTime(@ptrCast(self), @ptrCast(newDate), @intCast(fileTime));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ``` self: QtC.KAutoSaveFile, offset: i64, size: i64, flags: flag of qfiledevice_enums.MemoryMapFlag ```
    pub fn Map3(self: ?*anyopaque, offset: i64, size: i64, flags: i32) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map3(@ptrCast(self), @intCast(offset), @intCast(size), @intCast(flags)));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    ///
    /// Returns: ``` flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn OpenMode(self: ?*anyopaque) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ``` self: QtC.KAutoSaveFile, enabled: bool ```
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ``` self: QtC.KAutoSaveFile, channel: i32 ```
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ``` self: QtC.KAutoSaveFile, channel: i32 ```
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: QtC.KAutoSaveFile, data: []const u8, maxlen: i64 ```
    pub fn Read(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: QtC.KAutoSaveFile, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn Read2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ``` self: QtC.KAutoSaveFile, allocator: std.mem.Allocator ```
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.KAutoSaveFile, data: []const u8, maxlen: i64 ```
    pub fn ReadLine(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.KAutoSaveFile, allocator: std.mem.Allocator ```
    pub fn ReadLine2(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn StartTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn CommitTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.KAutoSaveFile, data: []const u8, lenVal: i64 ```
    pub fn Write(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.KAutoSaveFile, data: []const u8 ```
    pub fn Write2(self: ?*anyopaque, data: []const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.KAutoSaveFile, data: []u8 ```
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
    /// ``` self: QtC.KAutoSaveFile, data: []const u8, maxlen: i64 ```
    pub fn Peek(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: QtC.KAutoSaveFile, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn Peek2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ``` self: QtC.KAutoSaveFile, maxSize: i64 ```
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ``` self: QtC.KAutoSaveFile, c: i8 ```
    pub fn UngetChar(self: ?*anyopaque, c: i8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ``` self: QtC.KAutoSaveFile, c: i8 ```
    pub fn PutChar(self: ?*anyopaque, c: i8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ``` self: QtC.KAutoSaveFile, c: []const u8 ```
    pub fn GetChar(self: ?*anyopaque, c: []const u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ``` self: QtC.KAutoSaveFile, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIODevice_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn ReadyRead(self: ?*anyopaque) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile) callconv(.c) void ```
    pub fn OnReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: QtC.KAutoSaveFile, channel: i32 ```
    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, channel: i32) callconv(.c) void ```
    pub fn OnChannelReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: QtC.KAutoSaveFile, bytes: i64 ```
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, bytes: i64) callconv(.c) void ```
    pub fn OnBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: QtC.KAutoSaveFile, channel: i32, bytes: i64 ```
    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self), @intCast(channel), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, channel: i32, bytes: i64) callconv(.c) void ```
    pub fn OnChannelBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn AboutToClose(self: ?*anyopaque) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile) callconv(.c) void ```
    pub fn OnAboutToClose(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile) callconv(.c) void ```
    pub fn OnReadChannelFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.KAutoSaveFile, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KAutoSaveFile, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KAutoSaveFile, name: []const u8 ```
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
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KAutoSaveFile, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KAutoSaveFile, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KAutoSaveFile, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KAutoSaveFile, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KAutoSaveFile, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KAutoSaveFile, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kautosavefile.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KAutoSaveFile, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KAutoSaveFile, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KAutoSaveFile, obj: QtC.QObject ```
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
    /// ``` self: QtC.KAutoSaveFile, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KAutoSaveFile, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KAutoSaveFile, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KAutoSaveFile, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kautosavefile.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kautosavefile.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KAutoSaveFile, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KAutoSaveFile, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KAutoSaveFile, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KAutoSaveFile, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KAutoSaveFile, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, allocator: std.mem.Allocator ```
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAutoSaveFile_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, allocator: std.mem.Allocator ```
    pub fn QBaseFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KAutoSaveFile_QBaseFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnFileName(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.KAutoSaveFile_OnFileName(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.KAutoSaveFile_Size(@ptrCast(self));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBaseSize(self: ?*anyopaque) i64 {
        return qtc.KAutoSaveFile_QBaseSize(@ptrCast(self));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) i64 ```
    pub fn OnSize(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, sz: i64 ```
    pub fn Resize(self: ?*anyopaque, sz: i64) bool {
        return qtc.KAutoSaveFile_Resize(@ptrCast(self), @intCast(sz));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, sz: i64 ```
    pub fn QBaseResize(self: ?*anyopaque, sz: i64) bool {
        return qtc.KAutoSaveFile_QBaseResize(@ptrCast(self), @intCast(sz));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, sz: i64) callconv(.c) bool ```
    pub fn OnResize(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnResize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    ///
    /// Returns: ``` flag of qfiledevice_enums.Permission ```
    pub fn Permissions(self: ?*anyopaque) i32 {
        return qtc.KAutoSaveFile_Permissions(@ptrCast(self));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    ///
    /// Returns: ``` flag of qfiledevice_enums.Permission ```
    pub fn QBasePermissions(self: ?*anyopaque) i32 {
        return qtc.KAutoSaveFile_QBasePermissions(@ptrCast(self));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) i32 ```
    pub fn OnPermissions(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnPermissions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, permissionSpec: flag of qfiledevice_enums.Permission ```
    pub fn SetPermissions(self: ?*anyopaque, permissionSpec: i32) bool {
        return qtc.KAutoSaveFile_SetPermissions(@ptrCast(self), @intCast(permissionSpec));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, permissionSpec: flag of qfiledevice_enums.Permission ```
    pub fn QBaseSetPermissions(self: ?*anyopaque, permissionSpec: i32) bool {
        return qtc.KAutoSaveFile_QBaseSetPermissions(@ptrCast(self), @intCast(permissionSpec));
    }

    /// Inherited from QFile
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, permissionSpec: flag of qfiledevice_enums.Permission) callconv(.c) bool ```
    pub fn OnSetPermissions(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnSetPermissions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Close(self: ?*anyopaque) void {
        qtc.KAutoSaveFile_Close(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBaseClose(self: ?*anyopaque) void {
        qtc.KAutoSaveFile_QBaseClose(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) void ```
    pub fn OnClose(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KAutoSaveFile_OnClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn IsSequential(self: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_IsSequential(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBaseIsSequential(self: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_QBaseIsSequential(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) bool ```
    pub fn OnIsSequential(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnIsSequential(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Pos(self: ?*anyopaque) i64 {
        return qtc.KAutoSaveFile_Pos(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBasePos(self: ?*anyopaque) i64 {
        return qtc.KAutoSaveFile_QBasePos(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) i64 ```
    pub fn OnPos(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnPos(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, offset: i64 ```
    pub fn Seek(self: ?*anyopaque, offset: i64) bool {
        return qtc.KAutoSaveFile_Seek(@ptrCast(self), @intCast(offset));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, offset: i64 ```
    pub fn QBaseSeek(self: ?*anyopaque, offset: i64) bool {
        return qtc.KAutoSaveFile_QBaseSeek(@ptrCast(self), @intCast(offset));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, offset: i64) callconv(.c) bool ```
    pub fn OnSeek(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnSeek(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_AtEnd(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBaseAtEnd(self: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_QBaseAtEnd(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) bool ```
    pub fn OnAtEnd(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnAtEnd(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, data: []const u8, maxlen: i64 ```
    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_ReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_QBaseReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, data: [*:0]const u8, maxlen: i64) callconv(.c) i64 ```
    pub fn OnReadData(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnReadData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, data: []const u8, lenVal: i64 ```
    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_WriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, data: []const u8, lenVal: i64 ```
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_QBaseWriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 ```
    pub fn OnWriteData(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnWriteData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, data: []const u8, maxlen: i64 ```
    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_ReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_QBaseReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, data: [*:0]const u8, maxlen: i64) callconv(.c) i64 ```
    pub fn OnReadLineData(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnReadLineData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Reset(self: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_Reset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBaseReset(self: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) bool ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return qtc.KAutoSaveFile_BytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBaseBytesAvailable(self: ?*anyopaque) i64 {
        return qtc.KAutoSaveFile_QBaseBytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesAvailable(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnBytesAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return qtc.KAutoSaveFile_BytesToWrite(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBaseBytesToWrite(self: ?*anyopaque) i64 {
        return qtc.KAutoSaveFile_QBaseBytesToWrite(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesToWrite(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnBytesToWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_CanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBaseCanReadLine(self: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_QBaseCanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) bool ```
    pub fn OnCanReadLine(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnCanReadLine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, msecs: i32 ```
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.KAutoSaveFile_WaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, msecs: i32 ```
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.KAutoSaveFile_QBaseWaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnWaitForReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, msecs: i32 ```
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.KAutoSaveFile_WaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, msecs: i32 ```
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.KAutoSaveFile_QBaseWaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnWaitForBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, maxSize: i64 ```
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.KAutoSaveFile_SkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, maxSize: i64 ```
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.KAutoSaveFile_QBaseSkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, maxSize: i64) callconv(.c) i64 ```
    pub fn OnSkipData(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnSkipData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KAutoSaveFile_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KAutoSaveFile_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KAutoSaveFile_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KAutoSaveFile_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KAutoSaveFile_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KAutoSaveFile_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KAutoSaveFile_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KAutoSaveFile_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KAutoSaveFile_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KAutoSaveFile_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, openMode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.KAutoSaveFile_SetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, openMode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn QBaseSetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.KAutoSaveFile_QBaseSetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void ```
    pub fn OnSetOpenMode(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnSetOpenMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, errorString: []const u8 ```
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.KAutoSaveFile_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, errorString: []const u8 ```
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.KAutoSaveFile_QBaseSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, errorString: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetErrorString(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnSetErrorString(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KAutoSaveFile_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KAutoSaveFile_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KAutoSaveFile_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KAutoSaveFile_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KAutoSaveFile_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KAutoSaveFile_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KAutoSaveFile_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KAutoSaveFile_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KAutoSaveFile, slot: fn (self: QtC.KAutoSaveFile, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kautosavefile.html#dtor.KAutoSaveFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KAutoSaveFile ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KAutoSaveFile_Delete(@ptrCast(self));
    }
};
