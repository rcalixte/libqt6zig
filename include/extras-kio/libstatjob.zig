const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KIO__Job = @import("libqt6").KIO__Job;
const KIO__JobUiDelegateExtension = @import("libqt6").KIO__JobUiDelegateExtension;
const KIO__MetaData = @import("libqt6").KIO__MetaData;
const KIO__UDSEntry = @import("libqt6").KIO__UDSEntry;
const KJob = @import("libqt6").KJob;
const KJobUiDelegate = @import("libqt6").KJobUiDelegate;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const global_enums = @import("libglobal.zig").enums;
const job_base_enums = @import("libjob_base.zig").enums;
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const statjob_enums = enums;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/kio-statjob.html)
pub const KIO__StatJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-statjob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__StatJob,

    pub const _is_KIO__StatJob = {};
    pub const _is_KIO__SimpleJob = {};
    pub const _is_KIO__Job = {};
    pub const _is_KCompositeJob = {};
    pub const _is_KJob = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn MetaObject(self: KIO__StatJob) QMetaObject {
        return .{ .ptr = qtc.KIO__StatJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KIO__StatJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__StatJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KIO__StatJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__StatJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__statjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-statjob.html#setSide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` side: statjob_enums.StatSide `
    ///
    pub fn SetSide(self: KIO__StatJob, side: i32) void {
        qtc.KIO__StatJob_SetSide(@ptrCast(self.ptr), @bitCast(side));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-statjob.html#setDetails)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` details: flag of global_enums.StatDetail `
    ///
    pub fn SetDetails(self: KIO__StatJob, details: i32) void {
        qtc.KIO__StatJob_SetDetails(@ptrCast(self.ptr), @bitCast(details));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-statjob.html#statResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn StatResult(self: KIO__StatJob) KIO__UDSEntry {
        return .{ .ptr = qtc.KIO__StatJob_StatResult(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-statjob.html#mostLocalUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn MostLocalUrl(self: KIO__StatJob) QUrl {
        return .{ .ptr = qtc.KIO__StatJob_MostLocalUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-statjob.html#redirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` url: QUrl `
    ///
    pub fn Redirection(self: KIO__StatJob, job: anytype, url: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KIO__StatJob_Redirection(@ptrCast(self.ptr), @ptrCast(job.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-statjob.html#redirection)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KIO__Job, url: QUrl) callconv(.c) void `
    ///
    pub fn OnRedirection(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KIO__Job, QUrl) callconv(.c) void) void {
        qtc.KIO__StatJob_Connect_Redirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-statjob.html#permanentRedirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` fromUrl: QUrl `
    ///
    /// ` toUrl: QUrl `
    ///
    pub fn PermanentRedirection(self: KIO__StatJob, job: anytype, fromUrl: anytype, toUrl: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        comptime _ = @TypeOf(fromUrl)._is_QUrl;
        comptime _ = @TypeOf(toUrl)._is_QUrl;
        qtc.KIO__StatJob_PermanentRedirection(@ptrCast(self.ptr), @ptrCast(job.ptr), @ptrCast(fromUrl.ptr), @ptrCast(toUrl.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-statjob.html#permanentRedirection)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KIO__Job, fromUrl: QUrl, toUrl: QUrl) callconv(.c) void `
    ///
    pub fn OnPermanentRedirection(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KIO__Job, QUrl, QUrl) callconv(.c) void) void {
        qtc.KIO__StatJob_Connect_PermanentRedirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__statjob.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__statjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Url(self: KIO__StatJob) QUrl {
        return .{ .ptr = qtc.KIO__SimpleJob_Url(@ptrCast(self.ptr)) };
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#putOnHold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn PutOnHold(self: KIO__StatJob) void {
        qtc.KIO__SimpleJob_PutOnHold(@ptrCast(self.ptr));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#removeOnHold)
    ///
    pub fn RemoveOnHold() void {
        qtc.KIO__SimpleJob_RemoveOnHold();
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#isRedirectionHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn IsRedirectionHandlingEnabled(self: KIO__StatJob) bool {
        return qtc.KIO__SimpleJob_IsRedirectionHandlingEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#setRedirectionHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` handle: bool `
    ///
    pub fn SetRedirectionHandlingEnabled(self: KIO__StatJob, handle: bool) void {
        qtc.KIO__SimpleJob_SetRedirectionHandlingEnabled(@ptrCast(self.ptr), handle);
    }

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#slotError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn SlotError(self: KIO__StatJob, param1: i32, param2: []const u8) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KIO__SimpleJob_SlotError(@ptrCast(self.ptr), @bitCast(param1), param2_str);
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Start(self: KIO__StatJob) void {
        qtc.KIO__Job_Start(@ptrCast(self.ptr));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#uiDelegateExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn UiDelegateExtension(self: KIO__StatJob) KIO__JobUiDelegateExtension {
        return .{ .ptr = qtc.KIO__Job_UiDelegateExtension(@ptrCast(self.ptr)) };
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#setUiDelegateExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` extension: KIO__JobUiDelegateExtension `
    ///
    pub fn SetUiDelegateExtension(self: KIO__StatJob, extension: anytype) void {
        comptime _ = @TypeOf(extension)._is_KIO__JobUiDelegateExtension;
        qtc.KIO__Job_SetUiDelegateExtension(@ptrCast(self.ptr), @ptrCast(extension.ptr));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: KIO__StatJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__Job_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__statjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DetailedErrorStrings(self: KIO__StatJob, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio__statjob.DetailedErrorStrings: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__statjob.DetailedErrorStrings: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#setParentJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` parentJob: KIO__Job `
    ///
    pub fn SetParentJob(self: KIO__StatJob, parentJob: anytype) void {
        comptime _ = @TypeOf(parentJob)._is_KIO__Job;
        qtc.KIO__Job_SetParentJob(@ptrCast(self.ptr), @ptrCast(parentJob.ptr));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#parentJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn ParentJob(self: KIO__StatJob) KIO__Job {
        return .{ .ptr = qtc.KIO__Job_ParentJob(@ptrCast(self.ptr)) };
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` metaData: KIO__MetaData `
    ///
    pub fn SetMetaData(self: KIO__StatJob, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_KIO__MetaData;
        qtc.KIO__Job_SetMetaData(@ptrCast(self.ptr), @ptrCast(metaData.ptr));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn AddMetaData(self: KIO__StatJob, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KIO__Job_AddMetaData(@ptrCast(self.ptr), key_str, value_str);
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` values: ArrayMap_constu8_constu8 `
    ///
    pub fn AddMetaData2(self: KIO__StatJob, allocator: std.mem.Allocator, values: ArrayMap_constu8_constu8) void {
        const values_count = values.count();
        const values_keys = allocator.alloc(qtc.libqt_string, values_count) catch @panic("kio__statjob.AddMetaData2: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc(qtc.libqt_string, values_count) catch @panic("kio__statjob.AddMetaData2: Memory allocation failed");
        defer allocator.free(values_values);
        var i: usize = 0;
        var values_it = values.iterator();
        while (values_it.next()) |it_entry| : (i += 1) {
            const values_key = it_entry.key_ptr.*;
            values_keys[i] = qtc.libqt_string{
                .len = values_key.len,
                .data = values_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            values_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const values_map = qtc.libqt_map{
            .len = values_count,
            .keys = @ptrCast(values_keys.ptr),
            .values = @ptrCast(values_values.ptr),
        };
        qtc.KIO__Job_AddMetaData2(@ptrCast(self.ptr), values_map);
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#mergeMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` values: ArrayMap_constu8_constu8 `
    ///
    pub fn MergeMetaData(self: KIO__StatJob, allocator: std.mem.Allocator, values: ArrayMap_constu8_constu8) void {
        const values_count = values.count();
        const values_keys = allocator.alloc(qtc.libqt_string, values_count) catch @panic("kio__statjob.MergeMetaData: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc(qtc.libqt_string, values_count) catch @panic("kio__statjob.MergeMetaData: Memory allocation failed");
        defer allocator.free(values_values);
        var i: usize = 0;
        var values_it = values.iterator();
        while (values_it.next()) |it_entry| : (i += 1) {
            const values_key = it_entry.key_ptr.*;
            values_keys[i] = qtc.libqt_string{
                .len = values_key.len,
                .data = values_key.ptr,
            };
            const value = it_entry.value_ptr.*;
            values_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const values_map = qtc.libqt_map{
            .len = values_count,
            .keys = @ptrCast(values_keys.ptr),
            .values = @ptrCast(values_values.ptr),
        };
        qtc.KIO__Job_MergeMetaData(@ptrCast(self.ptr), values_map);
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#outgoingMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn OutgoingMetaData(self: KIO__StatJob) KIO__MetaData {
        return .{ .ptr = qtc.KIO__Job_OutgoingMetaData(@ptrCast(self.ptr)) };
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn MetaData(self: KIO__StatJob) KIO__MetaData {
        return .{ .ptr = qtc.KIO__Job_MetaData(@ptrCast(self.ptr)) };
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#queryMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn QueryMetaData(self: KIO__StatJob, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__Job_QueryMetaData(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__statjob.QueryMetaData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn Connected(self: KIO__StatJob, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__Job_Connected(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KIO__Job) callconv(.c) void `
    ///
    pub fn OnConnected(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KIO__Job) callconv(.c) void) void {
        qtc.KIO__Job_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` reqUrl: QUrl `
    ///
    pub fn DetailedErrorStrings1(self: KIO__StatJob, allocator: std.mem.Allocator, reqUrl: anytype) []const []const u8 {
        comptime _ = @TypeOf(reqUrl)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings1(@ptrCast(self.ptr), @ptrCast(reqUrl.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio__statjob.DetailedErrorStrings1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__statjob.DetailedErrorStrings1: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` reqUrl: QUrl `
    ///
    /// ` method: i32 `
    ///
    pub fn DetailedErrorStrings2(self: KIO__StatJob, allocator: std.mem.Allocator, reqUrl: anytype, method: i32) []const []const u8 {
        comptime _ = @TypeOf(reqUrl)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings2(@ptrCast(self.ptr), @ptrCast(reqUrl.ptr), @bitCast(method));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio__statjob.DetailedErrorStrings2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__statjob.DetailedErrorStrings2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` delegate: KJobUiDelegate `
    ///
    pub fn SetUiDelegate(self: KIO__StatJob, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KJobUiDelegate;
        qtc.KJob_SetUiDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn UiDelegate(self: KIO__StatJob) KJobUiDelegate {
        return .{ .ptr = qtc.KJob_UiDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ## Returns:
    ///
    /// ` flag of kjob_enums.Capability `
    ///
    pub fn Capabilities(self: KIO__StatJob) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn IsSuspended(self: KIO__StatJob) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Kill(self: KIO__StatJob) bool {
        return qtc.KJob_Kill(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Suspend(self: KIO__StatJob) bool {
        return qtc.KJob_Suspend(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Resume(self: KIO__StatJob) bool {
        return qtc.KJob_Resume(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Exec(self: KIO__StatJob) bool {
        return qtc.KJob_Exec(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Error(self: KIO__StatJob) i32 {
        return qtc.KJob_Error(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorText(self: KIO__StatJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__statjob.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn ProcessedAmount(self: KIO__StatJob, unit: i32) usize {
        return qtc.KJob_ProcessedAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn TotalAmount(self: KIO__StatJob, unit: i32) usize {
        return qtc.KJob_TotalAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Percent(self: KIO__StatJob) usize {
        return qtc.KJob_Percent(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` autodelete: bool `
    ///
    pub fn SetAutoDelete(self: KIO__StatJob, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self.ptr), autodelete);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn IsAutoDelete(self: KIO__StatJob) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn SetFinishedNotificationHidden(self: KIO__StatJob) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn IsFinishedNotificationHidden(self: KIO__StatJob) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn IsStartedWithExec(self: KIO__StatJob) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn ElapsedTime(self: KIO__StatJob) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn InfoMessage(self: KIO__StatJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_InfoMessage(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnInfoMessage(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn Warning(self: KIO__StatJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_Warning(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWarning(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn TotalSize(self: KIO__StatJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_TotalSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn OnTotalSize(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn ProcessedSize(self: KIO__StatJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_ProcessedSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn OnProcessedSize(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` job: KJob `
    ///
    /// ` speed: usize `
    ///
    pub fn Speed(self: KIO__StatJob, job: anytype, speed: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_Speed(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(speed));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob, speed: usize) callconv(.c) void `
    ///
    pub fn OnSpeed(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` verbosity: kjob_enums.KillVerbosity `
    ///
    pub fn Kill1(self: KIO__StatJob, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self.ptr), @bitCast(verbosity));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` hide: bool `
    ///
    pub fn SetFinishedNotificationHidden1(self: KIO__StatJob, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self.ptr), hide);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KIO__StatJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KIO__StatJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KIO__StatJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__statjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KIO__StatJob, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn IsWidgetType(self: KIO__StatJob) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn IsWindowType(self: KIO__StatJob) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn IsQuickItemType(self: KIO__StatJob) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn SignalsBlocked(self: KIO__StatJob) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KIO__StatJob, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Thread(self: KIO__StatJob) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KIO__StatJob, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KIO__StatJob, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KIO__StatJob, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KIO__StatJob, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KIO__StatJob, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KIO__StatJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kio__statjob.Children: Memory allocation failed");
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
    /// ` self: KIO__StatJob `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KIO__StatJob, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KIO__StatJob, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KIO__StatJob, obj: anytype) void {
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
    /// ` self: KIO__StatJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KIO__StatJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__StatJob `
    ///
    pub fn Disconnect3(self: KIO__StatJob) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KIO__StatJob, receiver: anytype) bool {
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
    /// ` self: KIO__StatJob `
    ///
    pub fn DumpObjectTree(self: KIO__StatJob) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn DumpObjectInfo(self: KIO__StatJob) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KIO__StatJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__StatJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KIO__StatJob, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KIO__StatJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kio__statjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__statjob.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__StatJob `
    ///
    pub fn BindingStorage(self: KIO__StatJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn BindingStorage2(self: KIO__StatJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Destroyed(self: KIO__StatJob) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KIO__StatJob, callback: *const fn (KIO__StatJob) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Parent(self: KIO__StatJob) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KIO__StatJob, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn DeleteLater(self: KIO__StatJob) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KIO__StatJob, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KIO__StatJob, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__StatJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KIO__StatJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__StatJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KIO__StatJob, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KIO__StatJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__StatJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KIO__StatJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__StatJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KIO__StatJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__StatJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KIO__StatJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KIO__StatJob, callback: *const fn (KIO__StatJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnFinished(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspended)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnSuspended(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Suspended(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resumed)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnResumed(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Resumed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#result)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnResult(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Result(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnTotalAmountChanged(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalAmountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnProcessedAmountChanged(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedAmountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, job: KJob, percent: usize) callconv(.c) void `
    ///
    pub fn OnPercentChanged(self: KIO__StatJob, callback: *const fn (KIO__StatJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_PercentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__StatJob `
    ///
    /// ` callback: *const fn (self: KIO__StatJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KIO__StatJob, callback: *const fn (KIO__StatJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__StatJob `
    ///
    pub fn Delete(self: KIO__StatJob) void {
        qtc.KIO__StatJob_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio.html)
pub const KIO = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO,

    pub const _is_KIO = {};

    /// ### [Upstream resources](https://api.kde.org/kio.html#stat)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUrl `
    ///
    /// ` param2: flag of job_base_enums.JobFlag `
    ///
    pub fn Stat(param1: anytype, param2: i32) KIO__StatJob {
        comptime _ = @TypeOf(param1)._is_QUrl;
        return .{ .ptr = qtc.KIO_Stat(@ptrCast(param1.ptr), @bitCast(param2)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#stat)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUrl `
    ///
    /// ` param2: statjob_enums.StatSide `
    ///
    /// ` param3: flag of global_enums.StatDetail `
    ///
    /// ` param4: flag of job_base_enums.JobFlag `
    ///
    pub fn Stat2(param1: anytype, param2: i32, param3: i32, param4: i32) KIO__StatJob {
        comptime _ = @TypeOf(param1)._is_QUrl;
        return .{ .ptr = qtc.KIO_Stat2(@ptrCast(param1.ptr), @bitCast(param2), @bitCast(param3), @bitCast(param4)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#mostLocalUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUrl `
    ///
    /// ` param2: flag of job_base_enums.JobFlag `
    ///
    pub fn MostLocalUrl(param1: anytype, param2: i32) KIO__StatJob {
        comptime _ = @TypeOf(param1)._is_QUrl;
        return .{ .ptr = qtc.KIO_MostLocalUrl(@ptrCast(param1.ptr), @bitCast(param2)) };
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-statjob.html#public-types)
pub const enums = struct {
    pub const StatSide = enum(i32) {
        pub const SourceSide: i32 = 0;
        pub const DestinationSide: i32 = 1;
    };
};
