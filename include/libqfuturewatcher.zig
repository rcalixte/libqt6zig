const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html)
pub const qfuturewatcherbase = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QFutureWatcherBase_MetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFutureWatcherBase_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QFutureWatcherBase_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn ProgressValue(self: ?*anyopaque) i32 {
        return qtc.QFutureWatcherBase_ProgressValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMinimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn ProgressMinimum(self: ?*anyopaque) i32 {
        return qtc.QFutureWatcherBase_ProgressMinimum(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn ProgressMaximum(self: ?*anyopaque) i32 {
        return qtc.QFutureWatcherBase_ProgressMaximum(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProgressText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFutureWatcherBase_ProgressText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.ProgressText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn IsStarted(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsStarted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsFinished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn IsRunning(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsRunning(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn IsCanceled(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsCanceled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn IsPaused(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsPaused(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn IsSuspending(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsSuspending(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn IsSuspended(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsSuspended(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn WaitForFinished(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_WaitForFinished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPendingResultsLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` limit: i32 `
    ///
    pub fn SetPendingResultsLimit(self: ?*anyopaque, limit: i32) void {
        qtc.QFutureWatcherBase_SetPendingResultsLimit(@ptrCast(self), @bitCast(limit));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Started(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Started(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Started(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Finished(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Finished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Finished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Canceled(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Canceled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnCanceled(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Canceled(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Paused(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Paused(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnPaused(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Paused(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Suspending(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Suspending(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnSuspending(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Suspending(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Suspended(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Suspended(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnSuspended(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Suspended(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Resumed(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Resumed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnResumed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Resumed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` resultIndex: i32 `
    ///
    pub fn ResultReadyAt(self: ?*anyopaque, resultIndex: i32) void {
        qtc.QFutureWatcherBase_ResultReadyAt(@ptrCast(self), @bitCast(resultIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase, resultIndex: i32) callconv(.c) void `
    ///
    pub fn OnResultReadyAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ResultReadyAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultsReadyAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` beginIndex: i32 `
    ///
    /// ` endIndex: i32 `
    ///
    pub fn ResultsReadyAt(self: ?*anyopaque, beginIndex: i32, endIndex: i32) void {
        qtc.QFutureWatcherBase_ResultsReadyAt(@ptrCast(self), @bitCast(beginIndex), @bitCast(endIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultsReadyAt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase, beginIndex: i32, endIndex: i32) callconv(.c) void `
    ///
    pub fn OnResultsReadyAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ResultsReadyAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressRangeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` minimum: i32 `
    ///
    /// ` maximum: i32 `
    ///
    pub fn ProgressRangeChanged(self: ?*anyopaque, minimum: i32, maximum: i32) void {
        qtc.QFutureWatcherBase_ProgressRangeChanged(@ptrCast(self), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressRangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase, minimum: i32, maximum: i32) callconv(.c) void `
    ///
    pub fn OnProgressRangeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressRangeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` progressValue: i32 `
    ///
    pub fn ProgressValueChanged(self: ?*anyopaque, progressValue: i32) void {
        qtc.QFutureWatcherBase_ProgressValueChanged(@ptrCast(self), @bitCast(progressValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase, progressValue: i32) callconv(.c) void `
    ///
    pub fn OnProgressValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressValueChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` progressText: []const u8 `
    ///
    pub fn ProgressTextChanged(self: ?*anyopaque, progressText: []const u8) void {
        const progressText_str = qtc.libqt_string{
            .len = progressText.len,
            .data = progressText.ptr,
        };
        qtc.QFutureWatcherBase_ProgressTextChanged(@ptrCast(self), progressText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase, progressText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnProgressTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressTextChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Cancel(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Cancel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` suspendVal: bool `
    ///
    pub fn SetSuspended(self: ?*anyopaque, suspendVal: bool) void {
        qtc.QFutureWatcherBase_SetSuspended(@ptrCast(self), suspendVal);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Suspend(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Suspend(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Resume(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Resume(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#toggleSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn ToggleSuspended(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_ToggleSuspended(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` paused: bool `
    ///
    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        qtc.QFutureWatcherBase_SetPaused(@ptrCast(self), paused);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Pause(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Pause(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#togglePaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn TogglePaused(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_TogglePaused(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qfuturewatcherbase.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QtC.QFutureWatcherBase, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#dtor.QFutureWatcherBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFutureWatcherBase `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Delete(@ptrCast(self));
    }
};
