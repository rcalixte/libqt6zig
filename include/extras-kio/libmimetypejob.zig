const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KIO__Job = @import("libqt6").KIO__Job;
const KIO__JobUiDelegateExtension = @import("libqt6").KIO__JobUiDelegateExtension;
const KIO__MetaData = @import("libqt6").KIO__MetaData;
const KJob = @import("libqt6").KJob;
const KJobUiDelegate = @import("libqt6").KJobUiDelegate;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QDateTime = @import("libqt6").QDateTime;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const job_base_enums = @import("libjob_base.zig").enums;
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/kio-mimetypejob.html)
pub const KIO__MimetypeJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-mimetypejob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__MimetypeJob,

    pub const _is_KIO__MimetypeJob = {};
    pub const _is_KIO__TransferJob = {};
    pub const _is_KIO__SimpleJob = {};
    pub const _is_KIO__Job = {};
    pub const _is_KCompositeJob = {};
    pub const _is_KJob = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn metaObject(self: KIO__MimetypeJob) QMetaObject {
        return .{ .ptr = qtc.KIO__MimetypeJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KIO__MimetypeJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__MimetypeJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KIO__MimetypeJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__MimetypeJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__MimetypeJob.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__MimetypeJob.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__MimetypeJob.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setModificationTime` instead
    ///
    pub const SetModificationTime = setModificationTime;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#setModificationTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` mtime: QDateTime `
    ///
    pub fn setModificationTime(self: KIO__MimetypeJob, mtime: anytype) void {
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        qtc.KIO__TransferJob_SetModificationTime(@ptrCast(self.ptr), @ptrCast(mtime.ptr));
    }

    /// ### DEPRECATED: Use `isErrorPage` instead
    ///
    pub const IsErrorPage = isErrorPage;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#isErrorPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn isErrorPage(self: KIO__MimetypeJob) bool {
        return qtc.KIO__TransferJob_IsErrorPage(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAsyncDataEnabled` instead
    ///
    pub const SetAsyncDataEnabled = setAsyncDataEnabled;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#setAsyncDataEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAsyncDataEnabled(self: KIO__MimetypeJob, enabled: bool) void {
        qtc.KIO__TransferJob_SetAsyncDataEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `sendAsyncData` instead
    ///
    pub const SendAsyncData = sendAsyncData;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#sendAsyncData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` _data: []u8 `
    ///
    pub fn sendAsyncData(self: KIO__MimetypeJob, _data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.KIO__TransferJob_SendAsyncData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `mimetype` instead
    ///
    pub const Mimetype = mimetype;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#mimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimetype(self: KIO__MimetypeJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__TransferJob_Mimetype(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__MimetypeJob.mimetype: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `redirectUrl` instead
    ///
    pub const RedirectUrl = redirectUrl;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#redirectUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn redirectUrl(self: KIO__MimetypeJob) QUrl {
        return .{ .ptr = qtc.KIO__TransferJob_RedirectUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTotalSize` instead
    ///
    pub const SetTotalSize = setTotalSize;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#setTotalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` bytes: usize `
    ///
    pub fn setTotalSize(self: KIO__MimetypeJob, bytes: usize) void {
        qtc.KIO__TransferJob_SetTotalSize(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` _data: []u8 `
    ///
    pub fn data(self: KIO__MimetypeJob, job: anytype, _data: []u8) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.KIO__TransferJob_Data(@ptrCast(self.ptr), @ptrCast(job.ptr), data_str);
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#data)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KIO__Job, data: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn onData(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KIO__Job, qtc.libqt_string) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_Data(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dataReq` instead
    ///
    pub const DataReq = dataReq;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#dataReq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` _data: []u8 `
    ///
    pub fn dataReq(self: KIO__MimetypeJob, job: anytype, _data: []u8) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.KIO__TransferJob_DataReq(@ptrCast(self.ptr), @ptrCast(job.ptr), data_str);
    }

    /// ### DEPRECATED: Use `onDataReq` instead
    ///
    pub const OnDataReq = onDataReq;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#dataReq)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KIO__Job, data: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn onDataReq(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KIO__Job, qtc.libqt_string) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_DataReq(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirection` instead
    ///
    pub const Redirection = redirection;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#redirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` _url: QUrl `
    ///
    pub fn redirection(self: KIO__MimetypeJob, job: anytype, _url: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KIO__TransferJob_Redirection(@ptrCast(self.ptr), @ptrCast(job.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `onRedirection` instead
    ///
    pub const OnRedirection = onRedirection;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#redirection)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KIO__Job, url: QUrl) callconv(.c) void `
    ///
    pub fn onRedirection(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KIO__Job, QUrl) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_Redirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `permanentRedirection` instead
    ///
    pub const PermanentRedirection = permanentRedirection;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#permanentRedirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` fromUrl: QUrl `
    ///
    /// ` toUrl: QUrl `
    ///
    pub fn permanentRedirection(self: KIO__MimetypeJob, job: anytype, fromUrl: anytype, toUrl: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        comptime _ = @TypeOf(fromUrl)._is_QUrl;
        comptime _ = @TypeOf(toUrl)._is_QUrl;
        qtc.KIO__TransferJob_PermanentRedirection(@ptrCast(self.ptr), @ptrCast(job.ptr), @ptrCast(fromUrl.ptr), @ptrCast(toUrl.ptr));
    }

    /// ### DEPRECATED: Use `onPermanentRedirection` instead
    ///
    pub const OnPermanentRedirection = onPermanentRedirection;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#permanentRedirection)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KIO__Job, fromUrl: QUrl, toUrl: QUrl) callconv(.c) void `
    ///
    pub fn onPermanentRedirection(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KIO__Job, QUrl, QUrl) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_PermanentRedirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mimeTypeFound` instead
    ///
    pub const MimeTypeFound = mimeTypeFound;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#mimeTypeFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn mimeTypeFound(self: KIO__MimetypeJob, job: anytype, mimeType: []const u8) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.KIO__TransferJob_MimeTypeFound(@ptrCast(self.ptr), @ptrCast(job.ptr), mimeType_str);
    }

    /// ### DEPRECATED: Use `onMimeTypeFound` instead
    ///
    pub const OnMimeTypeFound = onMimeTypeFound;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#mimeTypeFound)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KIO__Job, mimeType: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onMimeTypeFound(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KIO__Job, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_MimeTypeFound(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canResume` instead
    ///
    pub const CanResume = canResume;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#canResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` offset: usize `
    ///
    pub fn canResume(self: KIO__MimetypeJob, job: anytype, offset: usize) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__TransferJob_CanResume(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(offset));
    }

    /// ### DEPRECATED: Use `onCanResume` instead
    ///
    pub const OnCanResume = onCanResume;

    /// Inherited from KIO::TransferJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-transferjob.html#canResume)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KIO__Job, offset: usize) callconv(.c) void `
    ///
    pub fn onCanResume(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KIO__Job, usize) callconv(.c) void) void {
        qtc.KIO__TransferJob_Connect_CanResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn url(self: KIO__MimetypeJob) QUrl {
        return .{ .ptr = qtc.KIO__SimpleJob_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `putOnHold` instead
    ///
    pub const PutOnHold = putOnHold;

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#putOnHold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn putOnHold(self: KIO__MimetypeJob) void {
        qtc.KIO__SimpleJob_PutOnHold(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeOnHold` instead
    ///
    pub const RemoveOnHold = removeOnHold;

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#removeOnHold)
    ///
    pub fn removeOnHold() void {
        qtc.KIO__SimpleJob_RemoveOnHold();
    }

    /// ### DEPRECATED: Use `isRedirectionHandlingEnabled` instead
    ///
    pub const IsRedirectionHandlingEnabled = isRedirectionHandlingEnabled;

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#isRedirectionHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn isRedirectionHandlingEnabled(self: KIO__MimetypeJob) bool {
        return qtc.KIO__SimpleJob_IsRedirectionHandlingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRedirectionHandlingEnabled` instead
    ///
    pub const SetRedirectionHandlingEnabled = setRedirectionHandlingEnabled;

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#setRedirectionHandlingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` handle: bool `
    ///
    pub fn setRedirectionHandlingEnabled(self: KIO__MimetypeJob, handle: bool) void {
        qtc.KIO__SimpleJob_SetRedirectionHandlingEnabled(@ptrCast(self.ptr), handle);
    }

    /// ### DEPRECATED: Use `slotError` instead
    ///
    pub const SlotError = slotError;

    /// Inherited from KIO::SimpleJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-simplejob.html#slotError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: []const u8 `
    ///
    pub fn slotError(self: KIO__MimetypeJob, param1: i32, param2: []const u8) void {
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        qtc.KIO__SimpleJob_SlotError(@ptrCast(self.ptr), @bitCast(param1), param2_str);
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn start(self: KIO__MimetypeJob) void {
        qtc.KIO__Job_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `uiDelegateExtension` instead
    ///
    pub const UiDelegateExtension = uiDelegateExtension;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#uiDelegateExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn uiDelegateExtension(self: KIO__MimetypeJob) KIO__JobUiDelegateExtension {
        return .{ .ptr = qtc.KIO__Job_UiDelegateExtension(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUiDelegateExtension` instead
    ///
    pub const SetUiDelegateExtension = setUiDelegateExtension;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#setUiDelegateExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` extension: KIO__JobUiDelegateExtension `
    ///
    pub fn setUiDelegateExtension(self: KIO__MimetypeJob, extension: anytype) void {
        comptime _ = @TypeOf(extension)._is_KIO__JobUiDelegateExtension;
        qtc.KIO__Job_SetUiDelegateExtension(@ptrCast(self.ptr), @ptrCast(extension.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: KIO__MimetypeJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__Job_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__MimetypeJob.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `detailedErrorStrings` instead
    ///
    pub const DetailedErrorStrings = detailedErrorStrings;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn detailedErrorStrings(self: KIO__MimetypeJob, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIO__MimetypeJob.detailedErrorStrings: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__MimetypeJob.detailedErrorStrings: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setParentJob` instead
    ///
    pub const SetParentJob = setParentJob;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#setParentJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` _parentJob: KIO__Job `
    ///
    pub fn setParentJob(self: KIO__MimetypeJob, _parentJob: anytype) void {
        comptime _ = @TypeOf(_parentJob)._is_KIO__Job;
        qtc.KIO__Job_SetParentJob(@ptrCast(self.ptr), @ptrCast(_parentJob.ptr));
    }

    /// ### DEPRECATED: Use `parentJob` instead
    ///
    pub const ParentJob = parentJob;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#parentJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn parentJob(self: KIO__MimetypeJob) KIO__Job {
        return .{ .ptr = qtc.KIO__Job_ParentJob(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMetaData` instead
    ///
    pub const SetMetaData = setMetaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` _metaData: KIO__MetaData `
    ///
    pub fn setMetaData(self: KIO__MimetypeJob, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_KIO__MetaData;
        qtc.KIO__Job_SetMetaData(@ptrCast(self.ptr), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `addMetaData` instead
    ///
    pub const AddMetaData = addMetaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn addMetaData(self: KIO__MimetypeJob, key: []const u8, value: []const u8) void {
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

    /// ### DEPRECATED: Use `addMetaData2` instead
    ///
    pub const AddMetaData2 = addMetaData2;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` values: ArrayMap_constu8_constu8 `
    ///
    pub fn addMetaData2(self: KIO__MimetypeJob, allocator: std.mem.Allocator, values: ArrayMap_constu8_constu8) void {
        const values_count = values.count();
        const values_keys = allocator.alloc(qtc.libqt_string, values_count) catch @panic("KIO__MimetypeJob.addMetaData2: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc(qtc.libqt_string, values_count) catch @panic("KIO__MimetypeJob.addMetaData2: Memory allocation failed");
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

    /// ### DEPRECATED: Use `mergeMetaData` instead
    ///
    pub const MergeMetaData = mergeMetaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#mergeMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` values: ArrayMap_constu8_constu8 `
    ///
    pub fn mergeMetaData(self: KIO__MimetypeJob, allocator: std.mem.Allocator, values: ArrayMap_constu8_constu8) void {
        const values_count = values.count();
        const values_keys = allocator.alloc(qtc.libqt_string, values_count) catch @panic("KIO__MimetypeJob.mergeMetaData: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc(qtc.libqt_string, values_count) catch @panic("KIO__MimetypeJob.mergeMetaData: Memory allocation failed");
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

    /// ### DEPRECATED: Use `outgoingMetaData` instead
    ///
    pub const OutgoingMetaData = outgoingMetaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#outgoingMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn outgoingMetaData(self: KIO__MimetypeJob) KIO__MetaData {
        return .{ .ptr = qtc.KIO__Job_OutgoingMetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn metaData(self: KIO__MimetypeJob) KIO__MetaData {
        return .{ .ptr = qtc.KIO__Job_MetaData(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `queryMetaData` instead
    ///
    pub const QueryMetaData = queryMetaData;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#queryMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn queryMetaData(self: KIO__MimetypeJob, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__Job_QueryMetaData(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__MimetypeJob.queryMetaData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `connected` instead
    ///
    pub const Connected = connected;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn connected(self: KIO__MimetypeJob, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__Job_Connected(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onConnected` instead
    ///
    pub const OnConnected = onConnected;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KIO__Job) callconv(.c) void `
    ///
    pub fn onConnected(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KIO__Job) callconv(.c) void) void {
        qtc.KIO__Job_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `detailedErrorStrings1` instead
    ///
    pub const DetailedErrorStrings1 = detailedErrorStrings1;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` reqUrl: QUrl `
    ///
    pub fn detailedErrorStrings1(self: KIO__MimetypeJob, allocator: std.mem.Allocator, reqUrl: anytype) []const []const u8 {
        comptime _ = @TypeOf(reqUrl)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings1(@ptrCast(self.ptr), @ptrCast(reqUrl.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIO__MimetypeJob.detailedErrorStrings1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__MimetypeJob.detailedErrorStrings1: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `detailedErrorStrings2` instead
    ///
    pub const DetailedErrorStrings2 = detailedErrorStrings2;

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` reqUrl: QUrl `
    ///
    /// ` method: i32 `
    ///
    pub fn detailedErrorStrings2(self: KIO__MimetypeJob, allocator: std.mem.Allocator, reqUrl: anytype, method: i32) []const []const u8 {
        comptime _ = @TypeOf(reqUrl)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings2(@ptrCast(self.ptr), @ptrCast(reqUrl.ptr), @bitCast(method));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIO__MimetypeJob.detailedErrorStrings2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__MimetypeJob.detailedErrorStrings2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setUiDelegate` instead
    ///
    pub const SetUiDelegate = setUiDelegate;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` delegate: KJobUiDelegate `
    ///
    pub fn setUiDelegate(self: KIO__MimetypeJob, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KJobUiDelegate;
        qtc.KJob_SetUiDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `uiDelegate` instead
    ///
    pub const UiDelegate = uiDelegate;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn uiDelegate(self: KIO__MimetypeJob) KJobUiDelegate {
        return .{ .ptr = qtc.KJob_UiDelegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `capabilities` instead
    ///
    pub const Capabilities = capabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ## Returns:
    ///
    /// ` flag of kjob_enums.Capability `
    ///
    pub fn capabilities(self: KIO__MimetypeJob) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSuspended` instead
    ///
    pub const IsSuspended = isSuspended;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn isSuspended(self: KIO__MimetypeJob) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `kill` instead
    ///
    pub const Kill = kill;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn kill(self: KIO__MimetypeJob) bool {
        return qtc.KJob_Kill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `suspend0` instead
    ///
    pub const Suspend = suspend0;

    pub const @"suspend" = suspend0;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn suspend0(self: KIO__MimetypeJob) bool {
        return qtc.KJob_Suspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn resume0(self: KIO__MimetypeJob) bool {
        return qtc.KJob_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn exec(self: KIO__MimetypeJob) bool {
        return qtc.KJob_Exec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn error0(self: KIO__MimetypeJob) i32 {
        return qtc.KJob_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorText` instead
    ///
    pub const ErrorText = errorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorText(self: KIO__MimetypeJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__MimetypeJob.errorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `processedAmount` instead
    ///
    pub const ProcessedAmount = processedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn processedAmount(self: KIO__MimetypeJob, unit: i32) usize {
        return qtc.KJob_ProcessedAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `totalAmount` instead
    ///
    pub const TotalAmount = totalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn totalAmount(self: KIO__MimetypeJob, unit: i32) usize {
        return qtc.KJob_TotalAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `percent` instead
    ///
    pub const Percent = percent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn percent(self: KIO__MimetypeJob) usize {
        return qtc.KJob_Percent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDelete` instead
    ///
    pub const SetAutoDelete = setAutoDelete;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` autodelete: bool `
    ///
    pub fn setAutoDelete(self: KIO__MimetypeJob, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self.ptr), autodelete);
    }

    /// ### DEPRECATED: Use `isAutoDelete` instead
    ///
    pub const IsAutoDelete = isAutoDelete;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn isAutoDelete(self: KIO__MimetypeJob) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFinishedNotificationHidden` instead
    ///
    pub const SetFinishedNotificationHidden = setFinishedNotificationHidden;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn setFinishedNotificationHidden(self: KIO__MimetypeJob) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFinishedNotificationHidden` instead
    ///
    pub const IsFinishedNotificationHidden = isFinishedNotificationHidden;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn isFinishedNotificationHidden(self: KIO__MimetypeJob) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isStartedWithExec` instead
    ///
    pub const IsStartedWithExec = isStartedWithExec;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn isStartedWithExec(self: KIO__MimetypeJob) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `elapsedTime` instead
    ///
    pub const ElapsedTime = elapsedTime;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn elapsedTime(self: KIO__MimetypeJob) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `infoMessage` instead
    ///
    pub const InfoMessage = infoMessage;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn infoMessage(self: KIO__MimetypeJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_InfoMessage(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
    }

    /// ### DEPRECATED: Use `onInfoMessage` instead
    ///
    pub const OnInfoMessage = onInfoMessage;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onInfoMessage(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `warning` instead
    ///
    pub const Warning = warning;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn warning(self: KIO__MimetypeJob, job: anytype, message: []const u8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_Warning(@ptrCast(self.ptr), @ptrCast(job.ptr), message_str);
    }

    /// ### DEPRECATED: Use `onWarning` instead
    ///
    pub const OnWarning = onWarning;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWarning(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `totalSize` instead
    ///
    pub const TotalSize = totalSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn totalSize(self: KIO__MimetypeJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_TotalSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onTotalSize` instead
    ///
    pub const OnTotalSize = onTotalSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn onTotalSize(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `processedSize` instead
    ///
    pub const ProcessedSize = processedSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn processedSize(self: KIO__MimetypeJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_ProcessedSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onProcessedSize` instead
    ///
    pub const OnProcessedSize = onProcessedSize;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn onProcessedSize(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `speed` instead
    ///
    pub const Speed = speed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` job: KJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn speed(self: KIO__MimetypeJob, job: anytype, _speed: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_Speed(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `onSpeed` instead
    ///
    pub const OnSpeed = onSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob, speed: usize) callconv(.c) void `
    ///
    pub fn onSpeed(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `kill1` instead
    ///
    pub const Kill1 = kill1;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` verbosity: kjob_enums.KillVerbosity `
    ///
    pub fn kill1(self: KIO__MimetypeJob, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self.ptr), @bitCast(verbosity));
    }

    /// ### DEPRECATED: Use `setFinishedNotificationHidden1` instead
    ///
    pub const SetFinishedNotificationHidden1 = setFinishedNotificationHidden1;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` hide: bool `
    ///
    pub fn setFinishedNotificationHidden1(self: KIO__MimetypeJob, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self.ptr), hide);
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KIO__MimetypeJob, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KIO__MimetypeJob, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KIO__MimetypeJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIO__MimetypeJob.objectName: Memory allocation failed");
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KIO__MimetypeJob, name: []const u8) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn isWidgetType(self: KIO__MimetypeJob) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn isWindowType(self: KIO__MimetypeJob) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn isQuickItemType(self: KIO__MimetypeJob) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn signalsBlocked(self: KIO__MimetypeJob) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KIO__MimetypeJob, b: bool) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn thread(self: KIO__MimetypeJob) QThread {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KIO__MimetypeJob, _thread: anytype) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KIO__MimetypeJob, interval: i32) i32 {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KIO__MimetypeJob, time: i64) i32 {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KIO__MimetypeJob, id: i32) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KIO__MimetypeJob, id: i32) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KIO__MimetypeJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KIO__MimetypeJob.children: Memory allocation failed");
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KIO__MimetypeJob, _parent: anytype) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KIO__MimetypeJob, filterObj: anytype) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KIO__MimetypeJob, obj: anytype) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KIO__MimetypeJob, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn disconnect3(self: KIO__MimetypeJob) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KIO__MimetypeJob, receiver: anytype) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn dumpObjectTree(self: KIO__MimetypeJob) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn dumpObjectInfo(self: KIO__MimetypeJob) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KIO__MimetypeJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KIO__MimetypeJob, name: [:0]const u8) QVariant {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KIO__MimetypeJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KIO__MimetypeJob.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIO__MimetypeJob.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn bindingStorage(self: KIO__MimetypeJob) QBindingStorage {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn bindingStorage2(self: KIO__MimetypeJob) QBindingStorage {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn destroyed(self: KIO__MimetypeJob) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob) callconv(.c) void) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn parent(self: KIO__MimetypeJob) QObject {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KIO__MimetypeJob, classname: [:0]const u8) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn deleteLater(self: KIO__MimetypeJob) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KIO__MimetypeJob, interval: i32, timerType: i32) i32 {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KIO__MimetypeJob, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KIO__MimetypeJob, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KIO__MimetypeJob, signal: [:0]const u8) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KIO__MimetypeJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KIO__MimetypeJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KIO__MimetypeJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KIO__MimetypeJob, param1: anytype) void {
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob) callconv(.c) void `
    ///
    pub fn onFinished(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onSuspended` instead
    ///
    pub const OnSuspended = onSuspended;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspended)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob) callconv(.c) void `
    ///
    pub fn onSuspended(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Suspended(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onResumed` instead
    ///
    pub const OnResumed = onResumed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resumed)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob) callconv(.c) void `
    ///
    pub fn onResumed(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Resumed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onResult` instead
    ///
    pub const OnResult = onResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#result)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob) callconv(.c) void `
    ///
    pub fn onResult(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Result(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onTotalAmountChanged` instead
    ///
    pub const OnTotalAmountChanged = onTotalAmountChanged;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onTotalAmountChanged(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalAmountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onProcessedAmountChanged` instead
    ///
    pub const OnProcessedAmountChanged = onProcessedAmountChanged;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onProcessedAmountChanged(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedAmountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onPercentChanged` instead
    ///
    pub const OnPercentChanged = onPercentChanged;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, job: KJob, percent: usize) callconv(.c) void `
    ///
    pub fn onPercentChanged(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_PercentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KIO__MimetypeJob `
    ///
    /// ` callback: *const fn (self: KIO__MimetypeJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KIO__MimetypeJob, callback: *const fn (KIO__MimetypeJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__MimetypeJob `
    ///
    pub fn delete(self: KIO__MimetypeJob) void {
        qtc.KIO__MimetypeJob_Delete(@ptrCast(self.ptr));
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

    /// ### DEPRECATED: Use `mimetype` instead
    ///
    pub const Mimetype = mimetype;

    /// ### [Upstream resources](https://api.kde.org/kio.html#mimetype)
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    /// ` flags: flag of job_base_enums.JobFlag `
    ///
    pub fn mimetype(_url: anytype, flags: i32) KIO__MimetypeJob {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.KIO_Mimetype(@ptrCast(_url.ptr), @bitCast(flags)) };
    }
};
