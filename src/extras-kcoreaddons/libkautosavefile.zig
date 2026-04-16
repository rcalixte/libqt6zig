const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qfiledevice_enums = @import("../libqfiledevice.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kautosavefile.html)
pub const KAutoSaveFile = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KAutoSaveFile,

    pub const _is_KAutoSaveFile = {};
    pub const _is_QFile = {};
    pub const _is_QFileDevice = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// New constructs a new KAutoSaveFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: QUrl `
    ///
    pub fn New(filename: anytype) KAutoSaveFile {
        comptime _ = @TypeOf(filename)._is_QUrl;
        return .{ .ptr = qtc.KAutoSaveFile_new(@ptrCast(filename.ptr)) };
    }

    /// New2 constructs a new KAutoSaveFile object.
    ///
    pub fn New2() KAutoSaveFile {
        return .{ .ptr = qtc.KAutoSaveFile_new2() };
    }

    /// New3 constructs a new KAutoSaveFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: QUrl `
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(filename: anytype, parent: anytype) KAutoSaveFile {
        comptime _ = @TypeOf(filename)._is_QUrl;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KAutoSaveFile_new3(@ptrCast(filename.ptr), @ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new KAutoSaveFile object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(parent: anytype) KAutoSaveFile {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KAutoSaveFile_new4(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn MetaObject(self: KAutoSaveFile) QMetaObject {
        return .{ .ptr = qtc.KAutoSaveFile_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KAutoSaveFile, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KAutoSaveFile_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperMetaObject(self: KAutoSaveFile) QMetaObject {
        return .{ .ptr = qtc.KAutoSaveFile_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KAutoSaveFile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KAutoSaveFile_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KAutoSaveFile_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KAutoSaveFile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KAutoSaveFile_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KAutoSaveFile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KAutoSaveFile_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KAutoSaveFile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KAutoSaveFile_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#managedFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn ManagedFile(self: KAutoSaveFile) QUrl {
        return .{ .ptr = qtc.KAutoSaveFile_ManagedFile(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#setManagedFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` filename: QUrl `
    ///
    pub fn SetManagedFile(self: KAutoSaveFile, filename: anytype) void {
        comptime _ = @TypeOf(filename)._is_QUrl;
        qtc.KAutoSaveFile_SetManagedFile(@ptrCast(self.ptr), @ptrCast(filename.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#releaseLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn ReleaseLock(self: KAutoSaveFile) void {
        qtc.KAutoSaveFile_ReleaseLock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#releaseLock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReleaseLock(self: KAutoSaveFile, callback: *const fn () callconv(.c) void) void {
        qtc.KAutoSaveFile_OnReleaseLock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReleaseLock` instead
    ///
    pub const QBaseReleaseLock = SuperReleaseLock;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#releaseLock)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperReleaseLock(self: KAutoSaveFile) void {
        qtc.KAutoSaveFile_SuperReleaseLock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` openmode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: KAutoSaveFile, openmode: i32) bool {
        return qtc.KAutoSaveFile_Open(@ptrCast(self.ptr), @bitCast(openmode));
    }

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, openmode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#open)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` openmode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: KAutoSaveFile, openmode: i32) bool {
        return qtc.KAutoSaveFile_SuperOpen(@ptrCast(self.ptr), @bitCast(openmode));
    }

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#staleFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn StaleFiles(allocator: std.mem.Allocator, url: anytype) []KAutoSaveFile {
        comptime _ = @TypeOf(url)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_StaleFiles(@ptrCast(url.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAutoSaveFile, _arr.len) catch @panic("kautosavefile.StaleFiles: Memory allocation failed");
        const _data: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#allStaleFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AllStaleFiles(allocator: std.mem.Allocator) []KAutoSaveFile {
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_AllStaleFiles();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAutoSaveFile, _arr.len) catch @panic("kautosavefile.AllStaleFiles: Memory allocation failed");
        const _data: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#staleFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    /// ` applicationName: []const u8 `
    ///
    pub fn StaleFiles2(allocator: std.mem.Allocator, url: anytype, applicationName: []const u8) []KAutoSaveFile {
        comptime _ = @TypeOf(url)._is_QUrl;
        const applicationName_str = qtc.libqt_string{
            .len = applicationName.len,
            .data = applicationName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_StaleFiles2(@ptrCast(url.ptr), applicationName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAutoSaveFile, _arr.len) catch @panic("kautosavefile.StaleFiles2: Memory allocation failed");
        const _data: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#allStaleFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` applicationName: []const u8 `
    ///
    pub fn AllStaleFiles1(allocator: std.mem.Allocator, applicationName: []const u8) []KAutoSaveFile {
        const applicationName_str = qtc.libqt_string{
            .len = applicationName.len,
            .data = applicationName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_AllStaleFiles1(applicationName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAutoSaveFile, _arr.len) catch @panic("kautosavefile.AllStaleFiles1: Memory allocation failed");
        const _data: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetFileName(self: KAutoSaveFile, name: []const u8) void {
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
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.EncodeName: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.DecodeName: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.DecodeName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Exists(self: KAutoSaveFile) bool {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SymLinkTarget(self: KAutoSaveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFile_SymLinkTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.SymLinkTarget: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.SymLinkTarget2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Remove(self: KAutoSaveFile) bool {
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn MoveToTrash(self: KAutoSaveFile) bool {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn Rename(self: KAutoSaveFile, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Rename(@ptrCast(self.ptr), newName_str);
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn Link(self: KAutoSaveFile, newName: []const u8) bool {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn Copy(self: KAutoSaveFile, newName: []const u8) bool {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` flags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` permissions: flag of qfiledevice_enums.Permission `
    ///
    pub fn Open2(self: KAutoSaveFile, flags: i32, permissions: i32) bool {
        return qtc.QFile_Open2(@ptrCast(self.ptr), @bitCast(flags), @bitCast(permissions));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` fd: i32 `
    ///
    /// ` ioFlags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open4(self: KAutoSaveFile, fd: i32, ioFlags: i32) bool {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` fd: i32 `
    ///
    /// ` ioFlags: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` handleFlags: flag of qfiledevice_enums.FileHandleFlag `
    ///
    pub fn Open33(self: KAutoSaveFile, fd: i32, ioFlags: i32, handleFlags: i32) bool {
        return qtc.QFile_Open33(@ptrCast(self.ptr), @bitCast(fd), @bitCast(ioFlags), @bitCast(handleFlags));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ## Returns:
    ///
    /// ` qfiledevice_enums.FileError `
    ///
    pub fn Error(self: KAutoSaveFile) i32 {
        return qtc.QFileDevice_Error(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn UnsetError(self: KAutoSaveFile) void {
        qtc.QFileDevice_UnsetError(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Handle(self: KAutoSaveFile) i32 {
        return qtc.QFileDevice_Handle(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Flush(self: KAutoSaveFile) bool {
        return qtc.QFileDevice_Flush(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` offset: i64 `
    ///
    /// ` size: i64 `
    ///
    pub fn Map(self: KAutoSaveFile, offset: i64, size: i64) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map(@ptrCast(self.ptr), @bitCast(offset), @bitCast(size)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` address: *u8 `
    ///
    pub fn Unmap(self: KAutoSaveFile, address: *u8) bool {
        return qtc.QFileDevice_Unmap(@ptrCast(self.ptr), @ptrCast(address));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#fileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` time: qfiledevice_enums.FileTime `
    ///
    pub fn FileTime(self: KAutoSaveFile, time: i32) QDateTime {
        return .{ .ptr = qtc.QFileDevice_FileTime(@ptrCast(self.ptr), @bitCast(time)) };
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#setFileTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` newDate: QDateTime `
    ///
    /// ` fileTime: qfiledevice_enums.FileTime `
    ///
    pub fn SetFileTime(self: KAutoSaveFile, newDate: anytype, fileTime: i32) bool {
        comptime _ = @TypeOf(newDate)._is_QDateTime;
        return qtc.QFileDevice_SetFileTime(@ptrCast(self.ptr), @ptrCast(newDate.ptr), @bitCast(fileTime));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#map)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` offset: i64 `
    ///
    /// ` size: i64 `
    ///
    /// ` flags: flag of qfiledevice_enums.MemoryMapFlag `
    ///
    pub fn Map3(self: KAutoSaveFile, offset: i64, size: i64, flags: i32) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map3(@ptrCast(self.ptr), @bitCast(offset), @bitCast(size), @bitCast(flags)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: KAutoSaveFile) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: KAutoSaveFile, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn IsTextModeEnabled(self: KAutoSaveFile) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn IsOpen(self: KAutoSaveFile) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn IsReadable(self: KAutoSaveFile) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn IsWritable(self: KAutoSaveFile) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn ReadChannelCount(self: KAutoSaveFile) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn WriteChannelCount(self: KAutoSaveFile) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn CurrentReadChannel(self: KAutoSaveFile) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: KAutoSaveFile, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn CurrentWriteChannel(self: KAutoSaveFile) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: KAutoSaveFile, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read2(self: KAutoSaveFile, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: KAutoSaveFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: KAutoSaveFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn StartTransaction(self: KAutoSaveFile) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn CommitTransaction(self: KAutoSaveFile) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn RollbackTransaction(self: KAutoSaveFile) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn IsTransactionStarted(self: KAutoSaveFile) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: KAutoSaveFile, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: KAutoSaveFile, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: KAutoSaveFile, data: []u8) i64 {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek2(self: KAutoSaveFile, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: KAutoSaveFile, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: KAutoSaveFile, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: KAutoSaveFile, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: KAutoSaveFile, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: KAutoSaveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn ReadyRead(self: KAutoSaveFile) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: KAutoSaveFile, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: KAutoSaveFile, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: KAutoSaveFile, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn AboutToClose(self: KAutoSaveFile) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn ReadChannelFinished(self: KAutoSaveFile) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine1(self: KAutoSaveFile, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kautosavefile.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KAutoSaveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KAutoSaveFile, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn IsWidgetType(self: KAutoSaveFile) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn IsWindowType(self: KAutoSaveFile) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn IsQuickItemType(self: KAutoSaveFile) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn SignalsBlocked(self: KAutoSaveFile) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KAutoSaveFile, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Thread(self: KAutoSaveFile) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KAutoSaveFile, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KAutoSaveFile, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KAutoSaveFile, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KAutoSaveFile, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KAutoSaveFile, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KAutoSaveFile, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kautosavefile.Children: Memory allocation failed");
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KAutoSaveFile, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KAutoSaveFile, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KAutoSaveFile, obj: anytype) void {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KAutoSaveFile, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn Disconnect3(self: KAutoSaveFile) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KAutoSaveFile, receiver: anytype) bool {
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn DumpObjectTree(self: KAutoSaveFile) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn DumpObjectInfo(self: KAutoSaveFile) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KAutoSaveFile, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KAutoSaveFile, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KAutoSaveFile, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn BindingStorage(self: KAutoSaveFile) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn BindingStorage2(self: KAutoSaveFile) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Destroyed(self: KAutoSaveFile) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Parent(self: KAutoSaveFile) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KAutoSaveFile, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn DeleteLater(self: KAutoSaveFile) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KAutoSaveFile, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KAutoSaveFile, time: i64, timerType: i32) i32 {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KAutoSaveFile, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KAutoSaveFile, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KAutoSaveFile, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KAutoSaveFile, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KAutoSaveFile, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KAutoSaveFile, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FileName(self: KAutoSaveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAutoSaveFile_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperFileName` instead
    ///
    pub const QBaseFileName = SuperFileName;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperFileName(self: KAutoSaveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAutoSaveFile_SuperFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kautosavefile.FileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnFileName(self: KAutoSaveFile, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KAutoSaveFile_OnFileName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Size(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_Size(@ptrCast(self.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperSize(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_SuperSize(@ptrCast(self.ptr));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: KAutoSaveFile, callback: *const fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` sz: i64 `
    ///
    pub fn Resize(self: KAutoSaveFile, sz: i64) bool {
        return qtc.KAutoSaveFile_Resize(@ptrCast(self.ptr), @bitCast(sz));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` sz: i64 `
    ///
    pub fn SuperResize(self: KAutoSaveFile, sz: i64) bool {
        return qtc.KAutoSaveFile_SuperResize(@ptrCast(self.ptr), @bitCast(sz));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#resize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, sz: i64) callconv(.c) bool `
    ///
    pub fn OnResize(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i64) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnResize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of qfiledevice_enums.Permission `
    ///
    pub fn Permissions(self: KAutoSaveFile) i32 {
        return qtc.KAutoSaveFile_Permissions(@ptrCast(self.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ## Returns:
    ///
    /// ` flag of qfiledevice_enums.Permission `
    ///
    pub fn SuperPermissions(self: KAutoSaveFile) i32 {
        return qtc.KAutoSaveFile_SuperPermissions(@ptrCast(self.ptr));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#permissions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPermissions(self: KAutoSaveFile, callback: *const fn () callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnPermissions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` permissionSpec: flag of qfiledevice_enums.Permission `
    ///
    pub fn SetPermissions(self: KAutoSaveFile, permissionSpec: i32) bool {
        return qtc.KAutoSaveFile_SetPermissions(@ptrCast(self.ptr), @bitCast(permissionSpec));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` permissionSpec: flag of qfiledevice_enums.Permission `
    ///
    pub fn SuperSetPermissions(self: KAutoSaveFile, permissionSpec: i32) bool {
        return qtc.KAutoSaveFile_SuperSetPermissions(@ptrCast(self.ptr), @bitCast(permissionSpec));
    }

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#setPermissions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, permissionSpec: flag of qfiledevice_enums.Permission) callconv(.c) bool `
    ///
    pub fn OnSetPermissions(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnSetPermissions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Close(self: KAutoSaveFile) void {
        qtc.KAutoSaveFile_Close(@ptrCast(self.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperClose(self: KAutoSaveFile) void {
        qtc.KAutoSaveFile_SuperClose(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: KAutoSaveFile, callback: *const fn () callconv(.c) void) void {
        qtc.KAutoSaveFile_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn IsSequential(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_IsSequential(@ptrCast(self.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperIsSequential(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: KAutoSaveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Pos(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_Pos(@ptrCast(self.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperPos(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_SuperPos(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: KAutoSaveFile, callback: *const fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` offset: i64 `
    ///
    pub fn Seek(self: KAutoSaveFile, offset: i64) bool {
        return qtc.KAutoSaveFile_Seek(@ptrCast(self.ptr), @bitCast(offset));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` offset: i64 `
    ///
    pub fn SuperSeek(self: KAutoSaveFile, offset: i64) bool {
        return qtc.KAutoSaveFile_SuperSeek(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, offset: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i64) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn AtEnd(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_AtEnd(@ptrCast(self.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperAtEnd(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: KAutoSaveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadData(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadData(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: KAutoSaveFile, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn SuperWriteData(self: KAutoSaveFile, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#writeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadLineData(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Reset(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_Reset(@ptrCast(self.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperReset(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: KAutoSaveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn BytesAvailable(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_BytesAvailable(@ptrCast(self.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperBytesAvailable(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: KAutoSaveFile, callback: *const fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn BytesToWrite(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_BytesToWrite(@ptrCast(self.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperBytesToWrite(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: KAutoSaveFile, callback: *const fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn CanReadLine(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_CanReadLine(@ptrCast(self.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperCanReadLine(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: KAutoSaveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: KAutoSaveFile, msecs: i32) bool {
        return qtc.KAutoSaveFile_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForReadyRead(self: KAutoSaveFile, msecs: i32) bool {
        return qtc.KAutoSaveFile_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: KAutoSaveFile, msecs: i32) bool {
        return qtc.KAutoSaveFile_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForBytesWritten(self: KAutoSaveFile, msecs: i32) bool {
        return qtc.KAutoSaveFile_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: KAutoSaveFile, maxSize: i64) i64 {
        return qtc.KAutoSaveFile_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperSkipData(self: KAutoSaveFile, maxSize: i64) i64 {
        return qtc.KAutoSaveFile_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KAutoSaveFile, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KAutoSaveFile_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KAutoSaveFile, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KAutoSaveFile_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QEvent) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KAutoSaveFile, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KAutoSaveFile_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KAutoSaveFile, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KAutoSaveFile_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QObject, QEvent) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KAutoSaveFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KAutoSaveFile_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KAutoSaveFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KAutoSaveFile_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QTimerEvent) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KAutoSaveFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KAutoSaveFile_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KAutoSaveFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KAutoSaveFile_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QChildEvent) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KAutoSaveFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KAutoSaveFile_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KAutoSaveFile, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KAutoSaveFile_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QEvent) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KAutoSaveFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KAutoSaveFile_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KAutoSaveFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KAutoSaveFile_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QMetaMethod) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KAutoSaveFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KAutoSaveFile_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KAutoSaveFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KAutoSaveFile_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QMetaMethod) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: KAutoSaveFile, openMode: i32) void {
        qtc.KAutoSaveFile_SetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: KAutoSaveFile, openMode: i32) void {
        qtc.KAutoSaveFile_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: KAutoSaveFile, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.KAutoSaveFile_SetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: KAutoSaveFile, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.KAutoSaveFile_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, [*:0]const u8) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Sender(self: KAutoSaveFile) QObject {
        return .{ .ptr = qtc.KAutoSaveFile_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperSender(self: KAutoSaveFile) QObject {
        return .{ .ptr = qtc.KAutoSaveFile_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KAutoSaveFile, callback: *const fn () callconv(.c) QObject) void {
        qtc.KAutoSaveFile_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn SenderSignalIndex(self: KAutoSaveFile) i32 {
        return qtc.KAutoSaveFile_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    pub fn SuperSenderSignalIndex(self: KAutoSaveFile) i32 {
        return qtc.KAutoSaveFile_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KAutoSaveFile, callback: *const fn () callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KAutoSaveFile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KAutoSaveFile_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KAutoSaveFile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KAutoSaveFile_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, [*:0]const u8) callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KAutoSaveFile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KAutoSaveFile_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KAutoSaveFile `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KAutoSaveFile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KAutoSaveFile_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QMetaMethod) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#dtor.KAutoSaveFile)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn Delete(self: KAutoSaveFile) void {
        qtc.KAutoSaveFile_Delete(@ptrCast(self.ptr));
    }
};
