const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KDesktopFileAction = @import("libqt6").KDesktopFileAction;
const KJob = @import("libqt6").KJob;
const KJobUiDelegate = @import("libqt6").KJobUiDelegate;
const KServiceAction = @import("libqt6").KServiceAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const applicationlauncherjob_enums = enums;
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html)
pub const KIO__ApplicationLauncherJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIO__ApplicationLauncherJob,

    pub const _is_KIO__ApplicationLauncherJob = {};
    pub const _is_KJob = {};
    pub const _is_QObject = {};

    /// New constructs a new KIO::ApplicationLauncherJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` serviceAction: KServiceAction `
    ///
    pub fn New(serviceAction: anytype) KIO__ApplicationLauncherJob {
        comptime _ = @TypeOf(serviceAction)._is_KServiceAction;
        return .{ .ptr = qtc.KIO__ApplicationLauncherJob_new(@ptrCast(serviceAction.ptr)) };
    }

    /// New2 constructs a new KIO::ApplicationLauncherJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` desktopFileAction: KDesktopFileAction `
    ///
    pub fn New2(desktopFileAction: anytype) KIO__ApplicationLauncherJob {
        comptime _ = @TypeOf(desktopFileAction)._is_KDesktopFileAction;
        return .{ .ptr = qtc.KIO__ApplicationLauncherJob_new2(@ptrCast(desktopFileAction.ptr)) };
    }

    /// New3 constructs a new KIO::ApplicationLauncherJob object.
    ///
    pub fn New3() KIO__ApplicationLauncherJob {
        return .{ .ptr = qtc.KIO__ApplicationLauncherJob_new3() };
    }

    /// New4 constructs a new KIO::ApplicationLauncherJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` serviceAction: KServiceAction `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(serviceAction: anytype, parent: anytype) KIO__ApplicationLauncherJob {
        comptime _ = @TypeOf(serviceAction)._is_KServiceAction;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KIO__ApplicationLauncherJob_new4(@ptrCast(serviceAction.ptr), @ptrCast(parent.ptr)) };
    }

    /// New5 constructs a new KIO::ApplicationLauncherJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` desktopFileAction: KDesktopFileAction `
    ///
    /// ` parent: QObject `
    ///
    pub fn New5(desktopFileAction: anytype, parent: anytype) KIO__ApplicationLauncherJob {
        comptime _ = @TypeOf(desktopFileAction)._is_KDesktopFileAction;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KIO__ApplicationLauncherJob_new5(@ptrCast(desktopFileAction.ptr), @ptrCast(parent.ptr)) };
    }

    /// New6 constructs a new KIO::ApplicationLauncherJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New6(parent: anytype) KIO__ApplicationLauncherJob {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KIO__ApplicationLauncherJob_new6(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html#setUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn SetUrls(self: KIO__ApplicationLauncherJob, urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KIO__ApplicationLauncherJob_SetUrls(@ptrCast(self.ptr), urls_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html#setRunFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` runFlags: flag of applicationlauncherjob_enums.RunFlag `
    ///
    pub fn SetRunFlags(self: KIO__ApplicationLauncherJob, runFlags: i32) void {
        qtc.KIO__ApplicationLauncherJob_SetRunFlags(@ptrCast(self.ptr), @bitCast(runFlags));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html#setSuggestedFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` suggestedFileName: []const u8 `
    ///
    pub fn SetSuggestedFileName(self: KIO__ApplicationLauncherJob, suggestedFileName: []const u8) void {
        const suggestedFileName_str = qtc.libqt_string{
            .len = suggestedFileName.len,
            .data = suggestedFileName.ptr,
        };
        qtc.KIO__ApplicationLauncherJob_SetSuggestedFileName(@ptrCast(self.ptr), suggestedFileName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html#setStartupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` startupId: []u8 `
    ///
    pub fn SetStartupId(self: KIO__ApplicationLauncherJob, startupId: []u8) void {
        const startupId_str = qtc.libqt_string{
            .len = startupId.len,
            .data = startupId.ptr,
        };
        qtc.KIO__ApplicationLauncherJob_SetStartupId(@ptrCast(self.ptr), startupId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Start(self: KIO__ApplicationLauncherJob) void {
        qtc.KIO__ApplicationLauncherJob_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html#start)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStart(self: KIO__ApplicationLauncherJob, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStart` instead
    ///
    pub const QBaseStart = SuperStart;

    /// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html#start)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SuperStart(self: KIO__ApplicationLauncherJob) void {
        qtc.KIO__ApplicationLauncherJob_SuperStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html#pid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Pid(self: KIO__ApplicationLauncherJob) i64 {
        return qtc.KIO__ApplicationLauncherJob_Pid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html#pids)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Pids(self: KIO__ApplicationLauncherJob, allocator: std.mem.Allocator) []isize {
        const _arr: qtc.libqt_list = qtc.KIO__ApplicationLauncherJob_Pids(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(isize, _arr.len) catch @panic("kio__applicationlauncherjob.Pids: Memory allocation failed");
        const _data: [*]isize = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__applicationlauncherjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` delegate: KJobUiDelegate `
    ///
    pub fn SetUiDelegate(self: KIO__ApplicationLauncherJob, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KJobUiDelegate;
        qtc.KJob_SetUiDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn UiDelegate(self: KIO__ApplicationLauncherJob) KJobUiDelegate {
        return .{ .ptr = qtc.KJob_UiDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ## Returns:
    ///
    /// ` flag of kjob_enums.Capability `
    ///
    pub fn Capabilities(self: KIO__ApplicationLauncherJob) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn IsSuspended(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Kill(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KJob_Kill(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Suspend(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KJob_Suspend(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Resume(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KJob_Resume(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Exec(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KJob_Exec(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Error(self: KIO__ApplicationLauncherJob) i32 {
        return qtc.KJob_Error(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorText(self: KIO__ApplicationLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__applicationlauncherjob.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn ProcessedAmount(self: KIO__ApplicationLauncherJob, unit: i32) usize {
        return qtc.KJob_ProcessedAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn TotalAmount(self: KIO__ApplicationLauncherJob, unit: i32) usize {
        return qtc.KJob_TotalAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Percent(self: KIO__ApplicationLauncherJob) usize {
        return qtc.KJob_Percent(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` autodelete: bool `
    ///
    pub fn SetAutoDelete(self: KIO__ApplicationLauncherJob, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self.ptr), autodelete);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn IsAutoDelete(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SetFinishedNotificationHidden(self: KIO__ApplicationLauncherJob) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn IsFinishedNotificationHidden(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn IsStartedWithExec(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn ElapsedTime(self: KIO__ApplicationLauncherJob) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn InfoMessage(self: KIO__ApplicationLauncherJob, job: anytype, message: []const u8) void {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnInfoMessage(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn Warning(self: KIO__ApplicationLauncherJob, job: anytype, message: []const u8) void {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWarning(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn TotalSize(self: KIO__ApplicationLauncherJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_TotalSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn OnTotalSize(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn ProcessedSize(self: KIO__ApplicationLauncherJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_ProcessedSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn OnProcessedSize(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` speed: usize `
    ///
    pub fn Speed(self: KIO__ApplicationLauncherJob, job: anytype, speed: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_Speed(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(speed));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob, speed: usize) callconv(.c) void `
    ///
    pub fn OnSpeed(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__applicationlauncherjob.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__applicationlauncherjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` verbosity: kjob_enums.KillVerbosity `
    ///
    pub fn Kill1(self: KIO__ApplicationLauncherJob, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self.ptr), @bitCast(verbosity));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` hide: bool `
    ///
    pub fn SetFinishedNotificationHidden1(self: KIO__ApplicationLauncherJob, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self.ptr), hide);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KIO__ApplicationLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__applicationlauncherjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KIO__ApplicationLauncherJob, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn IsWidgetType(self: KIO__ApplicationLauncherJob) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn IsWindowType(self: KIO__ApplicationLauncherJob) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn IsQuickItemType(self: KIO__ApplicationLauncherJob) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SignalsBlocked(self: KIO__ApplicationLauncherJob) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KIO__ApplicationLauncherJob, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Thread(self: KIO__ApplicationLauncherJob) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KIO__ApplicationLauncherJob, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KIO__ApplicationLauncherJob, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KIO__ApplicationLauncherJob, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KIO__ApplicationLauncherJob, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KIO__ApplicationLauncherJob, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KIO__ApplicationLauncherJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kio__applicationlauncherjob.Children: Memory allocation failed");
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KIO__ApplicationLauncherJob, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KIO__ApplicationLauncherJob, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KIO__ApplicationLauncherJob, obj: anytype) void {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KIO__ApplicationLauncherJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Disconnect3(self: KIO__ApplicationLauncherJob) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KIO__ApplicationLauncherJob, receiver: anytype) bool {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn DumpObjectTree(self: KIO__ApplicationLauncherJob) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn DumpObjectInfo(self: KIO__ApplicationLauncherJob) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KIO__ApplicationLauncherJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KIO__ApplicationLauncherJob, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KIO__ApplicationLauncherJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kio__applicationlauncherjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kio__applicationlauncherjob.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn BindingStorage(self: KIO__ApplicationLauncherJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn BindingStorage2(self: KIO__ApplicationLauncherJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Destroyed(self: KIO__ApplicationLauncherJob) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Parent(self: KIO__ApplicationLauncherJob) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KIO__ApplicationLauncherJob, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn DeleteLater(self: KIO__ApplicationLauncherJob) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KIO__ApplicationLauncherJob, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KIO__ApplicationLauncherJob, time: i64, timerType: i32) i32 {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KIO__ApplicationLauncherJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KIO__ApplicationLauncherJob, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KIO__ApplicationLauncherJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KIO__ApplicationLauncherJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KIO__ApplicationLauncherJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KIO__ApplicationLauncherJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#metaObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn MetaObject(self: KIO__ApplicationLauncherJob) QMetaObject {
        return .{ .ptr = qtc.KIO__ApplicationLauncherJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#metaObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SuperMetaObject(self: KIO__ApplicationLauncherJob) QMetaObject {
        return .{ .ptr = qtc.KIO__ApplicationLauncherJob_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#metaObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KIO__ApplicationLauncherJob, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KIO__ApplicationLauncherJob_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#qt_metacast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KIO__ApplicationLauncherJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__ApplicationLauncherJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#qt_metacast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KIO__ApplicationLauncherJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIO__ApplicationLauncherJob_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#qt_metacast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KIO__ApplicationLauncherJob_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#qt_metacall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KIO__ApplicationLauncherJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__ApplicationLauncherJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#qt_metacall)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KIO__ApplicationLauncherJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIO__ApplicationLauncherJob_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#qt_metacall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KIO__ApplicationLauncherJob_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn DoKill(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KIO__ApplicationLauncherJob_DoKill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoKill` instead
    ///
    pub const QBaseDoKill = SuperDoKill;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SuperDoKill(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KIO__ApplicationLauncherJob_SuperDoKill(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoKill(self: KIO__ApplicationLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__ApplicationLauncherJob_OnDoKill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn DoSuspend(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KIO__ApplicationLauncherJob_DoSuspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoSuspend` instead
    ///
    pub const QBaseDoSuspend = SuperDoSuspend;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SuperDoSuspend(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KIO__ApplicationLauncherJob_SuperDoSuspend(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoSuspend(self: KIO__ApplicationLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__ApplicationLauncherJob_OnDoSuspend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn DoResume(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KIO__ApplicationLauncherJob_DoResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoResume` instead
    ///
    pub const QBaseDoResume = SuperDoResume;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SuperDoResume(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KIO__ApplicationLauncherJob_SuperDoResume(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoResume(self: KIO__ApplicationLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__ApplicationLauncherJob_OnDoResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: KIO__ApplicationLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__ApplicationLauncherJob_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__applicationlauncherjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperErrorString` instead
    ///
    pub const QBaseErrorString = SuperErrorString;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperErrorString(self: KIO__ApplicationLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KIO__ApplicationLauncherJob_SuperErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kio__applicationlauncherjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnErrorString(self: KIO__ApplicationLauncherJob, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KIO__ApplicationLauncherJob_OnErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KIO__ApplicationLauncherJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ApplicationLauncherJob_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KIO__ApplicationLauncherJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ApplicationLauncherJob_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, QEvent) callconv(.c) bool) void {
        qtc.KIO__ApplicationLauncherJob_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KIO__ApplicationLauncherJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ApplicationLauncherJob_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KIO__ApplicationLauncherJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIO__ApplicationLauncherJob_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, QObject, QEvent) callconv(.c) bool) void {
        qtc.KIO__ApplicationLauncherJob_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KIO__ApplicationLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KIO__ApplicationLauncherJob_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KIO__ApplicationLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KIO__ApplicationLauncherJob_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, QTimerEvent) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KIO__ApplicationLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KIO__ApplicationLauncherJob_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KIO__ApplicationLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KIO__ApplicationLauncherJob_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, QChildEvent) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KIO__ApplicationLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KIO__ApplicationLauncherJob_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KIO__ApplicationLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KIO__ApplicationLauncherJob_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, QEvent) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KIO__ApplicationLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ApplicationLauncherJob_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KIO__ApplicationLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ApplicationLauncherJob_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KIO__ApplicationLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ApplicationLauncherJob_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KIO__ApplicationLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIO__ApplicationLauncherJob_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, QMetaMethod) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` capabilities: flag of kjob_enums.Capability `
    ///
    pub fn SetCapabilities(self: KIO__ApplicationLauncherJob, capabilities: i32) void {
        qtc.KIO__ApplicationLauncherJob_SetCapabilities(@ptrCast(self.ptr), @bitCast(capabilities));
    }

    /// ### DEPRECATED: Use `SuperSetCapabilities` instead
    ///
    pub const QBaseSetCapabilities = SuperSetCapabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` capabilities: flag of kjob_enums.Capability `
    ///
    pub fn SuperSetCapabilities(self: KIO__ApplicationLauncherJob, capabilities: i32) void {
        qtc.KIO__ApplicationLauncherJob_SuperSetCapabilities(@ptrCast(self.ptr), @bitCast(capabilities));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void `
    ///
    pub fn OnSetCapabilities(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, i32) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnSetCapabilities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn IsFinished(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KIO__ApplicationLauncherJob_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsFinished` instead
    ///
    pub const QBaseIsFinished = SuperIsFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SuperIsFinished(self: KIO__ApplicationLauncherJob) bool {
        return qtc.KIO__ApplicationLauncherJob_SuperIsFinished(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsFinished(self: KIO__ApplicationLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KIO__ApplicationLauncherJob_OnIsFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn SetError(self: KIO__ApplicationLauncherJob, errorCode: i32) void {
        qtc.KIO__ApplicationLauncherJob_SetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// ### DEPRECATED: Use `SuperSetError` instead
    ///
    pub const QBaseSetError = SuperSetError;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn SuperSetError(self: KIO__ApplicationLauncherJob, errorCode: i32) void {
        qtc.KIO__ApplicationLauncherJob_SuperSetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, errorCode: i32) callconv(.c) void `
    ///
    pub fn OnSetError(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, i32) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` errorText: []const u8 `
    ///
    pub fn SetErrorText(self: KIO__ApplicationLauncherJob, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KIO__ApplicationLauncherJob_SetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// ### DEPRECATED: Use `SuperSetErrorText` instead
    ///
    pub const QBaseSetErrorText = SuperSetErrorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` errorText: []const u8 `
    ///
    pub fn SuperSetErrorText(self: KIO__ApplicationLauncherJob, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KIO__ApplicationLauncherJob_SuperSetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, errorText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorText(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnSetErrorText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SetProcessedAmount(self: KIO__ApplicationLauncherJob, unit: i32, amount: usize) void {
        qtc.KIO__ApplicationLauncherJob_SetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `SuperSetProcessedAmount` instead
    ///
    pub const QBaseSetProcessedAmount = SuperSetProcessedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SuperSetProcessedAmount(self: KIO__ApplicationLauncherJob, unit: i32, amount: usize) void {
        qtc.KIO__ApplicationLauncherJob_SuperSetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnSetProcessedAmount(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, i32, usize) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnSetProcessedAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SetTotalAmount(self: KIO__ApplicationLauncherJob, unit: i32, amount: usize) void {
        qtc.KIO__ApplicationLauncherJob_SetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `SuperSetTotalAmount` instead
    ///
    pub const QBaseSetTotalAmount = SuperSetTotalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SuperSetTotalAmount(self: KIO__ApplicationLauncherJob, unit: i32, amount: usize) void {
        qtc.KIO__ApplicationLauncherJob_SuperSetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnSetTotalAmount(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, i32, usize) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnSetTotalAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn SetProgressUnit(self: KIO__ApplicationLauncherJob, unit: i32) void {
        qtc.KIO__ApplicationLauncherJob_SetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `SuperSetProgressUnit` instead
    ///
    pub const QBaseSetProgressUnit = SuperSetProgressUnit;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn SuperSetProgressUnit(self: KIO__ApplicationLauncherJob, unit: i32) void {
        qtc.KIO__ApplicationLauncherJob_SuperSetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, unit: kjob_enums.Unit) callconv(.c) void `
    ///
    pub fn OnSetProgressUnit(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, i32) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnSetProgressUnit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn SetPercent(self: KIO__ApplicationLauncherJob, percentage: usize) void {
        qtc.KIO__ApplicationLauncherJob_SetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// ### DEPRECATED: Use `SuperSetPercent` instead
    ///
    pub const QBaseSetPercent = SuperSetPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn SuperSetPercent(self: KIO__ApplicationLauncherJob, percentage: usize) void {
        qtc.KIO__ApplicationLauncherJob_SuperSetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, percentage: usize) callconv(.c) void `
    ///
    pub fn OnSetPercent(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, usize) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnSetPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn EmitResult(self: KIO__ApplicationLauncherJob) void {
        qtc.KIO__ApplicationLauncherJob_EmitResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEmitResult` instead
    ///
    pub const QBaseEmitResult = SuperEmitResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SuperEmitResult(self: KIO__ApplicationLauncherJob) void {
        qtc.KIO__ApplicationLauncherJob_SuperEmitResult(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEmitResult(self: KIO__ApplicationLauncherJob, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnEmitResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` processedAmount: usize `
    ///
    /// ` totalAmount: usize `
    ///
    pub fn EmitPercent(self: KIO__ApplicationLauncherJob, processedAmount: usize, totalAmount: usize) void {
        qtc.KIO__ApplicationLauncherJob_EmitPercent(@ptrCast(self.ptr), @bitCast(processedAmount), @bitCast(totalAmount));
    }

    /// ### DEPRECATED: Use `SuperEmitPercent` instead
    ///
    pub const QBaseEmitPercent = SuperEmitPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` processedAmount: usize `
    ///
    /// ` totalAmount: usize `
    ///
    pub fn SuperEmitPercent(self: KIO__ApplicationLauncherJob, processedAmount: usize, totalAmount: usize) void {
        qtc.KIO__ApplicationLauncherJob_SuperEmitPercent(@ptrCast(self.ptr), @bitCast(processedAmount), @bitCast(totalAmount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, processedAmount: usize, totalAmount: usize) callconv(.c) void `
    ///
    pub fn OnEmitPercent(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, usize, usize) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnEmitPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` speed: usize `
    ///
    pub fn EmitSpeed(self: KIO__ApplicationLauncherJob, speed: usize) void {
        qtc.KIO__ApplicationLauncherJob_EmitSpeed(@ptrCast(self.ptr), @bitCast(speed));
    }

    /// ### DEPRECATED: Use `SuperEmitSpeed` instead
    ///
    pub const QBaseEmitSpeed = SuperEmitSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` speed: usize `
    ///
    pub fn SuperEmitSpeed(self: KIO__ApplicationLauncherJob, speed: usize) void {
        qtc.KIO__ApplicationLauncherJob_SuperEmitSpeed(@ptrCast(self.ptr), @bitCast(speed));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, speed: usize) callconv(.c) void `
    ///
    pub fn OnEmitSpeed(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, usize) callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnEmitSpeed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn StartElapsedTimer(self: KIO__ApplicationLauncherJob) void {
        qtc.KIO__ApplicationLauncherJob_StartElapsedTimer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperStartElapsedTimer` instead
    ///
    pub const QBaseStartElapsedTimer = SuperStartElapsedTimer;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SuperStartElapsedTimer(self: KIO__ApplicationLauncherJob) void {
        qtc.KIO__ApplicationLauncherJob_SuperStartElapsedTimer(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartElapsedTimer(self: KIO__ApplicationLauncherJob, callback: *const fn () callconv(.c) void) void {
        qtc.KIO__ApplicationLauncherJob_OnStartElapsedTimer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Sender(self: KIO__ApplicationLauncherJob) QObject {
        return .{ .ptr = qtc.KIO__ApplicationLauncherJob_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SuperSender(self: KIO__ApplicationLauncherJob) QObject {
        return .{ .ptr = qtc.KIO__ApplicationLauncherJob_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KIO__ApplicationLauncherJob, callback: *const fn () callconv(.c) QObject) void {
        qtc.KIO__ApplicationLauncherJob_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SenderSignalIndex(self: KIO__ApplicationLauncherJob) i32 {
        return qtc.KIO__ApplicationLauncherJob_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn SuperSenderSignalIndex(self: KIO__ApplicationLauncherJob) i32 {
        return qtc.KIO__ApplicationLauncherJob_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KIO__ApplicationLauncherJob, callback: *const fn () callconv(.c) i32) void {
        qtc.KIO__ApplicationLauncherJob_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KIO__ApplicationLauncherJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__ApplicationLauncherJob_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KIO__ApplicationLauncherJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIO__ApplicationLauncherJob_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIO__ApplicationLauncherJob_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KIO__ApplicationLauncherJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__ApplicationLauncherJob_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KIO__ApplicationLauncherJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIO__ApplicationLauncherJob_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob`
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, QMetaMethod) callconv(.c) bool) void {
        qtc.KIO__ApplicationLauncherJob_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnFinished(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnSuspended(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnResumed(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnResult(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnTotalAmountChanged(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob, i32, usize) callconv(.c) void) void {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnProcessedAmountChanged(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob, i32, usize) callconv(.c) void) void {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, job: KJob, percent: usize) callconv(.c) void `
    ///
    pub fn OnPercentChanged(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, KJob, usize) callconv(.c) void) void {
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
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    /// ` callback: *const fn (self: KIO__ApplicationLauncherJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KIO__ApplicationLauncherJob, callback: *const fn (KIO__ApplicationLauncherJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIO__ApplicationLauncherJob `
    ///
    pub fn Delete(self: KIO__ApplicationLauncherJob) void {
        qtc.KIO__ApplicationLauncherJob_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kio-applicationlauncherjob.html#public-types)
pub const enums = struct {
    pub const RunFlag = enum(i32) {
        pub const DeleteTemporaryFiles: i32 = 1;
    };
};
