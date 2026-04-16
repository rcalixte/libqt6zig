const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html)
pub const QFutureWatcherBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFutureWatcherBase,

    pub const _is_QFutureWatcherBase = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn MetaObject(self: QFutureWatcherBase) QMetaObject {
        return .{ .ptr = qtc.QFutureWatcherBase_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QFutureWatcherBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFutureWatcherBase_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QFutureWatcherBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QFutureWatcherBase_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn ProgressValue(self: QFutureWatcherBase) i32 {
        return qtc.QFutureWatcherBase_ProgressValue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMinimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn ProgressMinimum(self: QFutureWatcherBase) i32 {
        return qtc.QFutureWatcherBase_ProgressMinimum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn ProgressMaximum(self: QFutureWatcherBase) i32 {
        return qtc.QFutureWatcherBase_ProgressMaximum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProgressText(self: QFutureWatcherBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFutureWatcherBase_ProgressText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.ProgressText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn IsStarted(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsStarted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn IsFinished(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn IsRunning(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsRunning(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn IsCanceled(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsCanceled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn IsPaused(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsPaused(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn IsSuspending(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsSuspending(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn IsSuspended(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsSuspended(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn WaitForFinished(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_WaitForFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPendingResultsLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` limit: i32 `
    ///
    pub fn SetPendingResultsLimit(self: QFutureWatcherBase, limit: i32) void {
        qtc.QFutureWatcherBase_SetPendingResultsLimit(@ptrCast(self.ptr), @bitCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QFutureWatcherBase, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QFutureWatcherBase_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Started(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Started(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnStarted(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Finished(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Finished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnFinished(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Canceled(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Canceled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnCanceled(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Paused(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Paused(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnPaused(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Paused(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Suspending(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Suspending(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnSuspending(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Suspending(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Suspended(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Suspended(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnSuspended(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Suspended(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Resumed(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Resumed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnResumed(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Resumed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` resultIndex: i32 `
    ///
    pub fn ResultReadyAt(self: QFutureWatcherBase, resultIndex: i32) void {
        qtc.QFutureWatcherBase_ResultReadyAt(@ptrCast(self.ptr), @bitCast(resultIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, resultIndex: i32) callconv(.c) void `
    ///
    pub fn OnResultReadyAt(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ResultReadyAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultsReadyAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` beginIndex: i32 `
    ///
    /// ` endIndex: i32 `
    ///
    pub fn ResultsReadyAt(self: QFutureWatcherBase, beginIndex: i32, endIndex: i32) void {
        qtc.QFutureWatcherBase_ResultsReadyAt(@ptrCast(self.ptr), @bitCast(beginIndex), @bitCast(endIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultsReadyAt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, beginIndex: i32, endIndex: i32) callconv(.c) void `
    ///
    pub fn OnResultsReadyAt(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, i32, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ResultsReadyAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressRangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` minimum: i32 `
    ///
    /// ` maximum: i32 `
    ///
    pub fn ProgressRangeChanged(self: QFutureWatcherBase, minimum: i32, maximum: i32) void {
        qtc.QFutureWatcherBase_ProgressRangeChanged(@ptrCast(self.ptr), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressRangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, minimum: i32, maximum: i32) callconv(.c) void `
    ///
    pub fn OnProgressRangeChanged(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, i32, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressRangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` progressValue: i32 `
    ///
    pub fn ProgressValueChanged(self: QFutureWatcherBase, progressValue: i32) void {
        qtc.QFutureWatcherBase_ProgressValueChanged(@ptrCast(self.ptr), @bitCast(progressValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, progressValue: i32) callconv(.c) void `
    ///
    pub fn OnProgressValueChanged(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` progressText: []const u8 `
    ///
    pub fn ProgressTextChanged(self: QFutureWatcherBase, progressText: []const u8) void {
        const progressText_str = qtc.libqt_string{
            .len = progressText.len,
            .data = progressText.ptr,
        };
        qtc.QFutureWatcherBase_ProgressTextChanged(@ptrCast(self.ptr), progressText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, progressText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnProgressTextChanged(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Cancel(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Cancel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` suspendVal: bool `
    ///
    pub fn SetSuspended(self: QFutureWatcherBase, suspendVal: bool) void {
        qtc.QFutureWatcherBase_SetSuspended(@ptrCast(self.ptr), suspendVal);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Suspend(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Suspend(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Resume(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Resume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#toggleSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn ToggleSuspended(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_ToggleSuspended(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` paused: bool `
    ///
    pub fn SetPaused(self: QFutureWatcherBase, paused: bool) void {
        qtc.QFutureWatcherBase_SetPaused(@ptrCast(self.ptr), paused);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Pause(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Pause(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#togglePaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn TogglePaused(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_TogglePaused(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QFutureWatcherBase, watched: anytype, event: anytype) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QFutureWatcherBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QFutureWatcherBase, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn IsWidgetType(self: QFutureWatcherBase) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn IsWindowType(self: QFutureWatcherBase) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn IsQuickItemType(self: QFutureWatcherBase) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn SignalsBlocked(self: QFutureWatcherBase) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QFutureWatcherBase, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Thread(self: QFutureWatcherBase) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QFutureWatcherBase, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QFutureWatcherBase, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QFutureWatcherBase, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QFutureWatcherBase, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QFutureWatcherBase, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QFutureWatcherBase, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qfuturewatcherbase.Children: Memory allocation failed");
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QFutureWatcherBase, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QFutureWatcherBase, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QFutureWatcherBase, obj: anytype) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QFutureWatcherBase, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Disconnect3(self: QFutureWatcherBase) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QFutureWatcherBase, receiver: anytype) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn DumpObjectTree(self: QFutureWatcherBase) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn DumpObjectInfo(self: QFutureWatcherBase) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QFutureWatcherBase, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QFutureWatcherBase, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QFutureWatcherBase, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qfuturewatcherbase.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qfuturewatcherbase.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn BindingStorage(self: QFutureWatcherBase) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn BindingStorage2(self: QFutureWatcherBase) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Destroyed(self: QFutureWatcherBase) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Parent(self: QFutureWatcherBase) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QFutureWatcherBase, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn DeleteLater(self: QFutureWatcherBase) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QFutureWatcherBase, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QFutureWatcherBase, time: i64, timerType: i32) i32 {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QFutureWatcherBase, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QFutureWatcherBase, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QFutureWatcherBase, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QFutureWatcherBase, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QFutureWatcherBase, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QFutureWatcherBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, QObject) callconv(.c) void) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#dtor.QFutureWatcherBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn Delete(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Delete(@ptrCast(self.ptr));
    }
};
