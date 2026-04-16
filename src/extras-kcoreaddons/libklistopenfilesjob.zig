const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KJob = @import("libqt6").KJob;
const KJobUiDelegate = @import("libqt6").KJobUiDelegate;
const KProcessList__KProcessInfo = @import("libqt6").KProcessList__KProcessInfo;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const kjob_enums = @import("libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/klistopenfilesjob.html)
pub const KListOpenFilesJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klistopenfilesjob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KListOpenFilesJob,

    pub const _is_KListOpenFilesJob = {};
    pub const _is_KJob = {};
    pub const _is_QObject = {};

    /// New constructs a new KListOpenFilesJob object.
    ///
    /// ## Parameter(s):
    ///
    /// ` path: []const u8 `
    ///
    pub fn New(path: []const u8) KListOpenFilesJob {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.KListOpenFilesJob_new(path_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn MetaObject(self: KListOpenFilesJob) QMetaObject {
        return .{ .ptr = qtc.KListOpenFilesJob_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KListOpenFilesJob, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KListOpenFilesJob_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SuperMetaObject(self: KListOpenFilesJob) QMetaObject {
        return .{ .ptr = qtc.KListOpenFilesJob_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KListOpenFilesJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KListOpenFilesJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KListOpenFilesJob_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KListOpenFilesJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KListOpenFilesJob_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KListOpenFilesJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KListOpenFilesJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KListOpenFilesJob_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KListOpenFilesJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KListOpenFilesJob_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klistopenfilesjob.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Start(self: KListOpenFilesJob) void {
        qtc.KListOpenFilesJob_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klistopenfilesjob.html#start)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStart(self: KListOpenFilesJob, callback: *const fn () callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStart` instead
    ///
    pub const QBaseStart = SuperStart;

    /// ### [Upstream resources](https://api.kde.org/klistopenfilesjob.html#start)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SuperStart(self: KListOpenFilesJob) void {
        qtc.KListOpenFilesJob_SuperStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klistopenfilesjob.html#processInfoList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProcessInfoList(self: KListOpenFilesJob, allocator: std.mem.Allocator) []KProcessList__KProcessInfo {
        const _arr: qtc.libqt_list = qtc.KListOpenFilesJob_ProcessInfoList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KProcessList__KProcessInfo, _arr.len) catch @panic("klistopenfilesjob.ProcessInfoList: Memory allocation failed");
        const _data: [*]QtC.KProcessList__KProcessInfo = @ptrCast(@alignCast(_arr.data));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` delegate: KJobUiDelegate `
    ///
    pub fn SetUiDelegate(self: KListOpenFilesJob, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KJobUiDelegate;
        qtc.KJob_SetUiDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn UiDelegate(self: KListOpenFilesJob) KJobUiDelegate {
        return .{ .ptr = qtc.KJob_UiDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ## Returns:
    ///
    /// ` flag of kjob_enums.Capability `
    ///
    pub fn Capabilities(self: KListOpenFilesJob) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn IsSuspended(self: KListOpenFilesJob) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Kill(self: KListOpenFilesJob) bool {
        return qtc.KJob_Kill(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Suspend(self: KListOpenFilesJob) bool {
        return qtc.KJob_Suspend(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Resume(self: KListOpenFilesJob) bool {
        return qtc.KJob_Resume(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Exec(self: KListOpenFilesJob) bool {
        return qtc.KJob_Exec(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Error(self: KListOpenFilesJob) i32 {
        return qtc.KJob_Error(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorText(self: KListOpenFilesJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn ProcessedAmount(self: KListOpenFilesJob, unit: i32) usize {
        return qtc.KJob_ProcessedAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn TotalAmount(self: KListOpenFilesJob, unit: i32) usize {
        return qtc.KJob_TotalAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Percent(self: KListOpenFilesJob) usize {
        return qtc.KJob_Percent(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` autodelete: bool `
    ///
    pub fn SetAutoDelete(self: KListOpenFilesJob, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self.ptr), autodelete);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn IsAutoDelete(self: KListOpenFilesJob) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SetFinishedNotificationHidden(self: KListOpenFilesJob) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn IsFinishedNotificationHidden(self: KListOpenFilesJob) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn IsStartedWithExec(self: KListOpenFilesJob) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn ElapsedTime(self: KListOpenFilesJob) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn InfoMessage(self: KListOpenFilesJob, job: anytype, message: []const u8) void {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnInfoMessage(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn Warning(self: KListOpenFilesJob, job: anytype, message: []const u8) void {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWarning(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn TotalSize(self: KListOpenFilesJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_TotalSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn OnTotalSize(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn ProcessedSize(self: KListOpenFilesJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_ProcessedSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn OnProcessedSize(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` job: KJob `
    ///
    /// ` speed: usize `
    ///
    pub fn Speed(self: KListOpenFilesJob, job: anytype, speed: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_Speed(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(speed));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob, speed: usize) callconv(.c) void `
    ///
    pub fn OnSpeed(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` verbosity: kjob_enums.KillVerbosity `
    ///
    pub fn Kill1(self: KListOpenFilesJob, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self.ptr), @bitCast(verbosity));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` hide: bool `
    ///
    pub fn SetFinishedNotificationHidden1(self: KListOpenFilesJob, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self.ptr), hide);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KListOpenFilesJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KListOpenFilesJob, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn IsWidgetType(self: KListOpenFilesJob) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn IsWindowType(self: KListOpenFilesJob) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn IsQuickItemType(self: KListOpenFilesJob) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SignalsBlocked(self: KListOpenFilesJob) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KListOpenFilesJob, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Thread(self: KListOpenFilesJob) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KListOpenFilesJob, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KListOpenFilesJob, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KListOpenFilesJob, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KListOpenFilesJob, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KListOpenFilesJob, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KListOpenFilesJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("klistopenfilesjob.Children: Memory allocation failed");
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KListOpenFilesJob, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KListOpenFilesJob, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KListOpenFilesJob, obj: anytype) void {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KListOpenFilesJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Disconnect3(self: KListOpenFilesJob) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KListOpenFilesJob, receiver: anytype) bool {
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn DumpObjectTree(self: KListOpenFilesJob) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn DumpObjectInfo(self: KListOpenFilesJob) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KListOpenFilesJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KListOpenFilesJob, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KListOpenFilesJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("klistopenfilesjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klistopenfilesjob.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn BindingStorage(self: KListOpenFilesJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn BindingStorage2(self: KListOpenFilesJob) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Destroyed(self: KListOpenFilesJob) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Parent(self: KListOpenFilesJob) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KListOpenFilesJob, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn DeleteLater(self: KListOpenFilesJob) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KListOpenFilesJob, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KListOpenFilesJob, time: i64, timerType: i32) i32 {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KListOpenFilesJob, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KListOpenFilesJob, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KListOpenFilesJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KListOpenFilesJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KListOpenFilesJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KListOpenFilesJob, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, QObject) callconv(.c) void) void {
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn DoKill(self: KListOpenFilesJob) bool {
        return qtc.KListOpenFilesJob_DoKill(@ptrCast(self.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SuperDoKill(self: KListOpenFilesJob) bool {
        return qtc.KListOpenFilesJob_SuperDoKill(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoKill(self: KListOpenFilesJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnDoKill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn DoSuspend(self: KListOpenFilesJob) bool {
        return qtc.KListOpenFilesJob_DoSuspend(@ptrCast(self.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SuperDoSuspend(self: KListOpenFilesJob) bool {
        return qtc.KListOpenFilesJob_SuperDoSuspend(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoSuspend(self: KListOpenFilesJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnDoSuspend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn DoResume(self: KListOpenFilesJob) bool {
        return qtc.KListOpenFilesJob_DoResume(@ptrCast(self.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SuperDoResume(self: KListOpenFilesJob) bool {
        return qtc.KListOpenFilesJob_SuperDoResume(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDoResume(self: KListOpenFilesJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnDoResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: KListOpenFilesJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KListOpenFilesJob_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.ErrorString: Memory allocation failed");
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperErrorString(self: KListOpenFilesJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KListOpenFilesJob_SuperErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistopenfilesjob.ErrorString: Memory allocation failed");
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
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnErrorString(self: KListOpenFilesJob, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KListOpenFilesJob_OnErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KListOpenFilesJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KListOpenFilesJob_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KListOpenFilesJob, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KListOpenFilesJob_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, QEvent) callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KListOpenFilesJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KListOpenFilesJob_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KListOpenFilesJob, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KListOpenFilesJob_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, QObject, QEvent) callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KListOpenFilesJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KListOpenFilesJob_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KListOpenFilesJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KListOpenFilesJob_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, QTimerEvent) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KListOpenFilesJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KListOpenFilesJob_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KListOpenFilesJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KListOpenFilesJob_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, QChildEvent) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KListOpenFilesJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KListOpenFilesJob_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KListOpenFilesJob, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KListOpenFilesJob_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, QEvent) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KListOpenFilesJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KListOpenFilesJob_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KListOpenFilesJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KListOpenFilesJob_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, QMetaMethod) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KListOpenFilesJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KListOpenFilesJob_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KListOpenFilesJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KListOpenFilesJob_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, QMetaMethod) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` capabilities: flag of kjob_enums.Capability `
    ///
    pub fn SetCapabilities(self: KListOpenFilesJob, capabilities: i32) void {
        qtc.KListOpenFilesJob_SetCapabilities(@ptrCast(self.ptr), @bitCast(capabilities));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` capabilities: flag of kjob_enums.Capability `
    ///
    pub fn SuperSetCapabilities(self: KListOpenFilesJob, capabilities: i32) void {
        qtc.KListOpenFilesJob_SuperSetCapabilities(@ptrCast(self.ptr), @bitCast(capabilities));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void `
    ///
    pub fn OnSetCapabilities(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, i32) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetCapabilities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn IsFinished(self: KListOpenFilesJob) bool {
        return qtc.KListOpenFilesJob_IsFinished(@ptrCast(self.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SuperIsFinished(self: KListOpenFilesJob) bool {
        return qtc.KListOpenFilesJob_SuperIsFinished(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsFinished(self: KListOpenFilesJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnIsFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn SetError(self: KListOpenFilesJob, errorCode: i32) void {
        qtc.KListOpenFilesJob_SetError(@ptrCast(self.ptr), @bitCast(errorCode));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn SuperSetError(self: KListOpenFilesJob, errorCode: i32) void {
        qtc.KListOpenFilesJob_SuperSetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, errorCode: i32) callconv(.c) void `
    ///
    pub fn OnSetError(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, i32) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` errorText: []const u8 `
    ///
    pub fn SetErrorText(self: KListOpenFilesJob, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KListOpenFilesJob_SetErrorText(@ptrCast(self.ptr), errorText_str);
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` errorText: []const u8 `
    ///
    pub fn SuperSetErrorText(self: KListOpenFilesJob, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KListOpenFilesJob_SuperSetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, errorText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorText(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetErrorText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SetProcessedAmount(self: KListOpenFilesJob, unit: i32, amount: usize) void {
        qtc.KListOpenFilesJob_SetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SuperSetProcessedAmount(self: KListOpenFilesJob, unit: i32, amount: usize) void {
        qtc.KListOpenFilesJob_SuperSetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnSetProcessedAmount(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, i32, usize) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetProcessedAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SetTotalAmount(self: KListOpenFilesJob, unit: i32, amount: usize) void {
        qtc.KListOpenFilesJob_SetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn SuperSetTotalAmount(self: KListOpenFilesJob, unit: i32, amount: usize) void {
        qtc.KListOpenFilesJob_SuperSetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnSetTotalAmount(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, i32, usize) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetTotalAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn SetProgressUnit(self: KListOpenFilesJob, unit: i32) void {
        qtc.KListOpenFilesJob_SetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn SuperSetProgressUnit(self: KListOpenFilesJob, unit: i32) void {
        qtc.KListOpenFilesJob_SuperSetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, unit: kjob_enums.Unit) callconv(.c) void `
    ///
    pub fn OnSetProgressUnit(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, i32) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetProgressUnit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn SetPercent(self: KListOpenFilesJob, percentage: usize) void {
        qtc.KListOpenFilesJob_SetPercent(@ptrCast(self.ptr), @bitCast(percentage));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn SuperSetPercent(self: KListOpenFilesJob, percentage: usize) void {
        qtc.KListOpenFilesJob_SuperSetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, percentage: usize) callconv(.c) void `
    ///
    pub fn OnSetPercent(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, usize) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnSetPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn EmitResult(self: KListOpenFilesJob) void {
        qtc.KListOpenFilesJob_EmitResult(@ptrCast(self.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SuperEmitResult(self: KListOpenFilesJob) void {
        qtc.KListOpenFilesJob_SuperEmitResult(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEmitResult(self: KListOpenFilesJob, callback: *const fn () callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnEmitResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` processedAmount: usize `
    ///
    /// ` totalAmount: usize `
    ///
    pub fn EmitPercent(self: KListOpenFilesJob, processedAmount: usize, totalAmount: usize) void {
        qtc.KListOpenFilesJob_EmitPercent(@ptrCast(self.ptr), @bitCast(processedAmount), @bitCast(totalAmount));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` processedAmount: usize `
    ///
    /// ` totalAmount: usize `
    ///
    pub fn SuperEmitPercent(self: KListOpenFilesJob, processedAmount: usize, totalAmount: usize) void {
        qtc.KListOpenFilesJob_SuperEmitPercent(@ptrCast(self.ptr), @bitCast(processedAmount), @bitCast(totalAmount));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, processedAmount: usize, totalAmount: usize) callconv(.c) void `
    ///
    pub fn OnEmitPercent(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, usize, usize) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnEmitPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` speed: usize `
    ///
    pub fn EmitSpeed(self: KListOpenFilesJob, speed: usize) void {
        qtc.KListOpenFilesJob_EmitSpeed(@ptrCast(self.ptr), @bitCast(speed));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` speed: usize `
    ///
    pub fn SuperEmitSpeed(self: KListOpenFilesJob, speed: usize) void {
        qtc.KListOpenFilesJob_SuperEmitSpeed(@ptrCast(self.ptr), @bitCast(speed));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, speed: usize) callconv(.c) void `
    ///
    pub fn OnEmitSpeed(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, usize) callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnEmitSpeed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn StartElapsedTimer(self: KListOpenFilesJob) void {
        qtc.KListOpenFilesJob_StartElapsedTimer(@ptrCast(self.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SuperStartElapsedTimer(self: KListOpenFilesJob) void {
        qtc.KListOpenFilesJob_SuperStartElapsedTimer(@ptrCast(self.ptr));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartElapsedTimer(self: KListOpenFilesJob, callback: *const fn () callconv(.c) void) void {
        qtc.KListOpenFilesJob_OnStartElapsedTimer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Sender(self: KListOpenFilesJob) QObject {
        return .{ .ptr = qtc.KListOpenFilesJob_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SuperSender(self: KListOpenFilesJob) QObject {
        return .{ .ptr = qtc.KListOpenFilesJob_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KListOpenFilesJob, callback: *const fn () callconv(.c) QObject) void {
        qtc.KListOpenFilesJob_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SenderSignalIndex(self: KListOpenFilesJob) i32 {
        return qtc.KListOpenFilesJob_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    pub fn SuperSenderSignalIndex(self: KListOpenFilesJob) i32 {
        return qtc.KListOpenFilesJob_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KListOpenFilesJob, callback: *const fn () callconv(.c) i32) void {
        qtc.KListOpenFilesJob_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KListOpenFilesJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KListOpenFilesJob_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KListOpenFilesJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KListOpenFilesJob_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, [*:0]const u8) callconv(.c) i32) void {
        qtc.KListOpenFilesJob_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KListOpenFilesJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KListOpenFilesJob_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KListOpenFilesJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KListOpenFilesJob_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob`
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, QMetaMethod) callconv(.c) bool) void {
        qtc.KListOpenFilesJob_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnFinished(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob) callconv(.c) void) void {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnSuspended(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob) callconv(.c) void) void {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnResumed(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob) callconv(.c) void) void {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob) callconv(.c) void `
    ///
    pub fn OnResult(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob) callconv(.c) void) void {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnTotalAmountChanged(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob, i32, usize) callconv(.c) void) void {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn OnProcessedAmountChanged(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob, i32, usize) callconv(.c) void) void {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, job: KJob, percent: usize) callconv(.c) void `
    ///
    pub fn OnPercentChanged(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, KJob, usize) callconv(.c) void) void {
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
    /// ` self: KListOpenFilesJob `
    ///
    /// ` callback: *const fn (self: KListOpenFilesJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KListOpenFilesJob, callback: *const fn (KListOpenFilesJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/klistopenfilesjob.html#dtor.KListOpenFilesJob)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KListOpenFilesJob `
    ///
    pub fn Delete(self: KListOpenFilesJob) void {
        qtc.KListOpenFilesJob_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/klistopenfilesjob.html#public-types)
pub const enums = struct {
    pub const Error = enum(i32) {
        pub const NotSupported: i32 = 101;
        pub const InternalError: i32 = 102;
        pub const DoesNotExist: i32 = 111;
    };
};
