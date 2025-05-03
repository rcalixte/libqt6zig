const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qfuturewatcherbase.html
pub const qfuturewatcherbase = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QFutureWatcherBase_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QFutureWatcherBase, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QFutureWatcherBase_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QFutureWatcherBase, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QFutureWatcherBase_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QFutureWatcherBase_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValue)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn ProgressValue(self: ?*anyopaque) i32 {
        return C.QFutureWatcherBase_ProgressValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMinimum)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn ProgressMinimum(self: ?*anyopaque) i32 {
        return C.QFutureWatcherBase_ProgressMinimum(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMaximum)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn ProgressMaximum(self: ?*anyopaque) i32 {
        return C.QFutureWatcherBase_ProgressMaximum(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressText)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, allocator: std.mem.Allocator ```
    pub fn ProgressText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QFutureWatcherBase_ProgressText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isStarted)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn IsStarted(self: ?*anyopaque) bool {
        return C.QFutureWatcherBase_IsStarted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isFinished)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return C.QFutureWatcherBase_IsFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isRunning)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn IsRunning(self: ?*anyopaque) bool {
        return C.QFutureWatcherBase_IsRunning(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isCanceled)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn IsCanceled(self: ?*anyopaque) bool {
        return C.QFutureWatcherBase_IsCanceled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isPaused)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn IsPaused(self: ?*anyopaque) bool {
        return C.QFutureWatcherBase_IsPaused(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspending)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn IsSuspending(self: ?*anyopaque) bool {
        return C.QFutureWatcherBase_IsSuspending(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspended)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn IsSuspended(self: ?*anyopaque) bool {
        return C.QFutureWatcherBase_IsSuspended(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#waitForFinished)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn WaitForFinished(self: ?*anyopaque) void {
        C.QFutureWatcherBase_WaitForFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPendingResultsLimit)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, limit: i32 ```
    pub fn SetPendingResultsLimit(self: ?*anyopaque, limit: i32) void {
        C.QFutureWatcherBase_SetPendingResultsLimit(@ptrCast(self), @intCast(limit));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#event)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QFutureWatcherBase_Event(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Started(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Started(@ptrCast(self));
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnStarted(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_Started(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Finished(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Finished(@ptrCast(self));
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Canceled(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Canceled(@ptrCast(self));
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnCanceled(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_Canceled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Paused(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Paused(@ptrCast(self));
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnPaused(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_Paused(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Suspending(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Suspending(@ptrCast(self));
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnSuspending(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_Suspending(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Suspended(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Suspended(@ptrCast(self));
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnSuspended(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_Suspended(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Resumed(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Resumed(@ptrCast(self));
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnResumed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_Resumed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, resultIndex: i32 ```
    pub fn ResultReadyAt(self: ?*anyopaque, resultIndex: i32) void {
        C.QFutureWatcherBase_ResultReadyAt(@ptrCast(self), @intCast(resultIndex));
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase, i32) callconv(.c) void ```
    pub fn OnResultReadyAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_ResultReadyAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultsReadyAt)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, beginIndex: i32, endIndex: i32 ```
    pub fn ResultsReadyAt(self: ?*anyopaque, beginIndex: i32, endIndex: i32) void {
        C.QFutureWatcherBase_ResultsReadyAt(@ptrCast(self), @intCast(beginIndex), @intCast(endIndex));
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase, i32, i32) callconv(.c) void ```
    pub fn OnResultsReadyAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_ResultsReadyAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressRangeChanged)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, minimum: i32, maximum: i32 ```
    pub fn ProgressRangeChanged(self: ?*anyopaque, minimum: i32, maximum: i32) void {
        C.QFutureWatcherBase_ProgressRangeChanged(@ptrCast(self), @intCast(minimum), @intCast(maximum));
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase, i32, i32) callconv(.c) void ```
    pub fn OnProgressRangeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_ProgressRangeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, progressValue: i32 ```
    pub fn ProgressValueChanged(self: ?*anyopaque, progressValue: i32) void {
        C.QFutureWatcherBase_ProgressValueChanged(@ptrCast(self), @intCast(progressValue));
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase, i32) callconv(.c) void ```
    pub fn OnProgressValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_ProgressValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, progressText: []const u8 ```
    pub fn ProgressTextChanged(self: ?*anyopaque, progressText: []const u8) void {
        const progressText_str = C.struct_libqt_string{
            .len = progressText.len,
            .data = @constCast(progressText.ptr),
        };
        C.QFutureWatcherBase_ProgressTextChanged(@ptrCast(self), progressText_str);
    }

    /// ``` self: ?*C.QFutureWatcherBase, slot: fn (?*C.QFutureWatcherBase, []const u8) callconv(.c) void ```
    pub fn OnProgressTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QFutureWatcherBase_Connect_ProgressTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#cancel)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Cancel(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Cancel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setSuspended)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, suspendVal: bool ```
    pub fn SetSuspended(self: ?*anyopaque, suspendVal: bool) void {
        C.QFutureWatcherBase_SetSuspended(@ptrCast(self), suspendVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspend)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Suspend(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Suspend(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resume)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Resume(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Resume(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#toggleSuspended)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn ToggleSuspended(self: ?*anyopaque) void {
        C.QFutureWatcherBase_ToggleSuspended(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPaused)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, paused: bool ```
    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        C.QFutureWatcherBase_SetPaused(@ptrCast(self), paused);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#pause)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Pause(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Pause(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#togglePaused)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn TogglePaused(self: ?*anyopaque) void {
        C.QFutureWatcherBase_TogglePaused(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QFutureWatcherBase_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QFutureWatcherBase_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QFutureWatcherBase, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QFutureWatcherBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QFutureWatcherBase_Delete(@ptrCast(self));
    }
};
