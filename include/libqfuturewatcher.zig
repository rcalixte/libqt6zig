const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qfuturewatcherbase.html
pub const qfuturewatcherbase = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QFutureWatcherBase_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QFutureWatcherBase, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QFutureWatcherBase_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QFutureWatcherBase, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QFutureWatcherBase_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QFutureWatcherBase_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValue)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn ProgressValue(self: ?*anyopaque) i32 {
        return qtc.QFutureWatcherBase_ProgressValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMinimum)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn ProgressMinimum(self: ?*anyopaque) i32 {
        return qtc.QFutureWatcherBase_ProgressMinimum(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressMaximum)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn ProgressMaximum(self: ?*anyopaque) i32 {
        return qtc.QFutureWatcherBase_ProgressMaximum(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressText)
    ///
    /// ``` self: QtC.QFutureWatcherBase, allocator: std.mem.Allocator ```
    pub fn ProgressText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QFutureWatcherBase_ProgressText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.ProgressText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isStarted)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn IsStarted(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsStarted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isFinished)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isRunning)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn IsRunning(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsRunning(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isCanceled)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn IsCanceled(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsCanceled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isPaused)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn IsPaused(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsPaused(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspending)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn IsSuspending(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsSuspending(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#isSuspended)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn IsSuspended(self: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_IsSuspended(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#waitForFinished)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn WaitForFinished(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_WaitForFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPendingResultsLimit)
    ///
    /// ``` self: QtC.QFutureWatcherBase, limit: i32 ```
    pub fn SetPendingResultsLimit(self: ?*anyopaque, limit: i32) void {
        qtc.QFutureWatcherBase_SetPendingResultsLimit(@ptrCast(self), @intCast(limit));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#event)
    ///
    /// ``` self: QtC.QFutureWatcherBase, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QFutureWatcherBase_Event(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Started(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Started(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#started)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnStarted(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Started(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Finished(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Finished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#finished)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Canceled(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Canceled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#canceled)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnCanceled(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Canceled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Paused(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Paused(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#paused)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnPaused(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Paused(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Suspending(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Suspending(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspending)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnSuspending(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Suspending(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Suspended(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Suspended(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspended)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnSuspended(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Suspended(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Resumed(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Resumed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resumed)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase) callconv(.c) void ```
    pub fn OnResumed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_Resumed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
    ///
    /// ``` self: QtC.QFutureWatcherBase, resultIndex: i32 ```
    pub fn ResultReadyAt(self: ?*anyopaque, resultIndex: i32) void {
        qtc.QFutureWatcherBase_ResultReadyAt(@ptrCast(self), @intCast(resultIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultReadyAt)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase, resultIndex: i32) callconv(.c) void ```
    pub fn OnResultReadyAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ResultReadyAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultsReadyAt)
    ///
    /// ``` self: QtC.QFutureWatcherBase, beginIndex: i32, endIndex: i32 ```
    pub fn ResultsReadyAt(self: ?*anyopaque, beginIndex: i32, endIndex: i32) void {
        qtc.QFutureWatcherBase_ResultsReadyAt(@ptrCast(self), @intCast(beginIndex), @intCast(endIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resultsReadyAt)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase, beginIndex: i32, endIndex: i32) callconv(.c) void ```
    pub fn OnResultsReadyAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ResultsReadyAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressRangeChanged)
    ///
    /// ``` self: QtC.QFutureWatcherBase, minimum: i32, maximum: i32 ```
    pub fn ProgressRangeChanged(self: ?*anyopaque, minimum: i32, maximum: i32) void {
        qtc.QFutureWatcherBase_ProgressRangeChanged(@ptrCast(self), @intCast(minimum), @intCast(maximum));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressRangeChanged)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase, minimum: i32, maximum: i32) callconv(.c) void ```
    pub fn OnProgressRangeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressRangeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
    ///
    /// ``` self: QtC.QFutureWatcherBase, progressValue: i32 ```
    pub fn ProgressValueChanged(self: ?*anyopaque, progressValue: i32) void {
        qtc.QFutureWatcherBase_ProgressValueChanged(@ptrCast(self), @intCast(progressValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressValueChanged)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase, progressValue: i32) callconv(.c) void ```
    pub fn OnProgressValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
    ///
    /// ``` self: QtC.QFutureWatcherBase, progressText: []const u8 ```
    pub fn ProgressTextChanged(self: ?*anyopaque, progressText: []const u8) void {
        const progressText_str = qtc.struct_libqt_string{
            .len = progressText.len,
            .data = progressText.ptr,
        };
        qtc.QFutureWatcherBase_ProgressTextChanged(@ptrCast(self), progressText_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#progressTextChanged)
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QFutureWatcherBase, progressText: []const u8) callconv(.c) void ```
    pub fn OnProgressTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QFutureWatcherBase_Connect_ProgressTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#cancel)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Cancel(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Cancel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setSuspended)
    ///
    /// ``` self: QtC.QFutureWatcherBase, suspendVal: bool ```
    pub fn SetSuspended(self: ?*anyopaque, suspendVal: bool) void {
        qtc.QFutureWatcherBase_SetSuspended(@ptrCast(self), suspendVal);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#suspend)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Suspend(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Suspend(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#resume)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Resume(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Resume(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#toggleSuspended)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn ToggleSuspended(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_ToggleSuspended(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#setPaused)
    ///
    /// ``` self: QtC.QFutureWatcherBase, paused: bool ```
    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        qtc.QFutureWatcherBase_SetPaused(@ptrCast(self), paused);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#pause)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Pause(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Pause(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#togglePaused)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn TogglePaused(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_TogglePaused(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QFutureWatcherBase_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QFutureWatcherBase_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QFutureWatcherBase, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QFutureWatcherBase, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfuturewatcherbase.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QFutureWatcherBase, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QFutureWatcherBase, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QFutureWatcherBase, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QFutureWatcherBase, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QFutureWatcherBase, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QFutureWatcherBase, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QFutureWatcherBase, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qfuturewatcherbase.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QFutureWatcherBase, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QFutureWatcherBase, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QFutureWatcherBase, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QFutureWatcherBase, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QFutureWatcherBase, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QFutureWatcherBase, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QFutureWatcherBase, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QFutureWatcherBase, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QFutureWatcherBase, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QFutureWatcherBase, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QFutureWatcherBase, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QFutureWatcherBase, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QFutureWatcherBase, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qfuturewatcherbase.html#dtor.QFutureWatcherBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QFutureWatcherBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFutureWatcherBase_Delete(@ptrCast(self));
    }
};
