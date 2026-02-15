const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const forwardingworkerbase_enums = enums;
const global_enums = @import("libglobal.zig").enums;
const job_base_enums = @import("libjob_base.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const workerbase_enums = @import("libworkerbase.zig").enums;
const map_constu8_qtcqvariant = std.StringHashMapUnmanaged(QtC.QVariant);

/// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html)
pub const kio__forwardingworkerbase = struct {
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
    pub fn New(protocol: []u8, poolSocket: []u8, appSocket: []u8) QtC.KIO__ForwardingWorkerBase {
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

        return qtc.KIO__ForwardingWorkerBase_new(protocol_str, poolSocket_str, appSocket_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KIO__ForwardingWorkerBase_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KIO__ForwardingWorkerBase_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KIO__ForwardingWorkerBase_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__ForwardingWorkerBase_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__ForwardingWorkerBase_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__ForwardingWorkerBase_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KIO__ForwardingWorkerBase_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__ForwardingWorkerBase_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__forwardingworkerbase.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn Get(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Get(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#get)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnGet(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnGet(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#get)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn QBaseGet(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseGet(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn Put(self: ?*anyopaque, url: ?*anyopaque, permissions: i32, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Put(@ptrCast(self), @ptrCast(url), @intCast(permissions), @intCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#put)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl, permissions: i32, flags: flag of job_base_enums.JobFlag) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnPut(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnPut(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#put)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn QBasePut(self: ?*anyopaque, url: ?*anyopaque, permissions: i32, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBasePut(@ptrCast(self), @ptrCast(url), @intCast(permissions), @intCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#stat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn Stat(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Stat(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#stat)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnStat(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnStat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#stat)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn QBaseStat(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseStat(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn Mimetype(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Mimetype(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mimetype)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnMimetype(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnMimetype(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mimetype)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn QBaseMimetype(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseMimetype(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#listDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn ListDir(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_ListDir(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#listDir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnListDir(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnListDir(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#listDir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn QBaseListDir(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseListDir(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mkdir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn Mkdir(self: ?*anyopaque, url: ?*anyopaque, permissions: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Mkdir(@ptrCast(self), @ptrCast(url), @intCast(permissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mkdir)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl, permissions: i32) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnMkdir(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnMkdir(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#mkdir)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn QBaseMkdir(self: ?*anyopaque, url: ?*anyopaque, permissions: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseMkdir(@ptrCast(self), @ptrCast(url), @intCast(permissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` src: QtC.QUrl `
    ///
    /// ` dest: QtC.QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn Rename(self: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Rename(@ptrCast(self), @ptrCast(src), @ptrCast(dest), @intCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rename)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, src: QtC.QUrl, dest: QtC.QUrl, flags: flag of job_base_enums.JobFlag) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnRename(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnRename(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rename)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` src: QtC.QUrl `
    ///
    /// ` dest: QtC.QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn QBaseRename(self: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseRename(@ptrCast(self), @ptrCast(src), @ptrCast(dest), @intCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#symlink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` target: []const u8 `
    ///
    /// ` dest: QtC.QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn Symlink(self: ?*anyopaque, target: []const u8, dest: ?*anyopaque, flags: i32) QtC.KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        return qtc.KIO__ForwardingWorkerBase_Symlink(@ptrCast(self), target_str, @ptrCast(dest), @intCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#symlink)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, target: [*:0]const u8, dest: QtC.QUrl, flags: flag of job_base_enums.JobFlag) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnSymlink(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSymlink(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#symlink)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` target: []const u8 `
    ///
    /// ` dest: QtC.QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn QBaseSymlink(self: ?*anyopaque, target: []const u8, dest: ?*anyopaque, flags: i32) QtC.KIO__WorkerResult {
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        return qtc.KIO__ForwardingWorkerBase_QBaseSymlink(@ptrCast(self), target_str, @ptrCast(dest), @intCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#chmod)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn Chmod(self: ?*anyopaque, url: ?*anyopaque, permissions: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Chmod(@ptrCast(self), @ptrCast(url), @intCast(permissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#chmod)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl, permissions: i32) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnChmod(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnChmod(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#chmod)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` permissions: i32 `
    ///
    pub fn QBaseChmod(self: ?*anyopaque, url: ?*anyopaque, permissions: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseChmod(@ptrCast(self), @ptrCast(url), @intCast(permissions));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#setModificationTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    pub fn SetModificationTime(self: ?*anyopaque, url: ?*anyopaque, mtime: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_SetModificationTime(@ptrCast(self), @ptrCast(url), @ptrCast(mtime));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#setModificationTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl, mtime: QtC.QDateTime) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnSetModificationTime(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSetModificationTime(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#setModificationTime)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` mtime: QtC.QDateTime `
    ///
    pub fn QBaseSetModificationTime(self: ?*anyopaque, url: ?*anyopaque, mtime: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseSetModificationTime(@ptrCast(self), @ptrCast(url), @ptrCast(mtime));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` src: QtC.QUrl `
    ///
    /// ` dest: QtC.QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn Copy(self: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque, permissions: i32, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Copy(@ptrCast(self), @ptrCast(src), @ptrCast(dest), @intCast(permissions), @intCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#copy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, src: QtC.QUrl, dest: QtC.QUrl, permissions: i32, flags: flag of job_base_enums.JobFlag) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnCopy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnCopy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#copy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` src: QtC.QUrl `
    ///
    /// ` dest: QtC.QUrl `
    ///
    /// ` permissions: i32 `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn QBaseCopy(self: ?*anyopaque, src: ?*anyopaque, dest: ?*anyopaque, permissions: i32, flags: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseCopy(@ptrCast(self), @ptrCast(src), @ptrCast(dest), @intCast(permissions), @intCast(flags));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#del)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` isfile: bool `
    ///
    pub fn Del(self: ?*anyopaque, url: ?*anyopaque, isfile: bool) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Del(@ptrCast(self), @ptrCast(url), isfile);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#del)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl, isfile: bool) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnDel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnDel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#del)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` isfile: bool `
    ///
    pub fn QBaseDel(self: ?*anyopaque, url: ?*anyopaque, isfile: bool) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseDel(@ptrCast(self), @ptrCast(url), isfile);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rewriteUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` newURL: QtC.QUrl `
    ///
    pub fn RewriteUrl(self: ?*anyopaque, url: ?*anyopaque, newURL: ?*anyopaque) bool {
        return qtc.KIO__ForwardingWorkerBase_RewriteUrl(@ptrCast(self), @ptrCast(url), @ptrCast(newURL));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rewriteUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl, newURL: QtC.QUrl) callconv(.c) bool `
    ///
    pub fn OnRewriteUrl(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnRewriteUrl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#rewriteUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` newURL: QtC.QUrl `
    ///
    pub fn QBaseRewriteUrl(self: ?*anyopaque, url: ?*anyopaque, newURL: ?*anyopaque) bool {
        return qtc.KIO__ForwardingWorkerBase_QBaseRewriteUrl(@ptrCast(self), @ptrCast(url), @ptrCast(newURL));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#adjustUDSEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` entry: QtC.KIO__UDSEntry `
    ///
    /// ` creationMode: forwardingworkerbase_enums.UDSEntryCreationMode `
    ///
    pub fn AdjustUDSEntry(self: ?*anyopaque, entry: ?*anyopaque, creationMode: i32) void {
        qtc.KIO__ForwardingWorkerBase_AdjustUDSEntry(@ptrCast(self), @ptrCast(entry), @intCast(creationMode));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#adjustUDSEntry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, entry: QtC.KIO__UDSEntry, creationMode: forwardingworkerbase_enums.UDSEntryCreationMode) callconv(.c) void `
    ///
    pub fn OnAdjustUDSEntry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnAdjustUDSEntry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#adjustUDSEntry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` entry: QtC.KIO__UDSEntry `
    ///
    /// ` creationMode: forwardingworkerbase_enums.UDSEntryCreationMode `
    ///
    pub fn QBaseAdjustUDSEntry(self: ?*anyopaque, entry: ?*anyopaque, creationMode: i32) void {
        qtc.KIO__ForwardingWorkerBase_QBaseAdjustUDSEntry(@ptrCast(self), @ptrCast(entry), @intCast(creationMode));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#processedUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn ProcessedUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KIO__ForwardingWorkerBase_ProcessedUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#processedUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QUrl `
    ///
    pub fn OnProcessedUrl(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QUrl) void {
        qtc.KIO__ForwardingWorkerBase_OnProcessedUrl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#processedUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QBaseProcessedUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KIO__ForwardingWorkerBase_QBaseProcessedUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#requestedUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn RequestedUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KIO__ForwardingWorkerBase_RequestedUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#requestedUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QUrl `
    ///
    pub fn OnRequestedUrl(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QUrl) void {
        qtc.KIO__ForwardingWorkerBase_OnRequestedUrl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#requestedUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QBaseRequestedUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KIO__ForwardingWorkerBase_QBaseRequestedUrl(@ptrCast(self));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__forwardingworkerbase.Tr2: Memory allocation failed");
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
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kio__forwardingworkerbase.Children: Memory allocation failed");
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
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
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @intCast(param5));
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
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#exit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn Exit(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_Exit(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#dispatchLoop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn DispatchLoop(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_DispatchLoop(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` data: []u8 `
    ///
    pub fn Data(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__WorkerBase_Data(@ptrCast(self), data_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#dataReq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn DataReq(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_DataReq(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#workerStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    /// ` connected: bool `
    ///
    pub fn WorkerStatus(self: ?*anyopaque, host: []const u8, connected: bool) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_WorkerStatus(@ptrCast(self), host_str, connected);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#statEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` _entry: QtC.KIO__UDSEntry `
    ///
    pub fn StatEntry(self: ?*anyopaque, _entry: ?*anyopaque) void {
        qtc.KIO__WorkerBase_StatEntry(@ptrCast(self), @ptrCast(_entry));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` _entry: []QtC.KIO__UDSEntry `
    ///
    pub fn ListEntries(self: ?*anyopaque, _entry: []QtC.KIO__UDSEntry) void {
        const _entry_list = qtc.libqt_list{
            .len = _entry.len,
            .data = @ptrCast(_entry.ptr),
        };
        qtc.KIO__WorkerBase_ListEntries(@ptrCast(self), _entry_list);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` offset: u64 `
    ///
    pub fn CanResume(self: ?*anyopaque, offset: u64) bool {
        return qtc.KIO__WorkerBase_CanResume(@ptrCast(self), @intCast(offset));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#canResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn CanResume2(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_CanResume2(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` _bytes: u64 `
    ///
    pub fn TotalSize(self: ?*anyopaque, _bytes: u64) void {
        qtc.KIO__WorkerBase_TotalSize(@ptrCast(self), @intCast(_bytes));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` _bytes: u64 `
    ///
    pub fn ProcessedSize(self: ?*anyopaque, _bytes: u64) void {
        qtc.KIO__WorkerBase_ProcessedSize(@ptrCast(self), @intCast(_bytes));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` _pos: u64 `
    ///
    pub fn Position(self: ?*anyopaque, _pos: u64) void {
        qtc.KIO__WorkerBase_Position(@ptrCast(self), @intCast(_pos));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#written)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` _bytes: u64 `
    ///
    pub fn Written(self: ?*anyopaque, _bytes: u64) void {
        qtc.KIO__WorkerBase_Written(@ptrCast(self), @intCast(_bytes));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` _length: u64 `
    ///
    pub fn Truncated(self: ?*anyopaque, _length: u64) void {
        qtc.KIO__WorkerBase_Truncated(@ptrCast(self), @intCast(_length));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` _bytes_per_second: u64 `
    ///
    pub fn Speed(self: ?*anyopaque, _bytes_per_second: u64) void {
        qtc.KIO__WorkerBase_Speed(@ptrCast(self), @intCast(_bytes_per_second));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#redirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` _url: QtC.QUrl `
    ///
    pub fn Redirection(self: ?*anyopaque, _url: ?*anyopaque) void {
        qtc.KIO__WorkerBase_Redirection(@ptrCast(self), @ptrCast(_url));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#errorPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn ErrorPage(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_ErrorPage(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` _type: []const u8 `
    ///
    pub fn MimeType(self: ?*anyopaque, _type: []const u8) void {
        const _type_str = qtc.libqt_string{
            .len = _type.len,
            .data = _type.ptr,
        };
        qtc.KIO__WorkerBase_MimeType(@ptrCast(self), _type_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn Warning(self: ?*anyopaque, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_Warning(@ptrCast(self), msg_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn InfoMessage(self: ?*anyopaque, msg: []const u8) void {
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.KIO__WorkerBase_InfoMessage(@ptrCast(self), msg_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` text: []const u8 `
    ///
    pub fn MessageBox(self: ?*anyopaque, typeVal: i32, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox(@ptrCast(self), @intCast(typeVal), text_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    pub fn MessageBox2(self: ?*anyopaque, text: []const u8, typeVal: i32) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox2(@ptrCast(self), text_str, @intCast(typeVal));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sslError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` sslData: map_constu8_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SslError(self: ?*anyopaque, sslData: map_constu8_qtcqvariant, allocator: std.mem.Allocator) i32 {
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
            sslData_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const sslData_map = qtc.libqt_map{
            .len = sslData_count,
            .keys = @ptrCast(sslData_keys.ptr),
            .values = @ptrCast(sslData_values.ptr),
        };
        return qtc.KIO__WorkerBase_SslError(@ptrCast(self), sslData_map);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetMetaData(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KIO__WorkerBase_SetMetaData(@ptrCast(self), key_str, value_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#hasMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    pub fn HasMetaData(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_HasMetaData(@ptrCast(self), key_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MetaData(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__WorkerBase_MetaData(@ptrCast(self), key_str);
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn AllMetaData(self: ?*anyopaque) QtC.KIO__MetaData {
        return qtc.KIO__WorkerBase_AllMetaData(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#mapConfig)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MapConfig(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_qtcqvariant {
        const _map: qtc.libqt_map = qtc.KIO__WorkerBase_MapConfig(@ptrCast(self));
        var _ret: map_constu8_qtcqvariant = .empty;
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
            _ret.put(allocator, _entry_slice, @ptrCast(_value)) catch @panic("kio__forwardingworkerbase.MapConfig: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ConfigValue(self: ?*anyopaque, key: []const u8, defaultValue: bool) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue(@ptrCast(self), key_str, defaultValue);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn ConfigValue2(self: ?*anyopaque, key: []const u8, defaultValue: i32) i32 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.KIO__WorkerBase_ConfigValue2(@ptrCast(self), key_str, @intCast(defaultValue));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConfigValue3(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__WorkerBase_ConfigValue3(@ptrCast(self), key_str);
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn Config(self: ?*anyopaque) QtC.KConfigGroup {
        return qtc.KIO__WorkerBase_Config(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#remoteEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn RemoteEncoding(self: ?*anyopaque) QtC.KRemoteEncoding {
        return qtc.KIO__WorkerBase_RemoteEncoding(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#connectTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn ConnectTimeout(self: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_ConnectTimeout(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#proxyConnectTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn ProxyConnectTimeout(self: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_ProxyConnectTimeout(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#responseTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn ResponseTimeout(self: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_ResponseTimeout(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#readTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn ReadTimeout(self: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_ReadTimeout(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setTimeoutSpecialCommand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SetTimeoutSpecialCommand(self: ?*anyopaque, timeout: i32) void {
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand(@ptrCast(self), @intCast(timeout));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` buffer: []u8 `
    ///
    pub fn ReadData(self: ?*anyopaque, buffer: []u8) i32 {
        const buffer_str = qtc.libqt_string{
            .len = buffer.len,
            .data = buffer.ptr,
        };
        return qtc.KIO__WorkerBase_ReadData(@ptrCast(self), buffer_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#listEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` entry: QtC.KIO__UDSEntry `
    ///
    pub fn ListEntry(self: ?*anyopaque, entry: ?*anyopaque) void {
        qtc.KIO__WorkerBase_ListEntry(@ptrCast(self), @ptrCast(entry));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#connectWorker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` path: []const u8 `
    ///
    pub fn ConnectWorker(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.KIO__WorkerBase_ConnectWorker(@ptrCast(self), path_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#disconnectWorker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn DisconnectWorker(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_DisconnectWorker(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` info: QtC.KIO__AuthInfo `
    ///
    pub fn OpenPasswordDialog(self: ?*anyopaque, info: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_OpenPasswordDialog(@ptrCast(self), @ptrCast(info));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#checkCachedAuthentication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` info: QtC.KIO__AuthInfo `
    ///
    pub fn CheckCachedAuthentication(self: ?*anyopaque, info: ?*anyopaque) bool {
        return qtc.KIO__WorkerBase_CheckCachedAuthentication(@ptrCast(self), @ptrCast(info));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#cacheAuthentication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` info: QtC.KIO__AuthInfo `
    ///
    pub fn CacheAuthentication(self: ?*anyopaque, info: ?*anyopaque) bool {
        return qtc.KIO__WorkerBase_CacheAuthentication(@ptrCast(self), @ptrCast(info));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForAnswer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` expected1: i32 `
    ///
    /// ` expected2: i32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn WaitForAnswer(self: ?*anyopaque, expected1: i32, expected2: i32, data: []u8) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer(@ptrCast(self), @intCast(expected1), @intCast(expected2), data_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sendMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn SendMetaData(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_SendMetaData(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#sendAndKeepMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn SendAndKeepMetaData(self: ?*anyopaque) void {
        qtc.KIO__WorkerBase_SendAndKeepMetaData(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#wasKilled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn WasKilled(self: ?*anyopaque) bool {
        return qtc.KIO__WorkerBase_WasKilled(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#lookupHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    pub fn LookupHost(self: ?*anyopaque, host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = host.len,
            .data = host.ptr,
        };
        qtc.KIO__WorkerBase_LookupHost(@ptrCast(self), host_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForHostInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` info: QtC.QHostInfo `
    ///
    pub fn WaitForHostInfo(self: ?*anyopaque, info: ?*anyopaque) i32 {
        return qtc.KIO__WorkerBase_WaitForHostInfo(@ptrCast(self), @ptrCast(info));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#requestPrivilegeOperation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` operationDetails: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` global_enums.PrivilegeOperationStatus `
    ///
    pub fn RequestPrivilegeOperation(self: ?*anyopaque, operationDetails: []const u8) i32 {
        const operationDetails_str = qtc.libqt_string{
            .len = operationDetails.len,
            .data = operationDetails.ptr,
        };
        return qtc.KIO__WorkerBase_RequestPrivilegeOperation(@ptrCast(self), operationDetails_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#addTemporaryAuthorization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` action: []const u8 `
    ///
    pub fn AddTemporaryAuthorization(self: ?*anyopaque, action: []const u8) void {
        const action_str = qtc.libqt_string{
            .len = action.len,
            .data = action.ptr,
        };
        qtc.KIO__WorkerBase_AddTemporaryAuthorization(@ptrCast(self), action_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setIncomingMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` metaData: QtC.KIO__MetaData `
    ///
    pub fn SetIncomingMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.KIO__WorkerBase_SetIncomingMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    pub fn MessageBox3(self: ?*anyopaque, typeVal: i32, text: []const u8, title: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox3(@ptrCast(self), @intCast(typeVal), text_str, title_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` text: []const u8 `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    pub fn MessageBox4(self: ?*anyopaque, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8) i32 {
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
        return qtc.KIO__WorkerBase_MessageBox4(@ptrCast(self), @intCast(typeVal), text_str, title_str, primaryActionText_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    pub fn MessageBox5(self: ?*anyopaque, typeVal: i32, text: []const u8, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
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
        return qtc.KIO__WorkerBase_MessageBox5(@ptrCast(self), @intCast(typeVal), text_str, title_str, primaryActionText_str, secondaryActionText_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` title: []const u8 `
    ///
    pub fn MessageBox32(self: ?*anyopaque, text: []const u8, typeVal: i32, title: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return qtc.KIO__WorkerBase_MessageBox32(@ptrCast(self), text_str, @intCast(typeVal), title_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` typeVal: workerbase_enums.MessageBoxType `
    ///
    /// ` title: []const u8 `
    ///
    /// ` primaryActionText: []const u8 `
    ///
    pub fn MessageBox42(self: ?*anyopaque, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8) i32 {
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
        return qtc.KIO__WorkerBase_MessageBox42(@ptrCast(self), text_str, @intCast(typeVal), title_str, primaryActionText_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    pub fn MessageBox52(self: ?*anyopaque, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8) i32 {
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
        return qtc.KIO__WorkerBase_MessageBox52(@ptrCast(self), text_str, @intCast(typeVal), title_str, primaryActionText_str, secondaryActionText_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#messageBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
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
    pub fn MessageBox6(self: ?*anyopaque, text: []const u8, typeVal: i32, title: []const u8, primaryActionText: []const u8, secondaryActionText: []const u8, dontAskAgainName: []const u8) i32 {
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
        return qtc.KIO__WorkerBase_MessageBox6(@ptrCast(self), text_str, @intCast(typeVal), title_str, primaryActionText_str, secondaryActionText_str, dontAskAgainName_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#configValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ConfigValue22(self: ?*anyopaque, key: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.KIO__WorkerBase_ConfigValue22(@ptrCast(self), key_str, defaultValue_str);
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
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` timeout: i32 `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetTimeoutSpecialCommand2(self: ?*anyopaque, timeout: i32, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.KIO__WorkerBase_SetTimeoutSpecialCommand2(@ptrCast(self), @intCast(timeout), data_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openPasswordDialog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` info: QtC.KIO__AuthInfo `
    ///
    /// ` errorMsg: []const u8 `
    ///
    pub fn OpenPasswordDialog2(self: ?*anyopaque, info: ?*anyopaque, errorMsg: []const u8) i32 {
        const errorMsg_str = qtc.libqt_string{
            .len = errorMsg.len,
            .data = errorMsg.ptr,
        };
        return qtc.KIO__WorkerBase_OpenPasswordDialog2(@ptrCast(self), @ptrCast(info), errorMsg_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#waitForAnswer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` expected1: i32 `
    ///
    /// ` expected2: i32 `
    ///
    /// ` data: []u8 `
    ///
    /// ` pCmd: *i32 `
    ///
    pub fn WaitForAnswer4(self: ?*anyopaque, expected1: i32, expected2: i32, data: []u8, pCmd: *i32) i32 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__WorkerBase_WaitForAnswer4(@ptrCast(self), @intCast(expected1), @intCast(expected2), data_str, @ptrCast(pCmd));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__ForwardingWorkerBase_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__ForwardingWorkerBase_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__ForwardingWorkerBase_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KIO__ForwardingWorkerBase_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn AppConnectionMade(self: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_AppConnectionMade(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QBaseAppConnectionMade(self: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_QBaseAppConnectionMade(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#appConnectionMade)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAppConnectionMade(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnAppConnectionMade(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` pass: []const u8 `
    ///
    pub fn SetHost(self: ?*anyopaque, host: []const u8, port: u16, user: []const u8, pass: []const u8) void {
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
        qtc.KIO__ForwardingWorkerBase_SetHost(@ptrCast(self), host_str, @intCast(port), user_str, pass_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` host: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` pass: []const u8 `
    ///
    pub fn QBaseSetHost(self: ?*anyopaque, host: []const u8, port: u16, user: []const u8, pass: []const u8) void {
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
        qtc.KIO__ForwardingWorkerBase_QBaseSetHost(@ptrCast(self), host_str, @intCast(port), user_str, pass_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#setHost)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, host: [*:0]const u8, port: u16, user: [*:0]const u8, pass: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetHost(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, u16, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnSetHost(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn OpenConnection(self: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_OpenConnection(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QBaseOpenConnection(self: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseOpenConnection(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#openConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnOpenConnection(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnOpenConnection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn CloseConnection(self: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_CloseConnection(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QBaseCloseConnection(self: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_QBaseCloseConnection(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#closeConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCloseConnection(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnCloseConnection(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: ?*anyopaque, url: ?*anyopaque, mode: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Open(@ptrCast(self), @ptrCast(url), @intCast(mode));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn QBaseOpen(self: ?*anyopaque, url: ?*anyopaque, mode: i32) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseOpen(@ptrCast(self), @ptrCast(url), @intCast(mode));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` size: u64 `
    ///
    pub fn Read(self: ?*anyopaque, size: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Read(@ptrCast(self), @intCast(size));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` size: u64 `
    ///
    pub fn QBaseRead(self: ?*anyopaque, size: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseRead(@ptrCast(self), @intCast(size));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#read)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, size: u64) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write(self: ?*anyopaque, data: []u8) QtC.KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__ForwardingWorkerBase_Write(@ptrCast(self), data_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` data: []u8 `
    ///
    pub fn QBaseWrite(self: ?*anyopaque, data: []u8) QtC.KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__ForwardingWorkerBase_QBaseWrite(@ptrCast(self), data_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#write)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, data: qtc.libqt_string) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` offset: u64 `
    ///
    pub fn Seek(self: ?*anyopaque, offset: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Seek(@ptrCast(self), @intCast(offset));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` offset: u64 `
    ///
    pub fn QBaseSeek(self: ?*anyopaque, offset: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseSeek(@ptrCast(self), @intCast(offset));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, offset: u64) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnSeek(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSeek(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` size: u64 `
    ///
    pub fn Truncate(self: ?*anyopaque, size: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Truncate(@ptrCast(self), @intCast(size));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` size: u64 `
    ///
    pub fn QBaseTruncate(self: ?*anyopaque, size: u64) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseTruncate(@ptrCast(self), @intCast(size));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#truncate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, size: u64) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnTruncate(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnTruncate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn Close(self: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_Close(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QBaseClose(self: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseClose(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` owner: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn Chown(self: ?*anyopaque, url: ?*anyopaque, owner: []const u8, group: []const u8) QtC.KIO__WorkerResult {
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KIO__ForwardingWorkerBase_Chown(@ptrCast(self), @ptrCast(url), owner_str, group_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` owner: []const u8 `
    ///
    /// ` group: []const u8 `
    ///
    pub fn QBaseChown(self: ?*anyopaque, url: ?*anyopaque, owner: []const u8, group: []const u8) QtC.KIO__WorkerResult {
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        return qtc.KIO__ForwardingWorkerBase_QBaseChown(@ptrCast(self), @ptrCast(url), owner_str, group_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#chown)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl, owner: [*:0]const u8, group: [*:0]const u8) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnChown(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnChown(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` data: []u8 `
    ///
    pub fn Special(self: ?*anyopaque, data: []u8) QtC.KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__ForwardingWorkerBase_Special(@ptrCast(self), data_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` data: []u8 `
    ///
    pub fn QBaseSpecial(self: ?*anyopaque, data: []u8) QtC.KIO__WorkerResult {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.KIO__ForwardingWorkerBase_QBaseSpecial(@ptrCast(self), data_str);
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#special)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, data: qtc.libqt_string) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnSpecial(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnSpecial(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn FileSystemFreeSpace(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_FileSystemFreeSpace(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn QBaseFileSystemFreeSpace(self: ?*anyopaque, url: ?*anyopaque) QtC.KIO__WorkerResult {
        return qtc.KIO__ForwardingWorkerBase_QBaseFileSystemFreeSpace(@ptrCast(self), @ptrCast(url));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#fileSystemFreeSpace)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, url: QtC.QUrl) callconv(.c) QtC.KIO__WorkerResult `
    ///
    pub fn OnFileSystemFreeSpace(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.KIO__WorkerResult) void {
        qtc.KIO__ForwardingWorkerBase_OnFileSystemFreeSpace(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn WorkerStatus2(self: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_WorkerStatus2(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QBaseWorkerStatus2(self: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_QBaseWorkerStatus2(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#worker_status)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnWorkerStatus2(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnWorkerStatus2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn ReparseConfiguration(self: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_ReparseConfiguration(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QBaseReparseConfiguration(self: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_QBaseReparseConfiguration(@ptrCast(self));
    }

    /// Inherited from KIO::WorkerBase
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-workerbase.html#reparseConfiguration)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReparseConfiguration(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ForwardingWorkerBase_OnReparseConfiguration(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KIO__ForwardingWorkerBase_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KIO__ForwardingWorkerBase_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KIO__ForwardingWorkerBase_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KIO__ForwardingWorkerBase_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KIO__ForwardingWorkerBase_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KIO__ForwardingWorkerBase_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__ForwardingWorkerBase_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__ForwardingWorkerBase_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIO__ForwardingWorkerBase_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KIO__ForwardingWorkerBase_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KIO__ForwardingWorkerBase_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase`
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KIO__ForwardingWorkerBase_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    /// ` callback: *const fn (self: QtC.KIO__ForwardingWorkerBase, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KIO__ForwardingWorkerBase `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KIO__ForwardingWorkerBase_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-forwardingworkerbase.html#public-types)
pub const enums = struct {
    pub const UDSEntryCreationMode = enum(i32) {
        pub const UDSEntryCreationInStat: i32 = 0;
        pub const UDSEntryCreationInListDir: i32 = 1;
    };
};
