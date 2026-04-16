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
const copyjob_enums = enums;
const job_base_enums = @import("libjob_base.zig").enums;
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/kio-copyjob.html)
pub const KIO__CopyJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__CopyJob,

    pub const _is_KIO__CopyJob = {};
    pub const _is_KIO__Job = {};
    pub const _is_KCompositeJob = {};
    pub const _is_KJob = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn MetaObject(self: KIO__CopyJob) QMetaObject {
        return .{ .ptr = qtc.KIO__CopyJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KIO__CopyJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__CopyJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KIO__CopyJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__CopyJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__copyjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#operationMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ## Returns:
    ///
    /// ` copyjob_enums.CopyMode `
    ///
    pub fn OperationMode(self: KIO__CopyJob) i32 {
        return qtc.KIO__CopyJob_OperationMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#srcUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SrcUrls(self: KIO__CopyJob, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KIO__CopyJob_SrcUrls(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("kio__copyjob.SrcUrls: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#destUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn DestUrl(self: KIO__CopyJob) QUrl {
        return .{ .ptr = qtc.KIO__CopyJob_DestUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#setDefaultPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` b: bool `
    ///
    pub fn SetDefaultPermissions(self: KIO__CopyJob, b: bool) void {
        qtc.KIO__CopyJob_SetDefaultPermissions(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#setAutoSkip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` autoSkip: bool `
    ///
    pub fn SetAutoSkip(self: KIO__CopyJob, autoSkip: bool) void {
        qtc.KIO__CopyJob_SetAutoSkip(@ptrCast(self.ptr), autoSkip);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#setAutoRename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` autoRename: bool `
    ///
    pub fn SetAutoRename(self: KIO__CopyJob, autoRename: bool) void {
        qtc.KIO__CopyJob_SetAutoRename(@ptrCast(self.ptr), autoRename);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#setWriteIntoExistingDirectories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` overwriteAllDirs: bool `
    ///
    pub fn SetWriteIntoExistingDirectories(self: KIO__CopyJob, overwriteAllDirs: bool) void {
        qtc.KIO__CopyJob_SetWriteIntoExistingDirectories(@ptrCast(self.ptr), overwriteAllDirs);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#doSuspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn DoSuspend(self: KIO__CopyJob) bool {
        return qtc.KIO__CopyJob_DoSuspend(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#doResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn DoResume(self: KIO__CopyJob) bool {
        return qtc.KIO__CopyJob_DoResume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#processedFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` files: usize `
    ///
    pub fn ProcessedFiles(self: KIO__CopyJob, job: anytype, files: usize) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__CopyJob_ProcessedFiles(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(files));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#processedFiles)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KIO__Job, files: usize) callconv(.c) void `
    ///
    pub fn OnProcessedFiles(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KIO__Job, usize) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_ProcessedFiles(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#processedDirs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` dirs: usize `
    ///
    pub fn ProcessedDirs(self: KIO__CopyJob, job: anytype, dirs: usize) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__CopyJob_ProcessedDirs(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(dirs));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#processedDirs)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KIO__Job, dirs: usize) callconv(.c) void `
    ///
    pub fn OnProcessedDirs(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KIO__Job, usize) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_ProcessedDirs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#copying)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` src: QUrl `
    ///
    /// ` dest: QUrl `
    ///
    pub fn Copying(self: KIO__CopyJob, job: anytype, src: anytype, dest: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        comptime _ = @TypeOf(src)._is_QUrl;
        comptime _ = @TypeOf(dest)._is_QUrl;
        qtc.KIO__CopyJob_Copying(@ptrCast(self.ptr), @ptrCast(job.ptr), @ptrCast(src.ptr), @ptrCast(dest.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#copying)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KIO__Job, src: QUrl, dest: QUrl) callconv(.c) void `
    ///
    pub fn OnCopying(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KIO__Job, QUrl, QUrl) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_Copying(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#linking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` target: []const u8 `
    ///
    /// ` to: QUrl `
    ///
    pub fn Linking(self: KIO__CopyJob, job: anytype, target: []const u8, to: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        comptime _ = @TypeOf(to)._is_QUrl;
        qtc.KIO__CopyJob_Linking(@ptrCast(self.ptr), @ptrCast(job.ptr), target_str, @ptrCast(to.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#linking)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KIO__Job, target: [*:0]const u8, to: QUrl) callconv(.c) void `
    ///
    pub fn OnLinking(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KIO__Job, [*:0]const u8, QUrl) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_Linking(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#moving)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` from: QUrl `
    ///
    /// ` to: QUrl `
    ///
    pub fn Moving(self: KIO__CopyJob, job: anytype, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        comptime _ = @TypeOf(from)._is_QUrl;
        comptime _ = @TypeOf(to)._is_QUrl;
        qtc.KIO__CopyJob_Moving(@ptrCast(self.ptr), @ptrCast(job.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#moving)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KIO__Job, from: QUrl, to: QUrl) callconv(.c) void `
    ///
    pub fn OnMoving(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KIO__Job, QUrl, QUrl) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_Moving(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#creatingDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` dir: QUrl `
    ///
    pub fn CreatingDir(self: KIO__CopyJob, job: anytype, dir: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        comptime _ = @TypeOf(dir)._is_QUrl;
        qtc.KIO__CopyJob_CreatingDir(@ptrCast(self.ptr), @ptrCast(job.ptr), @ptrCast(dir.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#creatingDir)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KIO__Job, dir: QUrl) callconv(.c) void `
    ///
    pub fn OnCreatingDir(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KIO__Job, QUrl) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_CreatingDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#renamed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` from: QUrl `
    ///
    /// ` to: QUrl `
    ///
    pub fn Renamed(self: KIO__CopyJob, job: anytype, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        comptime _ = @TypeOf(from)._is_QUrl;
        comptime _ = @TypeOf(to)._is_QUrl;
        qtc.KIO__CopyJob_Renamed(@ptrCast(self.ptr), @ptrCast(job.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#renamed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KIO__Job, from: QUrl, to: QUrl) callconv(.c) void `
    ///
    pub fn OnRenamed(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KIO__Job, QUrl, QUrl) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_Renamed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#copyingDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` from: QUrl `
    ///
    /// ` to: QUrl `
    ///
    /// ` mtime: QDateTime `
    ///
    /// ` directory: bool `
    ///
    /// ` renamed: bool `
    ///
    pub fn CopyingDone(self: KIO__CopyJob, job: anytype, from: anytype, to: anytype, mtime: anytype, directory: bool, renamed: bool) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        comptime _ = @TypeOf(from)._is_QUrl;
        comptime _ = @TypeOf(to)._is_QUrl;
        comptime _ = @TypeOf(mtime)._is_QDateTime;
        qtc.KIO__CopyJob_CopyingDone(@ptrCast(self.ptr), @ptrCast(job.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @ptrCast(mtime.ptr), directory, renamed);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#copyingDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KIO__Job, from: QUrl, to: QUrl, mtime: QDateTime, directory: bool, renamed: bool) callconv(.c) void `
    ///
    pub fn OnCopyingDone(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KIO__Job, QUrl, QUrl, QDateTime, bool, bool) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_CopyingDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#copyingLinkDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KIO__Job `
    ///
    /// ` from: QUrl `
    ///
    /// ` target: []const u8 `
    ///
    /// ` to: QUrl `
    ///
    pub fn CopyingLinkDone(self: KIO__CopyJob, job: anytype, from: anytype, target: []const u8, to: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        comptime _ = @TypeOf(from)._is_QUrl;
        const target_str = qtc.libqt_string{
            .len = target.len,
            .data = target.ptr,
        };
        comptime _ = @TypeOf(to)._is_QUrl;
        qtc.KIO__CopyJob_CopyingLinkDone(@ptrCast(self.ptr), @ptrCast(job.ptr), @ptrCast(from.ptr), target_str, @ptrCast(to.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#copyingLinkDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KIO__Job, from: QUrl, target: [*:0]const u8, to: QUrl) callconv(.c) void `
    ///
    pub fn OnCopyingLinkDone(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KIO__Job, QUrl, [*:0]const u8, QUrl) callconv(.c) void) void {
        qtc.KIO__CopyJob_Connect_CopyingLinkDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__copyjob.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__copyjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn Start(self: KIO__CopyJob) void {
        qtc.KIO__Job_Start(@ptrCast(self.ptr));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#uiDelegateExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn UiDelegateExtension(self: KIO__CopyJob) KIO__JobUiDelegateExtension {
        return .{ .ptr = qtc.KIO__Job_UiDelegateExtension(@ptrCast(self.ptr)) };
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#setUiDelegateExtension)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` extension: KIO__JobUiDelegateExtension `
    ///
    pub fn SetUiDelegateExtension(self: KIO__CopyJob, extension: anytype) void {
        comptime _ = @TypeOf(extension)._is_KIO__JobUiDelegateExtension;
        qtc.KIO__Job_SetUiDelegateExtension(@ptrCast(self.ptr), @ptrCast(extension.ptr));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: KIO__CopyJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__Job_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__copyjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DetailedErrorStrings(self: KIO__CopyJob, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio__copyjob.DetailedErrorStrings: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__copyjob.DetailedErrorStrings: Memory allocation failed");
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` parentJob: KIO__Job `
    ///
    pub fn SetParentJob(self: KIO__CopyJob, parentJob: anytype) void {
        comptime _ = @TypeOf(parentJob)._is_KIO__Job;
        qtc.KIO__Job_SetParentJob(@ptrCast(self.ptr), @ptrCast(parentJob.ptr));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#parentJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn ParentJob(self: KIO__CopyJob) KIO__Job {
        return .{ .ptr = qtc.KIO__Job_ParentJob(@ptrCast(self.ptr)) };
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#setMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` metaData: KIO__MetaData `
    ///
    pub fn SetMetaData(self: KIO__CopyJob, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_KIO__MetaData;
        qtc.KIO__Job_SetMetaData(@ptrCast(self.ptr), @ptrCast(metaData.ptr));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#addMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn AddMetaData(self: KIO__CopyJob, key: []const u8, value: []const u8) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` values: ArrayMap_constu8_constu8 `
    ///
    pub fn AddMetaData2(self: KIO__CopyJob, allocator: std.mem.Allocator, values: ArrayMap_constu8_constu8) void {
        const values_count = values.count();
        const values_keys = allocator.alloc(qtc.libqt_string, values_count) catch @panic("kio__copyjob.AddMetaData2: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc(qtc.libqt_string, values_count) catch @panic("kio__copyjob.AddMetaData2: Memory allocation failed");
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` values: ArrayMap_constu8_constu8 `
    ///
    pub fn MergeMetaData(self: KIO__CopyJob, allocator: std.mem.Allocator, values: ArrayMap_constu8_constu8) void {
        const values_count = values.count();
        const values_keys = allocator.alloc(qtc.libqt_string, values_count) catch @panic("kio__copyjob.MergeMetaData: Memory allocation failed");
        defer allocator.free(values_keys);
        const values_values = allocator.alloc(qtc.libqt_string, values_count) catch @panic("kio__copyjob.MergeMetaData: Memory allocation failed");
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
    /// ` self: KIO__CopyJob `
    ///
    pub fn OutgoingMetaData(self: KIO__CopyJob) KIO__MetaData {
        return .{ .ptr = qtc.KIO__Job_OutgoingMetaData(@ptrCast(self.ptr)) };
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn MetaData(self: KIO__CopyJob) KIO__MetaData {
        return .{ .ptr = qtc.KIO__Job_MetaData(@ptrCast(self.ptr)) };
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#queryMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn QueryMetaData(self: KIO__CopyJob, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KIO__Job_QueryMetaData(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__copyjob.QueryMetaData: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KIO__Job `
    ///
    pub fn Connected(self: KIO__CopyJob, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KIO__Job;
        qtc.KIO__Job_Connected(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KIO__Job) callconv(.c) void `
    ///
    pub fn OnConnected(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KIO__Job) callconv(.c) void) void {
        qtc.KIO__Job_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KIO::Job
    ///
    /// ### [Upstream resources](https://api.kde.org/kio-job.html#detailedErrorStrings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` reqUrl: QUrl `
    ///
    pub fn DetailedErrorStrings1(self: KIO__CopyJob, allocator: std.mem.Allocator, reqUrl: anytype) []const []const u8 {
        comptime _ = @TypeOf(reqUrl)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings1(@ptrCast(self.ptr), @ptrCast(reqUrl.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio__copyjob.DetailedErrorStrings1: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__copyjob.DetailedErrorStrings1: Memory allocation failed");
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` reqUrl: QUrl `
    ///
    /// ` method: i32 `
    ///
    pub fn DetailedErrorStrings2(self: KIO__CopyJob, allocator: std.mem.Allocator, reqUrl: anytype, method: i32) []const []const u8 {
        comptime _ = @TypeOf(reqUrl)._is_QUrl;
        const _arr: qtc.libqt_list = qtc.KIO__Job_DetailedErrorStrings2(@ptrCast(self.ptr), @ptrCast(reqUrl.ptr), @bitCast(method));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kio__copyjob.DetailedErrorStrings2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__copyjob.DetailedErrorStrings2: Memory allocation failed");
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` delegate: KJobUiDelegate `
    ///
    pub fn SetUiDelegate(self: KIO__CopyJob, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KJobUiDelegate;
        qtc.KJob_SetUiDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn UiDelegate(self: KIO__CopyJob) KJobUiDelegate {
        return .{ .ptr = qtc.KJob_UiDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ## Returns:
    ///
    /// ` flag of kjob_enums.Capability `
    ///
    pub fn Capabilities(self: KIO__CopyJob) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn IsSuspended(self: KIO__CopyJob) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn Kill(self: KIO__CopyJob) bool {
        return qtc.KJob_Kill(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn Suspend(self: KIO__CopyJob) bool {
        return qtc.KJob_Suspend(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn Resume(self: KIO__CopyJob) bool {
        return qtc.KJob_Resume(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn Exec(self: KIO__CopyJob) bool {
        return qtc.KJob_Exec(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn Error(self: KIO__CopyJob) i32 {
        return qtc.KJob_Error(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorText(self: KIO__CopyJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__copyjob.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn ProcessedAmount(self: KIO__CopyJob, unit: i32) usize {
        return qtc.KJob_ProcessedAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn TotalAmount(self: KIO__CopyJob, unit: i32) usize {
        return qtc.KJob_TotalAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn Percent(self: KIO__CopyJob) usize {
        return qtc.KJob_Percent(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` autodelete: bool `
    ///
    pub fn SetAutoDelete(self: KIO__CopyJob, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self.ptr), autodelete);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn IsAutoDelete(self: KIO__CopyJob) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn SetFinishedNotificationHidden(self: KIO__CopyJob) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn IsFinishedNotificationHidden(self: KIO__CopyJob) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn IsStartedWithExec(self: KIO__CopyJob) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn ElapsedTime(self: KIO__CopyJob) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn InfoMessage(self: KIO__CopyJob, job: anytype, message: []const u8) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnInfoMessage(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn Warning(self: KIO__CopyJob, job: anytype, message: []const u8) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWarning(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn TotalSize(self: KIO__CopyJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_TotalSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn OnTotalSize(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn ProcessedSize(self: KIO__CopyJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_ProcessedSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn OnProcessedSize(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` job: KJob `
    ///
    /// ` speed: usize `
    ///
    pub fn Speed(self: KIO__CopyJob, job: anytype, speed: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_Speed(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(speed));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob, speed: usize) callconv(.c) void `
    ///
    pub fn OnSpeed(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` verbosity: kjob_enums.KillVerbosity `
    ///
    pub fn Kill1(self: KIO__CopyJob, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self.ptr), @bitCast(verbosity));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` hide: bool `
    ///
    pub fn SetFinishedNotificationHidden1(self: KIO__CopyJob, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self.ptr), hide);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KIO__CopyJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KIO__CopyJob, watched: anytype, event: anytype) bool {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KIO__CopyJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__copyjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KIO__CopyJob, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn IsWidgetType(self: KIO__CopyJob) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn IsWindowType(self: KIO__CopyJob) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn IsQuickItemType(self: KIO__CopyJob) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn SignalsBlocked(self: KIO__CopyJob) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KIO__CopyJob, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn Thread(self: KIO__CopyJob) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KIO__CopyJob, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KIO__CopyJob, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KIO__CopyJob, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KIO__CopyJob, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KIO__CopyJob, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KIO__CopyJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kio__copyjob.Children: Memory allocation failed");
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KIO__CopyJob, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KIO__CopyJob, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KIO__CopyJob, obj: anytype) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KIO__CopyJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__CopyJob `
    ///
    pub fn Disconnect3(self: KIO__CopyJob) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KIO__CopyJob, receiver: anytype) bool {
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
    /// ` self: KIO__CopyJob `
    ///
    pub fn DumpObjectTree(self: KIO__CopyJob) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn DumpObjectInfo(self: KIO__CopyJob) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KIO__CopyJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KIO__CopyJob, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KIO__CopyJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kio__copyjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__copyjob.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__CopyJob `
    ///
    pub fn BindingStorage(self: KIO__CopyJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn BindingStorage2(self: KIO__CopyJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn Destroyed(self: KIO__CopyJob) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn Parent(self: KIO__CopyJob) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KIO__CopyJob, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn DeleteLater(self: KIO__CopyJob) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KIO__CopyJob, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KIO__CopyJob, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KIO__CopyJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KIO__CopyJob, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KIO__CopyJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KIO__CopyJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KIO__CopyJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KIO__CopyJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, QObject) callconv(.c) void) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnFinished(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob) callconv(.c) void) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnSuspended(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob) callconv(.c) void) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnResumed(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob) callconv(.c) void) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnResult(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob) callconv(.c) void) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnTotalAmountChanged(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob, i32, usize) callconv(.c) void) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnProcessedAmountChanged(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob, i32, usize) callconv(.c) void) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, job: KJob, percent: usize) callconv(.c) void `
    ///
    pub fn OnPercentChanged(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, KJob, usize) callconv(.c) void) void {
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
    /// ` self: KIO__CopyJob `
    ///
    /// ` callback: *const fn (self: KIO__CopyJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KIO__CopyJob, callback: *const fn (KIO__CopyJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__CopyJob `
    ///
    pub fn Delete(self: KIO__CopyJob) void {
        qtc.KIO__CopyJob_Delete(@ptrCast(self.ptr));
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

    /// ### [Upstream resources](https://api.kde.org/kio.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUrl `
    ///
    /// ` param2: QUrl `
    ///
    /// ` param3: flag of job_base_enums.JobFlag `
    ///
    pub fn Copy(param1: anytype, param2: anytype, param3: i32) KIO__CopyJob {
        comptime _ = @TypeOf(param1)._is_QUrl;
        comptime _ = @TypeOf(param2)._is_QUrl;
        return .{ .ptr = qtc.KIO_Copy(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#copyAs)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUrl `
    ///
    /// ` param2: QUrl `
    ///
    /// ` param3: flag of job_base_enums.JobFlag `
    ///
    pub fn CopyAs(param1: anytype, param2: anytype, param3: i32) KIO__CopyJob {
        comptime _ = @TypeOf(param1)._is_QUrl;
        comptime _ = @TypeOf(param2)._is_QUrl;
        return .{ .ptr = qtc.KIO_CopyAs(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []QUrl `
    ///
    /// ` param2: QUrl `
    ///
    /// ` param3: flag of job_base_enums.JobFlag `
    ///
    pub fn Copy2(param1: []QUrl, param2: anytype, param3: i32) KIO__CopyJob {
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = @ptrCast(param1.ptr),
        };
        comptime _ = @TypeOf(param2)._is_QUrl;
        return .{ .ptr = qtc.KIO_Copy2(param1_list, @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUrl `
    ///
    /// ` param2: QUrl `
    ///
    /// ` param3: flag of job_base_enums.JobFlag `
    ///
    pub fn Move(param1: anytype, param2: anytype, param3: i32) KIO__CopyJob {
        comptime _ = @TypeOf(param1)._is_QUrl;
        comptime _ = @TypeOf(param2)._is_QUrl;
        return .{ .ptr = qtc.KIO_Move(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#moveAs)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUrl `
    ///
    /// ` param2: QUrl `
    ///
    /// ` param3: flag of job_base_enums.JobFlag `
    ///
    pub fn MoveAs(param1: anytype, param2: anytype, param3: i32) KIO__CopyJob {
        comptime _ = @TypeOf(param1)._is_QUrl;
        comptime _ = @TypeOf(param2)._is_QUrl;
        return .{ .ptr = qtc.KIO_MoveAs(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []QUrl `
    ///
    /// ` param2: QUrl `
    ///
    /// ` param3: flag of job_base_enums.JobFlag `
    ///
    pub fn Move2(param1: []QUrl, param2: anytype, param3: i32) KIO__CopyJob {
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = @ptrCast(param1.ptr),
        };
        comptime _ = @TypeOf(param2)._is_QUrl;
        return .{ .ptr = qtc.KIO_Move2(param1_list, @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUrl `
    ///
    /// ` param2: QUrl `
    ///
    /// ` param3: flag of job_base_enums.JobFlag `
    ///
    pub fn Link(param1: anytype, param2: anytype, param3: i32) KIO__CopyJob {
        comptime _ = @TypeOf(param1)._is_QUrl;
        comptime _ = @TypeOf(param2)._is_QUrl;
        return .{ .ptr = qtc.KIO_Link(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#link)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []QUrl `
    ///
    /// ` param2: QUrl `
    ///
    /// ` param3: flag of job_base_enums.JobFlag `
    ///
    pub fn Link2(param1: []QUrl, param2: anytype, param3: i32) KIO__CopyJob {
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = @ptrCast(param1.ptr),
        };
        comptime _ = @TypeOf(param2)._is_QUrl;
        return .{ .ptr = qtc.KIO_Link2(param1_list, @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#linkAs)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUrl `
    ///
    /// ` param2: QUrl `
    ///
    /// ` param3: flag of job_base_enums.JobFlag `
    ///
    pub fn LinkAs(param1: anytype, param2: anytype, param3: i32) KIO__CopyJob {
        comptime _ = @TypeOf(param1)._is_QUrl;
        comptime _ = @TypeOf(param2)._is_QUrl;
        return .{ .ptr = qtc.KIO_LinkAs(@ptrCast(param1.ptr), @ptrCast(param2.ptr), @bitCast(param3)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#trash)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUrl `
    ///
    /// ` param2: flag of job_base_enums.JobFlag `
    ///
    pub fn Trash(param1: anytype, param2: i32) KIO__CopyJob {
        comptime _ = @TypeOf(param1)._is_QUrl;
        return .{ .ptr = qtc.KIO_Trash(@ptrCast(param1.ptr), @bitCast(param2)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio.html#trash)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []QUrl `
    ///
    /// ` param2: flag of job_base_enums.JobFlag `
    ///
    pub fn Trash2(param1: []QUrl, param2: i32) KIO__CopyJob {
        const param1_list = qtc.libqt_list{
            .len = param1.len,
            .data = @ptrCast(param1.ptr),
        };
        return .{ .ptr = qtc.KIO_Trash2(param1_list, @bitCast(param2)) };
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-copyjob.html#public-types)
pub const enums = struct {
    pub const CopyMode = enum(i32) {
        pub const Copy: i32 = 0;
        pub const Move: i32 = 1;
        pub const Link: i32 = 2;
    };
};
