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

    /// New constructs a new QFutureInterfaceBase object.
    ///
    pub fn New() QFutureInterfaceBase {
        return .{ .ptr = qtc.QFutureInterfaceBase_new() };
    }

    /// New2 constructs a new QFutureInterfaceBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QFutureInterfaceBase `
    ///
    pub fn New2(other: anytype) QFutureInterfaceBase {
        comptime _ = @TypeOf(other)._is_QFutureInterfaceBase;
        return .{ .ptr = qtc.QFutureInterfaceBase_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QFutureInterfaceBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` initialState: qfutureinterface_enums.State `
    ///
    pub fn New3(initialState: i32) QFutureInterfaceBase {
        return .{ .ptr = qtc.QFutureInterfaceBase_new3(@bitCast(initialState)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` other: QFutureInterfaceBase `
    ///
    pub fn OperatorAssign(self: QFutureInterfaceBase, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFutureInterfaceBase;
        qtc.QFutureInterfaceBase_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn ReportStarted(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_ReportStarted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn ReportFinished(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_ReportFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn ReportCanceled(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_ReportCanceled(@ptrCast(self.ptr));
    }

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
    pub fn ReportResultsReady(self: QFutureInterfaceBase, beginIndex: i32, endIndex: i32) void {
        qtc.QFutureInterfaceBase_ReportResultsReady(@ptrCast(self.ptr), @bitCast(beginIndex), @bitCast(endIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setRunnable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` runnable: QRunnable `
    ///
    pub fn SetRunnable(self: QFutureInterfaceBase, runnable: anytype) void {
        comptime _ = @TypeOf(runnable)._is_QRunnable;
        qtc.QFutureInterfaceBase_SetRunnable(@ptrCast(self.ptr), @ptrCast(runnable.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThreadPool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` pool: QThreadPool `
    ///
    pub fn SetThreadPool(self: QFutureInterfaceBase, pool: anytype) void {
        comptime _ = @TypeOf(pool)._is_QThreadPool;
        qtc.QFutureInterfaceBase_SetThreadPool(@ptrCast(self.ptr), @ptrCast(pool.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#threadPool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn ThreadPool(self: QFutureInterfaceBase) QThreadPool {
        return .{ .ptr = qtc.QFutureInterfaceBase_ThreadPool(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setFilterMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` enable: bool `
    ///
    pub fn SetFilterMode(self: QFutureInterfaceBase, enable: bool) void {
        qtc.QFutureInterfaceBase_SetFilterMode(@ptrCast(self.ptr), enable);
    }

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
    pub fn SetProgressRange(self: QFutureInterfaceBase, minimum: i32, maximum: i32) void {
        qtc.QFutureInterfaceBase_SetProgressRange(@ptrCast(self.ptr), @bitCast(minimum), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMinimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn ProgressMinimum(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_ProgressMinimum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn ProgressMaximum(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_ProgressMaximum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isProgressUpdateNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn IsProgressUpdateNeeded(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsProgressUpdateNeeded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` progressValue: i32 `
    ///
    pub fn SetProgressValue(self: QFutureInterfaceBase, progressValue: i32) void {
        qtc.QFutureInterfaceBase_SetProgressValue(@ptrCast(self.ptr), @bitCast(progressValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn ProgressValue(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_ProgressValue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setProgressValueAndText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` progressValue: i32 `
    ///
    /// ` progressText: []const u8 `
    ///
    pub fn SetProgressValueAndText(self: QFutureInterfaceBase, progressValue: i32, progressText: []const u8) void {
        const progressText_str = qtc.libqt_string{
            .len = progressText.len,
            .data = progressText.ptr,
        };
        qtc.QFutureInterfaceBase_SetProgressValueAndText(@ptrCast(self.ptr), @bitCast(progressValue), progressText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#progressText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProgressText(self: QFutureInterfaceBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QFutureInterfaceBase_ProgressText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfutureinterfacebase.ProgressText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setExpectedResultCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` resultCount: i32 `
    ///
    pub fn SetExpectedResultCount(self: QFutureInterfaceBase, resultCount: i32) void {
        qtc.QFutureInterfaceBase_SetExpectedResultCount(@ptrCast(self.ptr), @bitCast(resultCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#expectedResultCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn ExpectedResultCount(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_ExpectedResultCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#resultCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn ResultCount(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_ResultCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#queryState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` state: qfutureinterface_enums.State `
    ///
    pub fn QueryState(self: QFutureInterfaceBase, state: i32) bool {
        return qtc.QFutureInterfaceBase_QueryState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn IsRunning(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsRunning(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn IsStarted(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsStarted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn IsCanceled(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsCanceled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn IsFinished(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn IsPaused(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsPaused(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` paused: bool `
    ///
    pub fn SetPaused(self: QFutureInterfaceBase, paused: bool) void {
        qtc.QFutureInterfaceBase_SetPaused(@ptrCast(self.ptr), paused);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#togglePaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn TogglePaused(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_TogglePaused(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn IsSuspending(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsSuspending(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn IsSuspended(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsSuspended(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isThrottled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn IsThrottled(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsThrottled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isResultReadyAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` index: i32 `
    ///
    pub fn IsResultReadyAt(self: QFutureInterfaceBase, index: i32) bool {
        return qtc.QFutureInterfaceBase_IsResultReadyAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn IsValid(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#loadState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn LoadState(self: QFutureInterfaceBase) i32 {
        return qtc.QFutureInterfaceBase_LoadState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn Cancel(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_Cancel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#cancelAndFinish)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn CancelAndFinish(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_CancelAndFinish(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` suspendVal: bool `
    ///
    pub fn SetSuspended(self: QFutureInterfaceBase, suspendVal: bool) void {
        qtc.QFutureInterfaceBase_SetSuspended(@ptrCast(self.ptr), suspendVal);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#toggleSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn ToggleSuspended(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_ToggleSuspended(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#reportSuspended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn ReportSuspended(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_ReportSuspended(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#setThrottled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` enable: bool `
    ///
    pub fn SetThrottled(self: QFutureInterfaceBase, enable: bool) void {
        qtc.QFutureInterfaceBase_SetThrottled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn WaitForFinished(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_WaitForFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForNextResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn WaitForNextResult(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_WaitForNextResult(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` resultIndex: i32 `
    ///
    pub fn WaitForResult(self: QFutureInterfaceBase, resultIndex: i32) void {
        qtc.QFutureInterfaceBase_WaitForResult(@ptrCast(self.ptr), @bitCast(resultIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#waitForResume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn WaitForResume(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_WaitForResume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#suspendIfRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn SuspendIfRequested(self: QFutureInterfaceBase) void {
        qtc.QFutureInterfaceBase_SuspendIfRequested(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#mutex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn Mutex(self: QFutureInterfaceBase) QMutex {
        return .{ .ptr = qtc.QFutureInterfaceBase_Mutex(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#hasException)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn HasException(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_HasException(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` other: QFutureInterfaceBase `
    ///
    pub fn OperatorEqual(self: QFutureInterfaceBase, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFutureInterfaceBase;
        return qtc.QFutureInterfaceBase_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` other: QFutureInterfaceBase `
    ///
    pub fn OperatorNotEqual(self: QFutureInterfaceBase, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFutureInterfaceBase;
        return qtc.QFutureInterfaceBase_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    /// ` other: QFutureInterfaceBase `
    ///
    pub fn Swap(self: QFutureInterfaceBase, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFutureInterfaceBase;
        qtc.QFutureInterfaceBase_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfutureinterfacebase.html#isChainCanceled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn IsChainCanceled(self: QFutureInterfaceBase) bool {
        return qtc.QFutureInterfaceBase_IsChainCanceled(@ptrCast(self.ptr));
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
    /// ` self: QFutureInterfaceBase `
    ///
    pub fn Delete(self: QFutureInterfaceBase) void {
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
