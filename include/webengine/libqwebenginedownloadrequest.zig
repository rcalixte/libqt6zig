const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qwebenginedownloadrequest_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qwebenginedownloadrequest.html
pub const qwebenginedownloadrequest = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QWebEngineDownloadRequest_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QWebEngineDownloadRequest, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineDownloadRequest_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QWebEngineDownloadRequest, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QWebEngineDownloadRequest_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QWebEngineDownloadRequest_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#id)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn Id(self: ?*anyopaque) u32 {
        return qtc.QWebEngineDownloadRequest_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#state)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QWebEngineDownloadRequest_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytes)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn TotalBytes(self: ?*anyopaque) i64 {
        return qtc.QWebEngineDownloadRequest_TotalBytes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytes)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn ReceivedBytes(self: ?*anyopaque) i64 {
        return qtc.QWebEngineDownloadRequest_ReceivedBytes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#url)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebEngineDownloadRequest_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#mimeType)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn MimeType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineDownloadRequest_MimeType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinished)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn IsFinished(self: ?*anyopaque) bool {
        return qtc.QWebEngineDownloadRequest_IsFinished(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPaused)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn IsPaused(self: ?*anyopaque) bool {
        return qtc.QWebEngineDownloadRequest_IsPaused(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormat)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn SavePageFormat(self: ?*anyopaque) i64 {
        return qtc.QWebEngineDownloadRequest_SavePageFormat(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setSavePageFormat)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, format: qwebenginedownloadrequest_enums.SavePageFormat ```
    pub fn SetSavePageFormat(self: ?*anyopaque, format: i64) void {
        qtc.QWebEngineDownloadRequest_SetSavePageFormat(@ptrCast(self), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReason)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn InterruptReason(self: ?*anyopaque) i64 {
        return qtc.QWebEngineDownloadRequest_InterruptReason(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonString)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn InterruptReasonString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineDownloadRequest_InterruptReasonString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.InterruptReasonString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isSavePageDownload)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn IsSavePageDownload(self: ?*anyopaque) bool {
        return qtc.QWebEngineDownloadRequest_IsSavePageDownload(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#suggestedFileName)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn SuggestedFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineDownloadRequest_SuggestedFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.SuggestedFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectory)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn DownloadDirectory(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineDownloadRequest_DownloadDirectory(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.DownloadDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadDirectory)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, directory: []const u8 ```
    pub fn SetDownloadDirectory(self: ?*anyopaque, directory: []const u8) void {
        const directory_str = qtc.struct_libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        qtc.QWebEngineDownloadRequest_SetDownloadDirectory(@ptrCast(self), directory_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileName)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn DownloadFileName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebEngineDownloadRequest_DownloadFileName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.DownloadFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadFileName)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, fileName: []const u8 ```
    pub fn SetDownloadFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QWebEngineDownloadRequest_SetDownloadFileName(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#page)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn Page(self: ?*anyopaque) QtC.QWebEnginePage {
        return qtc.QWebEngineDownloadRequest_Page(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#accept)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_Accept(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#cancel)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn Cancel(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_Cancel(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#pause)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn Pause(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_Pause(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#resume)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn Resume(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_Resume(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, state: qwebenginedownloadrequest_enums.DownloadState ```
    pub fn StateChanged(self: ?*anyopaque, state: i64) void {
        qtc.QWebEngineDownloadRequest_StateChanged(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest, state: qwebenginedownloadrequest_enums.DownloadState) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_StateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn SavePageFormatChanged(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_SavePageFormatChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnSavePageFormatChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_SavePageFormatChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn ReceivedBytesChanged(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_ReceivedBytesChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnReceivedBytesChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_ReceivedBytesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn TotalBytesChanged(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_TotalBytesChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnTotalBytesChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_TotalBytesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn InterruptReasonChanged(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_InterruptReasonChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnInterruptReasonChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_InterruptReasonChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn IsFinishedChanged(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_IsFinishedChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnIsFinishedChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_IsFinishedChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn IsPausedChanged(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_IsPausedChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnIsPausedChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_IsPausedChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn DownloadDirectoryChanged(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_DownloadDirectoryChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnDownloadDirectoryChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_DownloadDirectoryChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn DownloadFileNameChanged(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_DownloadFileNameChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnDownloadFileNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_DownloadFileNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QWebEngineDownloadRequest_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QWebEngineDownloadRequest_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, name: []const u8 ```
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
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qwebenginedownloadrequest.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, obj: QtC.QObject ```
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
    /// ``` self: QtC.QWebEngineDownloadRequest, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwebenginedownloadrequest.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebenginedownloadrequest.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
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
    /// ``` self: QtC.QWebEngineDownloadRequest, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest, slot: fn (self: QtC.QWebEngineDownloadRequest, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#dtor.QWebEngineDownloadRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QWebEngineDownloadRequest ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebEngineDownloadRequest_Delete(@ptrCast(self));
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
