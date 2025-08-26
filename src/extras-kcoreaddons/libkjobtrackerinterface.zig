const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kjob_enums = @import("libkjob.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const struct_constu8_constu8 = extern struct { first: []const u8, second: []const u8 };

/// https://api-staging.kde.org/kjobtrackerinterface.html
pub const kjobtrackerinterface = struct {
    /// New constructs a new KJobTrackerInterface object.
    ///
    ///
    pub fn New() QtC.KJobTrackerInterface {
        return qtc.KJobTrackerInterface_new();
    }

    /// New2 constructs a new KJobTrackerInterface object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KJobTrackerInterface {
        return qtc.KJobTrackerInterface_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KJobTrackerInterface_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KJobTrackerInterface, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KJobTrackerInterface_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KJobTrackerInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KJobTrackerInterface_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KJobTrackerInterface_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KJobTrackerInterface_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KJobTrackerInterface_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjobtrackerinterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#registerJob)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob ```
    pub fn RegisterJob(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KJobTrackerInterface_RegisterJob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#registerJob)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob) callconv(.c) void ```
    pub fn OnRegisterJob(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnRegisterJob(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#registerJob)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob ```
    pub fn QBaseRegisterJob(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KJobTrackerInterface_QBaseRegisterJob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#unregisterJob)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob ```
    pub fn UnregisterJob(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KJobTrackerInterface_UnregisterJob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#unregisterJob)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob) callconv(.c) void ```
    pub fn OnUnregisterJob(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnUnregisterJob(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#unregisterJob)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob ```
    pub fn QBaseUnregisterJob(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KJobTrackerInterface_QBaseUnregisterJob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#finished)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob ```
    pub fn Finished(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KJobTrackerInterface_Finished(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#finished)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#finished)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob ```
    pub fn QBaseFinished(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KJobTrackerInterface_QBaseFinished(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#suspended)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob ```
    pub fn Suspended(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KJobTrackerInterface_Suspended(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#suspended)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSuspended(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnSuspended(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#suspended)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob ```
    pub fn QBaseSuspended(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KJobTrackerInterface_QBaseSuspended(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#resumed)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob ```
    pub fn Resumed(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KJobTrackerInterface_Resumed(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#resumed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResumed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnResumed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#resumed)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob ```
    pub fn QBaseResumed(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KJobTrackerInterface_QBaseResumed(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#description)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8 ```
    pub fn Description(self: ?*anyopaque, job: ?*anyopaque, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8) void {
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
        qtc.KJobTrackerInterface_Description(@ptrCast(self), @ptrCast(job), title_str, field1_pair, field2_pair);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#description)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob, title: [*:0]const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8) callconv(.c) void ```
    pub fn OnDescription(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8, struct_constu8_constu8, struct_constu8_constu8) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnDescription(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#description)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8 ```
    pub fn QBaseDescription(self: ?*anyopaque, job: ?*anyopaque, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8) void {
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
        qtc.KJobTrackerInterface_QBaseDescription(@ptrCast(self), @ptrCast(job), title_str, field1_pair, field2_pair);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#infoMessage)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, message: []const u8 ```
    pub fn InfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJobTrackerInterface_InfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#infoMessage)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnInfoMessage(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnInfoMessage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#infoMessage)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, message: []const u8 ```
    pub fn QBaseInfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJobTrackerInterface_QBaseInfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#warning)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, message: []const u8 ```
    pub fn Warning(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJobTrackerInterface_Warning(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#warning)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnWarning(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnWarning(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#warning)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, message: []const u8 ```
    pub fn QBaseWarning(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KJobTrackerInterface_QBaseWarning(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#totalAmount)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn TotalAmount(self: ?*anyopaque, job: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KJobTrackerInterface_TotalAmount(@ptrCast(self), @ptrCast(job), @intCast(unit), @intCast(amount));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#totalAmount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnTotalAmount(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnTotalAmount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#totalAmount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseTotalAmount(self: ?*anyopaque, job: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KJobTrackerInterface_QBaseTotalAmount(@ptrCast(self), @ptrCast(job), @intCast(unit), @intCast(amount));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#processedAmount)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn ProcessedAmount(self: ?*anyopaque, job: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KJobTrackerInterface_ProcessedAmount(@ptrCast(self), @ptrCast(job), @intCast(unit), @intCast(amount));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#processedAmount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnProcessedAmount(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnProcessedAmount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#processedAmount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseProcessedAmount(self: ?*anyopaque, job: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KJobTrackerInterface_QBaseProcessedAmount(@ptrCast(self), @ptrCast(job), @intCast(unit), @intCast(amount));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#percent)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, percent: u64 ```
    pub fn Percent(self: ?*anyopaque, job: ?*anyopaque, percent: u64) void {
        qtc.KJobTrackerInterface_Percent(@ptrCast(self), @ptrCast(job), @intCast(percent));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#percent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob, percent: u64) callconv(.c) void ```
    pub fn OnPercent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnPercent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#percent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, percent: u64 ```
    pub fn QBasePercent(self: ?*anyopaque, job: ?*anyopaque, percent: u64) void {
        qtc.KJobTrackerInterface_QBasePercent(@ptrCast(self), @ptrCast(job), @intCast(percent));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#speed)
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, value: u64 ```
    pub fn Speed(self: ?*anyopaque, job: ?*anyopaque, value: u64) void {
        qtc.KJobTrackerInterface_Speed(@ptrCast(self), @ptrCast(job), @intCast(value));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#speed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, job: QtC.KJob, value: u64) callconv(.c) void ```
    pub fn OnSpeed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnSpeed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#speed)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KJobTrackerInterface, job: QtC.KJob, value: u64 ```
    pub fn QBaseSpeed(self: ?*anyopaque, job: ?*anyopaque, value: u64) void {
        qtc.KJobTrackerInterface_QBaseSpeed(@ptrCast(self), @ptrCast(job), @intCast(value));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KJobTrackerInterface_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjobtrackerinterface.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KJobTrackerInterface_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjobtrackerinterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KJobTrackerInterface, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kjobtrackerinterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KJobTrackerInterface, name: []const u8 ```
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
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KJobTrackerInterface, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KJobTrackerInterface, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KJobTrackerInterface, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KJobTrackerInterface, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KJobTrackerInterface, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KJobTrackerInterface, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kjobtrackerinterface.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KJobTrackerInterface, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KJobTrackerInterface, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KJobTrackerInterface, obj: QtC.QObject ```
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
    /// ``` self: QtC.KJobTrackerInterface, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KJobTrackerInterface, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KJobTrackerInterface, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KJobTrackerInterface, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kjobtrackerinterface.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kjobtrackerinterface.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KJobTrackerInterface, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KJobTrackerInterface, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KJobTrackerInterface, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KJobTrackerInterface, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KJobTrackerInterface, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KJobTrackerInterface_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KJobTrackerInterface_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KJobTrackerInterface_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KJobTrackerInterface_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KJobTrackerInterface_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KJobTrackerInterface_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJobTrackerInterface_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJobTrackerInterface_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJobTrackerInterface_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJobTrackerInterface_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJobTrackerInterface_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KJobTrackerInterface_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KJobTrackerInterface_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KJobTrackerInterface_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KJobTrackerInterface_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KJobTrackerInterface_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KJobTrackerInterface_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KJobTrackerInterface_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KJobTrackerInterface_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KJobTrackerInterface_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KJobTrackerInterface_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KJobTrackerInterface_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KJobTrackerInterface_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KJobTrackerInterface_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KJobTrackerInterface_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KJobTrackerInterface_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KJobTrackerInterface_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KJobTrackerInterface_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KJobTrackerInterface_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KJobTrackerInterface, slot: fn (self: QtC.KJobTrackerInterface, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kjobtrackerinterface.html#dtor.KJobTrackerInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KJobTrackerInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KJobTrackerInterface_Delete(@ptrCast(self));
    }
};
