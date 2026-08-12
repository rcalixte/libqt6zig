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
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html)
pub const KEMailClientLauncherJob = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KEMailClientLauncherJob,

    pub const _is_KEMailClientLauncherJob = {};
    pub const _is_KJob = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KEMailClientLauncherJob object in C++ memory
    ///
    pub fn new() KEMailClientLauncherJob {
        return .{ .ptr = qtc.KEMailClientLauncherJob_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KEMailClientLauncherJob object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KEMailClientLauncherJob {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KEMailClientLauncherJob_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn metaObject(self: KEMailClientLauncherJob) QMetaObject {
        return .{ .ptr = qtc.KEMailClientLauncherJob_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KEMailClientLauncherJob, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KEMailClientLauncherJob_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn superMetaObject(self: KEMailClientLauncherJob) QMetaObject {
        return .{ .ptr = qtc.KEMailClientLauncherJob_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KEMailClientLauncherJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KEMailClientLauncherJob_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KEMailClientLauncherJob_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KEMailClientLauncherJob, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KEMailClientLauncherJob_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KEMailClientLauncherJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KEMailClientLauncherJob_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KEMailClientLauncherJob_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KEMailClientLauncherJob, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KEMailClientLauncherJob_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailClientLauncherJob.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTo` instead
    ///
    pub const SetTo = setTo;

    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html#setTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` to: []const []const u8 `
    ///
    pub fn setTo(self: KEMailClientLauncherJob, allocator: std.mem.Allocator, to: []const []const u8) void {
        const to_arr = allocator.alloc(qtc.libqt_string, to.len) catch @panic("KEMailClientLauncherJob.setTo: Memory allocation failed");
        defer allocator.free(to_arr);
        for (to, 0..to.len) |str_item, i|
            to_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = to_arr.ptr,
        };
        qtc.KEMailClientLauncherJob_SetTo(@ptrCast(self.ptr), to_list);
    }

    /// ### DEPRECATED: Use `setCc` instead
    ///
    pub const SetCc = setCc;

    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html#setCc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` cc: []const []const u8 `
    ///
    pub fn setCc(self: KEMailClientLauncherJob, allocator: std.mem.Allocator, cc: []const []const u8) void {
        const cc_arr = allocator.alloc(qtc.libqt_string, cc.len) catch @panic("KEMailClientLauncherJob.setCc: Memory allocation failed");
        defer allocator.free(cc_arr);
        for (cc, 0..cc.len) |str_item, i|
            cc_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const cc_list = qtc.libqt_list{
            .len = cc.len,
            .data = cc_arr.ptr,
        };
        qtc.KEMailClientLauncherJob_SetCc(@ptrCast(self.ptr), cc_list);
    }

    /// ### DEPRECATED: Use `setBcc` instead
    ///
    pub const SetBcc = setBcc;

    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html#setBcc)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bcc: []const []const u8 `
    ///
    pub fn setBcc(self: KEMailClientLauncherJob, allocator: std.mem.Allocator, bcc: []const []const u8) void {
        const bcc_arr = allocator.alloc(qtc.libqt_string, bcc.len) catch @panic("KEMailClientLauncherJob.setBcc: Memory allocation failed");
        defer allocator.free(bcc_arr);
        for (bcc, 0..bcc.len) |str_item, i|
            bcc_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const bcc_list = qtc.libqt_list{
            .len = bcc.len,
            .data = bcc_arr.ptr,
        };
        qtc.KEMailClientLauncherJob_SetBcc(@ptrCast(self.ptr), bcc_list);
    }

    /// ### DEPRECATED: Use `setSubject` instead
    ///
    pub const SetSubject = setSubject;

    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html#setSubject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` subject: []const u8 `
    ///
    pub fn setSubject(self: KEMailClientLauncherJob, subject: []const u8) void {
        const subject_str = qtc.libqt_string{
            .len = subject.len,
            .data = subject.ptr,
        };
        qtc.KEMailClientLauncherJob_SetSubject(@ptrCast(self.ptr), subject_str);
    }

    /// ### DEPRECATED: Use `setBody` instead
    ///
    pub const SetBody = setBody;

    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html#setBody)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` body: []const u8 `
    ///
    pub fn setBody(self: KEMailClientLauncherJob, body: []const u8) void {
        const body_str = qtc.libqt_string{
            .len = body.len,
            .data = body.ptr,
        };
        qtc.KEMailClientLauncherJob_SetBody(@ptrCast(self.ptr), body_str);
    }

    /// ### DEPRECATED: Use `setAttachments` instead
    ///
    pub const SetAttachments = setAttachments;

    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html#setAttachments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` urls: []QUrl `
    ///
    pub fn setAttachments(self: KEMailClientLauncherJob, urls: []QUrl) void {
        const urls_list = qtc.libqt_list{
            .len = urls.len,
            .data = @ptrCast(urls.ptr),
        };
        qtc.KEMailClientLauncherJob_SetAttachments(@ptrCast(self.ptr), urls_list);
    }

    /// ### DEPRECATED: Use `setStartupId` instead
    ///
    pub const SetStartupId = setStartupId;

    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html#setStartupId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` startupId: []u8 `
    ///
    pub fn setStartupId(self: KEMailClientLauncherJob, startupId: []u8) void {
        const startupId_str = qtc.libqt_string{
            .len = startupId.len,
            .data = startupId.ptr,
        };
        qtc.KEMailClientLauncherJob_SetStartupId(@ptrCast(self.ptr), startupId_str);
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn start(self: KEMailClientLauncherJob) void {
        qtc.KEMailClientLauncherJob_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStart` instead
    ///
    pub const OnStart = onStart;

    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html#start)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStart(self: KEMailClientLauncherJob, callback: *const fn () callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superStart` instead
    ///
    pub const SuperStart = superStart;

    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html#start)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn superStart(self: KEMailClientLauncherJob) void {
        qtc.KEMailClientLauncherJob_SuperStart(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailClientLauncherJob.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailClientLauncherJob.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` delegate: KJobUiDelegate `
    ///
    pub fn setUiDelegate(self: KEMailClientLauncherJob, delegate: anytype) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn uiDelegate(self: KEMailClientLauncherJob) KJobUiDelegate {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ## Returns:
    ///
    /// ` flag of kjob_enums.Capability `
    ///
    pub fn capabilities(self: KEMailClientLauncherJob) i32 {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn isSuspended(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn kill(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn suspend0(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn resume0(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn exec(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn error0(self: KEMailClientLauncherJob) i32 {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorText(self: KEMailClientLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KJob_ErrorText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailClientLauncherJob.errorText: Memory allocation failed");
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn processedAmount(self: KEMailClientLauncherJob, unit: i32) usize {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn totalAmount(self: KEMailClientLauncherJob, unit: i32) usize {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn percent(self: KEMailClientLauncherJob) usize {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` autodelete: bool `
    ///
    pub fn setAutoDelete(self: KEMailClientLauncherJob, autodelete: bool) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn isAutoDelete(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn setFinishedNotificationHidden(self: KEMailClientLauncherJob) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn isFinishedNotificationHidden(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn isStartedWithExec(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn elapsedTime(self: KEMailClientLauncherJob) i64 {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn infoMessage(self: KEMailClientLauncherJob, job: anytype, message: []const u8) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onInfoMessage(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` message: []const u8 `
    ///
    pub fn warning(self: KEMailClientLauncherJob, job: anytype, message: []const u8) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWarning(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn totalSize(self: KEMailClientLauncherJob, job: anytype, size: usize) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn onTotalSize(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob, usize) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` size: usize `
    ///
    pub fn processedSize(self: KEMailClientLauncherJob, job: anytype, size: usize) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob, size: usize) callconv(.c) void `
    ///
    pub fn onProcessedSize(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob, usize) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` job: KJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn speed(self: KEMailClientLauncherJob, job: anytype, _speed: usize) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob, speed: usize) callconv(.c) void `
    ///
    pub fn onSpeed(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob, usize) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` verbosity: kjob_enums.KillVerbosity `
    ///
    pub fn kill1(self: KEMailClientLauncherJob, verbosity: i32) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` hide: bool `
    ///
    pub fn setFinishedNotificationHidden1(self: KEMailClientLauncherJob, hide: bool) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KEMailClientLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailClientLauncherJob.objectName: Memory allocation failed");
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KEMailClientLauncherJob, name: []const u8) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn isWidgetType(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn isWindowType(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn isQuickItemType(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn signalsBlocked(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KEMailClientLauncherJob, b: bool) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn thread(self: KEMailClientLauncherJob) QThread {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KEMailClientLauncherJob, _thread: anytype) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KEMailClientLauncherJob, interval: i32) i32 {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KEMailClientLauncherJob, time: i64) i32 {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KEMailClientLauncherJob, id: i32) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KEMailClientLauncherJob, id: i32) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KEMailClientLauncherJob, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KEMailClientLauncherJob.children: Memory allocation failed");
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KEMailClientLauncherJob, _parent: anytype) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KEMailClientLauncherJob, filterObj: anytype) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KEMailClientLauncherJob, obj: anytype) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KEMailClientLauncherJob, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn disconnect3(self: KEMailClientLauncherJob) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KEMailClientLauncherJob, receiver: anytype) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn dumpObjectTree(self: KEMailClientLauncherJob) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn dumpObjectInfo(self: KEMailClientLauncherJob) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KEMailClientLauncherJob, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KEMailClientLauncherJob, name: [:0]const u8) QVariant {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KEMailClientLauncherJob, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KEMailClientLauncherJob.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KEMailClientLauncherJob.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn bindingStorage(self: KEMailClientLauncherJob) QBindingStorage {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn bindingStorage2(self: KEMailClientLauncherJob) QBindingStorage {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn destroyed(self: KEMailClientLauncherJob) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn parent(self: KEMailClientLauncherJob) QObject {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KEMailClientLauncherJob, classname: [:0]const u8) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn deleteLater(self: KEMailClientLauncherJob) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KEMailClientLauncherJob, interval: i32, timerType: i32) i32 {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KEMailClientLauncherJob, time: i64, timerType: i32) i32 {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KEMailClientLauncherJob, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KEMailClientLauncherJob, signal: [:0]const u8) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KEMailClientLauncherJob, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KEMailClientLauncherJob, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KEMailClientLauncherJob, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KEMailClientLauncherJob, param1: anytype) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doKill` instead
    ///
    pub const DoKill = doKill;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn doKill(self: KEMailClientLauncherJob) bool {
        return qtc.KEMailClientLauncherJob_DoKill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoKill` instead
    ///
    pub const SuperDoKill = superDoKill;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn superDoKill(self: KEMailClientLauncherJob) bool {
        return qtc.KEMailClientLauncherJob_SuperDoKill(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoKill` instead
    ///
    pub const OnDoKill = onDoKill;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doKill)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoKill(self: KEMailClientLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KEMailClientLauncherJob_OnDoKill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doSuspend` instead
    ///
    pub const DoSuspend = doSuspend;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn doSuspend(self: KEMailClientLauncherJob) bool {
        return qtc.KEMailClientLauncherJob_DoSuspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoSuspend` instead
    ///
    pub const SuperDoSuspend = superDoSuspend;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn superDoSuspend(self: KEMailClientLauncherJob) bool {
        return qtc.KEMailClientLauncherJob_SuperDoSuspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoSuspend` instead
    ///
    pub const OnDoSuspend = onDoSuspend;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doSuspend)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoSuspend(self: KEMailClientLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KEMailClientLauncherJob_OnDoSuspend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doResume` instead
    ///
    pub const DoResume = doResume;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn doResume(self: KEMailClientLauncherJob) bool {
        return qtc.KEMailClientLauncherJob_DoResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoResume` instead
    ///
    pub const SuperDoResume = superDoResume;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn superDoResume(self: KEMailClientLauncherJob) bool {
        return qtc.KEMailClientLauncherJob_SuperDoResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoResume` instead
    ///
    pub const OnDoResume = onDoResume;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#doResume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onDoResume(self: KEMailClientLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KEMailClientLauncherJob_OnDoResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: KEMailClientLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KEMailClientLauncherJob_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailClientLauncherJob.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superErrorString` instead
    ///
    pub const SuperErrorString = superErrorString;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superErrorString(self: KEMailClientLauncherJob, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KEMailClientLauncherJob_SuperErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KEMailClientLauncherJob.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onErrorString` instead
    ///
    pub const OnErrorString = onErrorString;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#errorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onErrorString(self: KEMailClientLauncherJob, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KEMailClientLauncherJob_OnErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KEMailClientLauncherJob, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KEMailClientLauncherJob_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KEMailClientLauncherJob, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KEMailClientLauncherJob_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, QEvent) callconv(.c) bool) void {
        qtc.KEMailClientLauncherJob_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KEMailClientLauncherJob, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KEMailClientLauncherJob_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KEMailClientLauncherJob, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KEMailClientLauncherJob_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, QObject, QEvent) callconv(.c) bool) void {
        qtc.KEMailClientLauncherJob_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KEMailClientLauncherJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KEMailClientLauncherJob_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KEMailClientLauncherJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KEMailClientLauncherJob_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, QTimerEvent) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KEMailClientLauncherJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KEMailClientLauncherJob_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KEMailClientLauncherJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KEMailClientLauncherJob_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, QChildEvent) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KEMailClientLauncherJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KEMailClientLauncherJob_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KEMailClientLauncherJob, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KEMailClientLauncherJob_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, QEvent) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KEMailClientLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KEMailClientLauncherJob_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KEMailClientLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KEMailClientLauncherJob_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, QMetaMethod) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KEMailClientLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KEMailClientLauncherJob_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KEMailClientLauncherJob, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KEMailClientLauncherJob_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, QMetaMethod) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCapabilities` instead
    ///
    pub const SetCapabilities = setCapabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _capabilities: flag of kjob_enums.Capability `
    ///
    pub fn setCapabilities(self: KEMailClientLauncherJob, _capabilities: i32) void {
        qtc.KEMailClientLauncherJob_SetCapabilities(@ptrCast(self.ptr), @bitCast(_capabilities));
    }

    /// ### DEPRECATED: Use `superSetCapabilities` instead
    ///
    pub const SuperSetCapabilities = superSetCapabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _capabilities: flag of kjob_enums.Capability `
    ///
    pub fn superSetCapabilities(self: KEMailClientLauncherJob, _capabilities: i32) void {
        qtc.KEMailClientLauncherJob_SuperSetCapabilities(@ptrCast(self.ptr), @bitCast(_capabilities));
    }

    /// ### DEPRECATED: Use `onSetCapabilities` instead
    ///
    pub const OnSetCapabilities = onSetCapabilities;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setCapabilities)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void `
    ///
    pub fn onSetCapabilities(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, i32) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnSetCapabilities(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn isFinished(self: KEMailClientLauncherJob) bool {
        return qtc.KEMailClientLauncherJob_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsFinished` instead
    ///
    pub const SuperIsFinished = superIsFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn superIsFinished(self: KEMailClientLauncherJob) bool {
        return qtc.KEMailClientLauncherJob_SuperIsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsFinished` instead
    ///
    pub const OnIsFinished = onIsFinished;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#isFinished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsFinished(self: KEMailClientLauncherJob, callback: *const fn () callconv(.c) bool) void {
        qtc.KEMailClientLauncherJob_OnIsFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setError` instead
    ///
    pub const SetError = setError;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn setError(self: KEMailClientLauncherJob, errorCode: i32) void {
        qtc.KEMailClientLauncherJob_SetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// ### DEPRECATED: Use `superSetError` instead
    ///
    pub const SuperSetError = superSetError;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` errorCode: i32 `
    ///
    pub fn superSetError(self: KEMailClientLauncherJob, errorCode: i32) void {
        qtc.KEMailClientLauncherJob_SuperSetError(@ptrCast(self.ptr), @bitCast(errorCode));
    }

    /// ### DEPRECATED: Use `onSetError` instead
    ///
    pub const OnSetError = onSetError;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, errorCode: i32) callconv(.c) void `
    ///
    pub fn onSetError(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, i32) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnSetError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setErrorText` instead
    ///
    pub const SetErrorText = setErrorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _errorText: []const u8 `
    ///
    pub fn setErrorText(self: KEMailClientLauncherJob, _errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = _errorText.len,
            .data = _errorText.ptr,
        };
        qtc.KEMailClientLauncherJob_SetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// ### DEPRECATED: Use `superSetErrorText` instead
    ///
    pub const SuperSetErrorText = superSetErrorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _errorText: []const u8 `
    ///
    pub fn superSetErrorText(self: KEMailClientLauncherJob, _errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = _errorText.len,
            .data = _errorText.ptr,
        };
        qtc.KEMailClientLauncherJob_SuperSetErrorText(@ptrCast(self.ptr), errorText_str);
    }

    /// ### DEPRECATED: Use `onSetErrorText` instead
    ///
    pub const OnSetErrorText = onSetErrorText;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setErrorText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, errorText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetErrorText(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, [*:0]const u8) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnSetErrorText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setProcessedAmount` instead
    ///
    pub const SetProcessedAmount = setProcessedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn setProcessedAmount(self: KEMailClientLauncherJob, unit: i32, amount: usize) void {
        qtc.KEMailClientLauncherJob_SetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `superSetProcessedAmount` instead
    ///
    pub const SuperSetProcessedAmount = superSetProcessedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn superSetProcessedAmount(self: KEMailClientLauncherJob, unit: i32, amount: usize) void {
        qtc.KEMailClientLauncherJob_SuperSetProcessedAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `onSetProcessedAmount` instead
    ///
    pub const OnSetProcessedAmount = onSetProcessedAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onSetProcessedAmount(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, i32, usize) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnSetProcessedAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setTotalAmount` instead
    ///
    pub const SetTotalAmount = setTotalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn setTotalAmount(self: KEMailClientLauncherJob, unit: i32, amount: usize) void {
        qtc.KEMailClientLauncherJob_SetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `superSetTotalAmount` instead
    ///
    pub const SuperSetTotalAmount = superSetTotalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn superSetTotalAmount(self: KEMailClientLauncherJob, unit: i32, amount: usize) void {
        qtc.KEMailClientLauncherJob_SuperSetTotalAmount(@ptrCast(self.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `onSetTotalAmount` instead
    ///
    pub const OnSetTotalAmount = onSetTotalAmount;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setTotalAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onSetTotalAmount(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, i32, usize) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnSetTotalAmount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setProgressUnit` instead
    ///
    pub const SetProgressUnit = setProgressUnit;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn setProgressUnit(self: KEMailClientLauncherJob, unit: i32) void {
        qtc.KEMailClientLauncherJob_SetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `superSetProgressUnit` instead
    ///
    pub const SuperSetProgressUnit = superSetProgressUnit;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    pub fn superSetProgressUnit(self: KEMailClientLauncherJob, unit: i32) void {
        qtc.KEMailClientLauncherJob_SuperSetProgressUnit(@ptrCast(self.ptr), @bitCast(unit));
    }

    /// ### DEPRECATED: Use `onSetProgressUnit` instead
    ///
    pub const OnSetProgressUnit = onSetProgressUnit;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setProgressUnit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, unit: kjob_enums.Unit) callconv(.c) void `
    ///
    pub fn onSetProgressUnit(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, i32) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnSetProgressUnit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPercent` instead
    ///
    pub const SetPercent = setPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn setPercent(self: KEMailClientLauncherJob, percentage: usize) void {
        qtc.KEMailClientLauncherJob_SetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// ### DEPRECATED: Use `superSetPercent` instead
    ///
    pub const SuperSetPercent = superSetPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` percentage: usize `
    ///
    pub fn superSetPercent(self: KEMailClientLauncherJob, percentage: usize) void {
        qtc.KEMailClientLauncherJob_SuperSetPercent(@ptrCast(self.ptr), @bitCast(percentage));
    }

    /// ### DEPRECATED: Use `onSetPercent` instead
    ///
    pub const OnSetPercent = onSetPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#setPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, percentage: usize) callconv(.c) void `
    ///
    pub fn onSetPercent(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, usize) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnSetPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `emitResult` instead
    ///
    pub const EmitResult = emitResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn emitResult(self: KEMailClientLauncherJob) void {
        qtc.KEMailClientLauncherJob_EmitResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEmitResult` instead
    ///
    pub const SuperEmitResult = superEmitResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn superEmitResult(self: KEMailClientLauncherJob) void {
        qtc.KEMailClientLauncherJob_SuperEmitResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEmitResult` instead
    ///
    pub const OnEmitResult = onEmitResult;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitResult)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEmitResult(self: KEMailClientLauncherJob, callback: *const fn () callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnEmitResult(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `emitPercent` instead
    ///
    pub const EmitPercent = emitPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _processedAmount: usize `
    ///
    /// ` _totalAmount: usize `
    ///
    pub fn emitPercent(self: KEMailClientLauncherJob, _processedAmount: usize, _totalAmount: usize) void {
        qtc.KEMailClientLauncherJob_EmitPercent(@ptrCast(self.ptr), @bitCast(_processedAmount), @bitCast(_totalAmount));
    }

    /// ### DEPRECATED: Use `superEmitPercent` instead
    ///
    pub const SuperEmitPercent = superEmitPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _processedAmount: usize `
    ///
    /// ` _totalAmount: usize `
    ///
    pub fn superEmitPercent(self: KEMailClientLauncherJob, _processedAmount: usize, _totalAmount: usize) void {
        qtc.KEMailClientLauncherJob_SuperEmitPercent(@ptrCast(self.ptr), @bitCast(_processedAmount), @bitCast(_totalAmount));
    }

    /// ### DEPRECATED: Use `onEmitPercent` instead
    ///
    pub const OnEmitPercent = onEmitPercent;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitPercent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, processedAmount: usize, totalAmount: usize) callconv(.c) void `
    ///
    pub fn onEmitPercent(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, usize, usize) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnEmitPercent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `emitSpeed` instead
    ///
    pub const EmitSpeed = emitSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn emitSpeed(self: KEMailClientLauncherJob, _speed: usize) void {
        qtc.KEMailClientLauncherJob_EmitSpeed(@ptrCast(self.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `superEmitSpeed` instead
    ///
    pub const SuperEmitSpeed = superEmitSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` _speed: usize `
    ///
    pub fn superEmitSpeed(self: KEMailClientLauncherJob, _speed: usize) void {
        qtc.KEMailClientLauncherJob_SuperEmitSpeed(@ptrCast(self.ptr), @bitCast(_speed));
    }

    /// ### DEPRECATED: Use `onEmitSpeed` instead
    ///
    pub const OnEmitSpeed = onEmitSpeed;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#emitSpeed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, speed: usize) callconv(.c) void `
    ///
    pub fn onEmitSpeed(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, usize) callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnEmitSpeed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `startElapsedTimer` instead
    ///
    pub const StartElapsedTimer = startElapsedTimer;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn startElapsedTimer(self: KEMailClientLauncherJob) void {
        qtc.KEMailClientLauncherJob_StartElapsedTimer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superStartElapsedTimer` instead
    ///
    pub const SuperStartElapsedTimer = superStartElapsedTimer;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn superStartElapsedTimer(self: KEMailClientLauncherJob) void {
        qtc.KEMailClientLauncherJob_SuperStartElapsedTimer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartElapsedTimer` instead
    ///
    pub const OnStartElapsedTimer = onStartElapsedTimer;

    /// Inherited from KJob
    ///
    /// ### [Upstream resources](https://api.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStartElapsedTimer(self: KEMailClientLauncherJob, callback: *const fn () callconv(.c) void) void {
        qtc.KEMailClientLauncherJob_OnStartElapsedTimer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn sender(self: KEMailClientLauncherJob) QObject {
        return .{ .ptr = qtc.KEMailClientLauncherJob_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn superSender(self: KEMailClientLauncherJob) QObject {
        return .{ .ptr = qtc.KEMailClientLauncherJob_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KEMailClientLauncherJob, callback: *const fn () callconv(.c) QObject) void {
        qtc.KEMailClientLauncherJob_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn senderSignalIndex(self: KEMailClientLauncherJob) i32 {
        return qtc.KEMailClientLauncherJob_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn superSenderSignalIndex(self: KEMailClientLauncherJob) i32 {
        return qtc.KEMailClientLauncherJob_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KEMailClientLauncherJob, callback: *const fn () callconv(.c) i32) void {
        qtc.KEMailClientLauncherJob_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KEMailClientLauncherJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KEMailClientLauncherJob_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KEMailClientLauncherJob, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KEMailClientLauncherJob_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, [*:0]const u8) callconv(.c) i32) void {
        qtc.KEMailClientLauncherJob_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KEMailClientLauncherJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KEMailClientLauncherJob_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KEMailClientLauncherJob, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KEMailClientLauncherJob_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KEMailClientLauncherJob`
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, QMetaMethod) callconv(.c) bool) void {
        qtc.KEMailClientLauncherJob_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn onFinished(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn onSuspended(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn onResumed(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob) callconv(.c) void `
    ///
    pub fn onResult(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onTotalAmountChanged(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob, i32, usize) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob, unit: kjob_enums.Unit, amount: usize) callconv(.c) void `
    ///
    pub fn onProcessedAmountChanged(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob, i32, usize) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, job: KJob, percent: usize) callconv(.c) void `
    ///
    pub fn onPercentChanged(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, KJob, usize) callconv(.c) void) void {
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
    /// ` self: KEMailClientLauncherJob `
    ///
    /// ` callback: *const fn (self: KEMailClientLauncherJob, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KEMailClientLauncherJob, callback: *const fn (KEMailClientLauncherJob, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kemailclientlauncherjob.html#dtor.KEMailClientLauncherJob)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KEMailClientLauncherJob `
    ///
    pub fn delete(self: KEMailClientLauncherJob) void {
        qtc.KEMailClientLauncherJob_Delete(@ptrCast(self.ptr));
    }
};
