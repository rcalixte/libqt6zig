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

    /// New constructs a new KIO::ForwardingWorkerBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: []u8 `
    ///
    /// ` poolSocket: []u8 `
    ///
    /// ` appSocket: []u8 `
    ///
    pub fn New(protocol: []u8, poolSocket: []u8, appSocket: []u8) KIO__ForwardingWorkerBase {
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn MetaObject(self: KIO__ForwardingWorkerBase) QMetaObject {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KIO__ForwardingWorkerBase_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn SuperMetaObject(self: KIO__ForwardingWorkerBase) QMetaObject {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KIO__ForwardingWorkerBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__ForwardingWorkerBase_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KIO__ForwardingWorkerBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__ForwardingWorkerBase_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KIO__ForwardingWorkerBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__ForwardingWorkerBase_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: KIO__ForwardingWorkerBase, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KIO__ForwardingWorkerBase_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KIO__ForwardingWorkerBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__ForwardingWorkerBase_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__forwardingworkerbase.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn Get(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Get(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

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
    pub fn OnGet(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnGet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGet` instead
    ///
    pub const QBaseGet = SuperGet;

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
    pub fn SuperGet(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperGet(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

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
    pub fn Put(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Put(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

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
    pub fn OnPut(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, i32, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnPut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPut` instead
    ///
    pub const QBasePut = SuperPut;

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
    pub fn SuperPut(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperPut(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#stat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn Stat(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Stat(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

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
    pub fn OnStat(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnStat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStat` instead
    ///
    pub const QBaseStat = SuperStat;

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
    pub fn SuperStat(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperStat(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn Mimetype(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Mimetype(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

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
    pub fn OnMimetype(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnMimetype(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMimetype` instead
    ///
    pub const QBaseMimetype = SuperMimetype;

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
    pub fn SuperMimetype(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperMimetype(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#listDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn ListDir(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_ListDir(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

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
    pub fn OnListDir(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnListDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperListDir` instead
    ///
    pub const QBaseListDir = SuperListDir;

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
    pub fn SuperListDir(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperListDir(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

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
    pub fn Mkdir(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Mkdir(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

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
    pub fn OnMkdir(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnMkdir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMkdir` instead
    ///
    pub const QBaseMkdir = SuperMkdir;

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
    pub fn SuperMkdir(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperMkdir(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

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
    pub fn Rename(self: KIO__ForwardingWorkerBase, src: anytype, dest: anytype, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Rename(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(flags)) };
    }

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
    pub fn OnRename(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnRename(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRename` instead
    ///
    pub const QBaseRename = SuperRename;

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
    pub fn SuperRename(self: KIO__ForwardingWorkerBase, src: anytype, dest: anytype, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperRename(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(flags)) };
    }

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
    pub fn Symlink(self: KIO__ForwardingWorkerBase, target: []const u8, dest: anytype, flags: i32) KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Symlink(@ptrCast(self.ptr), target_str, @ptrCast(dest.ptr), @bitCast(flags)) };
    }

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
    pub fn OnSymlink(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, [*:0]const u8, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSymlink(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSymlink` instead
    ///
    pub const QBaseSymlink = SuperSymlink;

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
    pub fn SuperSymlink(self: KIO__ForwardingWorkerBase, target: []const u8, dest: anytype, flags: i32) KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperSymlink(@ptrCast(self.ptr), target_str, @ptrCast(dest.ptr), @bitCast(flags)) };
    }

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
    pub fn Chmod(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Chmod(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

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
    pub fn OnChmod(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnChmod(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChmod` instead
    ///
    pub const QBaseChmod = SuperChmod;

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
    pub fn SuperChmod(self: KIO__ForwardingWorkerBase, url: anytype, permissions: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperChmod(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(permissions)) };
    }

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
    pub fn SetModificationTime(self: KIO__ForwardingWorkerBase, url: anytype, mtime: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SetModificationTime(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(mtime.ptr)) };
    }

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
    pub fn OnSetModificationTime(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, QDateTime) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSetModificationTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetModificationTime` instead
    ///
    pub const QBaseSetModificationTime = SuperSetModificationTime;

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
    pub fn SuperSetModificationTime(self: KIO__ForwardingWorkerBase, url: anytype, mtime: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperSetModificationTime(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(mtime.ptr)) };
    }

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
    pub fn Copy(self: KIO__ForwardingWorkerBase, src: anytype, dest: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Copy(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

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
    pub fn OnCopy(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, QUrl, i32, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnCopy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCopy` instead
    ///
    pub const QBaseCopy = SuperCopy;

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
    pub fn SuperCopy(self: KIO__ForwardingWorkerBase, src: anytype, dest: anytype, permissions: i32, flags: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperCopy(@ptrCast(self.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr), @bitCast(permissions), @bitCast(flags)) };
    }

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
    pub fn Del(self: KIO__ForwardingWorkerBase, url: anytype, isfile: bool) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Del(@ptrCast(self.ptr), @ptrCast(url.ptr), isfile) };
    }

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
    pub fn OnDel(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, bool) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnDel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDel` instead
    ///
    pub const QBaseDel = SuperDel;

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
    pub fn SuperDel(self: KIO__ForwardingWorkerBase, url: anytype, isfile: bool) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperDel(@ptrCast(self.ptr), @ptrCast(url.ptr), isfile) };
    }

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
    pub fn RewriteUrl(self: KIO__ForwardingWorkerBase, url: anytype, newURL: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(newURL)._is_QUrl;
        return qtc.KIO__ForwardingWorkerBase_RewriteUrl(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(newURL.ptr));
    }

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
    pub fn OnRewriteUrl(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, QUrl) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnRewriteUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRewriteUrl` instead
    ///
    pub const QBaseRewriteUrl = SuperRewriteUrl;

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
    pub fn SuperRewriteUrl(self: KIO__ForwardingWorkerBase, url: anytype, newURL: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(newURL)._is_QUrl;
        return qtc.KIO__ForwardingWorkerBase_SuperRewriteUrl(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(newURL.ptr));
    }

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
    pub fn AdjustUDSEntry(self: KIO__ForwardingWorkerBase, entry: anytype, creationMode: i32) void {
        comptime _ = @TypeOf(entry)._is_KIO__UDSEntry;
        qtc.KIO__ForwardingWorkerBase_AdjustUDSEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr), @bitCast(creationMode));
    }

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
    pub fn OnAdjustUDSEntry(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, KIO__UDSEntry, i32) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnAdjustUDSEntry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAdjustUDSEntry` instead
    ///
    pub const QBaseAdjustUDSEntry = SuperAdjustUDSEntry;

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
    pub fn SuperAdjustUDSEntry(self: KIO__ForwardingWorkerBase, entry: anytype, creationMode: i32) void {
        comptime _ = @TypeOf(entry)._is_KIO__UDSEntry;
        qtc.KIO__ForwardingWorkerBase_SuperAdjustUDSEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr), @bitCast(creationMode));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#processedUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn ProcessedUrl(self: KIO__ForwardingWorkerBase) QUrl {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_ProcessedUrl(@ptrCast(self.ptr)) };
    }

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
    pub fn OnProcessedUrl(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) QUrl) void {
        qtc.KIO__ForwardingWorkerBase_OnProcessedUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProcessedUrl` instead
    ///
    pub const QBaseProcessedUrl = SuperProcessedUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#processedUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn SuperProcessedUrl(self: KIO__ForwardingWorkerBase) QUrl {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperProcessedUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#requestedUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn RequestedUrl(self: KIO__ForwardingWorkerBase) QUrl {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_RequestedUrl(@ptrCast(self.ptr)) };
    }

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
    pub fn OnRequestedUrl(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) QUrl) void {
        qtc.KIO__ForwardingWorkerBase_OnRequestedUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRequestedUrl` instead
    ///
    pub const QBaseRequestedUrl = SuperRequestedUrl;

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#requestedUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn SuperRequestedUrl(self: KIO__ForwardingWorkerBase) QUrl {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperRequestedUrl(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__forwardingworkerbase.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__forwardingworkerbase.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__forwardingworkerbase.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KIO__ForwardingWorkerBase, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn IsWidgetType(self: KIO__ForwardingWorkerBase) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn IsWindowType(self: KIO__ForwardingWorkerBase) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn IsQuickItemType(self: KIO__ForwardingWorkerBase) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn SignalsBlocked(self: KIO__ForwardingWorkerBase) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KIO__ForwardingWorkerBase, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn Thread(self: KIO__ForwardingWorkerBase) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KIO__ForwardingWorkerBase, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KIO__ForwardingWorkerBase, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KIO__ForwardingWorkerBase, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KIO__ForwardingWorkerBase, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KIO__ForwardingWorkerBase, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kio__forwardingworkerbase.Children: Memory allocation failed");
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KIO__ForwardingWorkerBase, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KIO__ForwardingWorkerBase, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KIO__ForwardingWorkerBase, obj: anytype) void {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KIO__ForwardingWorkerBase, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn Disconnect3(self: KIO__ForwardingWorkerBase) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KIO__ForwardingWorkerBase, receiver: anytype) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn DumpObjectTree(self: KIO__ForwardingWorkerBase) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn DumpObjectInfo(self: KIO__ForwardingWorkerBase) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KIO__ForwardingWorkerBase, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KIO__ForwardingWorkerBase, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kio__forwardingworkerbase.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__forwardingworkerbase.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn BindingStorage(self: KIO__ForwardingWorkerBase) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn BindingStorage2(self: KIO__ForwardingWorkerBase) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn Destroyed(self: KIO__ForwardingWorkerBase) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn Parent(self: KIO__ForwardingWorkerBase) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KIO__ForwardingWorkerBase, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn DeleteLater(self: KIO__ForwardingWorkerBase) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KIO__ForwardingWorkerBase, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KIO__ForwardingWorkerBase, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KIO__ForwardingWorkerBase, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KIO__ForwardingWorkerBase, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KIO__ForwardingWorkerBase, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KIO__ForwardingWorkerBase, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KIO__ForwardingWorkerBase, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KIO__ForwardingWorkerBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#exit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn Exit(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_Exit(@ptrCast(self.ptr));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#dispatchLoop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn DispatchLoop(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_DispatchLoop(@ptrCast(self.ptr));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` data: []u8 `
    ///
    pub fn Data(self: KIO__ForwardingWorkerBase, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__WorkerBase_Data(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#dataReq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn DataReq(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_DataReq(@ptrCast(self.ptr));
    }

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
    pub fn WorkerStatus(self: KIO__ForwardingWorkerBase, host: []const u8, connected: bool) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_WorkerStatus(@ptrCast(self.ptr), host_str, connected);
    }

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
    pub fn StatEntry(self: KIO__ForwardingWorkerBase, _entry: anytype) void {
        comptime _ = @TypeOf(_entry)._is_KIO__UDSEntry;
        qtc.KIO__WorkerBase_StatEntry(@ptrCast(self.ptr), @ptrCast(_entry.ptr));
    }

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
    pub fn ListEntries(self: KIO__ForwardingWorkerBase, _entry: []KIO__UDSEntry) void {
        const _entry_list = qtc.libqt_list{
            .len = _entry.len,
            .data = @ptrCast(_entry.ptr),
        };
        qtc.KIO__WorkerBase_ListEntries(@ptrCast(self.ptr), _entry_list);
    }

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
    pub fn CanResume(self: KIO__ForwardingWorkerBase, offset: usize) bool {
        return qtc.KIO__WorkerBase_CanResume(@ptrCast(self.ptr), @bitCast(offset));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn CanResume2(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_CanResume2(@ptrCast(self.ptr));
    }

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
    pub fn TotalSize(self: KIO__ForwardingWorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_TotalSize(@ptrCast(self.ptr), @bitCast(_bytes));
    }

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
    pub fn ProcessedSize(self: KIO__ForwardingWorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_ProcessedSize(@ptrCast(self.ptr), @bitCast(_bytes));
    }

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
    pub fn Position(self: KIO__ForwardingWorkerBase, _pos: usize) void {
        qtc.KIO__WorkerBase_Position(@ptrCast(self.ptr), @bitCast(_pos));
    }

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
    pub fn Written(self: KIO__ForwardingWorkerBase, _bytes: usize) void {
        qtc.KIO__WorkerBase_Written(@ptrCast(self.ptr), @bitCast(_bytes));
    }

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
    pub fn Truncated(self: KIO__ForwardingWorkerBase, _length: usize) void {
        qtc.KIO__WorkerBase_Truncated(@ptrCast(self.ptr), @bitCast(_length));
    }

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
    pub fn Speed(self: KIO__ForwardingWorkerBase, _bytes_per_second: usize) void {
        qtc.KIO__WorkerBase_Speed(@ptrCast(self.ptr), @bitCast(_bytes_per_second));
    }

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
    pub fn Redirection(self: KIO__ForwardingWorkerBase, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KIO__WorkerBase_Redirection(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#errorPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn ErrorPage(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_ErrorPage(@ptrCast(self.ptr));
    }

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
    pub fn MimeType(self: KIO__ForwardingWorkerBase, _type: []const u8) void {
        const _type_str = qtc.libqt_string{
            .len = _type.len,
            .data = _type.ptr,
        };
        qtc.KIO__WorkerBase_MimeType(@ptrCast(self.ptr), _type_str);
    }

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
    pub fn Warning(self: KIO__ForwardingWorkerBase, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_Warning(@ptrCast(self.ptr), msg_str);
    }

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
    pub fn InfoMessage(self: KIO__ForwardingWorkerBase, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_InfoMessage(@ptrCast(self.ptr), msg_str);
    }

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
    pub fn MessageBox(self: KIO__ForwardingWorkerBase, typeVal: i32, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox(@ptrCast(self.ptr), @bitCast(typeVal), text_str);
    }

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
    pub fn MessageBox2(self: KIO__ForwardingWorkerBase, text: []const u8, typeVal: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox2(@ptrCast(self.ptr), text_str, @bitCast(typeVal));
    }

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
    pub fn SslError(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator, sslData: ArrayMap_constu8_QVariant) i32 {
        const sslData_count = sslData.count();
        const sslData_keys = allocator.alloc(qtc.libqt_string, sslData_count) catch @panic("kio__forwardingworkerbase.SslError: Memory allocation failed");
        defer allocator.free(sslData_keys);
        const sslData_values = allocator.alloc(QtC.QVariant, sslData_count) catch @panic("kio__forwardingworkerbase.SslError: Memory allocation failed");
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
    pub fn SetMetaData(self: KIO__ForwardingWorkerBase, key: []const u8, value: []const u8) void {
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
    pub fn HasMetaData(self: KIO__ForwardingWorkerBase, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_HasMetaData(@ptrCast(self.ptr), key_str);
    }

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
    pub fn MetaData(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__WorkerBase_MetaData(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__forwardingworkerbase.MetaData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#allMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn AllMetaData(self: KIO__ForwardingWorkerBase) KIO__MetaData {
        return .{ .ptr = qtc.KIO__WorkerBase_AllMetaData(@ptrCast(self.ptr)) };
    }

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
    pub fn MapConfig(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator) ArrayMap_constu8_QVariant {
        const _map: qtc.libqt_map = qtc.KIO__WorkerBase_MapConfig(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_QVariant = .empty;
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kio__forwardingworkerbase.MapConfig: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, .{ .ptr = @ptrCast(_value) }) catch @panic("kio__forwardingworkerbase.MapConfig: Memory allocation failed");
        }
        return _ret;
    }

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
    pub fn ConfigValue(self: KIO__ForwardingWorkerBase, key: []const u8, defaultValue: bool) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue(@ptrCast(self.ptr), key_str, defaultValue);
    }

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
    pub fn ConfigValue2(self: KIO__ForwardingWorkerBase, key: []const u8, defaultValue: i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue2(@ptrCast(self.ptr), key_str, @bitCast(defaultValue));
    }

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
    pub fn ConfigValue3(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__WorkerBase_ConfigValue3(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__forwardingworkerbase.ConfigValue3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#config)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn Config(self: KIO__ForwardingWorkerBase) KConfigGroup {
        return .{ .ptr = qtc.KIO__WorkerBase_Config(@ptrCast(self.ptr)) };
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#remoteEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn RemoteEncoding(self: KIO__ForwardingWorkerBase) KRemoteEncoding {
        return .{ .ptr = qtc.KIO__WorkerBase_RemoteEncoding(@ptrCast(self.ptr)) };
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#connectTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn ConnectTimeout(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__WorkerBase_ConnectTimeout(@ptrCast(self.ptr));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#proxyConnectTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn ProxyConnectTimeout(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__WorkerBase_ProxyConnectTimeout(@ptrCast(self.ptr));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#responseTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn ResponseTimeout(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__WorkerBase_ResponseTimeout(@ptrCast(self.ptr));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#readTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn ReadTimeout(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__WorkerBase_ReadTimeout(@ptrCast(self.ptr));
    }

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
    pub fn SetTimeoutSpecialCommand(self: KIO__ForwardingWorkerBase, timeout: i32) void {
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand(@ptrCast(self.ptr), @bitCast(timeout));
    }

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
    pub fn ReadData(self: KIO__ForwardingWorkerBase, buffer: []u8) i32 {
        const buffer_str = qtc.libqt_string{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        return qtc.KIO__WorkerBase_ReadData(@ptrCast(self.ptr), buffer_str);
    }

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
    pub fn ListEntry(self: KIO__ForwardingWorkerBase, entry: anytype) void {
        comptime _ = @TypeOf(entry)._is_KIO__UDSEntry;
        qtc.KIO__WorkerBase_ListEntry(@ptrCast(self.ptr), @ptrCast(entry.ptr));
    }

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
    pub fn ConnectWorker(self: KIO__ForwardingWorkerBase, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KIO__WorkerBase_ConnectWorker(@ptrCast(self.ptr), path_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#disconnectWorker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn DisconnectWorker(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_DisconnectWorker(@ptrCast(self.ptr));
    }

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
    pub fn OpenPasswordDialog(self: KIO__ForwardingWorkerBase, info: anytype) i32 {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_OpenPasswordDialog(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

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
    pub fn CheckCachedAuthentication(self: KIO__ForwardingWorkerBase, info: anytype) bool {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_CheckCachedAuthentication(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

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
    pub fn CacheAuthentication(self: KIO__ForwardingWorkerBase, info: anytype) bool {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        return qtc.KIO__WorkerBase_CacheAuthentication(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

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
    /// ` data: []u8 `
    ///
    pub fn WaitForAnswer(self: KIO__ForwardingWorkerBase, expected1: i32, expected2: i32, data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer(@ptrCast(self.ptr), @bitCast(expected1), @bitCast(expected2), data_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sendMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn SendMetaData(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_SendMetaData(@ptrCast(self.ptr));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sendAndKeepMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn SendAndKeepMetaData(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__WorkerBase_SendAndKeepMetaData(@ptrCast(self.ptr));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#wasKilled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn WasKilled(self: KIO__ForwardingWorkerBase) bool {
        return qtc.KIO__WorkerBase_WasKilled(@ptrCast(self.ptr));
    }

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
    pub fn LookupHost(self: KIO__ForwardingWorkerBase, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_LookupHost(@ptrCast(self.ptr), host_str);
    }

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
    pub fn WaitForHostInfo(self: KIO__ForwardingWorkerBase, info: anytype) i32 {
        comptime _ = @TypeOf(info)._is_QHostInfo;
        return qtc.KIO__WorkerBase_WaitForHostInfo(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

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
    pub fn RequestPrivilegeOperation(self: KIO__ForwardingWorkerBase, operationDetails: []const u8) i32 {
        const operationDetails_str = qtc.libqt_string{
            .len = operationDetails.len,
            .data = operationDetails.ptr,
        };
        return qtc.KIO__WorkerBase_RequestPrivilegeOperation(@ptrCast(self.ptr), operationDetails_str);
    }

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
    pub fn AddTemporaryAuthorization(self: KIO__ForwardingWorkerBase, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KIO__WorkerBase_AddTemporaryAuthorization(@ptrCast(self.ptr), action_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setIncomingMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` metaData: KIO__MetaData `
    ///
    pub fn SetIncomingMetaData(self: KIO__ForwardingWorkerBase, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_KIO__MetaData;
        qtc.KIO__WorkerBase_SetIncomingMetaData(@ptrCast(self.ptr), @ptrCast(metaData.ptr));
    }

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
    pub fn MessageBox3(self: KIO__ForwardingWorkerBase, typeVal: i32, text: []const u8, title: []const u8) i32 {
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
    pub fn MessageBox4(self: KIO__ForwardingWorkerBase, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8) i32 {
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
    pub fn MessageBox5(self: KIO__ForwardingWorkerBase, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
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
    pub fn MessageBox32(self: KIO__ForwardingWorkerBase, text: []const u8, typeVal: i32, title: []const u8) i32 {
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
    pub fn MessageBox42(self: KIO__ForwardingWorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8) i32 {
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
    pub fn MessageBox52(self: KIO__ForwardingWorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
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
    pub fn MessageBox6(self: KIO__ForwardingWorkerBase, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8, dontAskAgainName: []const u8) i32 {
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
    pub fn ConfigValue22(self: KIO__ForwardingWorkerBase, allocator: std.mem.Allocator, key: []const u8, defaultValue: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__forwardingworkerbase.ConfigValue22: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    /// ` data: []u8 `
    ///
    pub fn SetTimeoutSpecialCommand2(self: KIO__ForwardingWorkerBase, timeout: i32, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand2(@ptrCast(self.ptr), @bitCast(timeout), data_str);
    }

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
    pub fn OpenPasswordDialog2(self: KIO__ForwardingWorkerBase, info: anytype, errorMsg: []const u8) i32 {
        comptime _ = @TypeOf(info)._is_KIO__AuthInfo;
        const errorMsg_str = qtc.libqt_string{
            .len = errorMsg.len,
            .data = errorMsg.ptr,
        };
        return qtc.KIO__WorkerBase_OpenPasswordDialog2(@ptrCast(self.ptr), @ptrCast(info.ptr), errorMsg_str);
    }

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
    /// ` data: []u8 `
    ///
    /// ` pCmd: *i32 `
    ///
    pub fn WaitForAnswer4(self: KIO__ForwardingWorkerBase, expected1: i32, expected2: i32, data: []u8, pCmd: *i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer4(@ptrCast(self.ptr), @bitCast(expected1), @bitCast(expected2), data_str, @ptrCast(pCmd));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: KIO__ForwardingWorkerBase, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ForwardingWorkerBase_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KIO__ForwardingWorkerBase, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ForwardingWorkerBase_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QEvent) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KIO__ForwardingWorkerBase, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ForwardingWorkerBase_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KIO__ForwardingWorkerBase, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ForwardingWorkerBase_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QObject, QEvent) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KIO__ForwardingWorkerBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KIO__ForwardingWorkerBase_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KIO__ForwardingWorkerBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KIO__ForwardingWorkerBase_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QTimerEvent) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KIO__ForwardingWorkerBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KIO__ForwardingWorkerBase_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KIO__ForwardingWorkerBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KIO__ForwardingWorkerBase_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QChildEvent) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KIO__ForwardingWorkerBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KIO__ForwardingWorkerBase_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KIO__ForwardingWorkerBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KIO__ForwardingWorkerBase_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QEvent) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KIO__ForwardingWorkerBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ForwardingWorkerBase_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KIO__ForwardingWorkerBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ForwardingWorkerBase_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KIO__ForwardingWorkerBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ForwardingWorkerBase_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KIO__ForwardingWorkerBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ForwardingWorkerBase_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AppConnectionMade(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_AppConnectionMade(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperAppConnectionMade` instead
    ///
    pub const QBaseAppConnectionMade = SuperAppConnectionMade;

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
    pub fn SuperAppConnectionMade(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_SuperAppConnectionMade(@ptrCast(self.ptr));
    }

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
    pub fn OnAppConnectionMade(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnAppConnectionMade(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetHost(self: KIO__ForwardingWorkerBase, host: []const u8, port: u16, user: []const u8, pass: []const u8) void {
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

    /// ### DEPRECATED: Use `SuperSetHost` instead
    ///
    pub const QBaseSetHost = SuperSetHost;

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
    pub fn SuperSetHost(self: KIO__ForwardingWorkerBase, host: []const u8, port: u16, user: []const u8, pass: []const u8) void {
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
    pub fn OnSetHost(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, [*:0]const u8, u16, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnSetHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OpenConnection(self: KIO__ForwardingWorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_OpenConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperOpenConnection` instead
    ///
    pub const QBaseOpenConnection = SuperOpenConnection;

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
    pub fn SuperOpenConnection(self: KIO__ForwardingWorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperOpenConnection(@ptrCast(self.ptr)) };
    }

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
    pub fn OnOpenConnection(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnOpenConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn CloseConnection(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_CloseConnection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseConnection` instead
    ///
    pub const QBaseCloseConnection = SuperCloseConnection;

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
    pub fn SuperCloseConnection(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_SuperCloseConnection(@ptrCast(self.ptr));
    }

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
    pub fn OnCloseConnection(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnCloseConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Open(self: KIO__ForwardingWorkerBase, url: anytype, mode: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Open(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

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
    pub fn SuperOpen(self: KIO__ForwardingWorkerBase, url: anytype, mode: i32) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperOpen(@ptrCast(self.ptr), @ptrCast(url.ptr), @bitCast(mode)) };
    }

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
    pub fn OnOpen(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, i32) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Read(self: KIO__ForwardingWorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Read(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `SuperRead` instead
    ///
    pub const QBaseRead = SuperRead;

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
    pub fn SuperRead(self: KIO__ForwardingWorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperRead(@ptrCast(self.ptr), @bitCast(size)) };
    }

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
    pub fn OnRead(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` data: []u8 `
    ///
    pub fn Write(self: KIO__ForwardingWorkerBase, data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Write(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `SuperWrite` instead
    ///
    pub const QBaseWrite = SuperWrite;

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
    /// ` data: []u8 `
    ///
    pub fn SuperWrite(self: KIO__ForwardingWorkerBase, data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperWrite(@ptrCast(self.ptr), data_str) };
    }

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
    pub fn OnWrite(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, qtc.libqt_string) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Seek(self: KIO__ForwardingWorkerBase, offset: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Seek(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `SuperSeek` instead
    ///
    pub const QBaseSeek = SuperSeek;

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
    pub fn SuperSeek(self: KIO__ForwardingWorkerBase, offset: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperSeek(@ptrCast(self.ptr), @bitCast(offset)) };
    }

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
    pub fn OnSeek(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Truncate(self: KIO__ForwardingWorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Truncate(@ptrCast(self.ptr), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `SuperTruncate` instead
    ///
    pub const QBaseTruncate = SuperTruncate;

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
    pub fn SuperTruncate(self: KIO__ForwardingWorkerBase, size: usize) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperTruncate(@ptrCast(self.ptr), @bitCast(size)) };
    }

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
    pub fn OnTruncate(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, usize) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnTruncate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Close(self: KIO__ForwardingWorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Close(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

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
    pub fn SuperClose(self: KIO__ForwardingWorkerBase) KIO__WorkerResult {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperClose(@ptrCast(self.ptr)) };
    }

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
    pub fn OnClose(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Chown(self: KIO__ForwardingWorkerBase, url: anytype, owner: []const u8, group: []const u8) KIO__WorkerResult {
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

    /// ### DEPRECATED: Use `SuperChown` instead
    ///
    pub const QBaseChown = SuperChown;

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
    pub fn SuperChown(self: KIO__ForwardingWorkerBase, url: anytype, owner: []const u8, group: []const u8) KIO__WorkerResult {
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
    pub fn OnChown(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl, [*:0]const u8, [*:0]const u8) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnChown(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` data: []u8 `
    ///
    pub fn Special(self: KIO__ForwardingWorkerBase, data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Special(@ptrCast(self.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `SuperSpecial` instead
    ///
    pub const QBaseSpecial = SuperSpecial;

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
    /// ` data: []u8 `
    ///
    pub fn SuperSpecial(self: KIO__ForwardingWorkerBase, data: []u8) KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperSpecial(@ptrCast(self.ptr), data_str) };
    }

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
    pub fn OnSpecial(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, qtc.libqt_string) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSpecial(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FileSystemFreeSpace(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_FileSystemFreeSpace(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperFileSystemFreeSpace` instead
    ///
    pub const QBaseFileSystemFreeSpace = SuperFileSystemFreeSpace;

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
    pub fn SuperFileSystemFreeSpace(self: KIO__ForwardingWorkerBase, url: anytype) KIO__WorkerResult {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperFileSystemFreeSpace(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

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
    pub fn OnFileSystemFreeSpace(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QUrl) callconv(.c) KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnFileSystemFreeSpace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WorkerStatus2(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_WorkerStatus2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperWorkerStatus2` instead
    ///
    pub const QBaseWorkerStatus2 = SuperWorkerStatus2;

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
    pub fn SuperWorkerStatus2(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_SuperWorkerStatus2(@ptrCast(self.ptr));
    }

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
    pub fn OnWorkerStatus2(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnWorkerStatus2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ReparseConfiguration(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_ReparseConfiguration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReparseConfiguration` instead
    ///
    pub const QBaseReparseConfiguration = SuperReparseConfiguration;

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
    pub fn SuperReparseConfiguration(self: KIO__ForwardingWorkerBase) void {
        qtc.KIO__ForwardingWorkerBase_SuperReparseConfiguration(@ptrCast(self.ptr));
    }

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
    pub fn OnReparseConfiguration(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnReparseConfiguration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KIO__ForwardingWorkerBase) QObject {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn SuperSender(self: KIO__ForwardingWorkerBase) QObject {
        return .{ .ptr = qtc.KIO__ForwardingWorkerBase_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) QObject) void {
        qtc.KIO__ForwardingWorkerBase_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__ForwardingWorkerBase_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn SuperSenderSignalIndex(self: KIO__ForwardingWorkerBase) i32 {
        return qtc.KIO__ForwardingWorkerBase_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KIO__ForwardingWorkerBase, callback: *const fn () callconv(.c) i32) void {
        qtc.KIO__ForwardingWorkerBase_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KIO__ForwardingWorkerBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__ForwardingWorkerBase_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KIO__ForwardingWorkerBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__ForwardingWorkerBase_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIO__ForwardingWorkerBase_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KIO__ForwardingWorkerBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__ForwardingWorkerBase_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KIO__ForwardingWorkerBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__ForwardingWorkerBase_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, QMetaMethod) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KIO__ForwardingWorkerBase, callback: *const fn (KIO__ForwardingWorkerBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__ForwardingWorkerBase `
    ///
    pub fn Delete(self: KIO__ForwardingWorkerBase) void {
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
