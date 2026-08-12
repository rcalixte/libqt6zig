const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMutex = @import("libqt6").QMutex;
const QRunnable = @import("libqt6").QRunnable;
const QThreadPool = @import("libqt6").QThreadPool;
const qfutureinterface_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html)
pub const QFutureInterfaceBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFutureInterfaceBase,

    pub const _is_QFutureInterfaceBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFutureInterfaceBase object in C++ memory
    ///
    pub fn new() QFutureInterfaceBase {
        return .{ .ptr = qtc.QFutureInterfaceBase_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFutureInterfaceBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFutureInterfaceBase `
    ///
    pub fn new2(other: anytype) QFutureInterfaceBase {
        comptime _ = @TypeOf(other)._is_QFutureInterfaceBase;
        return .{ .ptr = qtc.QFutureInterfaceBase_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QFutureInterfaceBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` initialState: qfutureinterface_enums.State `
    ///
    pub fn new3(initialState: i32) QFutureInterfaceBase {
        return .{ .ptr = qtc.QFutureInterfaceBase_new3(@bitCast(initialState)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` other: QFutureInterfaceBase `
    ///
    pub fn operatorAssign(self: QFutureInterfaceBase, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFutureInterfaceBase;
        qtc.QFutureInterfaceBase_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `reportStarted` instead
    ///
    pub const ReportStarted = reportStarted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn reportStarted(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_ReportStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reportFinished` instead
    ///
    pub const ReportFinished = reportFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn reportFinished(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_ReportFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reportCanceled` instead
    ///
    pub const ReportCanceled = reportCanceled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn reportCanceled(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_ReportCanceled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reportResultsReady` instead
    ///
    pub const ReportResultsReady = reportResultsReady;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportResultsReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` beginIndex: i32 `
    ///
    /// ` endIndex: i32 `
    ///
    pub fn reportResultsReady(self: QFutureInterfaceBase, beginIndex: i32, endIndex: i32) void {
        qtc.QFutureInterfaceBase_ReportResultsReady(@ptrCast(self.ptr), @bitCast(beginIndex), @bitCast(endIndex));
    }

    /// ### DEPRECATED: Use `setRunnable` instead
    ///
    pub const SetRunnable = setRunnable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setRunnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` runnable: QRunnable `
    ///
    pub fn setRunnable(self: QFutureInterfaceBase, runnable: anytype) void {
        comptime _ = @TypeOf(runnable)._is_QRunnable;
        qtc.QFutureInterfaceBase_SetRunnable(@ptrCast(self.ptr), @ptrCast(runnable.ptr));
    }

    /// ### DEPRECATED: Use `setThreadPool` instead
    ///
    pub const SetThreadPool = setThreadPool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThreadPool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` pool: QThreadPool `
    ///
    pub fn setThreadPool(self: QFutureInterfaceBase, pool: anytype) void {
        comptime _ = @TypeOf(pool)._is_QThreadPool;
        qtc.QFutureInterfaceBase_SetThreadPool(@ptrCast(self.ptr), @ptrCast(pool.ptr));
    }

    /// ### DEPRECATED: Use `threadPool` instead
    ///
    pub const ThreadPool = threadPool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#threadPool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn threadPool(self: QFutureInterfaceBase) QThreadPool {
        return .{ .ptr = qtc.QFutureInterfaceBase_ThreadPool(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFilterMode` instead
    ///
    pub const SetFilterMode = setFilterMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setFilterMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` enable: bool `
    ///
    pub fn setFilterMode(self: QFutureInterfaceBase, enable: bool) void {
        qtc.QFutureInterfaceBase_SetFilterMode(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `setProgressRange` instead
    ///
    pub const SetProgressRange = setProgressRange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` minimum: i32 `
    ///
    /// ` maximum: i32 `
    ///
    pub fn setProgressRange(self: QFutureInterfaceBase, minimum: i32, maximum: i32) void {
        qtc.QFutureInterfaceBase_SetProgressRange(@ptrCast(self.ptr), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### DEPRECATED: Use `progressMinimum` instead
    ///
    pub const ProgressMinimum = progressMinimum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMinimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn progressMinimum(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_ProgressMinimum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `progressMaximum` instead
    ///
    pub const ProgressMaximum = progressMaximum;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn progressMaximum(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_ProgressMaximum(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isProgressUpdateNeeded` instead
    ///
    pub const IsProgressUpdateNeeded = isProgressUpdateNeeded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isProgressUpdateNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn isProgressUpdateNeeded(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsProgressUpdateNeeded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProgressValue` instead
    ///
    pub const SetProgressValue = setProgressValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` _progressValue: i32 `
    ///
    pub fn setProgressValue(self: QFutureInterfaceBase, _progressValue: i32) void {
        qtc.QFutureInterfaceBase_SetProgressValue(@ptrCast(self.ptr), @bitCast(_progressValue));
    }

    /// ### DEPRECATED: Use `progressValue` instead
    ///
    pub const ProgressValue = progressValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn progressValue(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_ProgressValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProgressValueAndText` instead
    ///
    pub const SetProgressValueAndText = setProgressValueAndText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValueAndText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` _progressValue: i32 `
    ///
    /// ` _progressText: []const u8 `
    ///
    pub fn setProgressValueAndText(self: QFutureInterfaceBase, _progressValue: i32, _progressText: []const u8) void {
        const progressText_str = qtc.libqt_string{
            .len = _progressText.len,
            .data = _progressText.ptr,
        };
        qtc.QFutureInterfaceBase_SetProgressValueAndText(@ptrCast(self.ptr), @bitCast(_progressValue), progressText_str);
    }

    /// ### DEPRECATED: Use `progressText` instead
    ///
    pub const ProgressText = progressText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn progressText(self: QFutureInterfaceBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFutureInterfaceBase_ProgressText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFutureInterfaceBase.progressText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setExpectedResultCount` instead
    ///
    pub const SetExpectedResultCount = setExpectedResultCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setExpectedResultCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` _resultCount: i32 `
    ///
    pub fn setExpectedResultCount(self: QFutureInterfaceBase, _resultCount: i32) void {
        qtc.QFutureInterfaceBase_SetExpectedResultCount(@ptrCast(self.ptr), @bitCast(_resultCount));
    }

    /// ### DEPRECATED: Use `expectedResultCount` instead
    ///
    pub const ExpectedResultCount = expectedResultCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#expectedResultCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn expectedResultCount(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_ExpectedResultCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resultCount` instead
    ///
    pub const ResultCount = resultCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#resultCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn resultCount(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_ResultCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `queryState` instead
    ///
    pub const QueryState = queryState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#queryState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` state: qfutureinterface_enums.State `
    ///
    pub fn queryState(self: QFutureInterfaceBase, state: i32) bool {
        return qtc.QFutureInterfaceBase_QueryState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `isRunning` instead
    ///
    pub const IsRunning = isRunning;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn isRunning(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsRunning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isStarted` instead
    ///
    pub const IsStarted = isStarted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn isStarted(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCanceled` instead
    ///
    pub const IsCanceled = isCanceled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn isCanceled(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsCanceled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn isFinished(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPaused` instead
    ///
    pub const IsPaused = isPaused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn isPaused(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsPaused(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPaused` instead
    ///
    pub const SetPaused = setPaused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` paused: bool `
    ///
    pub fn setPaused(self: QFutureInterfaceBase, paused: bool) void {
        qtc.QFutureInterfaceBase_SetPaused(@ptrCast(self.ptr), paused);
    }

    /// ### DEPRECATED: Use `togglePaused` instead
    ///
    pub const TogglePaused = togglePaused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#togglePaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn togglePaused(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_TogglePaused(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSuspending` instead
    ///
    pub const IsSuspending = isSuspending;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn isSuspending(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsSuspending(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSuspended` instead
    ///
    pub const IsSuspended = isSuspended;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn isSuspended(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsSuspended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isThrottled` instead
    ///
    pub const IsThrottled = isThrottled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isThrottled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn isThrottled(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsThrottled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isResultReadyAt` instead
    ///
    pub const IsResultReadyAt = isResultReadyAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isResultReadyAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` index: i32 `
    ///
    pub fn isResultReadyAt(self: QFutureInterfaceBase, index: i32) bool {
        return qtc.QFutureInterfaceBase_IsResultReadyAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn isValid(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loadState` instead
    ///
    pub const LoadState = loadState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#loadState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn loadState(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_LoadState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cancel` instead
    ///
    pub const Cancel = cancel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn cancel(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_Cancel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cancelAndFinish` instead
    ///
    pub const CancelAndFinish = cancelAndFinish;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancelAndFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn cancelAndFinish(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_CancelAndFinish(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSuspended` instead
    ///
    pub const SetSuspended = setSuspended;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` suspendVal: bool `
    ///
    pub fn setSuspended(self: QFutureInterfaceBase, suspendVal: bool) void {
        qtc.QFutureInterfaceBase_SetSuspended(@ptrCast(self.ptr), suspendVal);
    }

    /// ### DEPRECATED: Use `toggleSuspended` instead
    ///
    pub const ToggleSuspended = toggleSuspended;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#toggleSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn toggleSuspended(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_ToggleSuspended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reportSuspended` instead
    ///
    pub const ReportSuspended = reportSuspended;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn reportSuspended(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_ReportSuspended(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setThrottled` instead
    ///
    pub const SetThrottled = setThrottled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThrottled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` enable: bool `
    ///
    pub fn setThrottled(self: QFutureInterfaceBase, enable: bool) void {
        qtc.QFutureInterfaceBase_SetThrottled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `waitForFinished` instead
    ///
    pub const WaitForFinished = waitForFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn waitForFinished(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_WaitForFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForNextResult` instead
    ///
    pub const WaitForNextResult = waitForNextResult;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForNextResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn waitForNextResult(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_WaitForNextResult(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForResult` instead
    ///
    pub const WaitForResult = waitForResult;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` resultIndex: i32 `
    ///
    pub fn waitForResult(self: QFutureInterfaceBase, resultIndex: i32) void {
        qtc.QFutureInterfaceBase_WaitForResult(@ptrCast(self.ptr), @bitCast(resultIndex));
    }

    /// ### DEPRECATED: Use `waitForResume` instead
    ///
    pub const WaitForResume = waitForResume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn waitForResume(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_WaitForResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `suspendIfRequested` instead
    ///
    pub const SuspendIfRequested = suspendIfRequested;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#suspendIfRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn suspendIfRequested(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_SuspendIfRequested(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mutex` instead
    ///
    pub const Mutex = mutex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#mutex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn mutex(self: QFutureInterfaceBase) QMutex {
        return .{ .ptr = qtc.QFutureInterfaceBase_Mutex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasException` instead
    ///
    pub const HasException = hasException;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#hasException)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn hasException(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_HasException(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` other: QFutureInterfaceBase `
    ///
    pub fn operatorEqual(self: QFutureInterfaceBase, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFutureInterfaceBase;
        return qtc.QFutureInterfaceBase_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` other: QFutureInterfaceBase `
    ///
    pub fn operatorNotEqual(self: QFutureInterfaceBase, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFutureInterfaceBase;
        return qtc.QFutureInterfaceBase_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` other: QFutureInterfaceBase `
    ///
    pub fn swap(self: QFutureInterfaceBase, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFutureInterfaceBase;
        qtc.QFutureInterfaceBase_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isChainCanceled` instead
    ///
    pub const IsChainCanceled = isChainCanceled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isChainCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn isChainCanceled(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsChainCanceled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#dtor.QFutureInterfaceBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn delete(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterface.html#public-types)
pub const enums = struct {
    pub const State = enum(i32) {
        pub const NoState: i32 = 0;
        pub const Running: i32 = 1;
        pub const Started: i32 = 2;
        pub const Finished: i32 = 4;
        pub const Canceled: i32 = 8;
        pub const Suspending: i32 = 16;
        pub const Suspended: i32 = 32;
        pub const Throttled: i32 = 64;
        pub const Pending: i32 = 128;
    };

    pub const CancelMode = enum(i32) {
        pub const CancelOnly: i32 = 0;
        pub const CancelAndFinish: i32 = 1;
    };
};
