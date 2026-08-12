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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KAutoSaveFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: QUrl `
    ///
    pub fn new(filename: anytype) KAutoSaveFile {
        comptime _ = @TypeOf(filename)._is_QUrl;
        return .{ .ptr = qtc.KAutoSaveFile_new(@ptrCast(filename.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KAutoSaveFile object in C++ memory
    ///
    pub fn new2() KAutoSaveFile {
        return .{ .ptr = qtc.KAutoSaveFile_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KAutoSaveFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` filename: QUrl `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(filename: anytype, _parent: anytype) KAutoSaveFile {
        comptime _ = @TypeOf(filename)._is_QUrl;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KAutoSaveFile_new3(@ptrCast(filename.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KAutoSaveFile object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_parent: anytype) KAutoSaveFile {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KAutoSaveFile_new4(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn metaObject(self: KAutoSaveFile) QMetaObject {
        return .{ .ptr = qtc.KAutoSaveFile_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: KAutoSaveFile, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KAutoSaveFile_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn superMetaObject(self: KAutoSaveFile) QMetaObject {
        return .{ .ptr = qtc.KAutoSaveFile_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KAutoSaveFile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KAutoSaveFile_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KAutoSaveFile_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KAutoSaveFile, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KAutoSaveFile_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KAutoSaveFile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KAutoSaveFile_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` callback: *const fn (self: KAutoSaveFile, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KAutoSaveFile, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KAutoSaveFile_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAutoSaveFile.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `managedFile` instead
    ///
    pub const ManagedFile = managedFile;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#managedFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn managedFile(self: KAutoSaveFile) QUrl {
        return .{ .ptr = qtc.KAutoSaveFile_ManagedFile(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setManagedFile` instead
    ///
    pub const SetManagedFile = setManagedFile;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#setManagedFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` filename: QUrl `
    ///
    pub fn setManagedFile(self: KAutoSaveFile, filename: anytype) void {
        comptime _ = @TypeOf(filename)._is_QUrl;
        qtc.KAutoSaveFile_SetManagedFile(@ptrCast(self.ptr), @ptrCast(filename.ptr));
    }

    /// ### DEPRECATED: Use `releaseLock` instead
    ///
    pub const ReleaseLock = releaseLock;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#releaseLock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn releaseLock(self: KAutoSaveFile) void {
        qtc.KAutoSaveFile_ReleaseLock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReleaseLock` instead
    ///
    pub const OnReleaseLock = onReleaseLock;

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
    pub fn onReleaseLock(self: KAutoSaveFile, callback: *const fn () callconv(.c) void) void {
        qtc.KAutoSaveFile_OnReleaseLock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReleaseLock` instead
    ///
    pub const SuperReleaseLock = superReleaseLock;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#releaseLock)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn superReleaseLock(self: KAutoSaveFile) void {
        qtc.KAutoSaveFile_SuperReleaseLock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` openmode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn open(self: KAutoSaveFile, openmode: i32) bool {
        return qtc.KAutoSaveFile_Open(@ptrCast(self.ptr), @bitCast(openmode));
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

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
    pub fn onOpen(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

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
    pub fn superOpen(self: KAutoSaveFile, openmode: i32) bool {
        return qtc.KAutoSaveFile_SuperOpen(@ptrCast(self.ptr), @bitCast(openmode));
    }

    /// ### DEPRECATED: Use `staleFiles` instead
    ///
    pub const StaleFiles = staleFiles;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#staleFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` url: QUrl `
    ///
    pub fn staleFiles(allocator: std.mem.Allocator, url: anytype) []KAutoSaveFile {
        comptime _ = @TypeOf(url)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_StaleFiles(@ptrCast(url.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAutoSaveFile, _arr.len) catch @panic("KAutoSaveFile.staleFiles: Memory allocation failed");
        const _data_val: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `allStaleFiles` instead
    ///
    pub const AllStaleFiles = allStaleFiles;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#allStaleFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn allStaleFiles(allocator: std.mem.Allocator) []KAutoSaveFile {
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_AllStaleFiles();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAutoSaveFile, _arr.len) catch @panic("KAutoSaveFile.allStaleFiles: Memory allocation failed");
        const _data_val: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAutoSaveFile.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAutoSaveFile.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `staleFiles2` instead
    ///
    pub const StaleFiles2 = staleFiles2;

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
    pub fn staleFiles2(allocator: std.mem.Allocator, url: anytype, applicationName: []const u8) []KAutoSaveFile {
        comptime _ = @TypeOf(url)._is_QUrl;
        const applicationName_str = qtc.libqt_string{
            .len = applicationName.len,
            .data = applicationName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_StaleFiles2(@ptrCast(url.ptr), applicationName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAutoSaveFile, _arr.len) catch @panic("KAutoSaveFile.staleFiles2: Memory allocation failed");
        const _data_val: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `allStaleFiles1` instead
    ///
    pub const AllStaleFiles1 = allStaleFiles1;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#allStaleFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` applicationName: []const u8 `
    ///
    pub fn allStaleFiles1(allocator: std.mem.Allocator, applicationName: []const u8) []KAutoSaveFile {
        const applicationName_str = qtc.libqt_string{
            .len = applicationName.len,
            .data = applicationName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KAutoSaveFile_AllStaleFiles1(applicationName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KAutoSaveFile, _arr.len) catch @panic("KAutoSaveFile.allStaleFiles1: Memory allocation failed");
        const _data_val: [*]QtC.KAutoSaveFile = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setFileName` instead
    ///
    pub const SetFileName = setFileName;

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
    pub fn setFileName(self: KAutoSaveFile, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QFile_SetFileName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `encodeName` instead
    ///
    pub const EncodeName = encodeName;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#encodeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn encodeName(allocator: std.mem.Allocator, _fileName: []const u8) []u8 {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QFile_EncodeName(fileName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KAutoSaveFile.encodeName: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `decodeName` instead
    ///
    pub const DecodeName = decodeName;

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
    pub fn decodeName(allocator: std.mem.Allocator, localFileName: []u8) []const u8 {
        const localFileName_str = qtc.libqt_string{
            .len = localFileName.len,
            .data = localFileName.ptr,
        };
        var _str = qtc.QFile_DecodeName(localFileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAutoSaveFile.decodeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `decodeName2` instead
    ///
    pub const DecodeName2 = decodeName2;

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
    pub fn decodeName2(allocator: std.mem.Allocator, localFileName: [:0]const u8) []const u8 {
        const localFileName_Cstring = localFileName.ptr;
        var _str = qtc.QFile_DecodeName2(localFileName_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAutoSaveFile.decodeName2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `exists` instead
    ///
    pub const Exists = exists;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn exists(self: KAutoSaveFile) bool {
        return qtc.QFile_Exists(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exists2` instead
    ///
    pub const Exists2 = exists2;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#exists)
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn exists2(_fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return qtc.QFile_Exists2(fileName_str);
    }

    /// ### DEPRECATED: Use `symLinkTarget` instead
    ///
    pub const SymLinkTarget = symLinkTarget;

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
    pub fn symLinkTarget(self: KAutoSaveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFile_SymLinkTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAutoSaveFile.symLinkTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `symLinkTarget2` instead
    ///
    pub const SymLinkTarget2 = symLinkTarget2;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#symLinkTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn symLinkTarget2(allocator: std.mem.Allocator, _fileName: []const u8) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        var _str = qtc.QFile_SymLinkTarget2(fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAutoSaveFile.symLinkTarget2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn remove(self: KAutoSaveFile) bool {
        return qtc.QFile_Remove(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `remove2` instead
    ///
    pub const Remove2 = remove2;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn remove2(_fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return qtc.QFile_Remove2(fileName_str);
    }

    /// ### DEPRECATED: Use `moveToTrash` instead
    ///
    pub const MoveToTrash = moveToTrash;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn moveToTrash(self: KAutoSaveFile) bool {
        return qtc.QFile_MoveToTrash(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `moveToTrash2` instead
    ///
    pub const MoveToTrash2 = moveToTrash2;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#moveToTrash)
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn moveToTrash2(_fileName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        return qtc.QFile_MoveToTrash2(fileName_str);
    }

    /// ### DEPRECATED: Use `rename` instead
    ///
    pub const Rename = rename;

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
    pub fn rename(self: KAutoSaveFile, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Rename(@ptrCast(self.ptr), newName_str);
    }

    /// ### DEPRECATED: Use `rename2` instead
    ///
    pub const Rename2 = rename2;

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
    pub fn rename2(oldName: []const u8, newName: []const u8) bool {
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

    /// ### DEPRECATED: Use `link` instead
    ///
    pub const Link = link;

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
    pub fn link(self: KAutoSaveFile, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Link(@ptrCast(self.ptr), newName_str);
    }

    /// ### DEPRECATED: Use `link2` instead
    ///
    pub const Link2 = link2;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn link2(_fileName: []const u8, newName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Link2(fileName_str, newName_str);
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

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
    pub fn copy(self: KAutoSaveFile, newName: []const u8) bool {
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Copy(@ptrCast(self.ptr), newName_str);
    }

    /// ### DEPRECATED: Use `copy2` instead
    ///
    pub const Copy2 = copy2;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` _fileName: []const u8 `
    ///
    /// ` newName: []const u8 `
    ///
    pub fn copy2(_fileName: []const u8, newName: []const u8) bool {
        const fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        const newName_str = qtc.libqt_string{
            .len = newName.len,
            .data = newName.ptr,
        };
        return qtc.QFile_Copy2(fileName_str, newName_str);
    }

    /// ### DEPRECATED: Use `open2` instead
    ///
    pub const Open2 = open2;

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
    /// ` _permissions: flag of qfiledevice_enums.Permission `
    ///
    pub fn open2(self: KAutoSaveFile, flags: i32, _permissions: i32) bool {
        return qtc.QFile_Open2(@ptrCast(self.ptr), @bitCast(flags), @bitCast(_permissions));
    }

    /// ### DEPRECATED: Use `open4` instead
    ///
    pub const Open4 = open4;

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
    pub fn open4(self: KAutoSaveFile, fd: i32, ioFlags: i32) bool {
        return qtc.QFile_Open4(@ptrCast(self.ptr), @bitCast(fd), @bitCast(ioFlags));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

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
    pub fn resize2(filename: []const u8, sz: i64) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QFile_Resize2(filename_str, @bitCast(sz));
    }

    /// ### DEPRECATED: Use `permissions2` instead
    ///
    pub const Permissions2 = permissions2;

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
    pub fn permissions2(filename: []const u8) i32 {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QFile_Permissions2(filename_str);
    }

    /// ### DEPRECATED: Use `setPermissions2` instead
    ///
    pub const SetPermissions2 = setPermissions2;

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
    pub fn setPermissions2(filename: []const u8, permissionSpec: i32) bool {
        const filename_str = qtc.libqt_string{
            .len = filename.len,
            .data = filename.ptr,
        };
        return qtc.QFile_SetPermissions2(filename_str, @bitCast(permissionSpec));
    }

    /// ### DEPRECATED: Use `open33` instead
    ///
    pub const Open33 = open33;

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
    pub fn open33(self: KAutoSaveFile, fd: i32, ioFlags: i32, handleFlags: i32) bool {
        return qtc.QFile_Open33(@ptrCast(self.ptr), @bitCast(fd), @bitCast(ioFlags), @bitCast(handleFlags));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: KAutoSaveFile) i32 {
        return qtc.QFileDevice_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unsetError` instead
    ///
    pub const UnsetError = unsetError;

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#unsetError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn unsetError(self: KAutoSaveFile) void {
        qtc.QFileDevice_UnsetError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `handle` instead
    ///
    pub const Handle = handle;

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#handle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn handle(self: KAutoSaveFile) i32 {
        return qtc.QFileDevice_Handle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flush` instead
    ///
    pub const Flush = flush;

    /// Inherited from QFileDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfiledevice.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn flush(self: KAutoSaveFile) bool {
        return qtc.QFileDevice_Flush(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `map` instead
    ///
    pub const Map = map;

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
    /// ` _size: i64 `
    ///
    pub fn map(self: KAutoSaveFile, offset: i64, _size: i64) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_size)));
    }

    /// ### DEPRECATED: Use `unmap` instead
    ///
    pub const Unmap = unmap;

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
    pub fn unmap(self: KAutoSaveFile, address: *u8) bool {
        return qtc.QFileDevice_Unmap(@ptrCast(self.ptr), @ptrCast(address));
    }

    /// ### DEPRECATED: Use `fileTime` instead
    ///
    pub const FileTime = fileTime;

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
    pub fn fileTime(self: KAutoSaveFile, time: i32) QDateTime {
        return .{ .ptr = qtc.QFileDevice_FileTime(@ptrCast(self.ptr), @bitCast(time)) };
    }

    /// ### DEPRECATED: Use `setFileTime` instead
    ///
    pub const SetFileTime = setFileTime;

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
    /// ` _fileTime: qfiledevice_enums.FileTime `
    ///
    pub fn setFileTime(self: KAutoSaveFile, newDate: anytype, _fileTime: i32) bool {
        comptime _ = @TypeOf(newDate)._is_QDateTime;
        return qtc.QFileDevice_SetFileTime(@ptrCast(self.ptr), @ptrCast(newDate.ptr), @bitCast(_fileTime));
    }

    /// ### DEPRECATED: Use `map3` instead
    ///
    pub const Map3 = map3;

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
    /// ` _size: i64 `
    ///
    /// ` flags: flag of qfiledevice_enums.MemoryMapFlag `
    ///
    pub fn map3(self: KAutoSaveFile, offset: i64, _size: i64, flags: i32) ?*u8 {
        return @ptrCast(qtc.QFileDevice_Map3(@ptrCast(self.ptr), @bitCast(offset), @bitCast(_size), @bitCast(flags)));
    }

    /// ### DEPRECATED: Use `openMode` instead
    ///
    pub const OpenMode = openMode;

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
    pub fn openMode(self: KAutoSaveFile) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextModeEnabled` instead
    ///
    pub const SetTextModeEnabled = setTextModeEnabled;

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
    pub fn setTextModeEnabled(self: KAutoSaveFile, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isTextModeEnabled` instead
    ///
    pub const IsTextModeEnabled = isTextModeEnabled;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn isTextModeEnabled(self: KAutoSaveFile) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOpen` instead
    ///
    pub const IsOpen = isOpen;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn isOpen(self: KAutoSaveFile) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn isReadable(self: KAutoSaveFile) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn isWritable(self: KAutoSaveFile) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readChannelCount` instead
    ///
    pub const ReadChannelCount = readChannelCount;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn readChannelCount(self: KAutoSaveFile) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeChannelCount` instead
    ///
    pub const WriteChannelCount = writeChannelCount;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn writeChannelCount(self: KAutoSaveFile) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentReadChannel` instead
    ///
    pub const CurrentReadChannel = currentReadChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn currentReadChannel(self: KAutoSaveFile) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentReadChannel` instead
    ///
    pub const SetCurrentReadChannel = setCurrentReadChannel;

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
    pub fn setCurrentReadChannel(self: KAutoSaveFile, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `currentWriteChannel` instead
    ///
    pub const CurrentWriteChannel = currentWriteChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn currentWriteChannel(self: KAutoSaveFile) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentWriteChannel` instead
    ///
    pub const SetCurrentWriteChannel = setCurrentWriteChannel;

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
    pub fn setCurrentWriteChannel(self: KAutoSaveFile, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

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
    pub fn read(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `read2` instead
    ///
    pub const Read2 = read2;

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
    pub fn read2(self: KAutoSaveFile, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KAutoSaveFile.read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readAll` instead
    ///
    pub const ReadAll = readAll;

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
    pub fn readAll(self: KAutoSaveFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KAutoSaveFile.readAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readLine` instead
    ///
    pub const ReadLine = readLine;

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
    pub fn readLine(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `readLine2` instead
    ///
    pub const ReadLine2 = readLine2;

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
    pub fn readLine2(self: KAutoSaveFile, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KAutoSaveFile.readLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `startTransaction` instead
    ///
    pub const StartTransaction = startTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn startTransaction(self: KAutoSaveFile) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `commitTransaction` instead
    ///
    pub const CommitTransaction = commitTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn commitTransaction(self: KAutoSaveFile) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rollbackTransaction` instead
    ///
    pub const RollbackTransaction = rollbackTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn rollbackTransaction(self: KAutoSaveFile) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTransactionStarted` instead
    ///
    pub const IsTransactionStarted = isTransactionStarted;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn isTransactionStarted(self: KAutoSaveFile) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

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
    /// ` len: i64 `
    ///
    pub fn write(self: KAutoSaveFile, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `write2` instead
    ///
    pub const Write2 = write2;

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
    pub fn write2(self: KAutoSaveFile, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// ### DEPRECATED: Use `write3` instead
    ///
    pub const Write3 = write3;

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
    pub fn write3(self: KAutoSaveFile, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `peek` instead
    ///
    pub const Peek = peek;

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
    pub fn peek(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `peek2` instead
    ///
    pub const Peek2 = peek2;

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
    pub fn peek2(self: KAutoSaveFile, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KAutoSaveFile.peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `skip` instead
    ///
    pub const Skip = skip;

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
    pub fn skip(self: KAutoSaveFile, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `ungetChar` instead
    ///
    pub const UngetChar = ungetChar;

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
    pub fn ungetChar(self: KAutoSaveFile, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `putChar` instead
    ///
    pub const PutChar = putChar;

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
    pub fn putChar(self: KAutoSaveFile, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `getChar` instead
    ///
    pub const GetChar = getChar;

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
    pub fn getChar(self: KAutoSaveFile, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

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
    pub fn errorString(self: KAutoSaveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAutoSaveFile.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readyRead` instead
    ///
    pub const ReadyRead = readyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn readyRead(self: KAutoSaveFile) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadyRead` instead
    ///
    pub const OnReadyRead = onReadyRead;

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
    pub fn onReadyRead(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `channelReadyRead` instead
    ///
    pub const ChannelReadyRead = channelReadyRead;

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
    pub fn channelReadyRead(self: KAutoSaveFile, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `onChannelReadyRead` instead
    ///
    pub const OnChannelReadyRead = onChannelReadyRead;

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
    pub fn onChannelReadyRead(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesWritten` instead
    ///
    pub const BytesWritten = bytesWritten;

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
    pub fn bytesWritten(self: KAutoSaveFile, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `onBytesWritten` instead
    ///
    pub const OnBytesWritten = onBytesWritten;

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
    pub fn onBytesWritten(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `channelBytesWritten` instead
    ///
    pub const ChannelBytesWritten = channelBytesWritten;

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
    pub fn channelBytesWritten(self: KAutoSaveFile, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `onChannelBytesWritten` instead
    ///
    pub const OnChannelBytesWritten = onChannelBytesWritten;

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
    pub fn onChannelBytesWritten(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aboutToClose` instead
    ///
    pub const AboutToClose = aboutToClose;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn aboutToClose(self: KAutoSaveFile) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToClose` instead
    ///
    pub const OnAboutToClose = onAboutToClose;

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
    pub fn onAboutToClose(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readChannelFinished` instead
    ///
    pub const ReadChannelFinished = readChannelFinished;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn readChannelFinished(self: KAutoSaveFile) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadChannelFinished` instead
    ///
    pub const OnReadChannelFinished = onReadChannelFinished;

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
    pub fn onReadChannelFinished(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readLine1` instead
    ///
    pub const ReadLine1 = readLine1;

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
    pub fn readLine1(self: KAutoSaveFile, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KAutoSaveFile.readLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: KAutoSaveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAutoSaveFile.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: KAutoSaveFile, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn isWidgetType(self: KAutoSaveFile) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn isWindowType(self: KAutoSaveFile) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn isQuickItemType(self: KAutoSaveFile) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn signalsBlocked(self: KAutoSaveFile) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: KAutoSaveFile, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn thread(self: KAutoSaveFile) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KAutoSaveFile, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: KAutoSaveFile, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: KAutoSaveFile, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: KAutoSaveFile, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: KAutoSaveFile, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: KAutoSaveFile, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KAutoSaveFile.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KAutoSaveFile, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: KAutoSaveFile, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: KAutoSaveFile, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KAutoSaveFile, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn disconnect3(self: KAutoSaveFile) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: KAutoSaveFile, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn dumpObjectTree(self: KAutoSaveFile) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn dumpObjectInfo(self: KAutoSaveFile) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: KAutoSaveFile, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: KAutoSaveFile, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: KAutoSaveFile, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KAutoSaveFile.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KAutoSaveFile.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn bindingStorage(self: KAutoSaveFile) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn bindingStorage2(self: KAutoSaveFile) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn destroyed(self: KAutoSaveFile) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn parent(self: KAutoSaveFile) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: KAutoSaveFile, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn deleteLater(self: KAutoSaveFile) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: KAutoSaveFile, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: KAutoSaveFile, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KAutoSaveFile `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KAutoSaveFile, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: KAutoSaveFile, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: KAutoSaveFile, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: KAutoSaveFile, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: KAutoSaveFile, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: KAutoSaveFile, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

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
    pub fn fileName(self: KAutoSaveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAutoSaveFile_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAutoSaveFile.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superFileName` instead
    ///
    pub const SuperFileName = superFileName;

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
    pub fn superFileName(self: KAutoSaveFile, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KAutoSaveFile_SuperFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KAutoSaveFile.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onFileName` instead
    ///
    pub const OnFileName = onFileName;

    /// Inherited from QFile
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfile.html#fileName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KAutoSaveFile`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onFileName(self: KAutoSaveFile, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KAutoSaveFile_OnFileName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

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
    pub fn size(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSize` instead
    ///
    pub const SuperSize = superSize;

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
    pub fn superSize(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_SuperSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSize` instead
    ///
    pub const OnSize = onSize;

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
    pub fn onSize(self: KAutoSaveFile, callback: *const fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

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
    pub fn resize(self: KAutoSaveFile, sz: i64) bool {
        return qtc.KAutoSaveFile_Resize(@ptrCast(self.ptr), @bitCast(sz));
    }

    /// ### DEPRECATED: Use `superResize` instead
    ///
    pub const SuperResize = superResize;

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
    pub fn superResize(self: KAutoSaveFile, sz: i64) bool {
        return qtc.KAutoSaveFile_SuperResize(@ptrCast(self.ptr), @bitCast(sz));
    }

    /// ### DEPRECATED: Use `onResize` instead
    ///
    pub const OnResize = onResize;

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
    pub fn onResize(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i64) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnResize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `permissions` instead
    ///
    pub const Permissions = permissions;

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
    pub fn permissions(self: KAutoSaveFile) i32 {
        return qtc.KAutoSaveFile_Permissions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPermissions` instead
    ///
    pub const SuperPermissions = superPermissions;

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
    pub fn superPermissions(self: KAutoSaveFile) i32 {
        return qtc.KAutoSaveFile_SuperPermissions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPermissions` instead
    ///
    pub const OnPermissions = onPermissions;

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
    pub fn onPermissions(self: KAutoSaveFile, callback: *const fn () callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnPermissions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPermissions` instead
    ///
    pub const SetPermissions = setPermissions;

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
    pub fn setPermissions(self: KAutoSaveFile, permissionSpec: i32) bool {
        return qtc.KAutoSaveFile_SetPermissions(@ptrCast(self.ptr), @bitCast(permissionSpec));
    }

    /// ### DEPRECATED: Use `superSetPermissions` instead
    ///
    pub const SuperSetPermissions = superSetPermissions;

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
    pub fn superSetPermissions(self: KAutoSaveFile, permissionSpec: i32) bool {
        return qtc.KAutoSaveFile_SuperSetPermissions(@ptrCast(self.ptr), @bitCast(permissionSpec));
    }

    /// ### DEPRECATED: Use `onSetPermissions` instead
    ///
    pub const OnSetPermissions = onSetPermissions;

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
    pub fn onSetPermissions(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnSetPermissions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

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
    pub fn close(self: KAutoSaveFile) void {
        qtc.KAutoSaveFile_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

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
    pub fn superClose(self: KAutoSaveFile) void {
        qtc.KAutoSaveFile_SuperClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

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
    pub fn onClose(self: KAutoSaveFile, callback: *const fn () callconv(.c) void) void {
        qtc.KAutoSaveFile_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSequential` instead
    ///
    pub const IsSequential = isSequential;

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
    pub fn isSequential(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_IsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsSequential` instead
    ///
    pub const SuperIsSequential = superIsSequential;

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
    pub fn superIsSequential(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsSequential` instead
    ///
    pub const OnIsSequential = onIsSequential;

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
    pub fn onIsSequential(self: KAutoSaveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

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
    pub fn pos(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_Pos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPos` instead
    ///
    pub const SuperPos = superPos;

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
    pub fn superPos(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_SuperPos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPos` instead
    ///
    pub const OnPos = onPos;

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
    pub fn onPos(self: KAutoSaveFile, callback: *const fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seek` instead
    ///
    pub const Seek = seek;

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
    pub fn seek(self: KAutoSaveFile, offset: i64) bool {
        return qtc.KAutoSaveFile_Seek(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `superSeek` instead
    ///
    pub const SuperSeek = superSeek;

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
    pub fn superSeek(self: KAutoSaveFile, offset: i64) bool {
        return qtc.KAutoSaveFile_SuperSeek(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `onSeek` instead
    ///
    pub const OnSeek = onSeek;

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
    pub fn onSeek(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i64) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

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
    pub fn atEnd(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superAtEnd` instead
    ///
    pub const SuperAtEnd = superAtEnd;

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
    pub fn superAtEnd(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAtEnd` instead
    ///
    pub const OnAtEnd = onAtEnd;

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
    pub fn onAtEnd(self: KAutoSaveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readData` instead
    ///
    pub const ReadData = readData;

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
    pub fn readData(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `superReadData` instead
    ///
    pub const SuperReadData = superReadData;

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
    pub fn superReadData(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `onReadData` instead
    ///
    pub const OnReadData = onReadData;

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
    pub fn onReadData(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `writeData` instead
    ///
    pub const WriteData = writeData;

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
    /// ` len: i64 `
    ///
    pub fn writeData(self: KAutoSaveFile, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `superWriteData` instead
    ///
    pub const SuperWriteData = superWriteData;

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
    /// ` len: i64 `
    ///
    pub fn superWriteData(self: KAutoSaveFile, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `onWriteData` instead
    ///
    pub const OnWriteData = onWriteData;

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
    /// ` callback: *const fn (self: KAutoSaveFile, data: [*:0]const u8, len: i64) callconv(.c) i64 `
    ///
    pub fn onWriteData(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readLineData` instead
    ///
    pub const ReadLineData = readLineData;

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
    pub fn readLineData(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `superReadLineData` instead
    ///
    pub const SuperReadLineData = superReadLineData;

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
    pub fn superReadLineData(self: KAutoSaveFile, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.KAutoSaveFile_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `onReadLineData` instead
    ///
    pub const OnReadLineData = onReadLineData;

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
    pub fn onReadLineData(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

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
    pub fn reset(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

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
    pub fn superReset(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

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
    pub fn onReset(self: KAutoSaveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesAvailable` instead
    ///
    pub const BytesAvailable = bytesAvailable;

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
    pub fn bytesAvailable(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBytesAvailable` instead
    ///
    pub const SuperBytesAvailable = superBytesAvailable;

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
    pub fn superBytesAvailable(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesAvailable` instead
    ///
    pub const OnBytesAvailable = onBytesAvailable;

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
    pub fn onBytesAvailable(self: KAutoSaveFile, callback: *const fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesToWrite` instead
    ///
    pub const BytesToWrite = bytesToWrite;

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
    pub fn bytesToWrite(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBytesToWrite` instead
    ///
    pub const SuperBytesToWrite = superBytesToWrite;

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
    pub fn superBytesToWrite(self: KAutoSaveFile) i64 {
        return qtc.KAutoSaveFile_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesToWrite` instead
    ///
    pub const OnBytesToWrite = onBytesToWrite;

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
    pub fn onBytesToWrite(self: KAutoSaveFile, callback: *const fn () callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canReadLine` instead
    ///
    pub const CanReadLine = canReadLine;

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
    pub fn canReadLine(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCanReadLine` instead
    ///
    pub const SuperCanReadLine = superCanReadLine;

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
    pub fn superCanReadLine(self: KAutoSaveFile) bool {
        return qtc.KAutoSaveFile_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanReadLine` instead
    ///
    pub const OnCanReadLine = onCanReadLine;

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
    pub fn onCanReadLine(self: KAutoSaveFile, callback: *const fn () callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `waitForReadyRead` instead
    ///
    pub const WaitForReadyRead = waitForReadyRead;

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
    pub fn waitForReadyRead(self: KAutoSaveFile, msecs: i32) bool {
        return qtc.KAutoSaveFile_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `superWaitForReadyRead` instead
    ///
    pub const SuperWaitForReadyRead = superWaitForReadyRead;

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
    pub fn superWaitForReadyRead(self: KAutoSaveFile, msecs: i32) bool {
        return qtc.KAutoSaveFile_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForReadyRead` instead
    ///
    pub const OnWaitForReadyRead = onWaitForReadyRead;

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
    pub fn onWaitForReadyRead(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `waitForBytesWritten` instead
    ///
    pub const WaitForBytesWritten = waitForBytesWritten;

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
    pub fn waitForBytesWritten(self: KAutoSaveFile, msecs: i32) bool {
        return qtc.KAutoSaveFile_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `superWaitForBytesWritten` instead
    ///
    pub const SuperWaitForBytesWritten = superWaitForBytesWritten;

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
    pub fn superWaitForBytesWritten(self: KAutoSaveFile, msecs: i32) bool {
        return qtc.KAutoSaveFile_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForBytesWritten` instead
    ///
    pub const OnWaitForBytesWritten = onWaitForBytesWritten;

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
    pub fn onWaitForBytesWritten(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `skipData` instead
    ///
    pub const SkipData = skipData;

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
    pub fn skipData(self: KAutoSaveFile, maxSize: i64) i64 {
        return qtc.KAutoSaveFile_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `superSkipData` instead
    ///
    pub const SuperSkipData = superSkipData;

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
    pub fn superSkipData(self: KAutoSaveFile, maxSize: i64) i64 {
        return qtc.KAutoSaveFile_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `onSkipData` instead
    ///
    pub const OnSkipData = onSkipData;

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
    pub fn onSkipData(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i64) callconv(.c) i64) void {
        qtc.KAutoSaveFile_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: KAutoSaveFile, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KAutoSaveFile_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KAutoSaveFile, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KAutoSaveFile_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QEvent) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KAutoSaveFile, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KAutoSaveFile_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KAutoSaveFile, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KAutoSaveFile_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QObject, QEvent) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KAutoSaveFile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KAutoSaveFile_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KAutoSaveFile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KAutoSaveFile_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QTimerEvent) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KAutoSaveFile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KAutoSaveFile_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KAutoSaveFile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KAutoSaveFile_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QChildEvent) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KAutoSaveFile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KAutoSaveFile_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KAutoSaveFile, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KAutoSaveFile_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QEvent) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: KAutoSaveFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KAutoSaveFile_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: KAutoSaveFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KAutoSaveFile_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QMetaMethod) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: KAutoSaveFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KAutoSaveFile_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: KAutoSaveFile, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KAutoSaveFile_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QMetaMethod) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOpenMode` instead
    ///
    pub const SetOpenMode = setOpenMode;

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
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setOpenMode(self: KAutoSaveFile, _openMode: i32) void {
        qtc.KAutoSaveFile_SetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `superSetOpenMode` instead
    ///
    pub const SuperSetOpenMode = superSetOpenMode;

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
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superSetOpenMode(self: KAutoSaveFile, _openMode: i32) void {
        qtc.KAutoSaveFile_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `onSetOpenMode` instead
    ///
    pub const OnSetOpenMode = onSetOpenMode;

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
    pub fn onSetOpenMode(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, i32) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setErrorString` instead
    ///
    pub const SetErrorString = setErrorString;

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
    /// ` _errorString: []const u8 `
    ///
    pub fn setErrorString(self: KAutoSaveFile, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.KAutoSaveFile_SetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `superSetErrorString` instead
    ///
    pub const SuperSetErrorString = superSetErrorString;

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
    /// ` _errorString: []const u8 `
    ///
    pub fn superSetErrorString(self: KAutoSaveFile, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.KAutoSaveFile_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `onSetErrorString` instead
    ///
    pub const OnSetErrorString = onSetErrorString;

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
    pub fn onSetErrorString(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, [*:0]const u8) callconv(.c) void) void {
        qtc.KAutoSaveFile_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: KAutoSaveFile) QObject {
        return .{ .ptr = qtc.KAutoSaveFile_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: KAutoSaveFile) QObject {
        return .{ .ptr = qtc.KAutoSaveFile_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: KAutoSaveFile, callback: *const fn () callconv(.c) QObject) void {
        qtc.KAutoSaveFile_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: KAutoSaveFile) i32 {
        return qtc.KAutoSaveFile_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: KAutoSaveFile) i32 {
        return qtc.KAutoSaveFile_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: KAutoSaveFile, callback: *const fn () callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: KAutoSaveFile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KAutoSaveFile_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: KAutoSaveFile, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KAutoSaveFile_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, [*:0]const u8) callconv(.c) i32) void {
        qtc.KAutoSaveFile_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: KAutoSaveFile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KAutoSaveFile_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: KAutoSaveFile, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KAutoSaveFile_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, QMetaMethod) callconv(.c) bool) void {
        qtc.KAutoSaveFile_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: KAutoSaveFile, callback: *const fn (KAutoSaveFile, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kautosavefile.html#dtor.KAutoSaveFile)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KAutoSaveFile `
    ///
    pub fn delete(self: KAutoSaveFile) void {
        qtc.KAutoSaveFile_Delete(@ptrCast(self.ptr));
    }
};
