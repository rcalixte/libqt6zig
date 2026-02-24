const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qfutureinterface_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html)
pub const qfutureinterfacebase = struct {
    /// New constructs a new QFutureInterfaceBase object.
    ///
    pub fn New() QtC.QFutureInterfaceBase {
        return qtc.QFutureInterfaceBase_new();
    }

    /// New2 constructs a new QFutureInterfaceBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QFutureInterfaceBase `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QFutureInterfaceBase {
        return qtc.QFutureInterfaceBase_new2(@ptrCast(other));
    }

    /// New3 constructs a new QFutureInterfaceBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` initialState: qfutureinterface_enums.State `
    ///
    pub fn New3(initialState: i32) QtC.QFutureInterfaceBase {
        return qtc.QFutureInterfaceBase_new3(@bitCast(initialState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` other: QtC.QFutureInterfaceBase `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn ReportStarted(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_ReportStarted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn ReportFinished(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_ReportFinished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn ReportCanceled(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_ReportCanceled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportResultsReady)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` beginIndex: i32 `
    ///
    /// ` endIndex: i32 `
    ///
    pub fn ReportResultsReady(self: ?*anyopaque, beginIndex: i32, endIndex: i32) void {
        qtc.QFutureInterfaceBase_ReportResultsReady(@ptrCast(self), @bitCast(beginIndex), @bitCast(endIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setRunnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` runnable: QtC.QRunnable `
    ///
    pub fn SetRunnable(self: ?*anyopaque, runnable: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_SetRunnable(@ptrCast(self), @ptrCast(runnable));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThreadPool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` pool: QtC.QThreadPool `
    ///
    pub fn SetThreadPool(self: ?*anyopaque, pool: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_SetThreadPool(@ptrCast(self), @ptrCast(pool));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#threadPool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn ThreadPool(self: ?*anyopaque) QtC.QThreadPool {
        return qtc.QFutureInterfaceBase_ThreadPool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setFilterMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFilterMode(self: ?*anyopaque, enable: bool) void {
        qtc.QFutureInterfaceBase_SetFilterMode(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` minimum: i32 `
    ///
    /// ` maximum: i32 `
    ///
    pub fn SetProgressRange(self: ?*anyopaque, minimum: i32, maximum: i32) void {
        qtc.QFutureInterfaceBase_SetProgressRange(@ptrCast(self), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMinimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn ProgressMinimum(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_ProgressMinimum(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn ProgressMaximum(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_ProgressMaximum(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isProgressUpdateNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn IsProgressUpdateNeeded(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsProgressUpdateNeeded(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` progressValue: i32 `
    ///
    pub fn SetProgressValue(self: ?*anyopaque, progressValue: i32) void {
        qtc.QFutureInterfaceBase_SetProgressValue(@ptrCast(self), @bitCast(progressValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn ProgressValue(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_ProgressValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValueAndText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` progressValue: i32 `
    ///
    /// ` progressText: []const u8 `
    ///
    pub fn SetProgressValueAndText(self: ?*anyopaque, progressValue: i32, progressText: []const u8) void {
        const progressText_str = qtc.libqt_string{
            .len = progressText.len,
            .data = progressText.ptr,
        };
        qtc.QFutureInterfaceBase_SetProgressValueAndText(@ptrCast(self), @bitCast(progressValue), progressText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProgressText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFutureInterfaceBase_ProgressText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfutureinterfacebase.ProgressText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setExpectedResultCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` resultCount: i32 `
    ///
    pub fn SetExpectedResultCount(self: ?*anyopaque, resultCount: i32) void {
        qtc.QFutureInterfaceBase_SetExpectedResultCount(@ptrCast(self), @bitCast(resultCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#expectedResultCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn ExpectedResultCount(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_ExpectedResultCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#resultCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn ResultCount(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_ResultCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#queryState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` state: qfutureinterface_enums.State `
    ///
    pub fn QueryState(self: ?*anyopaque, state: i32) bool {
        return qtc.QFutureInterfaceBase_QueryState(@ptrCast(self), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn IsRunning(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsRunning(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn IsStarted(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsStarted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn IsCanceled(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsCanceled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsFinished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn IsPaused(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsPaused(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` paused: bool `
    ///
    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        qtc.QFutureInterfaceBase_SetPaused(@ptrCast(self), paused);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#togglePaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn TogglePaused(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_TogglePaused(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn IsSuspending(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsSuspending(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn IsSuspended(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsSuspended(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isThrottled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn IsThrottled(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsThrottled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isResultReadyAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` index: i32 `
    ///
    pub fn IsResultReadyAt(self: ?*anyopaque, index: i32) bool {
        return qtc.QFutureInterfaceBase_IsResultReadyAt(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#loadState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn LoadState(self: ?*anyopaque) i32 {
        return qtc.QFutureInterfaceBase_LoadState(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn Cancel(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_Cancel(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancelAndFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn CancelAndFinish(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_CancelAndFinish(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` suspendVal: bool `
    ///
    pub fn SetSuspended(self: ?*anyopaque, suspendVal: bool) void {
        qtc.QFutureInterfaceBase_SetSuspended(@ptrCast(self), suspendVal);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#toggleSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn ToggleSuspended(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_ToggleSuspended(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn ReportSuspended(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_ReportSuspended(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThrottled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` enable: bool `
    ///
    pub fn SetThrottled(self: ?*anyopaque, enable: bool) void {
        qtc.QFutureInterfaceBase_SetThrottled(@ptrCast(self), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn WaitForFinished(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_WaitForFinished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForNextResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn WaitForNextResult(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_WaitForNextResult(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` resultIndex: i32 `
    ///
    pub fn WaitForResult(self: ?*anyopaque, resultIndex: i32) void {
        qtc.QFutureInterfaceBase_WaitForResult(@ptrCast(self), @bitCast(resultIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn WaitForResume(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_WaitForResume(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#suspendIfRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn SuspendIfRequested(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_SuspendIfRequested(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#mutex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn Mutex(self: ?*anyopaque) QtC.QMutex {
        return qtc.QFutureInterfaceBase_Mutex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#hasException)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn HasException(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_HasException(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` other: QtC.QFutureInterfaceBase `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` other: QtC.QFutureInterfaceBase `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    /// ` other: QtC.QFutureInterfaceBase `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isChainCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn IsChainCanceled(self: ?*anyopaque) bool {
        return qtc.QFutureInterfaceBase_IsChainCanceled(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#dtor.QFutureInterfaceBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFutureInterfaceBase `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QFutureInterfaceBase_Delete(@ptrCast(self));
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
