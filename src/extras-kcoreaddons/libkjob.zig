const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kjob_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const struct_constu8_constu8 = extern struct { first: []const u8, second: []const u8 };

/// https://api-staging.kde.org/kjob.html
pub const kjob = struct {
    /// New constructs a new KJob object.
    ///
    ///
    pub fn New() QtC.KJob {
        return qtc.KJob_new();
    }

    /// New2 constructs a new KJob object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KJob {
        return qtc.KJob_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KJob ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KJob_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KJob, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KJob_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KJob_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KJob_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KJob_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KJob_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjob.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setUiDelegate)
    ///
    /// ``` self: QtC.KJob, delegate: QtC.KJobUiDelegate ```
    pub fn SetUiDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.KJob_SetUiDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#uiDelegate)
    ///
    /// ``` self: QtC.KJob ```
    pub fn UiDelegate(self: ?*anyopaque) QtC.KJobUiDelegate {
        return qtc.KJob_UiDelegate(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#capabilities)
    ///
    /// ``` self: QtC.KJob ```
    ///
    /// Returns: ``` flag of kjob_enums.Capability ```
    pub fn Capabilities(self: ?*anyopaque) i32 {
        return qtc.KJob_Capabilities(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isSuspended)
    ///
    /// ``` self: QtC.KJob ```
    pub fn IsSuspended(self: ?*anyopaque) bool {
        return qtc.KJob_IsSuspended(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#start)
    ///
    /// ``` self: QtC.KJob ```
    pub fn Start(self: ?*anyopaque) void {
        qtc.KJob_Start(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#start)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn () callconv(.c) void ```
    pub fn OnStart(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KJob_OnStart(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#start)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob ```
    pub fn QBaseStart(self: ?*anyopaque) void {
        qtc.KJob_QBaseStart(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#kill)
    ///
    /// ``` self: QtC.KJob ```
    pub fn Kill(self: ?*anyopaque) bool {
        return qtc.KJob_Kill(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#suspend)
    ///
    /// ``` self: QtC.KJob ```
    pub fn Suspend(self: ?*anyopaque) bool {
        return qtc.KJob_Suspend(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#resume)
    ///
    /// ``` self: QtC.KJob ```
    pub fn Resume(self: ?*anyopaque) bool {
        return qtc.KJob_Resume(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doKill)
    ///
    /// ``` self: QtC.KJob ```
    pub fn DoKill(self: ?*anyopaque) bool {
        return qtc.KJob_DoKill(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doKill)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn () callconv(.c) bool ```
    pub fn OnDoKill(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KJob_OnDoKill(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doKill)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob ```
    pub fn QBaseDoKill(self: ?*anyopaque) bool {
        return qtc.KJob_QBaseDoKill(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doSuspend)
    ///
    /// ``` self: QtC.KJob ```
    pub fn DoSuspend(self: ?*anyopaque) bool {
        return qtc.KJob_DoSuspend(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doSuspend)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn () callconv(.c) bool ```
    pub fn OnDoSuspend(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KJob_OnDoSuspend(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doSuspend)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob ```
    pub fn QBaseDoSuspend(self: ?*anyopaque) bool {
        return qtc.KJob_QBaseDoSuspend(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doResume)
    ///
    /// ``` self: QtC.KJob ```
    pub fn DoResume(self: ?*anyopaque) bool {
        return qtc.KJob_DoResume(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doResume)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn () callconv(.c) bool ```
    pub fn OnDoResume(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KJob_OnDoResume(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#doResume)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob ```
    pub fn QBaseDoResume(self: ?*anyopaque) bool {
        return qtc.KJob_QBaseDoResume(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setCapabilities)
    ///
    /// ``` self: QtC.KJob, capabilities: flag of kjob_enums.Capability ```
    pub fn SetCapabilities(self: ?*anyopaque, capabilities: i32) void {
        qtc.KJob_SetCapabilities(@ptrCast(self), @intCast(capabilities));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setCapabilities)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, capabilities: flag of kjob_enums.Capability) callconv(.c) void ```
    pub fn OnSetCapabilities(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KJob_OnSetCapabilities(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setCapabilities)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob, capabilities: flag of kjob_enums.Capability ```
    pub fn QBaseSetCapabilities(self: ?*anyopaque, capabilities: i32) void {
        qtc.KJob_QBaseSetCapabilities(@ptrCast(self), @intCast(capabilities));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#exec)
    ///
    /// ``` self: QtC.KJob ```
    pub fn Exec(self: ?*anyopaque) bool {
        return qtc.KJob_Exec(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#error)
    ///
    /// ``` self: QtC.KJob ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.KJob_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#errorText)
    ///
    /// ``` self: QtC.KJob, allocator: std.mem.Allocator ```
    pub fn ErrorText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KJob_ErrorText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjob.ErrorText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#errorString)
    ///
    /// ``` self: QtC.KJob, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KJob_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#errorString)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnErrorString(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.KJob_OnErrorString(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#errorString)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob, allocator: std.mem.Allocator ```
    pub fn QBaseErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KJob_QBaseErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjob.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#processedAmount)
    ///
    /// ``` self: QtC.KJob, unit: kjob_enums.Unit ```
    pub fn ProcessedAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_ProcessedAmount(@ptrCast(self), @intCast(unit));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#totalAmount)
    ///
    /// ``` self: QtC.KJob, unit: kjob_enums.Unit ```
    pub fn TotalAmount(self: ?*anyopaque, unit: i32) u64 {
        return qtc.KJob_TotalAmount(@ptrCast(self), @intCast(unit));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#percent)
    ///
    /// ``` self: QtC.KJob ```
    pub fn Percent(self: ?*anyopaque) u64 {
        return qtc.KJob_Percent(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setAutoDelete)
    ///
    /// ``` self: QtC.KJob, autodelete: bool ```
    pub fn SetAutoDelete(self: ?*anyopaque, autodelete: bool) void {
        qtc.KJob_SetAutoDelete(@ptrCast(self), autodelete);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isAutoDelete)
    ///
    /// ``` self: QtC.KJob ```
    pub fn IsAutoDelete(self: ?*anyopaque) bool {
        return qtc.KJob_IsAutoDelete(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KJob ```
    pub fn SetFinishedNotificationHidden(self: ?*anyopaque) void {
        qtc.KJob_SetFinishedNotificationHidden(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KJob ```
    pub fn IsFinishedNotificationHidden(self: ?*anyopaque) bool {
        return qtc.KJob_IsFinishedNotificationHidden(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isStartedWithExec)
    ///
    /// ``` self: QtC.KJob ```
    pub fn IsStartedWithExec(self: ?*anyopaque) bool {
        return qtc.KJob_IsStartedWithExec(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#elapsedTime)
    ///
    /// ``` self: QtC.KJob ```
    pub fn ElapsedTime(self: ?*anyopaque) i64 {
        return qtc.KJob_ElapsedTime(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KJob, job: QtC.KJob, title: []const u8 ```
    pub fn Description(self: ?*anyopaque, job: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.KJob_Description(@ptrCast(self), @ptrCast(job), title_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnDescription(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Description(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#infoMessage)
    ///
    /// ``` self: QtC.KJob, job: QtC.KJob, message: []const u8 ```
    pub fn InfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_InfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#infoMessage)
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnInfoMessage(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_InfoMessage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#warning)
    ///
    /// ``` self: QtC.KJob, job: QtC.KJob, message: []const u8 ```
    pub fn Warning(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJob_Warning(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#warning)
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnWarning(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_Connect_Warning(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#totalSize)
    ///
    /// ``` self: QtC.KJob, job: QtC.KJob, size: u64 ```
    pub fn TotalSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_TotalSize(@ptrCast(self), @ptrCast(job), @intCast(size));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#totalSize)
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob, size: u64) callconv(.c) void ```
    pub fn OnTotalSize(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#processedSize)
    ///
    /// ``` self: QtC.KJob, job: QtC.KJob, size: u64 ```
    pub fn ProcessedSize(self: ?*anyopaque, job: ?*anyopaque, size: u64) void {
        qtc.KJob_ProcessedSize(@ptrCast(self), @ptrCast(job), @intCast(size));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#processedSize)
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob, size: u64) callconv(.c) void ```
    pub fn OnProcessedSize(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#speed)
    ///
    /// ``` self: QtC.KJob, job: QtC.KJob, speed: u64 ```
    pub fn Speed(self: ?*anyopaque, job: ?*anyopaque, speed: u64) void {
        qtc.KJob_Speed(@ptrCast(self), @ptrCast(job), @intCast(speed));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#speed)
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob, speed: u64) callconv(.c) void ```
    pub fn OnSpeed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_Speed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isFinished)
    ///
    /// ``` self: QtC.KJob ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.KJob_IsFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isFinished)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn () callconv(.c) bool ```
    pub fn OnIsFinished(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KJob_OnIsFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#isFinished)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob ```
    pub fn QBaseIsFinished(self: ?*anyopaque) bool {
        return qtc.KJob_QBaseIsFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setError)
    ///
    /// ``` self: QtC.KJob, errorCode: i32 ```
    pub fn SetError(self: ?*anyopaque, errorCode: i32) void {
        qtc.KJob_SetError(@ptrCast(self), @intCast(errorCode));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, errorCode: i32) callconv(.c) void ```
    pub fn OnSetError(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KJob_OnSetError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setError)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob, errorCode: i32 ```
    pub fn QBaseSetError(self: ?*anyopaque, errorCode: i32) void {
        qtc.KJob_QBaseSetError(@ptrCast(self), @intCast(errorCode));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setErrorText)
    ///
    /// ``` self: QtC.KJob, errorText: []const u8 ```
    pub fn SetErrorText(self: ?*anyopaque, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KJob_SetErrorText(@ptrCast(self), errorText_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setErrorText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, errorText: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetErrorText(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJob_OnSetErrorText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setErrorText)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob, errorText: []const u8 ```
    pub fn QBaseSetErrorText(self: ?*anyopaque, errorText: []const u8) void {
        const errorText_str = qtc.libqt_string{
            .len = errorText.len,
            .data = errorText.ptr,
        };
        qtc.KJob_QBaseSetErrorText(@ptrCast(self), errorText_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProcessedAmount)
    ///
    /// ``` self: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn SetProcessedAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KJob_SetProcessedAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnSetProcessedAmount(self: ?*anyopaque, slot: fn (?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_OnSetProcessedAmount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProcessedAmount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseSetProcessedAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KJob_QBaseSetProcessedAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setTotalAmount)
    ///
    /// ``` self: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn SetTotalAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KJob_SetTotalAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setTotalAmount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnSetTotalAmount(self: ?*anyopaque, slot: fn (?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_OnSetTotalAmount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setTotalAmount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseSetTotalAmount(self: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KJob_QBaseSetTotalAmount(@ptrCast(self), @intCast(unit), @intCast(amount));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProgressUnit)
    ///
    /// ``` self: QtC.KJob, unit: kjob_enums.Unit ```
    pub fn SetProgressUnit(self: ?*anyopaque, unit: i32) void {
        qtc.KJob_SetProgressUnit(@ptrCast(self), @intCast(unit));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProgressUnit)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, unit: kjob_enums.Unit) callconv(.c) void ```
    pub fn OnSetProgressUnit(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KJob_OnSetProgressUnit(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setProgressUnit)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob, unit: kjob_enums.Unit ```
    pub fn QBaseSetProgressUnit(self: ?*anyopaque, unit: i32) void {
        qtc.KJob_QBaseSetProgressUnit(@ptrCast(self), @intCast(unit));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setPercent)
    ///
    /// ``` self: QtC.KJob, percentage: u64 ```
    pub fn SetPercent(self: ?*anyopaque, percentage: u64) void {
        qtc.KJob_SetPercent(@ptrCast(self), @intCast(percentage));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setPercent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, percentage: u64) callconv(.c) void ```
    pub fn OnSetPercent(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_OnSetPercent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setPercent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob, percentage: u64 ```
    pub fn QBaseSetPercent(self: ?*anyopaque, percentage: u64) void {
        qtc.KJob_QBaseSetPercent(@ptrCast(self), @intCast(percentage));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitResult)
    ///
    /// ``` self: QtC.KJob ```
    pub fn EmitResult(self: ?*anyopaque) void {
        qtc.KJob_EmitResult(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitResult)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn () callconv(.c) void ```
    pub fn OnEmitResult(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KJob_OnEmitResult(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitResult)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob ```
    pub fn QBaseEmitResult(self: ?*anyopaque) void {
        qtc.KJob_QBaseEmitResult(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitPercent)
    ///
    /// ``` self: QtC.KJob, processedAmount: u64, totalAmount: u64 ```
    pub fn EmitPercent(self: ?*anyopaque, processedAmount: u64, totalAmount: u64) void {
        qtc.KJob_EmitPercent(@ptrCast(self), @intCast(processedAmount), @intCast(totalAmount));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitPercent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, processedAmount: u64, totalAmount: u64) callconv(.c) void ```
    pub fn OnEmitPercent(self: ?*anyopaque, slot: fn (?*anyopaque, u64, u64) callconv(.c) void) void {
        qtc.KJob_OnEmitPercent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitPercent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob, processedAmount: u64, totalAmount: u64 ```
    pub fn QBaseEmitPercent(self: ?*anyopaque, processedAmount: u64, totalAmount: u64) void {
        qtc.KJob_QBaseEmitPercent(@ptrCast(self), @intCast(processedAmount), @intCast(totalAmount));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitSpeed)
    ///
    /// ``` self: QtC.KJob, speed: u64 ```
    pub fn EmitSpeed(self: ?*anyopaque, speed: u64) void {
        qtc.KJob_EmitSpeed(@ptrCast(self), @intCast(speed));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitSpeed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, speed: u64) callconv(.c) void ```
    pub fn OnEmitSpeed(self: ?*anyopaque, slot: fn (?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_OnEmitSpeed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#emitSpeed)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob, speed: u64 ```
    pub fn QBaseEmitSpeed(self: ?*anyopaque, speed: u64) void {
        qtc.KJob_QBaseEmitSpeed(@ptrCast(self), @intCast(speed));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#startElapsedTimer)
    ///
    /// ``` self: QtC.KJob ```
    pub fn StartElapsedTimer(self: ?*anyopaque) void {
        qtc.KJob_StartElapsedTimer(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJob, slot: fn () callconv(.c) void ```
    pub fn OnStartElapsedTimer(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KJob_OnStartElapsedTimer(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#startElapsedTimer)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJob ```
    pub fn QBaseStartElapsedTimer(self: ?*anyopaque) void {
        qtc.KJob_QBaseStartElapsedTimer(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KJob_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjob.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KJob_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjob.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#kill)
    ///
    /// ``` self: QtC.KJob, verbosity: kjob_enums.KillVerbosity ```
    pub fn Kill1(self: ?*anyopaque, verbosity: i32) bool {
        return qtc.KJob_Kill1(@ptrCast(self), @intCast(verbosity));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#setFinishedNotificationHidden)
    ///
    /// ``` self: QtC.KJob, hide: bool ```
    pub fn SetFinishedNotificationHidden1(self: ?*anyopaque, hide: bool) void {
        qtc.KJob_SetFinishedNotificationHidden1(@ptrCast(self), hide);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KJob, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8 ```
    pub fn Description3(self: ?*anyopaque, job: ?*anyopaque, title: []const u8, field1: struct_constu8_constu8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const field1_pair = qtc.libqt_pair{
            .first = @ptrCast(field1.first),
            .second = @ptrCast(field1.second),
        };
        qtc.KJob_Description3(@ptrCast(self), @ptrCast(job), title_str, field1_pair);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob, title: [*:0]const u8, field1: struct_constu8_constu8) callconv(.c) void ```
    pub fn OnDescription3(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8, struct_constu8_constu8) callconv(.c) void) void {
        qtc.KJob_Connect_Description3(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KJob, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8 ```
    pub fn Description4(self: ?*anyopaque, job: ?*anyopaque, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const field1_pair = qtc.libqt_pair{
            .first = @ptrCast(field1.first),
            .second = @ptrCast(field1.second),
        };
        const field2_pair = qtc.libqt_pair{
            .first = @ptrCast(field2.first),
            .second = @ptrCast(field2.second),
        };
        qtc.KJob_Description4(@ptrCast(self), @ptrCast(job), title_str, field1_pair, field2_pair);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#description)
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob, title: [*:0]const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8) callconv(.c) void ```
    pub fn OnDescription4(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8, struct_constu8_constu8, struct_constu8_constu8) callconv(.c) void) void {
        qtc.KJob_Connect_Description4(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KJob, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjob.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KJob, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KJob ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KJob ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KJob ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KJob ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KJob, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KJob ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KJob, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KJob, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KJob, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KJob, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KJob, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kjob.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KJob, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KJob, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KJob, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KJob, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KJob ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KJob ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KJob, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KJob, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KJob, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kjob.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kjob.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KJob ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KJob ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KJob ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KJob ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KJob, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KJob ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KJob, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KJob, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KJob, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KJob, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJob, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KJob_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KJob_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KJob_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJob, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KJob_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KJob_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KJob_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJob, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJob_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJob_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJob, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJob_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJob_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJob, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJob_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJob_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJob, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KJob_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KJob_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJob, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KJob_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KJob_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJob ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KJob_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJob ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KJob_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KJob_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJob ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KJob_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJob ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KJob_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KJob_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJob, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KJob_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KJob_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KJob_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJob, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KJob_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KJob_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KJob_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#suspended)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSuspended(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Suspended(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#resumed)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResumed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Resumed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#result)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResult(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJob_Connect_Result(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#totalAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnTotalAmountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_TotalAmountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#processedAmountChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnProcessedAmountChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJob_Connect_ProcessedAmountChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#percentChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, job: QtC.KJob, percent: u64) callconv(.c) void ```
    pub fn OnPercentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJob_Connect_PercentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KJob, slot: fn (self: QtC.KJob, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjob.html#dtor.KJob)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KJob ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KJob_Delete(@ptrCast(self));
    }
};

/// https://api-staging.kde.org/kjob.html#types
pub const enums = struct {
    pub const Unit = enum {
        pub const Bytes: i32 = 0;
        pub const Files: i32 = 1;
        pub const Directories: i32 = 2;
        pub const Items: i32 = 3;
        pub const UnitsCount: i32 = 4;
    };

    pub const Capability = enum {
        pub const NoCapabilities: i32 = 0;
        pub const Killable: i32 = 1;
        pub const Suspendable: i32 = 2;
    };

    pub const KillVerbosity = enum {
        pub const Quietly: i32 = 0;
        pub const EmitResult: i32 = 1;
    };

    pub const KJob = enum {
        pub const NoError: i32 = 0;
        pub const KilledJobError: i32 = 1;
        pub const UserDefinedError: i32 = 100;
    };
};
