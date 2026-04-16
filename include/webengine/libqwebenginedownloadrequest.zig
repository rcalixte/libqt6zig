const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWebEnginePage = @import("libqt6").QWebEnginePage;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qwebenginedownloadrequest_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html)
pub const QWebEngineDownloadRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebEngineDownloadRequest,

    pub const _is_QWebEngineDownloadRequest = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn MetaObject(self: QWebEngineDownloadRequest) QMetaObject {
        return .{ .ptr = qtc.QWebEngineDownloadRequest_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QWebEngineDownloadRequest, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineDownloadRequest_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QWebEngineDownloadRequest, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEngineDownloadRequest_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Id(self: QWebEngineDownloadRequest) u32 {
        return qtc.QWebEngineDownloadRequest_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginedownloadrequest_enums.DownloadState `
    ///
    pub fn State(self: QWebEngineDownloadRequest) i32 {
        return qtc.QWebEngineDownloadRequest_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn TotalBytes(self: QWebEngineDownloadRequest) i64 {
        return qtc.QWebEngineDownloadRequest_TotalBytes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn ReceivedBytes(self: QWebEngineDownloadRequest) i64 {
        return qtc.QWebEngineDownloadRequest_ReceivedBytes(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Url(self: QWebEngineDownloadRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineDownloadRequest_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn IsFinished(self: QWebEngineDownloadRequest) bool {
        return qtc.QWebEngineDownloadRequest_IsFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn IsPaused(self: QWebEngineDownloadRequest) bool {
        return qtc.QWebEngineDownloadRequest_IsPaused(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginedownloadrequest_enums.SavePageFormat `
    ///
    pub fn SavePageFormat(self: QWebEngineDownloadRequest) i32 {
        return qtc.QWebEngineDownloadRequest_SavePageFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setSavePageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` format: qwebenginedownloadrequest_enums.SavePageFormat `
    ///
    pub fn SetSavePageFormat(self: QWebEngineDownloadRequest, format: i32) void {
        qtc.QWebEngineDownloadRequest_SetSavePageFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginedownloadrequest_enums.DownloadInterruptReason `
    ///
    pub fn InterruptReason(self: QWebEngineDownloadRequest) i32 {
        return qtc.QWebEngineDownloadRequest_InterruptReason(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InterruptReasonString(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_InterruptReasonString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.InterruptReasonString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isSavePageDownload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn IsSavePageDownload(self: QWebEngineDownloadRequest) bool {
        return qtc.QWebEngineDownloadRequest_IsSavePageDownload(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#suggestedFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuggestedFileName(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_SuggestedFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.SuggestedFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DownloadDirectory(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_DownloadDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.DownloadDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn SetDownloadDirectory(self: QWebEngineDownloadRequest, directory: []const u8) void {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        qtc.QWebEngineDownloadRequest_SetDownloadDirectory(@ptrCast(self.ptr), directory_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DownloadFileName(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_DownloadFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.DownloadFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetDownloadFileName(self: QWebEngineDownloadRequest, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QWebEngineDownloadRequest_SetDownloadFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#page)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Page(self: QWebEngineDownloadRequest) QWebEnginePage {
        return .{ .ptr = qtc.QWebEngineDownloadRequest_Page(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Accept(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Accept(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Cancel(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Cancel(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Pause(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Pause(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Resume(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Resume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` state: qwebenginedownloadrequest_enums.DownloadState `
    ///
    pub fn StateChanged(self: QWebEngineDownloadRequest, state: i32) void {
        qtc.QWebEngineDownloadRequest_StateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest, state: qwebenginedownloadrequest_enums.DownloadState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest, i32) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn SavePageFormatChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_SavePageFormatChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn OnSavePageFormatChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_SavePageFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn ReceivedBytesChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_ReceivedBytesChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn OnReceivedBytesChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_ReceivedBytesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn TotalBytesChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_TotalBytesChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn OnTotalBytesChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_TotalBytesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn InterruptReasonChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_InterruptReasonChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn OnInterruptReasonChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_InterruptReasonChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn IsFinishedChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_IsFinishedChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn OnIsFinishedChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_IsFinishedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn IsPausedChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_IsPausedChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn OnIsPausedChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_IsPausedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn DownloadDirectoryChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_DownloadDirectoryChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn OnDownloadDirectoryChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_DownloadDirectoryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn DownloadFileNameChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_DownloadFileNameChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn OnDownloadFileNameChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_DownloadFileNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QWebEngineDownloadRequest, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QWebEngineDownloadRequest, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebenginedownloadrequest.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QWebEngineDownloadRequest, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn IsWidgetType(self: QWebEngineDownloadRequest) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn IsWindowType(self: QWebEngineDownloadRequest) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn IsQuickItemType(self: QWebEngineDownloadRequest) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn SignalsBlocked(self: QWebEngineDownloadRequest) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QWebEngineDownloadRequest, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Thread(self: QWebEngineDownloadRequest) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QWebEngineDownloadRequest, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QWebEngineDownloadRequest, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QWebEngineDownloadRequest, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QWebEngineDownloadRequest, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QWebEngineDownloadRequest, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qwebenginedownloadrequest.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QWebEngineDownloadRequest, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QWebEngineDownloadRequest, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QWebEngineDownloadRequest, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QWebEngineDownloadRequest, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Disconnect3(self: QWebEngineDownloadRequest) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QWebEngineDownloadRequest, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn DumpObjectTree(self: QWebEngineDownloadRequest) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn DumpObjectInfo(self: QWebEngineDownloadRequest) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QWebEngineDownloadRequest, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QWebEngineDownloadRequest, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn BindingStorage(self: QWebEngineDownloadRequest) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn BindingStorage2(self: QWebEngineDownloadRequest) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Destroyed(self: QWebEngineDownloadRequest) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Parent(self: QWebEngineDownloadRequest) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QWebEngineDownloadRequest, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn DeleteLater(self: QWebEngineDownloadRequest) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QWebEngineDownloadRequest, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QWebEngineDownloadRequest, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QWebEngineDownloadRequest, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QWebEngineDownloadRequest, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QWebEngineDownloadRequest, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QWebEngineDownloadRequest, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QWebEngineDownloadRequest, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QWebEngineDownloadRequest, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#dtor.QWebEngineDownloadRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn Delete(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#public-types)
pub const enums = struct {
    pub const DownloadState = enum(i32) {
        pub const DownloadRequested: i32 = 0;
        pub const DownloadInProgress: i32 = 1;
        pub const DownloadCompleted: i32 = 2;
        pub const DownloadCancelled: i32 = 3;
        pub const DownloadInterrupted: i32 = 4;
    };

    pub const SavePageFormat = enum(i32) {
        pub const UnknownSaveFormat: i32 = -1;
        pub const SingleHtmlSaveFormat: i32 = 0;
        pub const CompleteHtmlSaveFormat: i32 = 1;
        pub const MimeHtmlSaveFormat: i32 = 2;
    };

    pub const DownloadInterruptReason = enum(i32) {
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
