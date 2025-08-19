const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfutureinterface_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qfutureinterfacebase.html
pub const qfutureinterfacebase = struct {
    /// New constructs a new QFutureInterfaceBase object.
    ///
    ///
    pub fn New() QtC.QFutureInterfaceBase {
        return qtc.QFutureInterfaceBase_new();
    }

    /// New2 constructs a new QFutureInterfaceBase object.
    ///
    /// ``` other: QtC.QFutureInterfaceBase ```
    pub fn New2(other: ?*anyopaque) QtC.QFutureInterfaceBase {
        return qtc.QFutureInterfaceBase_new2(@ptrCast(other));
    }

    /// New3 constructs a new QFutureInterfaceBase object.
    ///
    /// ``` initialState: qfutureinterface_enums.State ```
    pub fn New3(initialState: i32) QtC.QFutureInterfaceBase {
        return qtc.QFutureInterfaceBase_new3(@intCast(initialState));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-eq)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, other: QtC.QFutureInterfaceBase ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportStarted)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn ReportStarted(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_ReportStarted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportFinished)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn ReportFinished(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_ReportFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportCanceled)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn ReportCanceled(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_ReportCanceled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportResultsReady)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, beginIndex: i32, endIndex: i32 ```
    pub fn ReportResultsReady(self: ?*anyopaque, beginIndex: i32, endIndex: i32) void {
        qtc.QFutureInterfaceBase_ReportResultsReady(@ptrCast(self), @intCast(beginIndex), @intCast(endIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setRunnable)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, runnable: QtC.QRunnable ```
    pub fn SetRunnable(self: ?*anyopaque, runnable: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_SetRunnable(@ptrCast(self), @ptrCast(runnable));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThreadPool)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, pool: QtC.QThreadPool ```
    pub fn SetThreadPool(self: ?*anyopaque, pool: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_SetThreadPool(@ptrCast(self), @ptrCast(pool));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#threadPool)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn ThreadPool(self: ?*anyopaque) QtC.QThreadPool {
        return qtc.QFutureInterfaceBase_ThreadPool(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setFilterMode)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, enable: bool ```
    pub fn SetFilterMode(self: ?*anyopaque, enable: bool) void {
        qtc.QFutureInterfaceBase_SetFilterMode(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressRange)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, minimum: i32, maximum: i32 ```
    pub fn SetProgressRange(self: ?*anyopaque, minimum: i32, maximum: i32) void {
        qtc.QFutureInterfaceBase_SetProgressRange(@ptrCast(self), @intCast(minimum), @intCast(maximum));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMinimum)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn ProgressMinimum(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_ProgressMinimum(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMaximum)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn ProgressMaximum(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_ProgressMaximum(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isProgressUpdateNeeded)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn IsProgressUpdateNeeded(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsProgressUpdateNeeded(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValue)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, progressValue: i32 ```
    pub fn SetProgressValue(self: ?*anyopaque, progressValue: i32) void {
        qtc.QFutureInterfaceBase_SetProgressValue(@ptrCast(self), @intCast(progressValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressValue)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn ProgressValue(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_ProgressValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValueAndText)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, progressValue: i32, progressText: []const u8 ```
    pub fn SetProgressValueAndText(self: ?*anyopaque, progressValue: i32, progressText: []const u8) void {
        const progressText_str = qtc.libqt_string{
            .len = progressText.len,
            .data = progressText.ptr,
        };
        qtc.QFutureInterfaceBase_SetProgressValueAndText(@ptrCast(self), @intCast(progressValue), progressText_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressText)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, allocator: std.mem.Allocator ```
    pub fn ProgressText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFutureInterfaceBase_ProgressText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfutureinterfacebase.ProgressText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setExpectedResultCount)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, resultCount: i32 ```
    pub fn SetExpectedResultCount(self: ?*anyopaque, resultCount: i32) void {
        qtc.QFutureInterfaceBase_SetExpectedResultCount(@ptrCast(self), @intCast(resultCount));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#expectedResultCount)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn ExpectedResultCount(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_ExpectedResultCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#resultCount)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn ResultCount(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_ResultCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#queryState)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, state: qfutureinterface_enums.State ```
    pub fn QueryState(self: ?*anyopaque, state: i32) bool {
        return qtc.QFutureInterfaceBase_QueryState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isRunning)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn IsRunning(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsRunning(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isStarted)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn IsStarted(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsStarted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isCanceled)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn IsCanceled(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsCanceled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isFinished)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isPaused)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn IsPaused(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsPaused(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setPaused)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, paused: bool ```
    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        qtc.QFutureInterfaceBase_SetPaused(@ptrCast(self), paused);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#togglePaused)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn TogglePaused(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_TogglePaused(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspending)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn IsSuspending(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsSuspending(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspended)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn IsSuspended(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsSuspended(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isThrottled)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn IsThrottled(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsThrottled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isResultReadyAt)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, index: i32 ```
    pub fn IsResultReadyAt(self: ?*anyopaque, index: i32) bool {
        return qtc.QFutureInterfaceBase_IsResultReadyAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isValid)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#loadState)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn LoadState(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_LoadState(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancel)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn Cancel(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_Cancel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancelAndFinish)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn CancelAndFinish(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_CancelAndFinish(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setSuspended)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, suspendVal: bool ```
    pub fn SetSuspended(self: ?*anyopaque, suspendVal: bool) void {
        qtc.QFutureInterfaceBase_SetSuspended(@ptrCast(self), suspendVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#toggleSuspended)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn ToggleSuspended(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_ToggleSuspended(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportSuspended)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn ReportSuspended(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_ReportSuspended(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThrottled)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, enable: bool ```
    pub fn SetThrottled(self: ?*anyopaque, enable: bool) void {
        qtc.QFutureInterfaceBase_SetThrottled(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForFinished)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn WaitForFinished(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_WaitForFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForNextResult)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn WaitForNextResult(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_WaitForNextResult(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResult)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, resultIndex: i32 ```
    pub fn WaitForResult(self: ?*anyopaque, resultIndex: i32) void {
        qtc.QFutureInterfaceBase_WaitForResult(@ptrCast(self), @intCast(resultIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResume)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn WaitForResume(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_WaitForResume(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#suspendIfRequested)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn SuspendIfRequested(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_SuspendIfRequested(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#mutex)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn Mutex(self: ?*anyopaque) QtC.QMutex {
        return qtc.QFutureInterfaceBase_Mutex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#hasException)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn HasException(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_HasException(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, other: QtC.QFutureInterfaceBase ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-not-eq)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, other: QtC.QFutureInterfaceBase ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#swap)
    ///
    /// ``` self: QtC.QFutureInterfaceBase, other: QtC.QFutureInterfaceBase ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isChainCanceled)
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn IsChainCanceled(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsChainCanceled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfutureinterfacebase.html#dtor.QFutureInterfaceBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFutureInterfaceBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qfutureinterface.html#types
pub const enums = struct {
    pub const State = enum {
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

    pub const CancelMode = enum {
        pub const CancelOnly: i32 = 0;
        pub const CancelAndFinish: i32 = 1;
    };
};
