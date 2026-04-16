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
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kwidgetjobtracker.html)
pub const KWidgetJobTracker = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kwidgetjobtracker.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KWidgetJobTracker,

    pub const _is_KWidgetJobTracker = {};
    pub const _is_KAbstractWidgetJobTracker = {};
    pub const _is_KJobTrackerInterface = {};
    pub const _is_QObject = {};

    /// New constructs a new KWidgetJobTracker object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KWidgetJobTracker {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KWidgetJobTracker_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KWidgetJobTracker object.
    ///
    pub fn New2() KWidgetJobTracker {
        return .{ .ptr = qtc.KWidgetJobTracker_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn MetaObject(self: KWidgetJobTracker) QMetaObject {
        return .{ .ptr = qtc.KWidgetJobTracker_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KWidgetJobTracker, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KWidgetJobTracker_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KWidgetJobTracker, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KWidgetJobTracker_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetjobtracker.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetjobtracker.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn Widget(self: KWidgetJobTracker, job: anytype) QWidget {
        comptime _ = @TypeOf(job)._is_KJob;
        return .{ .ptr = qtc.KWidgetJobTracker_Widget(@ptrCast(self.ptr), @ptrCast(job.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetjobtracker.html#registerJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn RegisterJob(self: KWidgetJobTracker, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KWidgetJobTracker_RegisterJob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetjobtracker.html#unregisterJob)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn UnregisterJob(self: KWidgetJobTracker, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KWidgetJobTracker_UnregisterJob(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kwidgetjobtracker.html#keepOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn KeepOpen(self: KWidgetJobTracker, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KWidgetJobTracker_KeepOpen(@ptrCast(self.ptr), @ptrCast(job.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetjobtracker.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetjobtracker.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#setStopOnClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` job: KJob `
    ///
    /// ` stopOnClose: bool `
    ///
    pub fn SetStopOnClose(self: KWidgetJobTracker, job: anytype, stopOnClose: bool) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KAbstractWidgetJobTracker_SetStopOnClose(@ptrCast(self.ptr), @ptrCast(job.ptr), stopOnClose);
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#stopOnClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn StopOnClose(self: KWidgetJobTracker, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KAbstractWidgetJobTracker_StopOnClose(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#setAutoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` job: KJob `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDelete(self: KWidgetJobTracker, job: anytype, autoDelete: bool) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KAbstractWidgetJobTracker_SetAutoDelete(@ptrCast(self.ptr), @ptrCast(job.ptr), autoDelete);
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#autoDelete)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn AutoDelete(self: KWidgetJobTracker, job: anytype) bool {
        comptime _ = @TypeOf(job)._is_KJob;
        return qtc.KAbstractWidgetJobTracker_AutoDelete(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn Stopped(self: KWidgetJobTracker, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KAbstractWidgetJobTracker_Stopped(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#stopped)
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` callback: *const fn (self: KWidgetJobTracker, job: KJob) callconv(.c) void `
    ///
    pub fn OnStopped(self: KWidgetJobTracker, callback: *const fn (KWidgetJobTracker, KJob) callconv(.c) void) void {
        qtc.KAbstractWidgetJobTracker_Connect_Stopped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn Suspend(self: KWidgetJobTracker, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KAbstractWidgetJobTracker_Suspend(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#suspend)
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` callback: *const fn (self: KWidgetJobTracker, job: KJob) callconv(.c) void `
    ///
    pub fn OnSuspend(self: KWidgetJobTracker, callback: *const fn (KWidgetJobTracker, KJob) callconv(.c) void) void {
        qtc.KAbstractWidgetJobTracker_Connect_Suspend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` job: KJob `
    ///
    pub fn Resume(self: KWidgetJobTracker, job: anytype) void {
        comptime _ = @TypeOf(job)._is_KJob;
        qtc.KAbstractWidgetJobTracker_Resume(@ptrCast(self.ptr), @ptrCast(job.ptr));
    }

    /// Inherited from KAbstractWidgetJobTracker
    ///
    /// ### [Upstream resources](https://api.kde.org/kabstractwidgetjobtracker.html#resume)
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` callback: *const fn (self: KWidgetJobTracker, job: KJob) callconv(.c) void `
    ///
    pub fn OnResume(self: KWidgetJobTracker, callback: *const fn (KWidgetJobTracker, KJob) callconv(.c) void) void {
        qtc.KAbstractWidgetJobTracker_Connect_Resume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KWidgetJobTracker, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KWidgetJobTracker, watched: anytype, event: anytype) bool {
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
    /// ` self: KWidgetJobTracker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KWidgetJobTracker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kwidgetjobtracker.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KWidgetJobTracker, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn IsWidgetType(self: KWidgetJobTracker) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn IsWindowType(self: KWidgetJobTracker) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn IsQuickItemType(self: KWidgetJobTracker) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn SignalsBlocked(self: KWidgetJobTracker) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KWidgetJobTracker, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn Thread(self: KWidgetJobTracker) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KWidgetJobTracker, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KWidgetJobTracker, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KWidgetJobTracker, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KWidgetJobTracker, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KWidgetJobTracker, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KWidgetJobTracker, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kwidgetjobtracker.Children: Memory allocation failed");
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
    /// ` self: KWidgetJobTracker `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KWidgetJobTracker, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KWidgetJobTracker, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KWidgetJobTracker, obj: anytype) void {
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
    /// ` self: KWidgetJobTracker `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KWidgetJobTracker, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KWidgetJobTracker `
    ///
    pub fn Disconnect3(self: KWidgetJobTracker) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KWidgetJobTracker, receiver: anytype) bool {
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
    /// ` self: KWidgetJobTracker `
    ///
    pub fn DumpObjectTree(self: KWidgetJobTracker) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn DumpObjectInfo(self: KWidgetJobTracker) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KWidgetJobTracker, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KWidgetJobTracker `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KWidgetJobTracker, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KWidgetJobTracker, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kwidgetjobtracker.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kwidgetjobtracker.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KWidgetJobTracker `
    ///
    pub fn BindingStorage(self: KWidgetJobTracker) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn BindingStorage2(self: KWidgetJobTracker) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn Destroyed(self: KWidgetJobTracker) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` callback: *const fn (self: KWidgetJobTracker) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KWidgetJobTracker, callback: *const fn (KWidgetJobTracker) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn Parent(self: KWidgetJobTracker) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KWidgetJobTracker, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn DeleteLater(self: KWidgetJobTracker) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KWidgetJobTracker, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KWidgetJobTracker, time: i64, timerType: i32) i32 {
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
    /// ` self: KWidgetJobTracker `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KWidgetJobTracker, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KWidgetJobTracker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KWidgetJobTracker, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KWidgetJobTracker, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KWidgetJobTracker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KWidgetJobTracker, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KWidgetJobTracker `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KWidgetJobTracker, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KWidgetJobTracker `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KWidgetJobTracker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` callback: *const fn (self: KWidgetJobTracker, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KWidgetJobTracker, callback: *const fn (KWidgetJobTracker, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KWidgetJobTracker `
    ///
    /// ` callback: *const fn (self: KWidgetJobTracker, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KWidgetJobTracker, callback: *const fn (KWidgetJobTracker, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kwidgetjobtracker.html#dtor.KWidgetJobTracker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KWidgetJobTracker `
    ///
    pub fn Delete(self: KWidgetJobTracker) void {
        qtc.KWidgetJobTracker_Delete(@ptrCast(self.ptr));
    }
};
