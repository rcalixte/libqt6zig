const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfigGroup = @import("libqt6").KConfigGroup;
const KIO__AuthInfo = @import("libqt6").KIO__AuthInfo;
const KIO__MetaData = @import("libqt6").KIO__MetaData;
const KIO__UDSEntry = @import("libqt6").KIO__UDSEntry;
const KIO__WorkerResult = @import("libqt6").KIO__WorkerResult;
const KRemoteEncoding = @import("libqt6").KRemoteEncoding;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QHostInfo = @import("libqt6").QHostInfo;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const forwardingworkerbase_enums = enums;
const global_enums = @import("libglobal.zig").enums;
const job_base_enums = @import("libjob_base.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const workerbase_enums = @import("libworkerbase.zig").enums;
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html)
pub const KIO__ForwardingWorkerBase = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__ForwardingWorkerBase,

    pub const _is_KIO__ForwardingWorkerBase = {};
    pub const _is_QObject = {};
    pub const _is_KIO__WorkerBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIO::ForwardingWorkerBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []u8 `
    ///
    /// ` poolSocket: []u8 `
    ///
    /// ` appSocket: []u8 `
    ///
    pub fn new(protocol: []u8, poolSocket: []u8, appSocket: []u8) KIO__ForwardingWorkerBase {
        const protocol_str = qtc.libqt_string{
            .len = protocol.len,
            .data = protocol.ptr,
        };
        const poolSocket_str = qtc.libqt_string{
            .len = poolSocket.len,
            .data = poolSocket.ptr,
        };
        const appSocket_str = qtc.libqt_string{
            .len = appSocket.len,
            .data = appSocket.ptr,
        };
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_new(protocol_str, poolSocket_str, appSocket_str) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn metaObject(self: KIO__ForwardingWorkerBase) QMetaObject {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KIO__ForwardingWorkerBase_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn superMetaObject(self: KIO__ForwardingWorkerBase) QMetaObject {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KIO__ForwardingWorkerBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__ForwardingWorkerBase_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KIO__ForwardingWorkerBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__ForwardingWorkerBase_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KIO__ForwardingWorkerBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__ForwardingWorkerBase_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KIO__ForwardingWorkerBase_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KIO__ForwardingWorkerBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__ForwardingWorkerBase_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__ForwardingWorkerBase.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `get` instead
    ///
    pub const Get = get;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn get(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Get(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onGet` instead
    ///
    pub const OnGet = onGet;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#get)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGet(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnGet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGet` instead
    ///
    pub const SuperGet = superGet;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#get)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn superGet(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperGet(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `put` instead
    ///
    pub const Put = put;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn put(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Put(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onPut` instead
    ///
    pub const OnPut = onPut;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#put)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl, permissions: i32, flags: flag of job_base_enums.JobFlag) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onPut(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, i32, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnPut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPut` instead
    ///
    pub const SuperPut = superPut;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#put)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn superPut(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperPut(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `stat` instead
    ///
    pub const Stat = stat;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#stat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn stat(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Stat(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onStat` instead
    ///
    pub const OnStat = onStat;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#stat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onStat(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnStat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStat` instead
    ///
    pub const SuperStat = superStat;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#stat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn superStat(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperStat(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `mimetype` instead
    ///
    pub const Mimetype = mimetype;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn mimetype(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Mimetype(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onMimetype` instead
    ///
    pub const OnMimetype = onMimetype;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mimetype)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMimetype(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnMimetype(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimetype` instead
    ///
    pub const SuperMimetype = superMimetype;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mimetype)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn superMimetype(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperMimetype(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `listDir` instead
    ///
    pub const ListDir = listDir;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#listDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn listDir(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_ListDir(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onListDir` instead
    ///
    pub const OnListDir = onListDir;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#listDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onListDir(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnListDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superListDir` instead
    ///
    pub const SuperListDir = superListDir;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#listDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn superListDir(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperListDir(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `mkdir` instead
    ///
    pub const Mkdir = mkdir;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mkdir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn mkdir(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Mkdir(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### DEPRECATED: Use `onMkdir` instead
    ///
    pub const OnMkdir = onMkdir;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mkdir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl, permissions: i32) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMkdir(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnMkdir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMkdir` instead
    ///
    pub const SuperMkdir = superMkdir;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mkdir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn superMkdir(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperMkdir(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### DEPRECATED: Use `rename` instead
    ///
    pub const Rename = rename;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn rename(self: KIO__ForwardingWorkerBase, src: anytype, dest: anytype, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Rename(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onRename` instead
    ///
    pub const OnRename = onRename;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rename)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, src: QUrl, dest: QUrl, flags: flag of job_base_enums.JobFlag) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRename(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnRename(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRename` instead
    ///
    pub const SuperRename = superRename;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rename)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn superRename(self: KIO__ForwardingWorkerBase, src: anytype, dest: anytype, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperRename(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `symlink` instead
    ///
    pub const Symlink = symlink;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#symlink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` target: []const u8 `
    ///
    /// ` dest: QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn symlink(self: KIO__ForwardingWorkerBase, target: []const u8, dest: anytype, flags: i32) KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Symlink(@ptrCast(self.ptr), target_str, @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onSymlink` instead
    ///
    pub const OnSymlink = onSymlink;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#symlink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, target: [*:0]const u8, dest: QUrl, flags: flag of job_base_enums.JobFlag) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSymlink(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, [*:0]const u8, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSymlink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSymlink` instead
    ///
    pub const SuperSymlink = superSymlink;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#symlink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` target: []const u8 `
    ///
    /// ` dest: QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn superSymlink(self: KIO__ForwardingWorkerBase, target: []const u8, dest: anytype, flags: i32) KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperSymlink(@ptrCast(self.ptr), target_str, @ptrCast(dest.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `chmod` instead
    ///
    pub const Chmod = chmod;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#chmod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn chmod(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Chmod(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### DEPRECATED: Use `onChmod` instead
    ///
    pub const OnChmod = onChmod;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#chmod)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl, permissions: i32) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onChmod(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnChmod(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChmod` instead
    ///
    pub const SuperChmod = superChmod;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#chmod)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn superChmod(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperChmod(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

    /// ### DEPRECATED: Use `setModificationTime` instead
    ///
    pub const SetModificationTime = setModificationTime;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#setModificationTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn setModificationTime(self: KIO__ForwardingWorkerBase, url: anytype, mtime: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SetModificationTime(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(mtime.ptr)) };
    }

    /// ### DEPRECATED: Use `onSetModificationTime` instead
    ///
    pub const OnSetModificationTime = onSetModificationTime;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#setModificationTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl, mtime: QDateTime) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSetModificationTime(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, QDateTime) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSetModificationTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetModificationTime` instead
    ///
    pub const SuperSetModificationTime = superSetModificationTime;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#setModificationTime)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn superSetModificationTime(self: KIO__ForwardingWorkerBase, url: anytype, mtime: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperSetModificationTime(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(mtime.ptr)) };
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn copy(self: KIO__ForwardingWorkerBase, src: anytype, dest: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Copy(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `onCopy` instead
    ///
    pub const OnCopy = onCopy;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#copy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, src: QUrl, dest: QUrl, permissions: i32, flags: flag of job_base_enums.JobFlag) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCopy(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, QUrl, i32, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnCopy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCopy` instead
    ///
    pub const SuperCopy = superCopy;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#copy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn superCopy(self: KIO__ForwardingWorkerBase, src: anytype, dest: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperCopy(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `del` instead
    ///
    pub const Del = del;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#del)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` isfile: bool `
    ///
    pub fn del(self: KIO__ForwardingWorkerBase, url: anytype, isfile: bool) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Del(@ptrCast(self.ptr), @ptrCast(url.ptr), isfile) };
    }

    /// ### DEPRECATED: Use `onDel` instead
    ///
    pub const OnDel = onDel;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#del)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl, isfile: bool) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDel(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, bool) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnDel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDel` instead
    ///
    pub const SuperDel = superDel;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#del)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` isfile: bool `
    ///
    pub fn superDel(self: KIO__ForwardingWorkerBase, url: anytype, isfile: bool) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperDel(@ptrCast(self.ptr), @ptrCast(url.ptr), isfile) };
    }

    /// ### DEPRECATED: Use `rewriteUrl` instead
    ///
    pub const RewriteUrl = rewriteUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rewriteUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` newURL: QUrl `
    ///
    pub fn rewriteUrl(self: KIO__ForwardingWorkerBase, url: anytype, newURL: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(newURL)._is_QUrl;
        return qtc.KIO__ForwardingWorkerBase_RewriteUrl(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(newURL.ptr));
    }

    /// ### DEPRECATED: Use `onRewriteUrl` instead
    ///
    pub const OnRewriteUrl = onRewriteUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rewriteUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl, newURL: QUrl) callconv(.c) bool `
    ///
    pub fn onRewriteUrl(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, QUrl) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnRewriteUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRewriteUrl` instead
    ///
    pub const SuperRewriteUrl = superRewriteUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rewriteUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` newURL: QUrl `
    ///
    pub fn superRewriteUrl(self: KIO__ForwardingWorkerBase, url: anytype, newURL: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(newURL)._is_QUrl;
        return qtc.KIO__ForwardingWorkerBase_SuperRewriteUrl(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(newURL.ptr));
    }

    /// ### DEPRECATED: Use `adjustUDSEntry` instead
    ///
    pub const AdjustUDSEntry = adjustUDSEntry;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#adjustUDSEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` entry: KIO__UDSEntry `
    ///
    /// ` creationMode: forwardingworkerbase_enums.UDSEntryCreationMode `
    ///
    pub fn adjustUDSEntry(self: KIO__ForwardingWorkerBase, entry: anytype, creationMode: i32) void {
        comptime _ = @TypeOf(entry)._is_KIO__UDSEntry;
        qtc.KIO__ForwardingWorkerBase_AdjustUDSEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr), @bitCast(creationMode));
    }

    /// ### DEPRECATED: Use `onAdjustUDSEntry` instead
    ///
    pub const OnAdjustUDSEntry = onAdjustUDSEntry;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#adjustUDSEntry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, entry: KIO__UDSEntry, creationMode: forwardingworkerbase_enums.UDSEntryCreationMode) callconv(.c) void `
    ///
    pub fn onAdjustUDSEntry(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, KIO__UDSEntry, i32) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnAdjustUDSEntry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAdjustUDSEntry` instead
    ///
    pub const SuperAdjustUDSEntry = superAdjustUDSEntry;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#adjustUDSEntry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` entry: KIO__UDSEntry `
    ///
    /// ` creationMode: forwardingworkerbase_enums.UDSEntryCreationMode `
    ///
    pub fn superAdjustUDSEntry(self: KIO__ForwardingWorkerBase, entry: anytype, creationMode: i32) void {
        comptime _ = @TypeOf(entry)._is_KIO__UDSEntry;
        qtc.KIO__ForwardingWorkerBase_SuperAdjustUDSEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr), @bitCast(creationMode));
    }

    /// ### DEPRECATED: Use `processedUrl` instead
    ///
    pub const ProcessedUrl = processedUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#processedUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn processedUrl(self: KIO__ForwardingWorkerBase) QUrl {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_ProcessedUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onProcessedUrl` instead
    ///
    pub const OnProcessedUrl = onProcessedUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#processedUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) QUrl `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProcessedUrl(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) QUrl) void {
        qtc.KIO__ForwardingWorkerBase_OnProcessedUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProcessedUrl` instead
    ///
    pub const SuperProcessedUrl = superProcessedUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#processedUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn superProcessedUrl(self: KIO__ForwardingWorkerBase) QUrl {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperProcessedUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `requestedUrl` instead
    ///
    pub const RequestedUrl = requestedUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#requestedUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn requestedUrl(self: KIO__ForwardingWorkerBase) QUrl {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_RequestedUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onRequestedUrl` instead
    ///
    pub const OnRequestedUrl = onRequestedUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#requestedUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) QUrl `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRequestedUrl(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) QUrl) void {
        qtc.KIO__ForwardingWorkerBase_OnRequestedUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRequestedUrl` instead
    ///
    pub const SuperRequestedUrl = superRequestedUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#requestedUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn superRequestedUrl(self: KIO__ForwardingWorkerBase) QUrl {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperRequestedUrl(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__ForwardingWorkerBase.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__ForwardingWorkerBase.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__ForwardingWorkerBase.objectName: Memory allocation failed");
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KIO__ForwardingWorkerBase, name: []const u8) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn isWidgetType(self: KIO__ForwardingWorkerBase) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn isWindowType(self: KIO__ForwardingWorkerBase) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn isQuickItemType(self: KIO__ForwardingWorkerBase) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn signalsBlocked(self: KIO__ForwardingWorkerBase) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KIO__ForwardingWorkerBase, b: bool) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn thread(self: KIO__ForwardingWorkerBase) QThread {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KIO__ForwardingWorkerBase, _thread: anytype) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KIO__ForwardingWorkerBase, interval: i32) i32 {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KIO__ForwardingWorkerBase, time: i64) i32 {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KIO__ForwardingWorkerBase, id: i32) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KIO__ForwardingWorkerBase, id: i32) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KIO__ForwardingWorkerBase.children: Memory allocation failed");
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KIO__ForwardingWorkerBase, _parent: anytype) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KIO__ForwardingWorkerBase, filterObj: anytype) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KIO__ForwardingWorkerBase, obj: anytype) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KIO__ForwardingWorkerBase, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn disconnect3(self: KIO__ForwardingWorkerBase) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KIO__ForwardingWorkerBase, receiver: anytype) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn dumpObjectTree(self: KIO__ForwardingWorkerBase) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn dumpObjectInfo(self: KIO__ForwardingWorkerBase) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KIO__ForwardingWorkerBase, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KIO__ForwardingWorkerBase, name: [:0]const u8) QVariant {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KIO__ForwardingWorkerBase.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__ForwardingWorkerBase.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn bindingStorage(self: KIO__ForwardingWorkerBase) QBindingStorage {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn bindingStorage2(self: KIO__ForwardingWorkerBase) QBindingStorage {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn destroyed(self: KIO__ForwardingWorkerBase) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase) callconv(.c) void) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn parent(self: KIO__ForwardingWorkerBase) QObject {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KIO__ForwardingWorkerBase, classname: [:0]const u8) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn deleteLater(self: KIO__ForwardingWorkerBase) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KIO__ForwardingWorkerBase, interval: i32, timerType: i32) i32 {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KIO__ForwardingWorkerBase, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KIO__ForwardingWorkerBase, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KIO__ForwardingWorkerBase, signal: [:0]const u8) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KIO__ForwardingWorkerBase, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KIO__ForwardingWorkerBase, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KIO__ForwardingWorkerBase, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KIO__ForwardingWorkerBase, param1: anytype) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `exit` instead
    ///
    pub const Exit = exit;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#exit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn exit(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_Exit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dispatchLoop` instead
    ///
    pub const DispatchLoop = dispatchLoop;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#dispatchLoop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn dispatchLoop(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_DispatchLoop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _data: []u8 `
    ///
    pub fn data(self: KIO__ForwardingWorkerBase, _data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.KIO__WorkerBase_Data(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `dataReq` instead
    ///
    pub const DataReq = dataReq;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#dataReq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn dataReq(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_DataReq(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `workerStatus` instead
    ///
    pub const WorkerStatus = workerStatus;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#workerStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    /// ` connected: bool `
    ///
    pub fn workerStatus(self: KIO__ForwardingWorkerBase, host: []const u8, connected: bool) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_WorkerStatus(@ptrCast(self.ptr), host_str, connected);
    }

    /// ### DEPRECATED: Use `statEntry` instead
    ///
    pub const StatEntry = statEntry;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#statEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _entry: KIO__UDSEntry `
    ///
    pub fn statEntry(self: KIO__ForwardingWorkerBase, _entry: anytype) void {
        comptime _ = @TypeOf(_entry)._is_KIO__UDSEntry;
        qtc.KIO__WorkerBase_StatEntry(@ptrCast(self.ptr), @ptrCast(_entry.ptr));
    }

    /// ### DEPRECATED: Use `listEntries` instead
    ///
    pub const ListEntries = listEntries;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _entry: []KIO__UDSEntry `
    ///
    pub fn listEntries(self: KIO__ForwardingWorkerBase, _entry: []KIO__UDSEntry) void {
        const _entry_list = qtc.libqt_list{
            .len = _entry.len,
            .data = @ptrCast(_entry.ptr),
        };
        qtc.KIO__WorkerBase_ListEntries(@ptrCast(self.ptr), _entry_list);
    }

    /// ### DEPRECATED: Use `canResume` instead
    ///
    pub const CanResume = canResume;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` offset: usize `
    ///
    pub fn canResume(self: KIO__ForwardingWorkerBase, offset: usize) bool {
        return qtc.KIO__WorkerBase_CanResume(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `canResume2` instead
    ///
    pub const CanResume2 = canResume2;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn canResume2(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_CanResume2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `totalSize` instead
    ///
    pub const TotalSize = totalSize;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _bytes: usize `
    ///
    pub fn totalSize(self: KIO__ForwardingWorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_TotalSize(@ptrCast(self.ptr), @bitCast(_bytes));
    }

    /// ### DEPRECATED: Use `processedSize` instead
    ///
    pub const ProcessedSize = processedSize;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _bytes: usize `
    ///
    pub fn processedSize(self: KIO__ForwardingWorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_ProcessedSize(@ptrCast(self.ptr), @bitCast(_bytes));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _pos: usize `
    ///
    pub fn position(self: KIO__ForwardingWorkerBase, _pos: usize) void {
        qtc.KIO__WorkerBase_Position(@ptrCast(self.ptr), @bitCast(_pos));
    }

    /// ### DEPRECATED: Use `written` instead
    ///
    pub const Written = written;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#written)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _bytes: usize `
    ///
    pub fn written(self: KIO__ForwardingWorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_Written(@ptrCast(self.ptr), @bitCast(_bytes));
    }

    /// ### DEPRECATED: Use `truncated` instead
    ///
    pub const Truncated = truncated;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _length: usize `
    ///
    pub fn truncated(self: KIO__ForwardingWorkerBase, _length: usize) void {
        qtc.KIO__WorkerBase_Truncated(@ptrCast(self.ptr), @bitCast(_length));
    }

    /// ### DEPRECATED: Use `speed` instead
    ///
    pub const Speed = speed;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _bytes_per_second: usize `
    ///
    pub fn speed(self: KIO__ForwardingWorkerBase, _bytes_per_second: usize) void {
        qtc.KIO__WorkerBase_Speed(@ptrCast(self.ptr), @bitCast(_bytes_per_second));
    }

    /// ### DEPRECATED: Use `redirection` instead
    ///
    pub const Redirection = redirection;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#redirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _url: QUrl `
    ///
    pub fn redirection(self: KIO__ForwardingWorkerBase, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KIO__WorkerBase_Redirection(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `errorPage` instead
    ///
    pub const ErrorPage = errorPage;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#errorPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn errorPage(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_ErrorPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _type: []const u8 `
    ///
    pub fn mimeType(self: KIO__ForwardingWorkerBase, _type: []const u8) void {
        const _type_str = qtc.libqt_string{
            .len = _type.len,
            .data = _type.ptr,
        };
        qtc.KIO__WorkerBase_MimeType(@ptrCast(self.ptr), _type_str);
    }

    /// ### DEPRECATED: Use `warning` instead
    ///
    pub const Warning = warning;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn warning(self: KIO__ForwardingWorkerBase, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_Warning(@ptrCast(self.ptr), msg_str);
    }

    /// ### DEPRECATED: Use `infoMessage` instead
    ///
    pub const InfoMessage = infoMessage;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn infoMessage(self: KIO__ForwardingWorkerBase, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_InfoMessage(@ptrCast(self.ptr), msg_str);
    }

    /// ### DEPRECATED: Use `messageBox` instead
    ///
    pub const MessageBox = messageBox;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` text: []const u8 `
    ///
    pub fn messageBox(self: KIO__ForwardingWorkerBase, typeVal: i32, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox(@ptrCast(self.ptr), @bitCast(typeVal), text_str);
    }

    /// ### DEPRECATED: Use `messageBox2` instead
    ///
    pub const MessageBox2 = messageBox2;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    pub fn messageBox2(self: KIO__ForwardingWorkerBase, text: []const u8, typeVal: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox2(@ptrCast(self.ptr), text_str, @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `sslError` instead
    ///
    pub const SslError = sslError;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sslError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sslData: ArrayMap_constu8_QVariant `
    ///
    pub fn sslError(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator, sslData: ArrayMap_constu8_QVariant) i32 {
        const sslData_count = sslData.count();
        const sslData_keys = allocator.alloc(qtc.libqt_string, sslData_count) catch @panic("KIO__ForwardingWorkerBase.sslError: Memory allocation failed");
        defer allocator.free(sslData_keys);
        const sslData_values = allocator.alloc(QtC.QVariant, sslData_count) catch @panic("KIO__ForwardingWorkerBase.sslError: Memory allocation failed");
        defer allocator.free(sslData_values);
        var i: usize = 0;
        var sslData_it = sslData.iterator();
        while (sslData_it.next()) |it_entry| : (i += 1) {
            const sslData_key = it_entry.key_ptr.*;
            sslData_keys[i] = qtc.libqt_string{
                .len = sslData_key.len,
                .data = sslData_key.ptr,
            };
            sslData_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const sslData_map = qtc.libqt_map{
            .len = sslData_count,
            .keys = @ptrCast(sslData_keys.ptr),
            .values = @ptrCast(sslData_values.ptr),
        };
        return qtc.KIO__WorkerBase_SslError(@ptrCast(self.ptr), sslData_map);
    }

    /// ### DEPRECATED: Use `setMetaData` instead
    ///
    pub const SetMetaData = setMetaData;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn setMetaData(self: KIO__ForwardingWorkerBase, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KIO__WorkerBase_SetMetaData(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### DEPRECATED: Use `hasMetaData` instead
    ///
    pub const HasMetaData = hasMetaData;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#hasMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    pub fn hasMetaData(self: KIO__ForwardingWorkerBase, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_HasMetaData(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn metaData(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__WorkerBase_MetaData(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__ForwardingWorkerBase.metaData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `allMetaData` instead
    ///
    pub const AllMetaData = allMetaData;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#allMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn allMetaData(self: KIO__ForwardingWorkerBase) KIO__MetaData {
        return .{ .ptr = qtc.KIO__WorkerBase_AllMetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mapConfig` instead
    ///
    pub const MapConfig = mapConfig;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mapConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mapConfig(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.KIO__WorkerBase_MapConfig(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KIO__ForwardingWorkerBase.mapConfig: Total capacity allocation failed");
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KIO__ForwardingWorkerBase.mapConfig: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.putAssumeCapacity(_entry_slice, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `configValue` instead
    ///
    pub const ConfigValue = configValue;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn configValue(self: KIO__ForwardingWorkerBase, key: []const u8, defaultValue: bool) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue(@ptrCast(self.ptr), key_str, defaultValue);
    }

    /// ### DEPRECATED: Use `configValue2` instead
    ///
    pub const ConfigValue2 = configValue2;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn configValue2(self: KIO__ForwardingWorkerBase, key: []const u8, defaultValue: i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue2(@ptrCast(self.ptr), key_str, @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `configValue3` instead
    ///
    pub const ConfigValue3 = configValue3;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn configValue3(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__WorkerBase_ConfigValue3(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__ForwardingWorkerBase.configValue3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `config` instead
    ///
    pub const Config = config;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn config(self: KIO__ForwardingWorkerBase) KConfigGroup {
        return .{ .ptr = qtc.KIO__WorkerBase_Config(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `remoteEncoding` instead
    ///
    pub const RemoteEncoding = remoteEncoding;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#remoteEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn remoteEncoding(self: KIO__ForwardingWorkerBase) KRemoteEncoding {
        return .{ .ptr = qtc.KIO__WorkerBase_RemoteEncoding(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `connectTimeout` instead
    ///
    pub const ConnectTimeout = connectTimeout;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#connectTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn connectTimeout(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__WorkerBase_ConnectTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `proxyConnectTimeout` instead
    ///
    pub const ProxyConnectTimeout = proxyConnectTimeout;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#proxyConnectTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn proxyConnectTimeout(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__WorkerBase_ProxyConnectTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `responseTimeout` instead
    ///
    pub const ResponseTimeout = responseTimeout;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#responseTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn responseTimeout(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__WorkerBase_ResponseTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readTimeout` instead
    ///
    pub const ReadTimeout = readTimeout;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#readTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn readTimeout(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__WorkerBase_ReadTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimeoutSpecialCommand` instead
    ///
    pub const SetTimeoutSpecialCommand = setTimeoutSpecialCommand;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` timeout: i32 `
    ///
    pub fn setTimeoutSpecialCommand(self: KIO__ForwardingWorkerBase, timeout: i32) void {
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `readData` instead
    ///
    pub const ReadData = readData;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` buffer: []u8 `
    ///
    pub fn readData(self: KIO__ForwardingWorkerBase, buffer: []u8) i32 {
        const buffer_str = qtc.libqt_string{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        return qtc.KIO__WorkerBase_ReadData(@ptrCast(self.ptr), buffer_str);
    }

    /// ### DEPRECATED: Use `listEntry` instead
    ///
    pub const ListEntry = listEntry;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` entry: KIO__UDSEntry `
    ///
    pub fn listEntry(self: KIO__ForwardingWorkerBase, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_KIO__UDSEntry;
        qtc.KIO__WorkerBase_ListEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

    /// ### DEPRECATED: Use `connectWorker` instead
    ///
    pub const ConnectWorker = connectWorker;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#connectWorker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` path: []const u8 `
    ///
    pub fn connectWorker(self: KIO__ForwardingWorkerBase, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KIO__WorkerBase_ConnectWorker(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `disconnectWorker` instead
    ///
    pub const DisconnectWorker = disconnectWorker;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#disconnectWorker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn disconnectWorker(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_DisconnectWorker(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `openPasswordDialog` instead
    ///
    pub const OpenPasswordDialog = openPasswordDialog;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn openPasswordDialog(self: KIO__ForwardingWorkerBase, info: anytype) i32 {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_OpenPasswordDialog(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `checkCachedAuthentication` instead
    ///
    pub const CheckCachedAuthentication = checkCachedAuthentication;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#checkCachedAuthentication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn checkCachedAuthentication(self: KIO__ForwardingWorkerBase, info: anytype) bool {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_CheckCachedAuthentication(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `cacheAuthentication` instead
    ///
    pub const CacheAuthentication = cacheAuthentication;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#cacheAuthentication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    pub fn cacheAuthentication(self: KIO__ForwardingWorkerBase, info: anytype) bool {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_CacheAuthentication(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `waitForAnswer` instead
    ///
    pub const WaitForAnswer = waitForAnswer;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForAnswer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` expected1: i32 `
    ///
    /// ` expected2: i32 `
    ///
    /// ` _data: []u8 `
    ///
    pub fn waitForAnswer(self: KIO__ForwardingWorkerBase, expected1: i32, expected2: i32, _data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer(@ptrCast(self.ptr), @bitCast(expected1), @bitCast(expected2), data_str);
    }

    /// ### DEPRECATED: Use `sendMetaData` instead
    ///
    pub const SendMetaData = sendMetaData;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sendMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn sendMetaData(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_SendMetaData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sendAndKeepMetaData` instead
    ///
    pub const SendAndKeepMetaData = sendAndKeepMetaData;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sendAndKeepMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn sendAndKeepMetaData(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_SendAndKeepMetaData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `wasKilled` instead
    ///
    pub const WasKilled = wasKilled;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#wasKilled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn wasKilled(self: KIO__ForwardingWorkerBase) bool {
        return qtc.KIO__WorkerBase_WasKilled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lookupHost` instead
    ///
    pub const LookupHost = lookupHost;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#lookupHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    pub fn lookupHost(self: KIO__ForwardingWorkerBase, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_LookupHost(@ptrCast(self.ptr), host_str);
    }

    /// ### DEPRECATED: Use `waitForHostInfo` instead
    ///
    pub const WaitForHostInfo = waitForHostInfo;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForHostInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` info: QHostInfo `
    ///
    pub fn waitForHostInfo(self: KIO__ForwardingWorkerBase, info: anytype) i32 {
        comptime _ = @TypeOf(info)._is_QHostInfo;
        return qtc.KIO__WorkerBase_WaitForHostInfo(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `requestPrivilegeOperation` instead
    ///
    pub const RequestPrivilegeOperation = requestPrivilegeOperation;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#requestPrivilegeOperation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` operationDetails: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` global_enums.PrivilegeOperationStatus `
    ///
    pub fn requestPrivilegeOperation(self: KIO__ForwardingWorkerBase, operationDetails: []const u8) i32 {
        const operationDetails_str = qtc.libqt_string{
            .len = operationDetails.len,
            .data = operationDetails.ptr,
        };
        return qtc.KIO__WorkerBase_RequestPrivilegeOperation(@ptrCast(self.ptr), operationDetails_str);
    }

    /// ### DEPRECATED: Use `addTemporaryAuthorization` instead
    ///
    pub const AddTemporaryAuthorization = addTemporaryAuthorization;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#addTemporaryAuthorization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` action: []const u8 `
    ///
    pub fn addTemporaryAuthorization(self: KIO__ForwardingWorkerBase, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KIO__WorkerBase_AddTemporaryAuthorization(@ptrCast(self.ptr), action_str);
    }

    /// ### DEPRECATED: Use `setIncomingMetaData` instead
    ///
    pub const SetIncomingMetaData = setIncomingMetaData;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setIncomingMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _metaData: KIO__MetaData `
    ///
    pub fn setIncomingMetaData(self: KIO__ForwardingWorkerBase, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_KIO__MetaData;
        qtc.KIO__WorkerBase_SetIncomingMetaData(@ptrCast(self.ptr), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `messageBox3` instead
    ///
    pub const MessageBox3 = messageBox3;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    pub fn messageBox3(self: KIO__ForwardingWorkerBase, typeVal: i32, text: []const u8, title: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox3(@ptrCast(self.ptr), @bitCast(typeVal), text_str, title_str);
    }

    /// ### DEPRECATED: Use `messageBox4` instead
    ///
    pub const MessageBox4 = messageBox4;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    pub fn messageBox4(self: KIO__ForwardingWorkerBase, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const primaryActionText_str = qtc.libqt_string{
            .len = primaryActionText.len,
            .data = primaryActionText.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox4(@ptrCast(self.ptr), @bitCast(typeVal), text_str, title_str, primaryActionText_str);
    }

    /// ### DEPRECATED: Use `messageBox5` instead
    ///
    pub const MessageBox5 = messageBox5;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    /// ` secondaryActionText: []const u8 `
    ///
    pub fn messageBox5(self: KIO__ForwardingWorkerBase, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const primaryActionText_str = qtc.libqt_string{
            .len = primaryActionText.len,
            .data = primaryActionText.ptr,
        };
        const secondaryActionText_str = qtc.libqt_string{
            .len = secondaryActionText.len,
            .data = secondaryActionText.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox5(@ptrCast(self.ptr), @bitCast(typeVal), text_str, title_str, primaryActionText_str, secondaryActionText_str);
    }

    /// ### DEPRECATED: Use `messageBox32` instead
    ///
    pub const MessageBox32 = messageBox32;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` title: []const u8 `
    ///
    pub fn messageBox32(self: KIO__ForwardingWorkerBase, text: []const u8, typeVal: i32, title: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox32(@ptrCast(self.ptr), text_str, @bitCast(typeVal), title_str);
    }

    /// ### DEPRECATED: Use `messageBox42` instead
    ///
    pub const MessageBox42 = messageBox42;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    pub fn messageBox42(self: KIO__ForwardingWorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const primaryActionText_str = qtc.libqt_string{
            .len = primaryActionText.len,
            .data = primaryActionText.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox42(@ptrCast(self.ptr), text_str, @bitCast(typeVal), title_str, primaryActionText_str);
    }

    /// ### DEPRECATED: Use `messageBox52` instead
    ///
    pub const MessageBox52 = messageBox52;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    /// ` secondaryActionText: []const u8 `
    ///
    pub fn messageBox52(self: KIO__ForwardingWorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const primaryActionText_str = qtc.libqt_string{
            .len = primaryActionText.len,
            .data = primaryActionText.ptr,
        };
        const secondaryActionText_str = qtc.libqt_string{
            .len = secondaryActionText.len,
            .data = secondaryActionText.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox52(@ptrCast(self.ptr), text_str, @bitCast(typeVal), title_str, primaryActionText_str, secondaryActionText_str);
    }

    /// ### DEPRECATED: Use `messageBox6` instead
    ///
    pub const MessageBox6 = messageBox6;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    /// ` secondaryActionText: []const u8 `
    ///
    /// ` dontAskAgainName: []const u8 `
    ///
    pub fn messageBox6(self: KIO__ForwardingWorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8, dontAskAgainName: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const primaryActionText_str = qtc.libqt_string{
            .len = primaryActionText.len,
            .data = primaryActionText.ptr,
        };
        const secondaryActionText_str = qtc.libqt_string{
            .len = secondaryActionText.len,
            .data = secondaryActionText.ptr,
        };
        const dontAskAgainName_str = qtc.libqt_string{
            .len = dontAskAgainName.len,
            .data = dontAskAgainName.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox6(@ptrCast(self.ptr), text_str, @bitCast(typeVal), title_str, primaryActionText_str, secondaryActionText_str, dontAskAgainName_str);
    }

    /// ### DEPRECATED: Use `configValue22` instead
    ///
    pub const ConfigValue22 = configValue22;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn configValue22(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator, key: []const u8, defaultValue: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.KIO__WorkerBase_ConfigValue22(@ptrCast(self.ptr), key_str, defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__ForwardingWorkerBase.configValue22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTimeoutSpecialCommand2` instead
    ///
    pub const SetTimeoutSpecialCommand2 = setTimeoutSpecialCommand2;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` timeout: i32 `
    ///
    /// ` _data: []u8 `
    ///
    pub fn setTimeoutSpecialCommand2(self: KIO__ForwardingWorkerBase, timeout: i32, _data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand2(@ptrCast(self.ptr), @bitCast(timeout), data_str);
    }

    /// ### DEPRECATED: Use `openPasswordDialog2` instead
    ///
    pub const OpenPasswordDialog2 = openPasswordDialog2;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` info: KIO__AuthInfo `
    ///
    /// ` errorMsg: []const u8 `
    ///
    pub fn openPasswordDialog2(self: KIO__ForwardingWorkerBase, info: anytype, errorMsg: []const u8) i32 {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        const errorMsg_str = qtc.libqt_string{
            .len = errorMsg.len,
            .data = errorMsg.ptr,
        };
        return qtc.KIO__WorkerBase_OpenPasswordDialog2(@ptrCast(self.ptr), @ptrCast(info.ptr), errorMsg_str);
    }

    /// ### DEPRECATED: Use `waitForAnswer4` instead
    ///
    pub const WaitForAnswer4 = waitForAnswer4;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForAnswer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` expected1: i32 `
    ///
    /// ` expected2: i32 `
    ///
    /// ` _data: []u8 `
    ///
    /// ` pCmd: *i32 `
    ///
    pub fn waitForAnswer4(self: KIO__ForwardingWorkerBase, expected1: i32, expected2: i32, _data: []u8, pCmd: *i32) i32 {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer4(@ptrCast(self.ptr), @bitCast(expected1), @bitCast(expected2), data_str, @ptrCast(pCmd));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KIO__ForwardingWorkerBase, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__ForwardingWorkerBase_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KIO__ForwardingWorkerBase, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__ForwardingWorkerBase_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QEvent) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KIO__ForwardingWorkerBase, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__ForwardingWorkerBase_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KIO__ForwardingWorkerBase, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIO__ForwardingWorkerBase_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QObject, QEvent) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KIO__ForwardingWorkerBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KIO__ForwardingWorkerBase_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KIO__ForwardingWorkerBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KIO__ForwardingWorkerBase_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QTimerEvent) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KIO__ForwardingWorkerBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KIO__ForwardingWorkerBase_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KIO__ForwardingWorkerBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KIO__ForwardingWorkerBase_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QChildEvent) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KIO__ForwardingWorkerBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KIO__ForwardingWorkerBase_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KIO__ForwardingWorkerBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KIO__ForwardingWorkerBase_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QEvent) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KIO__ForwardingWorkerBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ForwardingWorkerBase_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KIO__ForwardingWorkerBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ForwardingWorkerBase_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KIO__ForwardingWorkerBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ForwardingWorkerBase_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KIO__ForwardingWorkerBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ForwardingWorkerBase_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `appConnectionMade` instead
    ///
    pub const AppConnectionMade = appConnectionMade;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn appConnectionMade(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_AppConnectionMade(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superAppConnectionMade` instead
    ///
    pub const SuperAppConnectionMade = superAppConnectionMade;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn superAppConnectionMade(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_SuperAppConnectionMade(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAppConnectionMade` instead
    ///
    pub const OnAppConnectionMade = onAppConnectionMade;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onAppConnectionMade(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnAppConnectionMade(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setHost` instead
    ///
    pub const SetHost = setHost;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` pass: []const u8 `
    ///
    pub fn setHost(self: KIO__ForwardingWorkerBase, host: []const u8, port: u16, user: []const u8, pass: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const pass_str = qtc.libqt_string{
            .len = pass.len,
            .data = pass.ptr,
        };
        qtc.KIO__ForwardingWorkerBase_SetHost(@ptrCast(self.ptr), host_str, @bitCast(port), user_str, pass_str);
    }

    /// ### DEPRECATED: Use `superSetHost` instead
    ///
    pub const SuperSetHost = superSetHost;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` pass: []const u8 `
    ///
    pub fn superSetHost(self: KIO__ForwardingWorkerBase, host: []const u8, port: u16, user: []const u8, pass: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const pass_str = qtc.libqt_string{
            .len = pass.len,
            .data = pass.ptr,
        };
        qtc.KIO__ForwardingWorkerBase_SuperSetHost(@ptrCast(self.ptr), host_str, @bitCast(port), user_str, pass_str);
    }

    /// ### DEPRECATED: Use `onSetHost` instead
    ///
    pub const OnSetHost = onSetHost;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, host: [*:0]const u8, port: u16, user: [*:0]const u8, pass: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetHost(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, [*:0]const u8, u16, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnSetHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `openConnection` instead
    ///
    pub const OpenConnection = openConnection;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn openConnection(self: KIO__ForwardingWorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_OpenConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superOpenConnection` instead
    ///
    pub const SuperOpenConnection = superOpenConnection;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn superOpenConnection(self: KIO__ForwardingWorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperOpenConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onOpenConnection` instead
    ///
    pub const OnOpenConnection = onOpenConnection;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onOpenConnection(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnOpenConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeConnection` instead
    ///
    pub const CloseConnection = closeConnection;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn closeConnection(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_CloseConnection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCloseConnection` instead
    ///
    pub const SuperCloseConnection = superCloseConnection;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn superCloseConnection(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_SuperCloseConnection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCloseConnection` instead
    ///
    pub const OnCloseConnection = onCloseConnection;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCloseConnection(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnCloseConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn open(self: KIO__ForwardingWorkerBase, url: anytype, mode: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Open(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superOpen(self: KIO__ForwardingWorkerBase, url: anytype, mode: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperOpen(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onOpen(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` size: usize `
    ///
    pub fn read(self: KIO__ForwardingWorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Read(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `superRead` instead
    ///
    pub const SuperRead = superRead;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` size: usize `
    ///
    pub fn superRead(self: KIO__ForwardingWorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperRead(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `onRead` instead
    ///
    pub const OnRead = onRead;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, size: usize) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRead(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _data: []u8 `
    ///
    pub fn write(self: KIO__ForwardingWorkerBase, _data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Write(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `superWrite` instead
    ///
    pub const SuperWrite = superWrite;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _data: []u8 `
    ///
    pub fn superWrite(self: KIO__ForwardingWorkerBase, _data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperWrite(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `onWrite` instead
    ///
    pub const OnWrite = onWrite;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, data: qtc.libqt_string) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onWrite(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, qtc.libqt_string) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seek` instead
    ///
    pub const Seek = seek;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` offset: usize `
    ///
    pub fn seek(self: KIO__ForwardingWorkerBase, offset: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Seek(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `superSeek` instead
    ///
    pub const SuperSeek = superSeek;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` offset: usize `
    ///
    pub fn superSeek(self: KIO__ForwardingWorkerBase, offset: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperSeek(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `onSeek` instead
    ///
    pub const OnSeek = onSeek;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, offset: usize) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSeek(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `truncate` instead
    ///
    pub const Truncate = truncate;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` size: usize `
    ///
    pub fn truncate(self: KIO__ForwardingWorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Truncate(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `superTruncate` instead
    ///
    pub const SuperTruncate = superTruncate;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` size: usize `
    ///
    pub fn superTruncate(self: KIO__ForwardingWorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperTruncate(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `onTruncate` instead
    ///
    pub const OnTruncate = onTruncate;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, size: usize) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onTruncate(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnTruncate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn close(self: KIO__ForwardingWorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Close(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn superClose(self: KIO__ForwardingWorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperClose(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onClose(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `chown` instead
    ///
    pub const Chown = chown;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` owner: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn chown(self: KIO__ForwardingWorkerBase, url: anytype, owner: []const u8, group: []const u8) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Chown(@ptrCast(self.ptr), @ptrCast(url.ptr), owner_str, group_str) };
    }

    /// ### DEPRECATED: Use `superChown` instead
    ///
    pub const SuperChown = superChown;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    /// ` owner: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn superChown(self: KIO__ForwardingWorkerBase, url: anytype, owner: []const u8, group: []const u8) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperChown(@ptrCast(self.ptr), @ptrCast(url.ptr), owner_str, group_str) };
    }

    /// ### DEPRECATED: Use `onChown` instead
    ///
    pub const OnChown = onChown;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl, owner: [*:0]const u8, group: [*:0]const u8) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onChown(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, [*:0]const u8, [*:0]const u8) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnChown(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `special` instead
    ///
    pub const Special = special;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _data: []u8 `
    ///
    pub fn special(self: KIO__ForwardingWorkerBase, _data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Special(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `superSpecial` instead
    ///
    pub const SuperSpecial = superSpecial;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` _data: []u8 `
    ///
    pub fn superSpecial(self: KIO__ForwardingWorkerBase, _data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperSpecial(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `onSpecial` instead
    ///
    pub const OnSpecial = onSpecial;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, data: qtc.libqt_string) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSpecial(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, qtc.libqt_string) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSpecial(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fileSystemFreeSpace` instead
    ///
    pub const FileSystemFreeSpace = fileSystemFreeSpace;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn fileSystemFreeSpace(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_FileSystemFreeSpace(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `superFileSystemFreeSpace` instead
    ///
    pub const SuperFileSystemFreeSpace = superFileSystemFreeSpace;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn superFileSystemFreeSpace(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperFileSystemFreeSpace(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onFileSystemFreeSpace` instead
    ///
    pub const OnFileSystemFreeSpace = onFileSystemFreeSpace;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, url: QUrl) callconv(.c) KIO__WorkerResult `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFileSystemFreeSpace(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnFileSystemFreeSpace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `workerStatus2` instead
    ///
    pub const WorkerStatus2 = workerStatus2;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn workerStatus2(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_WorkerStatus2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superWorkerStatus2` instead
    ///
    pub const SuperWorkerStatus2 = superWorkerStatus2;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn superWorkerStatus2(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_SuperWorkerStatus2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWorkerStatus2` instead
    ///
    pub const OnWorkerStatus2 = onWorkerStatus2;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onWorkerStatus2(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnWorkerStatus2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reparseConfiguration` instead
    ///
    pub const ReparseConfiguration = reparseConfiguration;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn reparseConfiguration(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_ReparseConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReparseConfiguration` instead
    ///
    pub const SuperReparseConfiguration = superReparseConfiguration;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn superReparseConfiguration(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_SuperReparseConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReparseConfiguration` instead
    ///
    pub const OnReparseConfiguration = onReparseConfiguration;

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onReparseConfiguration(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnReparseConfiguration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn sender(self: KIO__ForwardingWorkerBase) QObject {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn superSender(self: KIO__ForwardingWorkerBase) QObject {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) QObject) void {
        qtc.KIO__ForwardingWorkerBase_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn senderSignalIndex(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__ForwardingWorkerBase_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn superSenderSignalIndex(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__ForwardingWorkerBase_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KIO__ForwardingWorkerBase_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KIO__ForwardingWorkerBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__ForwardingWorkerBase_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KIO__ForwardingWorkerBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__ForwardingWorkerBase_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIO__ForwardingWorkerBase_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KIO__ForwardingWorkerBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__ForwardingWorkerBase_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KIO__ForwardingWorkerBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__ForwardingWorkerBase_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QMetaMethod) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn delete(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#public-types)
pub const enums = struct {
    pub const UDSEntryCreationMode = enum(i32) {
        pub const UDSEntryCreationInStat: i32 = 0;
        pub const UDSEntryCreationInListDir: i32 = 1;
    };
};
