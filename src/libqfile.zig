const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfiledevice_enums = @import("libqfiledevice.zig").enums;
const qiodevicebase_enums = @import("libqiodevicebase.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html)
pub const qfile = struct {
    /// New constructs a new QFile object.
    ///
    pub fn New() QtC.QFile {
        return qtc.QFile_new();
    }

    /// New2 constructs a new QFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New2(name: []const u8) QtC.QFile {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QFile_new2(name_str);
    }

    /// New3 constructs a new QFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New3(parent: ?*anyopaque) QtC.QFile {
        return qtc.QFile_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New4(name: []const u8, parent: ?*anyopaque) QtC.QFile {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QFile_new4(name_str, @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QFile_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QFile_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QFile_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFile_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QFile_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFile_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QFile_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QFile_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QFile_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFile_FileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnFileName(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QFile_OnFileName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFileName` instead
    ///
    pub const QBaseFileName = SuperFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFile_SuperFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetFileName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QFile_SetFileName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#encodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EncodeName(fileName: []const u8, allocator: std.mem.Allocator) []u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QFile_EncodeName(fileName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.EncodeName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#decodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` localFileName: []u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DecodeName(localFileName: []u8, allocator: std.mem.Allocator) []const u8 {
        const localFileName_str = qtc.libqt_string{
            .len = localFileName.len,
            .data = localFileName.ptr,
        };
        var _str = qtc.QFile_DecodeName(localFileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.DecodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#decodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` localFileName: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DecodeName2(localFileName: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const localFileName_Cstring = localFileName.ptr;
        var _str = qtc.QFile_DecodeName2(localFileName_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.DecodeName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Exists(self: ?*anyopaque) bool {
        return qtc.QFile_Exists(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Exists2(fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QFile_Exists2(fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFile_SymLinkTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget2(fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QFile_SymLinkTarget2(fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.SymLinkTarget2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Remove(self: ?*anyopaque) bool {
        return qtc.QFile_Remove(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn Remove2(fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QFile_Remove2(fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn MoveToTrash(self: ?*anyopaque) bool {
        return qtc.QFile_MoveToTrash(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn MoveToTrash2(fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return qtc.QFile_MoveToTrash2(fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#rename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn Rename(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Rename(@ptrCast(self), newName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#rename)
    ///
    /// ## Parameter(s):
    ///
    /// ` oldName: []const u8 `
    ///
    /// ` newName: []const u8 `
    ///
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn Link(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Link(@ptrCast(self), newName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` newName: []const u8 `
    ///
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn Copy(self: ?*anyopaque, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Copy(@ptrCast(self), newName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` newName: []const u8 `
    ///
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` flags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: ?*anyopaque, flags: i32) bool {
        return qtc.QFile_Open(@ptrCast(self), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile, flags: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFile_OnOpen(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` flags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: ?*anyopaque, flags: i32) bool {
        return qtc.QFile_SuperOpen(@ptrCast(self), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` flags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` permissions: flag of qfiledevice_enums.Permission `
    ///
    pub fn Open2(self: ?*anyopaque, flags: i32, permissions: i32) bool {
        return qtc.QFile_Open2(@ptrCast(self), @bitCast(flags), @bitCast(permissions));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` fd: i32 `
    ///
    /// ` ioFlags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open4(self: ?*anyopaque, fd: i32, ioFlags: i32) bool {
        return qtc.QFile_Open4(@ptrCast(self), @bitCast(fd), @bitCast(ioFlags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QFile_Size(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QFile_OnSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSize` instead
    ///
    pub const QBaseSize = SuperSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperSize(self: ?*anyopaque) i64 {
        return qtc.QFile_SuperSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` sz: i64 `
    ///
    pub fn Resize(self: ?*anyopaque, sz: i64) bool {
        return qtc.QFile_Resize(@ptrCast(self), @bitCast(sz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile, sz: i64) callconv(.c) bool `
    ///
    pub fn OnResize(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QFile_OnResize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResize` instead
    ///
    pub const QBaseResize = SuperResize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` sz: i64 `
    ///
    pub fn SuperResize(self: ?*anyopaque, sz: i64) bool {
        return qtc.QFile_SuperResize(@ptrCast(self), @bitCast(sz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    /// ` sz: i64 `
    ///
    pub fn Resize2(filename: []const u8, sz: i64) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QFile_Resize2(filename_str, @bitCast(sz));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of qfiledevice_enums.Permission `
    ///
    pub fn Permissions(self: ?*anyopaque) i32 {
        return qtc.QFile_Permissions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPermissions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QFile_OnPermissions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPermissions` instead
    ///
    pub const QBasePermissions = SuperPermissions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of qfiledevice_enums.Permission `
    ///
    pub fn SuperPermissions(self: ?*anyopaque) i32 {
        return qtc.QFile_SuperPermissions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qfiledevice_enums.Permission `
    ///
    pub fn Permissions2(filename: []const u8) i32 {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QFile_Permissions2(filename_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` permissionSpec: flag of qfiledevice_enums.Permission `
    ///
    pub fn SetPermissions(self: ?*anyopaque, permissionSpec: i32) bool {
        return qtc.QFile_SetPermissions(@ptrCast(self), @bitCast(permissionSpec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile, permissionSpec: flag of qfiledevice_enums.Permission) callconv(.c) bool `
    ///
    pub fn OnSetPermissions(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFile_OnSetPermissions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPermissions` instead
    ///
    pub const QBaseSetPermissions = SuperSetPermissions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` permissionSpec: flag of qfiledevice_enums.Permission `
    ///
    pub fn SuperSetPermissions(self: ?*anyopaque, permissionSpec: i32) bool {
        return qtc.QFile_SuperSetPermissions(@ptrCast(self), @bitCast(permissionSpec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: []const u8 `
    ///
    /// ` permissionSpec: flag of qfiledevice_enums.Permission `
    ///
    pub fn SetPermissions2(filename: []const u8, permissionSpec: i32) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QFile_SetPermissions2(filename_str, @bitCast(permissionSpec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` fd: i32 `
    ///
    /// ` ioFlags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` handleFlags: flag of qfiledevice_enums.FileHandleFlag `
    ///
    pub fn Open33(self: ?*anyopaque, fd: i32, ioFlags: i32, handleFlags: i32) bool {
        return qtc.QFile_Open33(@ptrCast(self), @bitCast(fd), @bitCast(ioFlags), @bitCast(handleFlags));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ## Returns:
    ///
    /// ` qfiledevice_enums.FileError `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QFileDevice_Error(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn UnsetError(self: ?*anyopaque) void {
        qtc.QFileDevice_UnsetError(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Handle(self: ?*anyopaque) i32 {
        return qtc.QFileDevice_Handle(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Flush(self: ?*anyopaque) bool {
        return qtc.QFileDevice_Flush(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` offset: i64 `
    ///
    /// ` size: i64 `
    ///
    pub fn Map(self: ?*anyopaque, offset: i64, size: i64) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map(@ptrCast(self), @bitCast(offset), @bitCast(size)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` address: *u8 `
    ///
    pub fn Unmap(self: ?*anyopaque, address: *u8) bool {
        return qtc.QFileDevice_Unmap(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` time: qfiledevice_enums.FileTime `
    ///
    pub fn FileTime(self: ?*anyopaque, time: i32) QtC.QDateTime {
        return qtc.QFileDevice_FileTime(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` newDate: QtC.QDateTime `
    ///
    /// ` fileTime: qfiledevice_enums.FileTime `
    ///
    pub fn SetFileTime(self: ?*anyopaque, newDate: ?*anyopaque, fileTime: i32) bool {
        return qtc.QFileDevice_SetFileTime(@ptrCast(self), @ptrCast(newDate), @bitCast(fileTime));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` offset: i64 `
    ///
    /// ` size: i64 `
    ///
    /// ` flags: flag of qfiledevice_enums.MemoryMapFlag `
    ///
    pub fn Map3(self: ?*anyopaque, offset: i64, size: i64, flags: i32) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map3(@ptrCast(self), @bitCast(offset), @bitCast(size), @bitCast(flags)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: ?*anyopaque) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Read2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn StartTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn CommitTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: ?*anyopaque, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: ?*anyopaque, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Peek2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: ?*anyopaque, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: ?*anyopaque, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: ?*anyopaque, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn ReadyRead(self: ?*anyopaque) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn AboutToClose(self: ?*anyopaque) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qfile.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfile.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Close(self: ?*anyopaque) void {
        qtc.QFile_Close(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperClose(self: ?*anyopaque) void {
        qtc.QFile_SuperClose(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QFile_OnClose(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn IsSequential(self: ?*anyopaque) bool {
        return qtc.QFile_IsSequential(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperIsSequential` instead
    ///
    pub const QBaseIsSequential = SuperIsSequential;

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperIsSequential(self: ?*anyopaque) bool {
        return qtc.QFile_SuperIsSequential(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QFile_OnIsSequential(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Pos(self: ?*anyopaque) i64 {
        return qtc.QFile_Pos(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperPos` instead
    ///
    pub const QBasePos = SuperPos;

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperPos(self: ?*anyopaque) i64 {
        return qtc.QFile_SuperPos(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QFile_OnPos(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` offset: i64 `
    ///
    pub fn Seek(self: ?*anyopaque, offset: i64) bool {
        return qtc.QFile_Seek(@ptrCast(self), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `SuperSeek` instead
    ///
    pub const QBaseSeek = SuperSeek;

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` offset: i64 `
    ///
    pub fn SuperSeek(self: ?*anyopaque, offset: i64) bool {
        return qtc.QFile_SuperSeek(@ptrCast(self), @bitCast(offset));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, offset: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QFile_OnSeek(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QFile_AtEnd(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperAtEnd` instead
    ///
    pub const QBaseAtEnd = SuperAtEnd;

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperAtEnd(self: ?*anyopaque) bool {
        return qtc.QFile_SuperAtEnd(@ptrCast(self));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QFile_OnAtEnd(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_ReadData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `SuperReadData` instead
    ///
    pub const QBaseReadData = SuperReadData;

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_SuperReadData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QFile_OnReadData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_WriteData(@ptrCast(self), data_Cstring, @bitCast(lenVal));
    }

    /// ### DEPRECATED: Use `SuperWriteData` instead
    ///
    pub const QBaseWriteData = SuperWriteData;

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn SuperWriteData(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_SuperWriteData(@ptrCast(self), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QFile_OnWriteData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_ReadLineData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `SuperReadLineData` instead
    ///
    pub const QBaseReadLineData = SuperReadLineData;

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadLineData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QFile_SuperReadLineData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QFile_OnReadLineData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Reset(self: ?*anyopaque) bool {
        return qtc.QFile_Reset(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperReset(self: ?*anyopaque) bool {
        return qtc.QFile_SuperReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QFile_OnReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QFile_BytesAvailable(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperBytesAvailable` instead
    ///
    pub const QBaseBytesAvailable = SuperBytesAvailable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperBytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QFile_SuperBytesAvailable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QFile_OnBytesAvailable(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QFile_BytesToWrite(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperBytesToWrite` instead
    ///
    pub const QBaseBytesToWrite = SuperBytesToWrite;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperBytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QFile_SuperBytesToWrite(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QFile_OnBytesToWrite(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return qtc.QFile_CanReadLine(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperCanReadLine` instead
    ///
    pub const QBaseCanReadLine = SuperCanReadLine;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperCanReadLine(self: ?*anyopaque) bool {
        return qtc.QFile_SuperCanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QFile_OnCanReadLine(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QFile_WaitForReadyRead(@ptrCast(self), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `SuperWaitForReadyRead` instead
    ///
    pub const QBaseWaitForReadyRead = SuperWaitForReadyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QFile_SuperWaitForReadyRead(@ptrCast(self), @bitCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFile_OnWaitForReadyRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QFile_WaitForBytesWritten(@ptrCast(self), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `SuperWaitForBytesWritten` instead
    ///
    pub const QBaseWaitForBytesWritten = SuperWaitForBytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QFile_SuperWaitForBytesWritten(@ptrCast(self), @bitCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QFile_OnWaitForBytesWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QFile_SkipData(@ptrCast(self), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `SuperSkipData` instead
    ///
    pub const QBaseSkipData = SuperSkipData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QFile_SuperSkipData(@ptrCast(self), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.QFile_OnSkipData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFile_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFile_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFile_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFile_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFile_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFile_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFile_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFile_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QFile_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFile_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFile_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFile_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFile_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFile_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QFile_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QFile_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.QFile_SetOpenMode(@ptrCast(self), @bitCast(openMode));
    }

    /// ### DEPRECATED: Use `SuperSetOpenMode` instead
    ///
    pub const QBaseSetOpenMode = SuperSetOpenMode;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.QFile_SuperSetOpenMode(@ptrCast(self), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFile_OnSetOpenMode(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QFile_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// ### DEPRECATED: Use `SuperSetErrorString` instead
    ///
    pub const QBaseSetErrorString = SuperSetErrorString;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QFile_SuperSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFile_OnSetErrorString(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QFile_Sender(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QFile_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QFile_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QFile_SenderSignalIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QFile_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QFile_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFile_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QFile_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QFile_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QFile_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QFile_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile`
    ///
    /// ` callback: *const fn (self: QtC.QFile, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QFile_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFile `
    ///
    /// ` callback: *const fn (self: QtC.QFile, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#dtor.QFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFile `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QFile_Delete(@ptrCast(self));
    }
};
