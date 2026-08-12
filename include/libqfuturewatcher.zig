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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn metaObject(self: QFutureWatcherBase) QMetaObject {
        return .{ .ptr = qtc.QFutureWatcherBase_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QFutureWatcherBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFutureWatcherBase_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QFutureWatcherBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QFutureWatcherBase_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFutureWatcherBase.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `progressValue` instead
    ///
    pub const ProgressValue = progressValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn progressValue(self: QFutureWatcherBase) i32 {
        return qtc.QFutureWatcherBase_ProgressValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `progressMinimum` instead
    ///
    pub const ProgressMinimum = progressMinimum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMinimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn progressMinimum(self: QFutureWatcherBase) i32 {
        return qtc.QFutureWatcherBase_ProgressMinimum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `progressMaximum` instead
    ///
    pub const ProgressMaximum = progressMaximum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn progressMaximum(self: QFutureWatcherBase) i32 {
        return qtc.QFutureWatcherBase_ProgressMaximum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `progressText` instead
    ///
    pub const ProgressText = progressText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn progressText(self: QFutureWatcherBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFutureWatcherBase_ProgressText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFutureWatcherBase.progressText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isStarted` instead
    ///
    pub const IsStarted = isStarted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn isStarted(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn isFinished(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRunning` instead
    ///
    pub const IsRunning = isRunning;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn isRunning(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsRunning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCanceled` instead
    ///
    pub const IsCanceled = isCanceled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn isCanceled(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsCanceled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPaused` instead
    ///
    pub const IsPaused = isPaused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn isPaused(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsPaused(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSuspending` instead
    ///
    pub const IsSuspending = isSuspending;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn isSuspending(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsSuspending(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSuspended` instead
    ///
    pub const IsSuspended = isSuspended;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn isSuspended(self: QFutureWatcherBase) bool {
        return qtc.QFutureWatcherBase_IsSuspended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForFinished` instead
    ///
    pub const WaitForFinished = waitForFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn waitForFinished(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_WaitForFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPendingResultsLimit` instead
    ///
    pub const SetPendingResultsLimit = setPendingResultsLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPendingResultsLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` limit: i32 `
    ///
    pub fn setPendingResultsLimit(self: QFutureWatcherBase, limit: i32) void {
        qtc.QFutureWatcherBase_SetPendingResultsLimit(@ptrCast(self.ptr), @bitCast(limit));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QFutureWatcherBase, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QFutureWatcherBase_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `started` instead
    ///
    pub const Started = started;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn started(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Started(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStarted` instead
    ///
    pub const OnStarted = onStarted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn onStarted(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn finished(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Finished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn onFinished(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canceled` instead
    ///
    pub const Canceled = canceled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn canceled(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Canceled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanceled` instead
    ///
    pub const OnCanceled = onCanceled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn onCanceled(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Canceled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paused` instead
    ///
    pub const Paused = paused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn paused(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Paused(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPaused` instead
    ///
    pub const OnPaused = onPaused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn onPaused(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Paused(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `suspending` instead
    ///
    pub const Suspending = suspending;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn suspending(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Suspending(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSuspending` instead
    ///
    pub const OnSuspending = onSuspending;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn onSuspending(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Suspending(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `suspended` instead
    ///
    pub const Suspended = suspended;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn suspended(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Suspended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSuspended` instead
    ///
    pub const OnSuspended = onSuspended;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn onSuspended(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Suspended(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resumed` instead
    ///
    pub const Resumed = resumed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn resumed(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Resumed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResumed` instead
    ///
    pub const OnResumed = onResumed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn onResumed(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Resumed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resultReadyAt` instead
    ///
    pub const ResultReadyAt = resultReadyAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` resultIndex: i32 `
    ///
    pub fn resultReadyAt(self: QFutureWatcherBase, resultIndex: i32) void {
        qtc.QFutureWatcherBase_ResultReadyAt(@ptrCast(self.ptr), @bitCast(resultIndex));
    }

    /// ### DEPRECATED: Use `onResultReadyAt` instead
    ///
    pub const OnResultReadyAt = onResultReadyAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, resultIndex: i32) callconv(.c) void `
    ///
    pub fn onResultReadyAt(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ResultReadyAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resultsReadyAt` instead
    ///
    pub const ResultsReadyAt = resultsReadyAt;

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
    pub fn resultsReadyAt(self: QFutureWatcherBase, beginIndex: i32, endIndex: i32) void {
        qtc.QFutureWatcherBase_ResultsReadyAt(@ptrCast(self.ptr), @bitCast(beginIndex), @bitCast(endIndex));
    }

    /// ### DEPRECATED: Use `onResultsReadyAt` instead
    ///
    pub const OnResultsReadyAt = onResultsReadyAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultsReadyAt)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, beginIndex: i32, endIndex: i32) callconv(.c) void `
    ///
    pub fn onResultsReadyAt(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, i32, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ResultsReadyAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `progressRangeChanged` instead
    ///
    pub const ProgressRangeChanged = progressRangeChanged;

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
    pub fn progressRangeChanged(self: QFutureWatcherBase, minimum: i32, maximum: i32) void {
        qtc.QFutureWatcherBase_ProgressRangeChanged(@ptrCast(self.ptr), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### DEPRECATED: Use `onProgressRangeChanged` instead
    ///
    pub const OnProgressRangeChanged = onProgressRangeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressRangeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, minimum: i32, maximum: i32) callconv(.c) void `
    ///
    pub fn onProgressRangeChanged(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, i32, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressRangeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `progressValueChanged` instead
    ///
    pub const ProgressValueChanged = progressValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` _progressValue: i32 `
    ///
    pub fn progressValueChanged(self: QFutureWatcherBase, _progressValue: i32) void {
        qtc.QFutureWatcherBase_ProgressValueChanged(@ptrCast(self.ptr), @bitCast(_progressValue));
    }

    /// ### DEPRECATED: Use `onProgressValueChanged` instead
    ///
    pub const OnProgressValueChanged = onProgressValueChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, progressValue: i32) callconv(.c) void `
    ///
    pub fn onProgressValueChanged(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `progressTextChanged` instead
    ///
    pub const ProgressTextChanged = progressTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` _progressText: []const u8 `
    ///
    pub fn progressTextChanged(self: QFutureWatcherBase, _progressText: []const u8) void {
        const progressText_str = qtc.libqt_string{
            .len = _progressText.len,
            .data = _progressText.ptr,
        };
        qtc.QFutureWatcherBase_ProgressTextChanged(@ptrCast(self.ptr), progressText_str);
    }

    /// ### DEPRECATED: Use `onProgressTextChanged` instead
    ///
    pub const OnProgressTextChanged = onProgressTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, progressText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onProgressTextChanged(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cancel` instead
    ///
    pub const Cancel = cancel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn cancel(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Cancel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSuspended` instead
    ///
    pub const SetSuspended = setSuspended;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` suspendVal: bool `
    ///
    pub fn setSuspended(self: QFutureWatcherBase, suspendVal: bool) void {
        qtc.QFutureWatcherBase_SetSuspended(@ptrCast(self.ptr), suspendVal);
    }

    /// ### DEPRECATED: Use `suspend0` instead
    ///
    pub const Suspend = suspend0;

    pub const @"suspend" = suspend0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn suspend0(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Suspend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn resume0(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toggleSuspended` instead
    ///
    pub const ToggleSuspended = toggleSuspended;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#toggleSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn toggleSuspended(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_ToggleSuspended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPaused` instead
    ///
    pub const SetPaused = setPaused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    /// ` _paused: bool `
    ///
    pub fn setPaused(self: QFutureWatcherBase, _paused: bool) void {
        qtc.QFutureWatcherBase_SetPaused(@ptrCast(self.ptr), _paused);
    }

    /// ### DEPRECATED: Use `pause` instead
    ///
    pub const Pause = pause;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn pause(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Pause(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `togglePaused` instead
    ///
    pub const TogglePaused = togglePaused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#togglePaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn togglePaused(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_TogglePaused(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFutureWatcherBase.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFutureWatcherBase.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QFutureWatcherBase, watched: anytype, _event: anytype) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QFutureWatcherBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFutureWatcherBase.objectName: Memory allocation failed");
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QFutureWatcherBase, name: []const u8) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn isWidgetType(self: QFutureWatcherBase) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn isWindowType(self: QFutureWatcherBase) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn isQuickItemType(self: QFutureWatcherBase) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn signalsBlocked(self: QFutureWatcherBase) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QFutureWatcherBase, b: bool) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn thread(self: QFutureWatcherBase) QThread {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QFutureWatcherBase, _thread: anytype) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QFutureWatcherBase, interval: i32) i32 {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QFutureWatcherBase, time: i64) i32 {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QFutureWatcherBase, id: i32) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QFutureWatcherBase, id: i32) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QFutureWatcherBase, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QFutureWatcherBase.children: Memory allocation failed");
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QFutureWatcherBase, _parent: anytype) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QFutureWatcherBase, filterObj: anytype) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QFutureWatcherBase, obj: anytype) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QFutureWatcherBase, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn disconnect3(self: QFutureWatcherBase) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QFutureWatcherBase, receiver: anytype) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn dumpObjectTree(self: QFutureWatcherBase) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn dumpObjectInfo(self: QFutureWatcherBase) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QFutureWatcherBase, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QFutureWatcherBase, name: [:0]const u8) QVariant {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QFutureWatcherBase, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QFutureWatcherBase.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QFutureWatcherBase.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn bindingStorage(self: QFutureWatcherBase) QBindingStorage {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn bindingStorage2(self: QFutureWatcherBase) QBindingStorage {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn destroyed(self: QFutureWatcherBase) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase) callconv(.c) void) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn parent(self: QFutureWatcherBase) QObject {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QFutureWatcherBase, classname: [:0]const u8) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    pub fn deleteLater(self: QFutureWatcherBase) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QFutureWatcherBase, interval: i32, timerType: i32) i32 {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QFutureWatcherBase, time: i64, timerType: i32) i32 {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QFutureWatcherBase, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QFutureWatcherBase, signal: [:0]const u8) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QFutureWatcherBase, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QFutureWatcherBase, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QFutureWatcherBase, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QFutureWatcherBase, param1: anytype) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, QObject) callconv(.c) void) void {
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
    /// ` self: QFutureWatcherBase `
    ///
    /// ` callback: *const fn (self: QFutureWatcherBase, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QFutureWatcherBase, callback: *const fn (QFutureWatcherBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfuturewatcherbase.html#dtor.QFutureWatcherBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFutureWatcherBase `
    ///
    pub fn delete(self: QFutureWatcherBase) void {
        qtc.QFutureWatcherBase_Delete(@ptrCast(self.ptr));
    }
};
