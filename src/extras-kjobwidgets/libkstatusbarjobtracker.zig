const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const kstatusbarjobtracker_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const struct_constu8_constu8 = extern struct { first: []const u8, second: []const u8 };

/// https://api.kde.org/kstatusbarjobtracker.html
pub const kstatusbarjobtracker = struct {
    /// New constructs a new KStatusBarJobTracker object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.KStatusBarJobTracker {
        return qtc.KStatusBarJobTracker_new(@ptrCast(parent));
    }

    /// New2 constructs a new KStatusBarJobTracker object.
    ///
    ///
    pub fn New2() QtC.KStatusBarJobTracker {
        return qtc.KStatusBarJobTracker_new2();
    }

    /// New3 constructs a new KStatusBarJobTracker object.
    ///
    /// ``` parent: QtC.QWidget, button: bool ```
    pub fn New3(parent: ?*anyopaque, button: bool) QtC.KStatusBarJobTracker {
        return qtc.KStatusBarJobTracker_new3(@ptrCast(parent), button);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KStatusBarJobTracker_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KStatusBarJobTracker, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KStatusBarJobTracker_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KStatusBarJobTracker, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KStatusBarJobTracker_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KStatusBarJobTracker_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KStatusBarJobTracker, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KStatusBarJobTracker_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KStatusBarJobTracker_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusbarjobtracker.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#registerJob)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn RegisterJob(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_RegisterJob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#registerJob)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnRegisterJob(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnRegisterJob(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#registerJob)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn QBaseRegisterJob(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseRegisterJob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#unregisterJob)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn UnregisterJob(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_UnregisterJob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#unregisterJob)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnUnregisterJob(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnUnregisterJob(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#unregisterJob)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn QBaseUnregisterJob(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseUnregisterJob(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#widget)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn Widget(self: ?*anyopaque, job: ?*anyopaque) QtC.QWidget {
        return qtc.KStatusBarJobTracker_Widget(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.KStatusBarJobTracker_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn QBaseWidget(self: ?*anyopaque, job: ?*anyopaque) QtC.QWidget {
        return qtc.KStatusBarJobTracker_QBaseWidget(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#setStatusBarMode)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, statusBarMode: flag of kstatusbarjobtracker_enums.StatusBarMode ```
    pub fn SetStatusBarMode(self: ?*anyopaque, statusBarMode: i32) void {
        qtc.KStatusBarJobTracker_SetStatusBarMode(@ptrCast(self), @intCast(statusBarMode));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#description)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8 ```
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
        qtc.KStatusBarJobTracker_Description(@ptrCast(self), @ptrCast(job), title_str, field1_pair, field2_pair);
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#description)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob, title: [*:0]const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8) callconv(.c) void ```
    pub fn OnDescription(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8, struct_constu8_constu8, struct_constu8_constu8) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnDescription(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#description)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, title: []const u8, field1: struct_constu8_constu8, field2: struct_constu8_constu8 ```
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
        qtc.KStatusBarJobTracker_QBaseDescription(@ptrCast(self), @ptrCast(job), title_str, field1_pair, field2_pair);
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#totalAmount)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn TotalAmount(self: ?*anyopaque, job: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KStatusBarJobTracker_TotalAmount(@ptrCast(self), @ptrCast(job), @intCast(unit), @intCast(amount));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#totalAmount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnTotalAmount(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnTotalAmount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#totalAmount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseTotalAmount(self: ?*anyopaque, job: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KStatusBarJobTracker_QBaseTotalAmount(@ptrCast(self), @ptrCast(job), @intCast(unit), @intCast(amount));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#percent)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, percent: u64 ```
    pub fn Percent(self: ?*anyopaque, job: ?*anyopaque, percent: u64) void {
        qtc.KStatusBarJobTracker_Percent(@ptrCast(self), @ptrCast(job), @intCast(percent));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#percent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob, percent: u64) callconv(.c) void ```
    pub fn OnPercent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnPercent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#percent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, percent: u64 ```
    pub fn QBasePercent(self: ?*anyopaque, job: ?*anyopaque, percent: u64) void {
        qtc.KStatusBarJobTracker_QBasePercent(@ptrCast(self), @ptrCast(job), @intCast(percent));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#speed)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, value: u64 ```
    pub fn Speed(self: ?*anyopaque, job: ?*anyopaque, value: u64) void {
        qtc.KStatusBarJobTracker_Speed(@ptrCast(self), @ptrCast(job), @intCast(value));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#speed)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob, value: u64) callconv(.c) void ```
    pub fn OnSpeed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u64) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnSpeed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#speed)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, value: u64 ```
    pub fn QBaseSpeed(self: ?*anyopaque, job: ?*anyopaque, value: u64) void {
        qtc.KStatusBarJobTracker_QBaseSpeed(@ptrCast(self), @ptrCast(job), @intCast(value));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#slotClean)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn SlotClean(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_SlotClean(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#slotClean)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSlotClean(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnSlotClean(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#slotClean)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn QBaseSlotClean(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseSlotClean(@ptrCast(self), @ptrCast(job));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KStatusBarJobTracker_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusbarjobtracker.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KStatusBarJobTracker_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusbarjobtracker.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#setStopOnClose)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, stopOnClose: bool ```
    pub fn SetStopOnClose(self: ?*anyopaque, job: ?*anyopaque, stopOnClose: bool) void {
        qtc.KAbstractWidgetJobTracker_SetStopOnClose(@ptrCast(self), @ptrCast(job), stopOnClose);
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopOnClose)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn StopOnClose(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KAbstractWidgetJobTracker_StopOnClose(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#setAutoDelete)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, autoDelete: bool ```
    pub fn SetAutoDelete(self: ?*anyopaque, job: ?*anyopaque, autoDelete: bool) void {
        qtc.KAbstractWidgetJobTracker_SetAutoDelete(@ptrCast(self), @ptrCast(job), autoDelete);
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#autoDelete)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn AutoDelete(self: ?*anyopaque, job: ?*anyopaque) bool {
        return qtc.KAbstractWidgetJobTracker_AutoDelete(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn Stopped(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KAbstractWidgetJobTracker_Stopped(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnStopped(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KAbstractWidgetJobTracker_Connect_Stopped(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn Suspend(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KAbstractWidgetJobTracker_Suspend(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSuspend(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KAbstractWidgetJobTracker_Connect_Suspend(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn Resume(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KAbstractWidgetJobTracker_Resume(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResume(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KAbstractWidgetJobTracker_Connect_Resume(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kstatusbarjobtracker.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, name: []const u8 ```
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
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kstatusbarjobtracker.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, obj: QtC.QObject ```
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
    /// ``` self: QtC.KStatusBarJobTracker, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kstatusbarjobtracker.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kstatusbarjobtracker.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KStatusBarJobTracker, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn Finished(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_Finished(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn QBaseFinished(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseFinished(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#finished)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn SlotStop(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_SlotStop(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn QBaseSlotStop(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseSlotStop(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotStop)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSlotStop(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnSlotStop(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn SlotSuspend(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_SlotSuspend(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn QBaseSlotSuspend(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseSlotSuspend(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotSuspend)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSlotSuspend(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnSlotSuspend(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn SlotResume(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_SlotResume(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn QBaseSlotResume(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseSlotResume(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// [Qt documentation](https://api.kde.org/kabstractwidgetjobtracker.html#slotResume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSlotResume(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnSlotResume(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#suspended)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn Suspended(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_Suspended(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#suspended)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn QBaseSuspended(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseSuspended(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#suspended)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnSuspended(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnSuspended(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#resumed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn Resumed(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_Resumed(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#resumed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob ```
    pub fn QBaseResumed(self: ?*anyopaque, job: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseResumed(@ptrCast(self), @ptrCast(job));
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#resumed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob) callconv(.c) void ```
    pub fn OnResumed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnResumed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#infoMessage)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, message: []const u8 ```
    pub fn InfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KStatusBarJobTracker_InfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#infoMessage)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, message: []const u8 ```
    pub fn QBaseInfoMessage(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KStatusBarJobTracker_QBaseInfoMessage(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#infoMessage)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnInfoMessage(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnInfoMessage(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, message: []const u8 ```
    pub fn Warning(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KStatusBarJobTracker_Warning(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, message: []const u8 ```
    pub fn QBaseWarning(self: ?*anyopaque, job: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KStatusBarJobTracker_QBaseWarning(@ptrCast(self), @ptrCast(job), message_str);
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#warning)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob, message: [*:0]const u8) callconv(.c) void ```
    pub fn OnWarning(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnWarning(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#processedAmount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn ProcessedAmount(self: ?*anyopaque, job: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KStatusBarJobTracker_ProcessedAmount(@ptrCast(self), @ptrCast(job), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#processedAmount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64 ```
    pub fn QBaseProcessedAmount(self: ?*anyopaque, job: ?*anyopaque, unit: i32, amount: u64) void {
        qtc.KStatusBarJobTracker_QBaseProcessedAmount(@ptrCast(self), @ptrCast(job), @intCast(unit), @intCast(amount));
    }

    /// Inherited from KJobTrackerInterface
    ///
    /// [Qt documentation](https://api.kde.org/kjobtrackerinterface.html#processedAmount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, job: QtC.KJob, unit: kjob_enums.Unit, amount: u64) callconv(.c) void ```
    pub fn OnProcessedAmount(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, u64) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnProcessedAmount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KStatusBarJobTracker_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KStatusBarJobTracker_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KStatusBarJobTracker_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KStatusBarJobTracker_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KStatusBarJobTracker_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KStatusBarJobTracker_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KStatusBarJobTracker_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KStatusBarJobTracker_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KStatusBarJobTracker_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KStatusBarJobTracker_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KStatusBarJobTracker_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KStatusBarJobTracker_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KStatusBarJobTracker_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStatusBarJobTracker_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KStatusBarJobTracker_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KStatusBarJobTracker_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KStatusBarJobTracker_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KStatusBarJobTracker_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KStatusBarJobTracker_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KStatusBarJobTracker, slot: fn (self: QtC.KStatusBarJobTracker, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kstatusbarjobtracker.html#dtor.KStatusBarJobTracker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KStatusBarJobTracker ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KStatusBarJobTracker_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kstatusbarjobtracker.html#types
pub const enums = struct {
    pub const StatusBarMode = enum {
        pub const NoInformation: i32 = 0;
        pub const LabelOnly: i32 = 1;
        pub const ProgressOnly: i32 = 2;
    };
};
