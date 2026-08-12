const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KJobUiDelegate = @import("libqt6").KJobUiDelegate;
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
const kjob_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kjob.html)
pub const KJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kjob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KJob,

    pub const _is_KJob = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KJob object in C++ memory
    ///
    pub fn new() KJob {
        return .{ .ptr = qtc.KJob_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KJob object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KJob {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KJob_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn metaObject(self: KJob) QMetaObject {
        return .{ .ptr = qtc.KJob_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KJob `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KJob, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KJob_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    pub fn superMetaObject(self: KJob) QMetaObject {
        return .{ .ptr = qtc.KJob_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KJob, callback: *const fn (KJob, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KJob_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KJob_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KJob, callback: *const fn (KJob, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KJob_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KJob_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KJob.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUiDelegate` instead
    ///
    pub const SetUiDelegate = setUiDelegate;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setUiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` delegate: KJobUiDelegate `
    ///
    pub fn setUiDelegate(self: KJob, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_KJobUiDelegate;
        qtc.KJob_SetUiDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `uiDelegate` instead
    ///
    pub const UiDelegate = uiDelegate;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#uiDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn uiDelegate(self: KJob) KJobUiDelegate {
        return .{ .ptr = qtc.KJob_UiDelegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `capabilities` instead
    ///
    pub const Capabilities = capabilities;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ## Returns:
    ///
    /// ` flag of kjob_enums.Capability `
    ///
    pub fn capabilities(self: KJob) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSuspended` instead
    ///
    pub const IsSuspended = isSuspended;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn isSuspended(self: KJob) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn start(self: KJob) void {
        qtc.KJob_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStart` instead
    ///
    pub const OnStart = onStart;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#start)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStart(self: KJob, callback: *const fn () callconv(.c) void) void {
        qtc.KJob_OnStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStart` instead
    ///
    pub const SuperStart = superStart;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#start)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn superStart(self: KJob) void {
        qtc.KJob_SuperStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `kill` instead
    ///
    pub const Kill = kill;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn kill(self: KJob) bool {
        return qtc.KJob_Kill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `suspend0` instead
    ///
    pub const Suspend = suspend0;

    pub const @"suspend" = suspend0;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn suspend0(self: KJob) bool {
        return qtc.KJob_Suspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn resume0(self: KJob) bool {
        return qtc.KJob_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `doKill` instead
    ///
    pub const DoKill = doKill;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn doKill(self: KJob) bool {
        return qtc.KJob_DoKill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoKill` instead
    ///
    pub const OnDoKill = onDoKill;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoKill(self: KJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KJob_OnDoKill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoKill` instead
    ///
    pub const SuperDoKill = superDoKill;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn superDoKill(self: KJob) bool {
        return qtc.KJob_SuperDoKill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `doSuspend` instead
    ///
    pub const DoSuspend = doSuspend;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn doSuspend(self: KJob) bool {
        return qtc.KJob_DoSuspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoSuspend` instead
    ///
    pub const OnDoSuspend = onDoSuspend;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoSuspend(self: KJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KJob_OnDoSuspend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoSuspend` instead
    ///
    pub const SuperDoSuspend = superDoSuspend;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn superDoSuspend(self: KJob) bool {
        return qtc.KJob_SuperDoSuspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `doResume` instead
    ///
    pub const DoResume = doResume;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn doResume(self: KJob) bool {
        return qtc.KJob_DoResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoResume` instead
    ///
    pub const OnDoResume = onDoResume;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoResume(self: KJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KJob_OnDoResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoResume` instead
    ///
    pub const SuperDoResume = superDoResume;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn superDoResume(self: KJob) bool {
        return qtc.KJob_SuperDoResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCapabilities` instead
    ///
    pub const SetCapabilities = setCapabilities;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` _capabilities: flag of kjob_enums.Capability `
    ///
    pub fn setCapabilities(self: KJob, _capabilities: i32) void {
        qtc.KJob_SetCapabilities(@ptrCast(self.ptr), @bitCast(_capabilities));
    }

    /// ### DEPRECATED: Use `onSetCapabilities` instead
    ///
    pub const OnSetCapabilities = onSetCapabilities;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void `
    ///
    pub fn onSetCapabilities(self: KJob, callback: *const fn (KJob, i32) callconv(.c) void) void {
        qtc.KJob_OnSetCapabilities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCapabilities` instead
    ///
    pub const SuperSetCapabilities = superSetCapabilities;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` _capabilities: flag of kjob_enums.Capability `
    ///
    pub fn superSetCapabilities(self: KJob, _capabilities: i32) void {
        qtc.KJob_SuperSetCapabilities(@ptrCast(self.ptr), @bitCast(_capabilities));
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn exec(self: KJob) bool {
        return qtc.KJob_Exec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn error0(self: KJob) i32 {
        return qtc.KJob_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorText` instead
    ///
    pub const ErrorText = errorText;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorText(self: KJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KJob.errorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: KJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KJob.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onErrorString` instead
    ///
    pub const OnErrorString = onErrorString;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onErrorString(self: KJob, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KJob_OnErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superErrorString` instead
    ///
    pub const SuperErrorString = superErrorString;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superErrorString(self: KJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_SuperErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KJob.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `processedAmount` instead
    ///
    pub const ProcessedAmount = processedAmount;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn processedAmount(self: KJob, unit: i32) usize {
        return qtc.KJob_ProcessedAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `totalAmount` instead
    ///
    pub const TotalAmount = totalAmount;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn totalAmount(self: KJob, unit: i32) usize {
        return qtc.KJob_TotalAmount(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `percent` instead
    ///
    pub const Percent = percent;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn percent(self: KJob) usize {
        return qtc.KJob_Percent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDelete` instead
    ///
    pub const SetAutoDelete = setAutoDelete;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` autodelete: bool `
    ///
    pub fn setAutoDelete(self: KJob, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self.ptr), autodelete);
    }

    /// ### DEPRECATED: Use `isAutoDelete` instead
    ///
    pub const IsAutoDelete = isAutoDelete;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#isAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn isAutoDelete(self: KJob) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFinishedNotificationHidden` instead
    ///
    pub const SetFinishedNotificationHidden = setFinishedNotificationHidden;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn setFinishedNotificationHidden(self: KJob) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFinishedNotificationHidden` instead
    ///
    pub const IsFinishedNotificationHidden = isFinishedNotificationHidden;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn isFinishedNotificationHidden(self: KJob) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isStartedWithExec` instead
    ///
    pub const IsStartedWithExec = isStartedWithExec;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn isStartedWithExec(self: KJob) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `elapsedTime` instead
    ///
    pub const ElapsedTime = elapsedTime;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#elapsedTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn elapsedTime(self: KJob) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `infoMessage` instead
    ///
    pub const InfoMessage = infoMessage;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn infoMessage(self: KJob, job: anytype, message: []const u8) void {
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

    /// ### [Upstream resources](https://api.kde.org/kjob.html#infoMessage)
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onInfoMessage(self: KJob, callback: *const fn (KJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `warning` instead
    ///
    pub const Warning = warning;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn warning(self: KJob, job: anytype, message: []const u8) void {
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

    /// ### [Upstream resources](https://api.kde.org/kjob.html#warning)
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWarning(self: KJob, callback: *const fn (KJob, KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `totalSize` instead
    ///
    pub const TotalSize = totalSize;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn totalSize(self: KJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_TotalSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onTotalSize` instead
    ///
    pub const OnTotalSize = onTotalSize;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn onTotalSize(self: KJob, callback: *const fn (KJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `processedSize` instead
    ///
    pub const ProcessedSize = processedSize;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn processedSize(self: KJob, job: anytype, size: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_ProcessedSize(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `onProcessedSize` instead
    ///
    pub const OnProcessedSize = onProcessedSize;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedSize)
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn onProcessedSize(self: KJob, callback: *const fn (KJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `speed` instead
    ///
    pub const Speed = speed;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` job: KJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn speed(self: KJob, job: anytype, _speed: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KJob_Speed(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `onSpeed` instead
    ///
    pub const OnSpeed = onSpeed;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#speed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob, speed: usize) callconv(.c) void `
    ///
    pub fn onSpeed(self: KJob, callback: *const fn (KJob, KJob, usize) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn isFinished(self: KJob) bool {
        return qtc.KJob_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsFinished` instead
    ///
    pub const OnIsFinished = onIsFinished;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsFinished(self: KJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KJob_OnIsFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsFinished` instead
    ///
    pub const SuperIsFinished = superIsFinished;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn superIsFinished(self: KJob) bool {
        return qtc.KJob_SuperIsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn setError(self: KJob, errorCode: i32) void {
        qtc.KJob_SetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// ### DEPRECATED: Use `onSetError` instead
    ///
    pub const OnSetError = onSetError;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, errorCode: i32) callconv(.c) void `
    ///
    pub fn onSetError(self: KJob, callback: *const fn (KJob, i32) callconv(.c) void) void {
        qtc.KJob_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetError` instead
    ///
    pub const SuperSetError = superSetError;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn superSetError(self: KJob, errorCode: i32) void {
        qtc.KJob_SuperSetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// ### DEPRECATED: Use `setErrorText` instead
    ///
    pub const SetErrorText = setErrorText;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` _errorText: []const u8 `
    ///
    pub fn setErrorText(self: KJob, _errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = _errorText.len,
            .data = _errorText.ptr,
        };
        qtc.KJob_SetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// ### DEPRECATED: Use `onSetErrorText` instead
    ///
    pub const OnSetErrorText = onSetErrorText;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, errorText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetErrorText(self: KJob, callback: *const fn (KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_OnSetErrorText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetErrorText` instead
    ///
    pub const SuperSetErrorText = superSetErrorText;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` _errorText: []const u8 `
    ///
    pub fn superSetErrorText(self: KJob, _errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = _errorText.len,
            .data = _errorText.ptr,
        };
        qtc.KJob_SuperSetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// ### DEPRECATED: Use `setProcessedAmount` instead
    ///
    pub const SetProcessedAmount = setProcessedAmount;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn setProcessedAmount(self: KJob, unit: i32, amount: usize) void {
        qtc.KJob_SetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `onSetProcessedAmount` instead
    ///
    pub const OnSetProcessedAmount = onSetProcessedAmount;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onSetProcessedAmount(self: KJob, callback: *const fn (KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_OnSetProcessedAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProcessedAmount` instead
    ///
    pub const SuperSetProcessedAmount = superSetProcessedAmount;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn superSetProcessedAmount(self: KJob, unit: i32, amount: usize) void {
        qtc.KJob_SuperSetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `setTotalAmount` instead
    ///
    pub const SetTotalAmount = setTotalAmount;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn setTotalAmount(self: KJob, unit: i32, amount: usize) void {
        qtc.KJob_SetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `onSetTotalAmount` instead
    ///
    pub const OnSetTotalAmount = onSetTotalAmount;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onSetTotalAmount(self: KJob, callback: *const fn (KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_OnSetTotalAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTotalAmount` instead
    ///
    pub const SuperSetTotalAmount = superSetTotalAmount;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn superSetTotalAmount(self: KJob, unit: i32, amount: usize) void {
        qtc.KJob_SuperSetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `setProgressUnit` instead
    ///
    pub const SetProgressUnit = setProgressUnit;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn setProgressUnit(self: KJob, unit: i32) void {
        qtc.KJob_SetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `onSetProgressUnit` instead
    ///
    pub const OnSetProgressUnit = onSetProgressUnit;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, unit: kjob_enums.Unit) callconv(.c) void `
    ///
    pub fn onSetProgressUnit(self: KJob, callback: *const fn (KJob, i32) callconv(.c) void) void {
        qtc.KJob_OnSetProgressUnit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProgressUnit` instead
    ///
    pub const SuperSetProgressUnit = superSetProgressUnit;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn superSetProgressUnit(self: KJob, unit: i32) void {
        qtc.KJob_SuperSetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `setPercent` instead
    ///
    pub const SetPercent = setPercent;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn setPercent(self: KJob, percentage: usize) void {
        qtc.KJob_SetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// ### DEPRECATED: Use `onSetPercent` instead
    ///
    pub const OnSetPercent = onSetPercent;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, percentage: usize) callconv(.c) void `
    ///
    pub fn onSetPercent(self: KJob, callback: *const fn (KJob, usize) callconv(.c) void) void {
        qtc.KJob_OnSetPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPercent` instead
    ///
    pub const SuperSetPercent = superSetPercent;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn superSetPercent(self: KJob, percentage: usize) void {
        qtc.KJob_SuperSetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// ### DEPRECATED: Use `emitResult` instead
    ///
    pub const EmitResult = emitResult;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn emitResult(self: KJob) void {
        qtc.KJob_EmitResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEmitResult` instead
    ///
    pub const OnEmitResult = onEmitResult;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEmitResult(self: KJob, callback: *const fn () callconv(.c) void) void {
        qtc.KJob_OnEmitResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEmitResult` instead
    ///
    pub const SuperEmitResult = superEmitResult;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn superEmitResult(self: KJob) void {
        qtc.KJob_SuperEmitResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `emitPercent` instead
    ///
    pub const EmitPercent = emitPercent;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` _processedAmount: usize `
    ///
    /// ` _totalAmount: usize `
    ///
    pub fn emitPercent(self: KJob, _processedAmount: usize, _totalAmount: usize) void {
        qtc.KJob_EmitPercent(@ptrCast(self.ptr), @bitCast(_processedAmount), @bitCast(_totalAmount));
    }

    /// ### DEPRECATED: Use `onEmitPercent` instead
    ///
    pub const OnEmitPercent = onEmitPercent;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, processedAmount: usize, totalAmount: usize) callconv(.c) void `
    ///
    pub fn onEmitPercent(self: KJob, callback: *const fn (KJob, usize, usize) callconv(.c) void) void {
        qtc.KJob_OnEmitPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEmitPercent` instead
    ///
    pub const SuperEmitPercent = superEmitPercent;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` _processedAmount: usize `
    ///
    /// ` _totalAmount: usize `
    ///
    pub fn superEmitPercent(self: KJob, _processedAmount: usize, _totalAmount: usize) void {
        qtc.KJob_SuperEmitPercent(@ptrCast(self.ptr), @bitCast(_processedAmount), @bitCast(_totalAmount));
    }

    /// ### DEPRECATED: Use `emitSpeed` instead
    ///
    pub const EmitSpeed = emitSpeed;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn emitSpeed(self: KJob, _speed: usize) void {
        qtc.KJob_EmitSpeed(@ptrCast(self.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `onEmitSpeed` instead
    ///
    pub const OnEmitSpeed = onEmitSpeed;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, speed: usize) callconv(.c) void `
    ///
    pub fn onEmitSpeed(self: KJob, callback: *const fn (KJob, usize) callconv(.c) void) void {
        qtc.KJob_OnEmitSpeed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEmitSpeed` instead
    ///
    pub const SuperEmitSpeed = superEmitSpeed;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn superEmitSpeed(self: KJob, _speed: usize) void {
        qtc.KJob_SuperEmitSpeed(@ptrCast(self.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `startElapsedTimer` instead
    ///
    pub const StartElapsedTimer = startElapsedTimer;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn startElapsedTimer(self: KJob) void {
        qtc.KJob_StartElapsedTimer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartElapsedTimer` instead
    ///
    pub const OnStartElapsedTimer = onStartElapsedTimer;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStartElapsedTimer(self: KJob, callback: *const fn () callconv(.c) void) void {
        qtc.KJob_OnStartElapsedTimer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStartElapsedTimer` instead
    ///
    pub const SuperStartElapsedTimer = superStartElapsedTimer;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    pub fn superStartElapsedTimer(self: KJob) void {
        qtc.KJob_SuperStartElapsedTimer(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KJob.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KJob.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `kill1` instead
    ///
    pub const Kill1 = kill1;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#kill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` verbosity: kjob_enums.KillVerbosity `
    ///
    pub fn kill1(self: KJob, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self.ptr), @bitCast(verbosity));
    }

    /// ### DEPRECATED: Use `setFinishedNotificationHidden1` instead
    ///
    pub const SetFinishedNotificationHidden1 = setFinishedNotificationHidden1;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KJob `
    ///
    /// ` hide: bool `
    ///
    pub fn setFinishedNotificationHidden1(self: KJob, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self.ptr), hide);
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
    /// ` self: KJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KJob.objectName: Memory allocation failed");
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
    /// ` self: KJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KJob, name: []const u8) void {
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
    /// ` self: KJob `
    ///
    pub fn isWidgetType(self: KJob) bool {
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
    /// ` self: KJob `
    ///
    pub fn isWindowType(self: KJob) bool {
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
    /// ` self: KJob `
    ///
    pub fn isQuickItemType(self: KJob) bool {
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
    /// ` self: KJob `
    ///
    pub fn signalsBlocked(self: KJob) bool {
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
    /// ` self: KJob `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KJob, b: bool) bool {
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
    /// ` self: KJob `
    ///
    pub fn thread(self: KJob) QThread {
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
    /// ` self: KJob `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KJob, _thread: anytype) bool {
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
    /// ` self: KJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KJob, interval: i32) i32 {
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
    /// ` self: KJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KJob, time: i64) i32 {
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
    /// ` self: KJob `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KJob, id: i32) void {
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
    /// ` self: KJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KJob, id: i32) void {
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
    /// ` self: KJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KJob.children: Memory allocation failed");
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
    /// ` self: KJob `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KJob, _parent: anytype) void {
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
    /// ` self: KJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KJob, filterObj: anytype) void {
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
    /// ` self: KJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KJob, obj: anytype) void {
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
    /// ` self: KJob `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KJob, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KJob `
    ///
    pub fn disconnect3(self: KJob) bool {
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
    /// ` self: KJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KJob, receiver: anytype) bool {
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
    /// ` self: KJob `
    ///
    pub fn dumpObjectTree(self: KJob) void {
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
    /// ` self: KJob `
    ///
    pub fn dumpObjectInfo(self: KJob) void {
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
    /// ` self: KJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KJob, name: [:0]const u8) QVariant {
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
    /// ` self: KJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KJob.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KJob.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KJob `
    ///
    pub fn bindingStorage(self: KJob) QBindingStorage {
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
    /// ` self: KJob `
    ///
    pub fn bindingStorage2(self: KJob) QBindingStorage {
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
    /// ` self: KJob `
    ///
    pub fn destroyed(self: KJob) void {
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
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KJob, callback: *const fn (KJob) callconv(.c) void) void {
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
    /// ` self: KJob `
    ///
    pub fn parent(self: KJob) QObject {
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
    /// ` self: KJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KJob, classname: [:0]const u8) bool {
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
    /// ` self: KJob `
    ///
    pub fn deleteLater(self: KJob) void {
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
    /// ` self: KJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KJob, interval: i32, timerType: i32) i32 {
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
    /// ` self: KJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KJob, time: i64, timerType: i32) i32 {
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
    /// ` self: KJob `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KJob, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KJob, signal: [:0]const u8) bool {
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
    /// ` self: KJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KJob, param1: anytype) void {
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
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KJob, callback: *const fn (KJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KJob, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KJob_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KJob, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KJob_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KJob`
    ///
    /// ` callback: *const fn (self: KJob, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KJob, callback: *const fn (KJob, QEvent) callconv(.c) bool) void {
        qtc.KJob_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KJob, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KJob_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KJob, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KJob_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KJob`
    ///
    /// ` callback: *const fn (self: KJob, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KJob, callback: *const fn (KJob, QObject, QEvent) callconv(.c) bool) void {
        qtc.KJob_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KJob_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KJob `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KJob_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KJob`
    ///
    /// ` callback: *const fn (self: KJob, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KJob, callback: *const fn (KJob, QTimerEvent) callconv(.c) void) void {
        qtc.KJob_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KJob_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KJob `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KJob_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KJob`
    ///
    /// ` callback: *const fn (self: KJob, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KJob, callback: *const fn (KJob, QChildEvent) callconv(.c) void) void {
        qtc.KJob_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KJob_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KJob_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KJob`
    ///
    /// ` callback: *const fn (self: KJob, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KJob, callback: *const fn (KJob, QEvent) callconv(.c) void) void {
        qtc.KJob_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KJob_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KJob_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KJob`
    ///
    /// ` callback: *const fn (self: KJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KJob, callback: *const fn (KJob, QMetaMethod) callconv(.c) void) void {
        qtc.KJob_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KJob_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KJob_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KJob`
    ///
    /// ` callback: *const fn (self: KJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KJob, callback: *const fn (KJob, QMetaMethod) callconv(.c) void) void {
        qtc.KJob_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    pub fn sender(self: KJob) QObject {
        return .{ .ptr = qtc.KJob_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KJob `
    ///
    pub fn superSender(self: KJob) QObject {
        return .{ .ptr = qtc.KJob_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KJob`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KJob, callback: *const fn () callconv(.c) QObject) void {
        qtc.KJob_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    pub fn senderSignalIndex(self: KJob) i32 {
        return qtc.KJob_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KJob `
    ///
    pub fn superSenderSignalIndex(self: KJob) i32 {
        return qtc.KJob_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KJob, callback: *const fn () callconv(.c) i32) void {
        qtc.KJob_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KJob_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KJob_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KJob`
    ///
    /// ` callback: *const fn (self: KJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KJob, callback: *const fn (KJob, [*:0]const u8) callconv(.c) i32) void {
        qtc.KJob_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KJob_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KJob_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KJob`
    ///
    /// ` callback: *const fn (self: KJob, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KJob, callback: *const fn (KJob, QMetaMethod) callconv(.c) bool) void {
        qtc.KJob_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob) callconv(.c) void `
    ///
    pub fn onFinished(self: KJob, callback: *const fn (KJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onSuspended` instead
    ///
    pub const OnSuspended = onSuspended;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#suspended)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob) callconv(.c) void `
    ///
    pub fn onSuspended(self: KJob, callback: *const fn (KJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Suspended(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onResumed` instead
    ///
    pub const OnResumed = onResumed;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#resumed)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob) callconv(.c) void `
    ///
    pub fn onResumed(self: KJob, callback: *const fn (KJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Resumed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onResult` instead
    ///
    pub const OnResult = onResult;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#result)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob) callconv(.c) void `
    ///
    pub fn onResult(self: KJob, callback: *const fn (KJob, KJob) callconv(.c) void) void {
        qtc.KJob_Connect_Result(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onTotalAmountChanged` instead
    ///
    pub const OnTotalAmountChanged = onTotalAmountChanged;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#totalAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onTotalAmountChanged(self: KJob, callback: *const fn (KJob, KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_Connect_TotalAmountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onProcessedAmountChanged` instead
    ///
    pub const OnProcessedAmountChanged = onProcessedAmountChanged;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#processedAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onProcessedAmountChanged(self: KJob, callback: *const fn (KJob, KJob, i32, usize) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedAmountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onPercentChanged` instead
    ///
    pub const OnPercentChanged = onPercentChanged;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#percentChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, job: KJob, percent: usize) callconv(.c) void `
    ///
    pub fn onPercentChanged(self: KJob, callback: *const fn (KJob, KJob, usize) callconv(.c) void) void {
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
    /// ` self: KJob `
    ///
    /// ` callback: *const fn (self: KJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KJob, callback: *const fn (KJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kjob.html#dtor.KJob)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KJob `
    ///
    pub fn delete(self: KJob) void {
        qtc.KJob_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kjob.html#public-types)
pub const enums = struct {
    pub const Unit = enum(i32) {
        pub const Bytes: i32 = 0;
        pub const Files: i32 = 1;
        pub const Directories: i32 = 2;
        pub const Items: i32 = 3;
        pub const UnitsCount: i32 = 4;
    };

    pub const Capability = enum(i32) {
        pub const NoCapabilities: i32 = 0;
        pub const Killable: i32 = 1;
        pub const Suspendable: i32 = 2;
    };

    pub const KillVerbosity = enum(i32) {
        pub const Quietly: i32 = 0;
        pub const EmitResult: i32 = 1;
    };

    pub const KJob = enum(i32) {
        pub const NoError: i32 = 0;
        pub const KilledJobError: i32 = 1;
        pub const UserDefinedError: i32 = 100;
    };
};
