const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KJob = @import("libqt6").KJob;
const KJobUiDelegate = @import("libqt6").KJobUiDelegate;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QProcessEnvironment = @import("libqt6").QProcessEnvironment;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kterminallauncherjob.html)
pub const KTerminalLauncherJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kterminallauncherjob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTerminalLauncherJob,

    pub const _is_KTerminalLauncherJob = {};
    pub const _is_KJob = {};
    pub const _is_QObject = {};

    /// New constructs a new KTerminalLauncherJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` command: []const u8 `
    ///
    pub fn New(command: []const u8) KTerminalLauncherJob {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        return .{ .ptr = qtc.KTerminalLauncherJob_new(command_str) };
    }

    /// New2 constructs a new KTerminalLauncherJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` command: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(command: []const u8, parent: anytype) KTerminalLauncherJob {
        const command_str = qtc.libqt_string{
            .len = command.len,
            .data = command.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KTerminalLauncherJob_new2(command_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn MetaObject(self: KTerminalLauncherJob) QMetaObject {
        return .{ .ptr = qtc.KTerminalLauncherJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KTerminalLauncherJob, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTerminalLauncherJob_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SuperMetaObject(self: KTerminalLauncherJob) QMetaObject {
        return .{ .ptr = qtc.KTerminalLauncherJob_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTerminalLauncherJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTerminalLauncherJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTerminalLauncherJob_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KTerminalLauncherJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTerminalLauncherJob_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KTerminalLauncherJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTerminalLauncherJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTerminalLauncherJob_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KTerminalLauncherJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTerminalLauncherJob_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kterminallauncherjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kterminallauncherjob.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` workingDirectory: []const u8 `
    ///
    pub fn SetWorkingDirectory(self: KTerminalLauncherJob, workingDirectory: []const u8) void {
        const workingDirectory_str = qtc.libqt_string{
            .len = workingDirectory.len,
            .data = workingDirectory.ptr,
        };
        qtc.KTerminalLauncherJob_SetWorkingDirectory(@ptrCast(self.ptr), workingDirectory_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kterminallauncherjob.html#setStartupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` startupId: []u8 `
    ///
    pub fn SetStartupId(self: KTerminalLauncherJob, startupId: []u8) void {
        const startupId_str = qtc.libqt_string{
            .len = startupId.len,
            .data = startupId.ptr,
        };
        qtc.KTerminalLauncherJob_SetStartupId(@ptrCast(self.ptr), startupId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kterminallauncherjob.html#setProcessEnvironment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` environment: QProcessEnvironment `
    ///
    pub fn SetProcessEnvironment(self: KTerminalLauncherJob, environment: anytype) void {
        comptime _ = @TypeOf(environment)._is_QProcessEnvironment;
        qtc.KTerminalLauncherJob_SetProcessEnvironment(@ptrCast(self.ptr), @ptrCast(environment.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kterminallauncherjob.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Start(self: KTerminalLauncherJob) void {
        qtc.KTerminalLauncherJob_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kterminallauncherjob.html#start)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStart(self: KTerminalLauncherJob, callback: *const fn () callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStart` instead
    ///
    pub const QBaseStart = SuperStart;

    /// ### [Upstream resources](https://api.kde.org/kterminallauncherjob.html#start)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SuperStart(self: KTerminalLauncherJob) void {
        qtc.KTerminalLauncherJob_SuperStart(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kterminallauncherjob.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kterminallauncherjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` delegate: KJobUiDelegate `
    ///
    pub fn SetUiDelegate(self: KTerminalLauncherJob, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KJobUiDelegate;
        qtc.KJob_SetUiDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn UiDelegate(self: KTerminalLauncherJob) KJobUiDelegate {
        return .{ .ptr = qtc.KJob_UiDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ## Returns:
    ///
    /// ` flag of kjob_enums.Capability `
    ///
    pub fn Capabilities(self: KTerminalLauncherJob) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn IsSuspended(self: KTerminalLauncherJob) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Kill(self: KTerminalLauncherJob) bool {
        return qtc.KJob_Kill(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Suspend(self: KTerminalLauncherJob) bool {
        return qtc.KJob_Suspend(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Resume(self: KTerminalLauncherJob) bool {
        return qtc.KJob_Resume(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Exec(self: KTerminalLauncherJob) bool {
        return qtc.KJob_Exec(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Error(self: KTerminalLauncherJob) i32 {
        return qtc.KJob_Error(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorText(self: KTerminalLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kterminallauncherjob.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn ProcessedAmount(self: KTerminalLauncherJob, unit: i32) usize {
        return qtc.KJob_ProcessedAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn TotalAmount(self: KTerminalLauncherJob, unit: i32) usize {
        return qtc.KJob_TotalAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Percent(self: KTerminalLauncherJob) usize {
        return qtc.KJob_Percent(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` autodelete: bool `
    ///
    pub fn SetAutoDelete(self: KTerminalLauncherJob, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self.ptr), autodelete);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn IsAutoDelete(self: KTerminalLauncherJob) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SetFinishedNotificationHidden(self: KTerminalLauncherJob) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn IsFinishedNotificationHidden(self: KTerminalLauncherJob) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn IsStartedWithExec(self: KTerminalLauncherJob) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn ElapsedTime(self: KTerminalLauncherJob) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn InfoMessage(self: KTerminalLauncherJob, job: anytype, message: []const u8) void {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnInfoMessage(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn Warning(self: KTerminalLauncherJob, job: anytype, message: []const u8) void {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWarning(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn TotalSize(self: KTerminalLauncherJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_TotalSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn OnTotalSize(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn ProcessedSize(self: KTerminalLauncherJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_ProcessedSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn OnProcessedSize(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` speed: usize `
    ///
    pub fn Speed(self: KTerminalLauncherJob, job: anytype, speed: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_Speed(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(speed));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob, speed: usize) callconv(.c) void `
    ///
    pub fn OnSpeed(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` verbosity: kjob_enums.KillVerbosity `
    ///
    pub fn Kill1(self: KTerminalLauncherJob, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self.ptr), @bitCast(verbosity));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` hide: bool `
    ///
    pub fn SetFinishedNotificationHidden1(self: KTerminalLauncherJob, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self.ptr), hide);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KTerminalLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kterminallauncherjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KTerminalLauncherJob, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn IsWidgetType(self: KTerminalLauncherJob) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn IsWindowType(self: KTerminalLauncherJob) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn IsQuickItemType(self: KTerminalLauncherJob) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SignalsBlocked(self: KTerminalLauncherJob) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KTerminalLauncherJob, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Thread(self: KTerminalLauncherJob) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTerminalLauncherJob, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KTerminalLauncherJob, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KTerminalLauncherJob, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KTerminalLauncherJob, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KTerminalLauncherJob, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KTerminalLauncherJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kterminallauncherjob.Children: Memory allocation failed");
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KTerminalLauncherJob, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KTerminalLauncherJob, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KTerminalLauncherJob, obj: anytype) void {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTerminalLauncherJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Disconnect3(self: KTerminalLauncherJob) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KTerminalLauncherJob, receiver: anytype) bool {
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn DumpObjectTree(self: KTerminalLauncherJob) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn DumpObjectInfo(self: KTerminalLauncherJob) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KTerminalLauncherJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTerminalLauncherJob, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KTerminalLauncherJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kterminallauncherjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kterminallauncherjob.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn BindingStorage(self: KTerminalLauncherJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn BindingStorage2(self: KTerminalLauncherJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Destroyed(self: KTerminalLauncherJob) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Parent(self: KTerminalLauncherJob) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KTerminalLauncherJob, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn DeleteLater(self: KTerminalLauncherJob) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KTerminalLauncherJob, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KTerminalLauncherJob, time: i64, timerType: i32) i32 {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTerminalLauncherJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTerminalLauncherJob, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KTerminalLauncherJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTerminalLauncherJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTerminalLauncherJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTerminalLauncherJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn DoKill(self: KTerminalLauncherJob) bool {
        return qtc.KTerminalLauncherJob_DoKill(@ptrCast(self.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SuperDoKill(self: KTerminalLauncherJob) bool {
        return qtc.KTerminalLauncherJob_SuperDoKill(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoKill(self: KTerminalLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KTerminalLauncherJob_OnDoKill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn DoSuspend(self: KTerminalLauncherJob) bool {
        return qtc.KTerminalLauncherJob_DoSuspend(@ptrCast(self.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SuperDoSuspend(self: KTerminalLauncherJob) bool {
        return qtc.KTerminalLauncherJob_SuperDoSuspend(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoSuspend(self: KTerminalLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KTerminalLauncherJob_OnDoSuspend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn DoResume(self: KTerminalLauncherJob) bool {
        return qtc.KTerminalLauncherJob_DoResume(@ptrCast(self.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SuperDoResume(self: KTerminalLauncherJob) bool {
        return qtc.KTerminalLauncherJob_SuperDoResume(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoResume(self: KTerminalLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KTerminalLauncherJob_OnDoResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: KTerminalLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTerminalLauncherJob_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kterminallauncherjob.ErrorString: Memory allocation failed");
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperErrorString(self: KTerminalLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KTerminalLauncherJob_SuperErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kterminallauncherjob.ErrorString: Memory allocation failed");
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
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnErrorString(self: KTerminalLauncherJob, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KTerminalLauncherJob_OnErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KTerminalLauncherJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTerminalLauncherJob_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KTerminalLauncherJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTerminalLauncherJob_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, QEvent) callconv(.c) bool) void {
        qtc.KTerminalLauncherJob_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTerminalLauncherJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTerminalLauncherJob_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KTerminalLauncherJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTerminalLauncherJob_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTerminalLauncherJob_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KTerminalLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTerminalLauncherJob_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KTerminalLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTerminalLauncherJob_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, QTimerEvent) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KTerminalLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTerminalLauncherJob_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KTerminalLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTerminalLauncherJob_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, QChildEvent) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KTerminalLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTerminalLauncherJob_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KTerminalLauncherJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTerminalLauncherJob_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, QEvent) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KTerminalLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTerminalLauncherJob_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KTerminalLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTerminalLauncherJob_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, QMetaMethod) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KTerminalLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTerminalLauncherJob_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KTerminalLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTerminalLauncherJob_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, QMetaMethod) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` capabilities: flag of kjob_enums.Capability `
    ///
    pub fn SetCapabilities(self: KTerminalLauncherJob, capabilities: i32) void {
        qtc.KTerminalLauncherJob_SetCapabilities(@ptrCast(self.ptr), @bitCast(capabilities));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` capabilities: flag of kjob_enums.Capability `
    ///
    pub fn SuperSetCapabilities(self: KTerminalLauncherJob, capabilities: i32) void {
        qtc.KTerminalLauncherJob_SuperSetCapabilities(@ptrCast(self.ptr), @bitCast(capabilities));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void `
    ///
    pub fn OnSetCapabilities(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, i32) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnSetCapabilities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn IsFinished(self: KTerminalLauncherJob) bool {
        return qtc.KTerminalLauncherJob_IsFinished(@ptrCast(self.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SuperIsFinished(self: KTerminalLauncherJob) bool {
        return qtc.KTerminalLauncherJob_SuperIsFinished(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsFinished(self: KTerminalLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KTerminalLauncherJob_OnIsFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn SetError(self: KTerminalLauncherJob, errorCode: i32) void {
        qtc.KTerminalLauncherJob_SetError(@ptrCast(self.ptr), @bitCast(errorCode));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn SuperSetError(self: KTerminalLauncherJob, errorCode: i32) void {
        qtc.KTerminalLauncherJob_SuperSetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, errorCode: i32) callconv(.c) void `
    ///
    pub fn OnSetError(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, i32) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` errorText: []const u8 `
    ///
    pub fn SetErrorText(self: KTerminalLauncherJob, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KTerminalLauncherJob_SetErrorText(@ptrCast(self.ptr), errorText_str);
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` errorText: []const u8 `
    ///
    pub fn SuperSetErrorText(self: KTerminalLauncherJob, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KTerminalLauncherJob_SuperSetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, errorText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorText(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnSetErrorText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SetProcessedAmount(self: KTerminalLauncherJob, unit: i32, amount: usize) void {
        qtc.KTerminalLauncherJob_SetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SuperSetProcessedAmount(self: KTerminalLauncherJob, unit: i32, amount: usize) void {
        qtc.KTerminalLauncherJob_SuperSetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnSetProcessedAmount(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, i32, usize) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnSetProcessedAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SetTotalAmount(self: KTerminalLauncherJob, unit: i32, amount: usize) void {
        qtc.KTerminalLauncherJob_SetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SuperSetTotalAmount(self: KTerminalLauncherJob, unit: i32, amount: usize) void {
        qtc.KTerminalLauncherJob_SuperSetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnSetTotalAmount(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, i32, usize) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnSetTotalAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn SetProgressUnit(self: KTerminalLauncherJob, unit: i32) void {
        qtc.KTerminalLauncherJob_SetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn SuperSetProgressUnit(self: KTerminalLauncherJob, unit: i32) void {
        qtc.KTerminalLauncherJob_SuperSetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, unit: kjob_enums.Unit) callconv(.c) void `
    ///
    pub fn OnSetProgressUnit(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, i32) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnSetProgressUnit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn SetPercent(self: KTerminalLauncherJob, percentage: usize) void {
        qtc.KTerminalLauncherJob_SetPercent(@ptrCast(self.ptr), @bitCast(percentage));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn SuperSetPercent(self: KTerminalLauncherJob, percentage: usize) void {
        qtc.KTerminalLauncherJob_SuperSetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, percentage: usize) callconv(.c) void `
    ///
    pub fn OnSetPercent(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, usize) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnSetPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn EmitResult(self: KTerminalLauncherJob) void {
        qtc.KTerminalLauncherJob_EmitResult(@ptrCast(self.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SuperEmitResult(self: KTerminalLauncherJob) void {
        qtc.KTerminalLauncherJob_SuperEmitResult(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEmitResult(self: KTerminalLauncherJob, callback: *const fn () callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnEmitResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` processedAmount: usize `
    ///
    /// ` totalAmount: usize `
    ///
    pub fn EmitPercent(self: KTerminalLauncherJob, processedAmount: usize, totalAmount: usize) void {
        qtc.KTerminalLauncherJob_EmitPercent(@ptrCast(self.ptr), @bitCast(processedAmount), @bitCast(totalAmount));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` processedAmount: usize `
    ///
    /// ` totalAmount: usize `
    ///
    pub fn SuperEmitPercent(self: KTerminalLauncherJob, processedAmount: usize, totalAmount: usize) void {
        qtc.KTerminalLauncherJob_SuperEmitPercent(@ptrCast(self.ptr), @bitCast(processedAmount), @bitCast(totalAmount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, processedAmount: usize, totalAmount: usize) callconv(.c) void `
    ///
    pub fn OnEmitPercent(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, usize, usize) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnEmitPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` speed: usize `
    ///
    pub fn EmitSpeed(self: KTerminalLauncherJob, speed: usize) void {
        qtc.KTerminalLauncherJob_EmitSpeed(@ptrCast(self.ptr), @bitCast(speed));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` speed: usize `
    ///
    pub fn SuperEmitSpeed(self: KTerminalLauncherJob, speed: usize) void {
        qtc.KTerminalLauncherJob_SuperEmitSpeed(@ptrCast(self.ptr), @bitCast(speed));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, speed: usize) callconv(.c) void `
    ///
    pub fn OnEmitSpeed(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, usize) callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnEmitSpeed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn StartElapsedTimer(self: KTerminalLauncherJob) void {
        qtc.KTerminalLauncherJob_StartElapsedTimer(@ptrCast(self.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SuperStartElapsedTimer(self: KTerminalLauncherJob) void {
        qtc.KTerminalLauncherJob_SuperStartElapsedTimer(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartElapsedTimer(self: KTerminalLauncherJob, callback: *const fn () callconv(.c) void) void {
        qtc.KTerminalLauncherJob_OnStartElapsedTimer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Sender(self: KTerminalLauncherJob) QObject {
        return .{ .ptr = qtc.KTerminalLauncherJob_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SuperSender(self: KTerminalLauncherJob) QObject {
        return .{ .ptr = qtc.KTerminalLauncherJob_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KTerminalLauncherJob, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTerminalLauncherJob_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SenderSignalIndex(self: KTerminalLauncherJob) i32 {
        return qtc.KTerminalLauncherJob_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn SuperSenderSignalIndex(self: KTerminalLauncherJob) i32 {
        return qtc.KTerminalLauncherJob_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KTerminalLauncherJob, callback: *const fn () callconv(.c) i32) void {
        qtc.KTerminalLauncherJob_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KTerminalLauncherJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTerminalLauncherJob_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KTerminalLauncherJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTerminalLauncherJob_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTerminalLauncherJob_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KTerminalLauncherJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTerminalLauncherJob_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KTerminalLauncherJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTerminalLauncherJob_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob`
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, QMetaMethod) callconv(.c) bool) void {
        qtc.KTerminalLauncherJob_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnFinished(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnSuspended(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnResumed(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnResult(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnTotalAmountChanged(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob, i32, usize) callconv(.c) void) void {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnProcessedAmountChanged(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob, i32, usize) callconv(.c) void) void {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, job: KJob, percent: usize) callconv(.c) void `
    ///
    pub fn OnPercentChanged(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, KJob, usize) callconv(.c) void) void {
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
    /// ` self: KTerminalLauncherJob `
    ///
    /// ` callback: *const fn (self: KTerminalLauncherJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KTerminalLauncherJob, callback: *const fn (KTerminalLauncherJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kterminallauncherjob.html#dtor.KTerminalLauncherJob)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTerminalLauncherJob `
    ///
    pub fn Delete(self: KTerminalLauncherJob) void {
        qtc.KTerminalLauncherJob_Delete(@ptrCast(self.ptr));
    }
};
