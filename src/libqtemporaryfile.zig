const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QFile = @import("libqt6").QFile;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qfiledevice_enums = @import("libqfiledevice.zig").enums;
const qiodevicebase_enums = @import("libqiodevicebase.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html)
pub const QTemporaryFile = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTemporaryFile,

    pub const _is_QTemporaryFile = {};
    pub const _is_QFile = {};
    pub const _is_QFileDevice = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// New constructs a new QTemporaryFile object.
    ///
    pub fn New() QTemporaryFile {
        return .{ .ptr = qtc.QTemporaryFile_new() };
    }

    /// New2 constructs a new QTemporaryFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` templateName: []const u8 `
    ///
    pub fn New2(templateName: []const u8) QTemporaryFile {
        const templateName_str = qtc.libqt_string{
            .len = templateName.len,
            .data = templateName.ptr,
        };
        return .{ .ptr = qtc.QTemporaryFile_new2(templateName_str) };
    }

    /// New3 constructs a new QTemporaryFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QTemporaryFile {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QTemporaryFile_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QTemporaryFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` templateName: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(templateName: []const u8, parent: anytype) QTemporaryFile {
        const templateName_str = qtc.libqt_string{
            .len = templateName.len,
            .data = templateName.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QTemporaryFile_new4(templateName_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn MetaObject(self: QTemporaryFile) QMetaObject {
        return .{ .ptr = qtc.QTemporaryFile_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QTemporaryFile, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTemporaryFile_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperMetaObject(self: QTemporaryFile) QMetaObject {
        return .{ .ptr = qtc.QTemporaryFile_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTemporaryFile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTemporaryFile_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QTemporaryFile, callback: *const fn (QTemporaryFile, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTemporaryFile_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QTemporaryFile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTemporaryFile_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QTemporaryFile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTemporaryFile_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTemporaryFile_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QTemporaryFile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTemporaryFile_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#autoRemove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn AutoRemove(self: QTemporaryFile) bool {
        return qtc.QTemporaryFile_AutoRemove(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#setAutoRemove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` b: bool `
    ///
    pub fn SetAutoRemove(self: QTemporaryFile, b: bool) void {
        qtc.QTemporaryFile_SetAutoRemove(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Open(self: QTemporaryFile) bool {
        return qtc.QTemporaryFile_Open(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: QTemporaryFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTemporaryFile_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#fileName)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnFileName(self: QTemporaryFile, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTemporaryFile_OnFileName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFileName` instead
    ///
    pub const QBaseFileName = SuperFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#fileName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperFileName(self: QTemporaryFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTemporaryFile_SuperFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#fileTemplate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileTemplate(self: QTemporaryFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTemporaryFile_FileTemplate(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.FileTemplate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#setFileTemplate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetFileTemplate(self: QTemporaryFile, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTemporaryFile_SetFileTemplate(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#rename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn Rename(self: QTemporaryFile, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QTemporaryFile_Rename(@ptrCast(self.ptr), newName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#createNativeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn CreateNativeFile(fileName: []const u8) QTemporaryFile {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QTemporaryFile_CreateNativeFile(fileName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#createNativeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` file: QFile `
    ///
    pub fn CreateNativeFile2(file: anytype) QTemporaryFile {
        comptime _ = @TypeOf(file)._is_QFile;
        return .{ .ptr = qtc.QTemporaryFile_CreateNativeFile2(@ptrCast(file.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` flags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open2(self: QTemporaryFile, flags: i32) bool {
        return qtc.QTemporaryFile_Open2(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile, flags: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen2(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i32) callconv(.c) bool) void {
        qtc.QTemporaryFile_OnOpen2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpen2` instead
    ///
    pub const QBaseOpen2 = SuperOpen2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#open)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` flags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen2(self: QTemporaryFile, flags: i32) bool {
        return qtc.QTemporaryFile_SuperOpen2(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetFileName(self: QTemporaryFile, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QFile_SetFileName(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#encodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn EncodeName(allocator: std.mem.Allocator, fileName: []const u8) []u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QFile_EncodeName(fileName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtemporaryfile.EncodeName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#decodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` localFileName: []u8 `
    ///
    pub fn DecodeName(allocator: std.mem.Allocator, localFileName: []u8) []const u8 {
        const localFileName_str = qtc.libqt_string{
            .len = localFileName.len,
            .data = localFileName.ptr,
        };
        var _str = qtc.QFile_DecodeName(localFileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.DecodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#decodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` localFileName: [:0]const u8 `
    ///
    pub fn DecodeName2(allocator: std.mem.Allocator, localFileName: [:0]const u8) []const u8 {
        const localFileName_Cstring = localFileName.ptr;
        var _str = qtc.QFile_DecodeName2(localFileName_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.DecodeName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Exists(self: QTemporaryFile) bool {
        return qtc.QFile_Exists(@ptrCast(self.ptr));
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: QTemporaryFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFile_SymLinkTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.SymLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SymLinkTarget2(allocator: std.mem.Allocator, fileName: []const u8) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QFile_SymLinkTarget2(fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.SymLinkTarget2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Remove(self: QTemporaryFile) bool {
        return qtc.QFile_Remove(@ptrCast(self.ptr));
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn MoveToTrash(self: QTemporaryFile) bool {
        return qtc.QFile_MoveToTrash(@ptrCast(self.ptr));
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn Link(self: QTemporaryFile, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Link(@ptrCast(self.ptr), newName_str);
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn Copy(self: QTemporaryFile, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Copy(@ptrCast(self.ptr), newName_str);
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` fd: i32 `
    ///
    /// ` ioFlags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open4(self: QTemporaryFile, fd: i32, ioFlags: i32) bool {
        return qtc.QFile_Open4(@ptrCast(self.ptr), @bitCast(fd), @bitCast(ioFlags));
    }

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
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

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` fd: i32 `
    ///
    /// ` ioFlags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` handleFlags: flag of qfiledevice_enums.FileHandleFlag `
    ///
    pub fn Open33(self: QTemporaryFile, fd: i32, ioFlags: i32, handleFlags: i32) bool {
        return qtc.QFile_Open33(@ptrCast(self.ptr), @bitCast(fd), @bitCast(ioFlags), @bitCast(handleFlags));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ## Returns:
    ///
    /// ` qfiledevice_enums.FileError `
    ///
    pub fn Error(self: QTemporaryFile) i32 {
        return qtc.QFileDevice_Error(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn UnsetError(self: QTemporaryFile) void {
        qtc.QFileDevice_UnsetError(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Handle(self: QTemporaryFile) i32 {
        return qtc.QFileDevice_Handle(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Flush(self: QTemporaryFile) bool {
        return qtc.QFileDevice_Flush(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` offset: i64 `
    ///
    /// ` size: i64 `
    ///
    pub fn Map(self: QTemporaryFile, offset: i64, size: i64) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map(@ptrCast(self.ptr), @bitCast(offset), @bitCast(size)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` address: *u8 `
    ///
    pub fn Unmap(self: QTemporaryFile, address: *u8) bool {
        return qtc.QFileDevice_Unmap(@ptrCast(self.ptr), @ptrCast(address));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` time: qfiledevice_enums.FileTime `
    ///
    pub fn FileTime(self: QTemporaryFile, time: i32) QDateTime {
        return .{ .ptr = qtc.QFileDevice_FileTime(@ptrCast(self.ptr), @bitCast(time)) };
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` newDate: QDateTime `
    ///
    /// ` fileTime: qfiledevice_enums.FileTime `
    ///
    pub fn SetFileTime(self: QTemporaryFile, newDate: anytype, fileTime: i32) bool {
        comptime _ = @TypeOf(newDate)._is_QDateTime;
        return qtc.QFileDevice_SetFileTime(@ptrCast(self.ptr), @ptrCast(newDate.ptr), @bitCast(fileTime));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` offset: i64 `
    ///
    /// ` size: i64 `
    ///
    /// ` flags: flag of qfiledevice_enums.MemoryMapFlag `
    ///
    pub fn Map3(self: QTemporaryFile, offset: i64, size: i64, flags: i32) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map3(@ptrCast(self.ptr), @bitCast(offset), @bitCast(size), @bitCast(flags)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: QTemporaryFile) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: QTemporaryFile, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn IsTextModeEnabled(self: QTemporaryFile) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn IsOpen(self: QTemporaryFile) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn IsReadable(self: QTemporaryFile) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn IsWritable(self: QTemporaryFile) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn ReadChannelCount(self: QTemporaryFile) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn WriteChannelCount(self: QTemporaryFile) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn CurrentReadChannel(self: QTemporaryFile) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: QTemporaryFile, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn CurrentWriteChannel(self: QTemporaryFile) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: QTemporaryFile, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: QTemporaryFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read2(self: QTemporaryFile, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtemporaryfile.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: QTemporaryFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtemporaryfile.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: QTemporaryFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: QTemporaryFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtemporaryfile.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn StartTransaction(self: QTemporaryFile) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn CommitTransaction(self: QTemporaryFile) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn RollbackTransaction(self: QTemporaryFile) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn IsTransactionStarted(self: QTemporaryFile) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: QTemporaryFile, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: QTemporaryFile, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: QTemporaryFile, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: QTemporaryFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek2(self: QTemporaryFile, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtemporaryfile.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: QTemporaryFile, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: QTemporaryFile, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: QTemporaryFile, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: QTemporaryFile, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QTemporaryFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn ReadyRead(self: QTemporaryFile) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: QTemporaryFile, callback: *const fn (QTemporaryFile) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: QTemporaryFile, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: QTemporaryFile, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: QTemporaryFile, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn AboutToClose(self: QTemporaryFile) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: QTemporaryFile, callback: *const fn (QTemporaryFile) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn ReadChannelFinished(self: QTemporaryFile) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: QTemporaryFile, callback: *const fn (QTemporaryFile) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine1(self: QTemporaryFile, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtemporaryfile.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QTemporaryFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtemporaryfile.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QTemporaryFile, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn IsWidgetType(self: QTemporaryFile) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn IsWindowType(self: QTemporaryFile) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn IsQuickItemType(self: QTemporaryFile) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn SignalsBlocked(self: QTemporaryFile) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QTemporaryFile, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Thread(self: QTemporaryFile) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTemporaryFile, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QTemporaryFile, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QTemporaryFile, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QTemporaryFile, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QTemporaryFile, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QTemporaryFile, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtemporaryfile.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QTemporaryFile, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QTemporaryFile, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QTemporaryFile, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTemporaryFile, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Disconnect3(self: QTemporaryFile) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QTemporaryFile, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn DumpObjectTree(self: QTemporaryFile) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn DumpObjectInfo(self: QTemporaryFile) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTemporaryFile, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTemporaryFile, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QTemporaryFile, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtemporaryfile.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtemporaryfile.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTemporaryFile `
    ///
    pub fn BindingStorage(self: QTemporaryFile) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn BindingStorage2(self: QTemporaryFile) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Destroyed(self: QTemporaryFile) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QTemporaryFile, callback: *const fn (QTemporaryFile) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Parent(self: QTemporaryFile) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QTemporaryFile, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn DeleteLater(self: QTemporaryFile) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QTemporaryFile, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QTemporaryFile, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTemporaryFile, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTemporaryFile, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QTemporaryFile, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTemporaryFile, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTemporaryFile, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTemporaryFile, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QTemporaryFile, callback: *const fn (QTemporaryFile, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Size(self: QTemporaryFile) i64 {
        return qtc.QTemporaryFile_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSize` instead
    ///
    pub const QBaseSize = SuperSize;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperSize(self: QTemporaryFile) i64 {
        return qtc.QTemporaryFile_SuperSize(@ptrCast(self.ptr));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: QTemporaryFile, callback: *const fn () callconv(.c) i64) void {
        qtc.QTemporaryFile_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` sz: i64 `
    ///
    pub fn Resize(self: QTemporaryFile, sz: i64) bool {
        return qtc.QTemporaryFile_Resize(@ptrCast(self.ptr), @bitCast(sz));
    }

    /// ### DEPRECATED: Use `SuperResize` instead
    ///
    pub const QBaseResize = SuperResize;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` sz: i64 `
    ///
    pub fn SuperResize(self: QTemporaryFile, sz: i64) bool {
        return qtc.QTemporaryFile_SuperResize(@ptrCast(self.ptr), @bitCast(sz));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, sz: i64) callconv(.c) bool `
    ///
    pub fn OnResize(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i64) callconv(.c) bool) void {
        qtc.QTemporaryFile_OnResize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of qfiledevice_enums.Permission `
    ///
    pub fn Permissions(self: QTemporaryFile) i32 {
        return qtc.QTemporaryFile_Permissions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperPermissions` instead
    ///
    pub const QBasePermissions = SuperPermissions;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of qfiledevice_enums.Permission `
    ///
    pub fn SuperPermissions(self: QTemporaryFile) i32 {
        return qtc.QTemporaryFile_SuperPermissions(@ptrCast(self.ptr));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPermissions(self: QTemporaryFile, callback: *const fn () callconv(.c) i32) void {
        qtc.QTemporaryFile_OnPermissions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` permissionSpec: flag of qfiledevice_enums.Permission `
    ///
    pub fn SetPermissions(self: QTemporaryFile, permissionSpec: i32) bool {
        return qtc.QTemporaryFile_SetPermissions(@ptrCast(self.ptr), @bitCast(permissionSpec));
    }

    /// ### DEPRECATED: Use `SuperSetPermissions` instead
    ///
    pub const QBaseSetPermissions = SuperSetPermissions;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` permissionSpec: flag of qfiledevice_enums.Permission `
    ///
    pub fn SuperSetPermissions(self: QTemporaryFile, permissionSpec: i32) bool {
        return qtc.QTemporaryFile_SuperSetPermissions(@ptrCast(self.ptr), @bitCast(permissionSpec));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, permissionSpec: flag of qfiledevice_enums.Permission) callconv(.c) bool `
    ///
    pub fn OnSetPermissions(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i32) callconv(.c) bool) void {
        qtc.QTemporaryFile_OnSetPermissions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Close(self: QTemporaryFile) void {
        qtc.QTemporaryFile_Close(@ptrCast(self.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperClose(self: QTemporaryFile) void {
        qtc.QTemporaryFile_SuperClose(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: QTemporaryFile, callback: *const fn () callconv(.c) void) void {
        qtc.QTemporaryFile_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn IsSequential(self: QTemporaryFile) bool {
        return qtc.QTemporaryFile_IsSequential(@ptrCast(self.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperIsSequential(self: QTemporaryFile) bool {
        return qtc.QTemporaryFile_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: QTemporaryFile, callback: *const fn () callconv(.c) bool) void {
        qtc.QTemporaryFile_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Pos(self: QTemporaryFile) i64 {
        return qtc.QTemporaryFile_Pos(@ptrCast(self.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperPos(self: QTemporaryFile) i64 {
        return qtc.QTemporaryFile_SuperPos(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: QTemporaryFile, callback: *const fn () callconv(.c) i64) void {
        qtc.QTemporaryFile_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` offset: i64 `
    ///
    pub fn Seek(self: QTemporaryFile, offset: i64) bool {
        return qtc.QTemporaryFile_Seek(@ptrCast(self.ptr), @bitCast(offset));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` offset: i64 `
    ///
    pub fn SuperSeek(self: QTemporaryFile, offset: i64) bool {
        return qtc.QTemporaryFile_SuperSeek(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, offset: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i64) callconv(.c) bool) void {
        qtc.QTemporaryFile_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn AtEnd(self: QTemporaryFile) bool {
        return qtc.QTemporaryFile_AtEnd(@ptrCast(self.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperAtEnd(self: QTemporaryFile) bool {
        return qtc.QTemporaryFile_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: QTemporaryFile, callback: *const fn () callconv(.c) bool) void {
        qtc.QTemporaryFile_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadData(self: QTemporaryFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTemporaryFile_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadData(self: QTemporaryFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTemporaryFile_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: QTemporaryFile, callback: *const fn (QTemporaryFile, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QTemporaryFile_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: QTemporaryFile, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTemporaryFile_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn SuperWriteData(self: QTemporaryFile, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTemporaryFile_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: QTemporaryFile, callback: *const fn (QTemporaryFile, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QTemporaryFile_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: QTemporaryFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTemporaryFile_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadLineData(self: QTemporaryFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTemporaryFile_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: QTemporaryFile, callback: *const fn (QTemporaryFile, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QTemporaryFile_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Reset(self: QTemporaryFile) bool {
        return qtc.QTemporaryFile_Reset(@ptrCast(self.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperReset(self: QTemporaryFile) bool {
        return qtc.QTemporaryFile_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: QTemporaryFile, callback: *const fn () callconv(.c) bool) void {
        qtc.QTemporaryFile_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn BytesAvailable(self: QTemporaryFile) i64 {
        return qtc.QTemporaryFile_BytesAvailable(@ptrCast(self.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperBytesAvailable(self: QTemporaryFile) i64 {
        return qtc.QTemporaryFile_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: QTemporaryFile, callback: *const fn () callconv(.c) i64) void {
        qtc.QTemporaryFile_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn BytesToWrite(self: QTemporaryFile) i64 {
        return qtc.QTemporaryFile_BytesToWrite(@ptrCast(self.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperBytesToWrite(self: QTemporaryFile) i64 {
        return qtc.QTemporaryFile_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: QTemporaryFile, callback: *const fn () callconv(.c) i64) void {
        qtc.QTemporaryFile_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn CanReadLine(self: QTemporaryFile) bool {
        return qtc.QTemporaryFile_CanReadLine(@ptrCast(self.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperCanReadLine(self: QTemporaryFile) bool {
        return qtc.QTemporaryFile_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: QTemporaryFile, callback: *const fn () callconv(.c) bool) void {
        qtc.QTemporaryFile_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: QTemporaryFile, msecs: i32) bool {
        return qtc.QTemporaryFile_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForReadyRead(self: QTemporaryFile, msecs: i32) bool {
        return qtc.QTemporaryFile_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i32) callconv(.c) bool) void {
        qtc.QTemporaryFile_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: QTemporaryFile, msecs: i32) bool {
        return qtc.QTemporaryFile_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForBytesWritten(self: QTemporaryFile, msecs: i32) bool {
        return qtc.QTemporaryFile_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i32) callconv(.c) bool) void {
        qtc.QTemporaryFile_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: QTemporaryFile, maxSize: i64) i64 {
        return qtc.QTemporaryFile_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperSkipData(self: QTemporaryFile, maxSize: i64) i64 {
        return qtc.QTemporaryFile_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i64) callconv(.c) i64) void {
        qtc.QTemporaryFile_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QTemporaryFile, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTemporaryFile_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QTemporaryFile, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTemporaryFile_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QTemporaryFile, callback: *const fn (QTemporaryFile, QEvent) callconv(.c) bool) void {
        qtc.QTemporaryFile_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTemporaryFile, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTemporaryFile_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QTemporaryFile, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTemporaryFile_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QTemporaryFile, callback: *const fn (QTemporaryFile, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTemporaryFile_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QTemporaryFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTemporaryFile_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QTemporaryFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTemporaryFile_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QTemporaryFile, callback: *const fn (QTemporaryFile, QTimerEvent) callconv(.c) void) void {
        qtc.QTemporaryFile_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QTemporaryFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTemporaryFile_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QTemporaryFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTemporaryFile_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QTemporaryFile, callback: *const fn (QTemporaryFile, QChildEvent) callconv(.c) void) void {
        qtc.QTemporaryFile_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QTemporaryFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTemporaryFile_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QTemporaryFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTemporaryFile_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QTemporaryFile, callback: *const fn (QTemporaryFile, QEvent) callconv(.c) void) void {
        qtc.QTemporaryFile_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QTemporaryFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTemporaryFile_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QTemporaryFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTemporaryFile_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QTemporaryFile, callback: *const fn (QTemporaryFile, QMetaMethod) callconv(.c) void) void {
        qtc.QTemporaryFile_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QTemporaryFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTemporaryFile_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QTemporaryFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTemporaryFile_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QTemporaryFile, callback: *const fn (QTemporaryFile, QMetaMethod) callconv(.c) void) void {
        qtc.QTemporaryFile_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: QTemporaryFile, openMode: i32) void {
        qtc.QTemporaryFile_SetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: QTemporaryFile, openMode: i32) void {
        qtc.QTemporaryFile_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: QTemporaryFile, callback: *const fn (QTemporaryFile, i32) callconv(.c) void) void {
        qtc.QTemporaryFile_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: QTemporaryFile, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QTemporaryFile_SetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: QTemporaryFile `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: QTemporaryFile, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QTemporaryFile_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: QTemporaryFile, callback: *const fn (QTemporaryFile, [*:0]const u8) callconv(.c) void) void {
        qtc.QTemporaryFile_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Sender(self: QTemporaryFile) QObject {
        return .{ .ptr = qtc.QTemporaryFile_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperSender(self: QTemporaryFile) QObject {
        return .{ .ptr = qtc.QTemporaryFile_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QTemporaryFile, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTemporaryFile_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn SenderSignalIndex(self: QTemporaryFile) i32 {
        return qtc.QTemporaryFile_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    pub fn SuperSenderSignalIndex(self: QTemporaryFile) i32 {
        return qtc.QTemporaryFile_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QTemporaryFile, callback: *const fn () callconv(.c) i32) void {
        qtc.QTemporaryFile_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QTemporaryFile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTemporaryFile_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTemporaryFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QTemporaryFile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTemporaryFile_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QTemporaryFile, callback: *const fn (QTemporaryFile, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTemporaryFile_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QTemporaryFile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTemporaryFile_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTemporaryFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QTemporaryFile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTemporaryFile_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile`
    ///
    /// ` callback: *const fn (self: QTemporaryFile, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QTemporaryFile, callback: *const fn (QTemporaryFile, QMetaMethod) callconv(.c) bool) void {
        qtc.QTemporaryFile_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QTemporaryFile `
    ///
    /// ` callback: *const fn (self: QTemporaryFile, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QTemporaryFile, callback: *const fn (QTemporaryFile, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtemporaryfile.html#dtor.QTemporaryFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTemporaryFile `
    ///
    pub fn Delete(self: QTemporaryFile) void {
        qtc.QTemporaryFile_Delete(@ptrCast(self.ptr));
    }
};
