const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KJob = @import("libqt6").KJob;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const kjob_enums = @import("../extras-kcoreaddons/libkjob.zig").enums;
const kstatusbarjobtracker_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const Struct_constu8_constu8 = struct { first: []const u8, second: []const u8 };

/// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html)
pub const KStatusBarJobTracker = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KStatusBarJobTracker,

    pub const _is_KStatusBarJobTracker = {};
    pub const _is_KAbstractWidgetJobTracker = {};
    pub const _is_KJobTrackerInterface = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KStatusBarJobTracker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) KStatusBarJobTracker {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KStatusBarJobTracker_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KStatusBarJobTracker object in C++ memory
    ///
    pub fn new2() KStatusBarJobTracker {
        return .{ .ptr = qtc.KStatusBarJobTracker_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KStatusBarJobTracker object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    /// ` button: bool `
    ///
    pub fn new3(_parent: anytype, button: bool) KStatusBarJobTracker {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KStatusBarJobTracker_new3(@ptrCast(_parent.ptr), button) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn metaObject(self: KStatusBarJobTracker) QMetaObject {
        return .{ .ptr = qtc.KStatusBarJobTracker_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KStatusBarJobTracker, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KStatusBarJobTracker_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KStatusBarJobTracker, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KStatusBarJobTracker_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusBarJobTracker.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `registerJob` instead
    ///
    pub const RegisterJob = registerJob;

    /// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html#registerJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn registerJob(self: KStatusBarJobTracker, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KStatusBarJobTracker_RegisterJob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `unregisterJob` instead
    ///
    pub const UnregisterJob = unregisterJob;

    /// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html#unregisterJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn unregisterJob(self: KStatusBarJobTracker, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KStatusBarJobTracker_UnregisterJob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn widget(self: KStatusBarJobTracker, job: anytype) QWidget {
        comptime _ = @TypeOf(job)._is_KJob;
        return .{ .ptr = qtc.KStatusBarJobTracker_Widget(@ptrCast(self.ptr), @ptrCast(job.ptr)) };
    }

    /// ### DEPRECATED: Use `setStatusBarMode` instead
    ///
    pub const SetStatusBarMode = setStatusBarMode;

    /// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html#setStatusBarMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` statusBarMode: flag of kstatusbarjobtracker_enums.StatusBarMode `
    ///
    pub fn setStatusBarMode(self: KStatusBarJobTracker, statusBarMode: i32) void {
        qtc.KStatusBarJobTracker_SetStatusBarMode(@ptrCast(self.ptr), @bitCast(statusBarMode));
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    /// ` title: []const u8 `
    ///
    /// ` field1: Struct_constu8_constu8 `
    ///
    /// ` field2: Struct_constu8_constu8 `
    ///
    pub fn description(self: KStatusBarJobTracker, job: anytype, title: []const u8, field1: Struct_constu8_constu8, field2: Struct_constu8_constu8) void {
        comptime _ = @TypeOf(job)._is_KJob;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        var field1_first_str = qtc.libqt_string{
            .len = field1.first.len,
            .data = field1.first.ptr,
        };
        var field1_second_str = qtc.libqt_string{
            .len = field1.second.len,
            .data = field1.second.ptr,
        };
        const field1_pair = qtc.libqt_pair{
            .first = @ptrCast(&field1_first_str),
            .second = @ptrCast(&field1_second_str),
        };
        var field2_first_str = qtc.libqt_string{
            .len = field2.first.len,
            .data = field2.first.ptr,
        };
        var field2_second_str = qtc.libqt_string{
            .len = field2.second.len,
            .data = field2.second.ptr,
        };
        const field2_pair = qtc.libqt_pair{
            .first = @ptrCast(&field2_first_str),
            .second = @ptrCast(&field2_second_str),
        };
        qtc.KStatusBarJobTracker_Description(@ptrCast(self.ptr), @ptrCast(job.ptr), title_str, field1_pair, field2_pair);
    }

    /// ### DEPRECATED: Use `totalAmount` instead
    ///
    pub const TotalAmount = totalAmount;

    /// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html#totalAmount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    /// ` unit: kjob_enums.Unit `
    ///
    /// ` amount: usize `
    ///
    pub fn totalAmount(self: KStatusBarJobTracker, job: anytype, unit: i32, amount: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KStatusBarJobTracker_TotalAmount(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(unit), @bitCast(amount));
    }

    /// ### DEPRECATED: Use `percent` instead
    ///
    pub const Percent = percent;

    /// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html#percent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    /// ` _percent: usize `
    ///
    pub fn percent(self: KStatusBarJobTracker, job: anytype, _percent: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KStatusBarJobTracker_Percent(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(_percent));
    }

    /// ### DEPRECATED: Use `speed` instead
    ///
    pub const Speed = speed;

    /// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html#speed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    /// ` value: usize `
    ///
    pub fn speed(self: KStatusBarJobTracker, job: anytype, value: usize) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KStatusBarJobTracker_Speed(@ptrCast(self.ptr), @ptrCast(job.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `slotClean` instead
    ///
    pub const SlotClean = slotClean;

    /// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html#slotClean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn slotClean(self: KStatusBarJobTracker, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KStatusBarJobTracker_SlotClean(@ptrCast(self.ptr), @ptrCast(job.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusBarJobTracker.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusBarJobTracker.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStopOnClose` instead
    ///
    pub const SetStopOnClose = setStopOnClose;

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#setStopOnClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    /// ` _stopOnClose: bool `
    ///
    pub fn setStopOnClose(self: KStatusBarJobTracker, job: anytype, _stopOnClose: bool) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KAbstractWidgetJobTracker_SetStopOnClose(@ptrCast(self.ptr), @ptrCast(job.ptr), _stopOnClose);
    }

    /// ### DEPRECATED: Use `stopOnClose` instead
    ///
    pub const StopOnClose = stopOnClose;

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#stopOnClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn stopOnClose(self: KStatusBarJobTracker, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KAbstractWidgetJobTracker_StopOnClose(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDelete` instead
    ///
    pub const SetAutoDelete = setAutoDelete;

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    /// ` _autoDelete: bool `
    ///
    pub fn setAutoDelete(self: KStatusBarJobTracker, job: anytype, _autoDelete: bool) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KAbstractWidgetJobTracker_SetAutoDelete(@ptrCast(self.ptr), @ptrCast(job.ptr), _autoDelete);
    }

    /// ### DEPRECATED: Use `autoDelete` instead
    ///
    pub const AutoDelete = autoDelete;

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#autoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn autoDelete(self: KStatusBarJobTracker, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KAbstractWidgetJobTracker_AutoDelete(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `stopped` instead
    ///
    pub const Stopped = stopped;

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn stopped(self: KStatusBarJobTracker, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KAbstractWidgetJobTracker_Stopped(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onStopped` instead
    ///
    pub const OnStopped = onStopped;

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` callback: *const fn (self: KStatusBarJobTracker, job: KJob) callconv(.c) void `
    ///
    pub fn onStopped(self: KStatusBarJobTracker, callback: *const fn (KStatusBarJobTracker, KJob) callconv(.c) void) void {
        qtc.KAbstractWidgetJobTracker_Connect_Stopped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `suspend0` instead
    ///
    pub const Suspend = suspend0;

    pub const @"suspend" = suspend0;

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn suspend0(self: KStatusBarJobTracker, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KAbstractWidgetJobTracker_Suspend(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onSuspend` instead
    ///
    pub const OnSuspend = onSuspend;

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` callback: *const fn (self: KStatusBarJobTracker, job: KJob) callconv(.c) void `
    ///
    pub fn onSuspend(self: KStatusBarJobTracker, callback: *const fn (KStatusBarJobTracker, KJob) callconv(.c) void) void {
        qtc.KAbstractWidgetJobTracker_Connect_Suspend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn resume0(self: KStatusBarJobTracker, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KAbstractWidgetJobTracker_Resume(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### DEPRECATED: Use `onResume` instead
    ///
    pub const OnResume = onResume;

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
    ///
    /// ## Parameters:
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` callback: *const fn (self: KStatusBarJobTracker, job: KJob) callconv(.c) void `
    ///
    pub fn onResume(self: KStatusBarJobTracker, callback: *const fn (KStatusBarJobTracker, KJob) callconv(.c) void) void {
        qtc.KAbstractWidgetJobTracker_Connect_Resume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KStatusBarJobTracker, _event: anytype) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KStatusBarJobTracker, watched: anytype, _event: anytype) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KStatusBarJobTracker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KStatusBarJobTracker.objectName: Memory allocation failed");
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KStatusBarJobTracker, name: []const u8) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn isWidgetType(self: KStatusBarJobTracker) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn isWindowType(self: KStatusBarJobTracker) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn isQuickItemType(self: KStatusBarJobTracker) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn signalsBlocked(self: KStatusBarJobTracker) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KStatusBarJobTracker, b: bool) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn thread(self: KStatusBarJobTracker) QThread {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KStatusBarJobTracker, _thread: anytype) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KStatusBarJobTracker, interval: i32) i32 {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KStatusBarJobTracker, time: i64) i32 {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KStatusBarJobTracker, id: i32) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KStatusBarJobTracker, id: i32) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KStatusBarJobTracker, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KStatusBarJobTracker.children: Memory allocation failed");
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KStatusBarJobTracker, _parent: anytype) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KStatusBarJobTracker, filterObj: anytype) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KStatusBarJobTracker, obj: anytype) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KStatusBarJobTracker, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn disconnect3(self: KStatusBarJobTracker) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KStatusBarJobTracker, receiver: anytype) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn dumpObjectTree(self: KStatusBarJobTracker) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn dumpObjectInfo(self: KStatusBarJobTracker) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KStatusBarJobTracker, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KStatusBarJobTracker, name: [:0]const u8) QVariant {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KStatusBarJobTracker, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KStatusBarJobTracker.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KStatusBarJobTracker.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn bindingStorage(self: KStatusBarJobTracker) QBindingStorage {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn bindingStorage2(self: KStatusBarJobTracker) QBindingStorage {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn destroyed(self: KStatusBarJobTracker) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` callback: *const fn (self: KStatusBarJobTracker) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KStatusBarJobTracker, callback: *const fn (KStatusBarJobTracker) callconv(.c) void) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn parent(self: KStatusBarJobTracker) QObject {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KStatusBarJobTracker, classname: [:0]const u8) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn deleteLater(self: KStatusBarJobTracker) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KStatusBarJobTracker, interval: i32, timerType: i32) i32 {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KStatusBarJobTracker, time: i64, timerType: i32) i32 {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KStatusBarJobTracker, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KStatusBarJobTracker, signal: [:0]const u8) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KStatusBarJobTracker, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KStatusBarJobTracker, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KStatusBarJobTracker, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KStatusBarJobTracker, param1: anytype) void {
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` callback: *const fn (self: KStatusBarJobTracker, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KStatusBarJobTracker, callback: *const fn (KStatusBarJobTracker, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KStatusBarJobTracker `
    ///
    /// ` callback: *const fn (self: KStatusBarJobTracker, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KStatusBarJobTracker, callback: *const fn (KStatusBarJobTracker, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html#dtor.KStatusBarJobTracker)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KStatusBarJobTracker `
    ///
    pub fn delete(self: KStatusBarJobTracker) void {
        qtc.KStatusBarJobTracker_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kstatusbarjobtracker.html#public-types)
pub const enums = struct {
    pub const StatusBarMode = enum {
        pub const NoInformation: i32 = 0;
        pub const LabelOnly: i32 = 1;
        pub const ProgressOnly: i32 = 2;
    };
};
