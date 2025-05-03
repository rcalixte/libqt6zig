const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qwebenginedownloadrequest_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qwebenginedownloadrequest.html
pub const qwebenginedownloadrequest = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QWebEngineDownloadRequest_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEngineDownloadRequest, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QWebEngineDownloadRequest_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QWebEngineDownloadRequest, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QWebEngineDownloadRequest_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QWebEngineDownloadRequest_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#id)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn Id(self: ?*anyopaque) u32 {
        return C.QWebEngineDownloadRequest_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#state)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn State(self: ?*anyopaque) i64 {
        return C.QWebEngineDownloadRequest_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytes)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn TotalBytes(self: ?*anyopaque) i64 {
        return C.QWebEngineDownloadRequest_TotalBytes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytes)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn ReceivedBytes(self: ?*anyopaque) i64 {
        return C.QWebEngineDownloadRequest_ReceivedBytes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#url)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn Url(self: ?*anyopaque) ?*C.QUrl {
        return C.QWebEngineDownloadRequest_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#mimeType)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn MimeType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineDownloadRequest_MimeType(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinished)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return C.QWebEngineDownloadRequest_IsFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPaused)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn IsPaused(self: ?*anyopaque) bool {
        return C.QWebEngineDownloadRequest_IsPaused(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormat)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn SavePageFormat(self: ?*anyopaque) i64 {
        return C.QWebEngineDownloadRequest_SavePageFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setSavePageFormat)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, format: qwebenginedownloadrequest_enums.SavePageFormat ```
    pub fn SetSavePageFormat(self: ?*anyopaque, format: i64) void {
        C.QWebEngineDownloadRequest_SetSavePageFormat(@ptrCast(self), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReason)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn InterruptReason(self: ?*anyopaque) i64 {
        return C.QWebEngineDownloadRequest_InterruptReason(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonString)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn InterruptReasonString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineDownloadRequest_InterruptReasonString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isSavePageDownload)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn IsSavePageDownload(self: ?*anyopaque) bool {
        return C.QWebEngineDownloadRequest_IsSavePageDownload(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#suggestedFileName)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn SuggestedFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineDownloadRequest_SuggestedFileName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectory)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn DownloadDirectory(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineDownloadRequest_DownloadDirectory(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadDirectory)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, directory: []const u8 ```
    pub fn SetDownloadDirectory(self: ?*anyopaque, directory: []const u8) void {
        const directory_str = C.struct_libqt_string{
            .len = directory.len,
            .data = @constCast(directory.ptr),
        };
        C.QWebEngineDownloadRequest_SetDownloadDirectory(@ptrCast(self), directory_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileName)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn DownloadFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWebEngineDownloadRequest_DownloadFileName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadFileName)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, fileName: []const u8 ```
    pub fn SetDownloadFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        C.QWebEngineDownloadRequest_SetDownloadFileName(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#page)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn Page(self: ?*anyopaque) ?*C.QWebEnginePage {
        return C.QWebEngineDownloadRequest_Page(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#accept)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn Accept(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_Accept(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#cancel)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn Cancel(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_Cancel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#pause)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn Pause(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_Pause(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#resume)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn Resume(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_Resume(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, state: qwebenginedownloadrequest_enums.DownloadState ```
    pub fn StateChanged(self: ?*anyopaque, state: i64) void {
        C.QWebEngineDownloadRequest_StateChanged(@ptrCast(self), @intCast(state));
    }

    /// ``` self: ?*C.QWebEngineDownloadRequest, slot: fn (?*C.QWebEngineDownloadRequest, qwebenginedownloadrequest_enums.DownloadState) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QWebEngineDownloadRequest_Connect_StateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn SavePageFormatChanged(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_SavePageFormatChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEngineDownloadRequest, slot: fn (?*C.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnSavePageFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEngineDownloadRequest_Connect_SavePageFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn ReceivedBytesChanged(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_ReceivedBytesChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEngineDownloadRequest, slot: fn (?*C.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnReceivedBytesChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEngineDownloadRequest_Connect_ReceivedBytesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn TotalBytesChanged(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_TotalBytesChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEngineDownloadRequest, slot: fn (?*C.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnTotalBytesChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEngineDownloadRequest_Connect_TotalBytesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn InterruptReasonChanged(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_InterruptReasonChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEngineDownloadRequest, slot: fn (?*C.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnInterruptReasonChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEngineDownloadRequest_Connect_InterruptReasonChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn IsFinishedChanged(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_IsFinishedChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEngineDownloadRequest, slot: fn (?*C.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnIsFinishedChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEngineDownloadRequest_Connect_IsFinishedChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn IsPausedChanged(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_IsPausedChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEngineDownloadRequest, slot: fn (?*C.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnIsPausedChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEngineDownloadRequest_Connect_IsPausedChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn DownloadDirectoryChanged(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_DownloadDirectoryChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEngineDownloadRequest, slot: fn (?*C.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnDownloadDirectoryChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEngineDownloadRequest_Connect_DownloadDirectoryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn DownloadFileNameChanged(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_DownloadFileNameChanged(@ptrCast(self));
    }

    /// ``` self: ?*C.QWebEngineDownloadRequest, slot: fn (?*C.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnDownloadFileNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QWebEngineDownloadRequest_Connect_DownloadFileNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QWebEngineDownloadRequest_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QWebEngineDownloadRequest_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QWebEngineDownloadRequest, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QWebEngineDownloadRequest, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QWebEngineDownloadRequest, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
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
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QWebEngineDownloadRequest, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QWebEngineDownloadRequest, param1: ?*C.QObject ```
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
    /// ``` self: ?*C.QWebEngineDownloadRequest ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QWebEngineDownloadRequest_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#types
pub const enums = struct {
    pub const DownloadState = enum {
        pub const DownloadRequested: i32 = 0;
        pub const DownloadInProgress: i32 = 1;
        pub const DownloadCompleted: i32 = 2;
        pub const DownloadCancelled: i32 = 3;
        pub const DownloadInterrupted: i32 = 4;
    };

    pub const SavePageFormat = enum {
        pub const UnknownSaveFormat: i32 = -1;
        pub const SingleHtmlSaveFormat: i32 = 0;
        pub const CompleteHtmlSaveFormat: i32 = 1;
        pub const MimeHtmlSaveFormat: i32 = 2;
    };

    pub const DownloadInterruptReason = enum {
        pub const NoReason: i32 = 0;
        pub const FileFailed: i32 = 1;
        pub const FileAccessDenied: i32 = 2;
        pub const FileNoSpace: i32 = 3;
        pub const FileNameTooLong: i32 = 5;
        pub const FileTooLarge: i32 = 6;
        pub const FileVirusInfected: i32 = 7;
        pub const FileTransientError: i32 = 10;
        pub const FileBlocked: i32 = 11;
        pub const FileSecurityCheckFailed: i32 = 12;
        pub const FileTooShort: i32 = 13;
        pub const FileHashMismatch: i32 = 14;
        pub const NetworkFailed: i32 = 20;
        pub const NetworkTimeout: i32 = 21;
        pub const NetworkDisconnected: i32 = 22;
        pub const NetworkServerDown: i32 = 23;
        pub const NetworkInvalidRequest: i32 = 24;
        pub const ServerFailed: i32 = 30;
        pub const ServerBadContent: i32 = 33;
        pub const ServerUnauthorized: i32 = 34;
        pub const ServerCertProblem: i32 = 35;
        pub const ServerForbidden: i32 = 36;
        pub const ServerUnreachable: i32 = 37;
        pub const UserCanceled: i32 = 40;
    };
};
