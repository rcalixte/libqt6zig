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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn metaObject(self: QWebEngineDownloadRequest) QMetaObject {
        return .{ .ptr = qtc.QWebEngineDownloadRequest_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QWebEngineDownloadRequest, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebEngineDownloadRequest_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QWebEngineDownloadRequest, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebEngineDownloadRequest_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineDownloadRequest.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn id(self: QWebEngineDownloadRequest) u32 {
        return qtc.QWebEngineDownloadRequest_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QWebEngineDownloadRequest) i32 {
        return qtc.QWebEngineDownloadRequest_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `totalBytes` instead
    ///
    pub const TotalBytes = totalBytes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn totalBytes(self: QWebEngineDownloadRequest) i64 {
        return qtc.QWebEngineDownloadRequest_TotalBytes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `receivedBytes` instead
    ///
    pub const ReceivedBytes = receivedBytes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn receivedBytes(self: QWebEngineDownloadRequest) i64 {
        return qtc.QWebEngineDownloadRequest_ReceivedBytes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn url(self: QWebEngineDownloadRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineDownloadRequest_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeType(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineDownloadRequest.mimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn isFinished(self: QWebEngineDownloadRequest) bool {
        return qtc.QWebEngineDownloadRequest_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPaused` instead
    ///
    pub const IsPaused = isPaused;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn isPaused(self: QWebEngineDownloadRequest) bool {
        return qtc.QWebEngineDownloadRequest_IsPaused(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `savePageFormat` instead
    ///
    pub const SavePageFormat = savePageFormat;

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
    pub fn savePageFormat(self: QWebEngineDownloadRequest) i32 {
        return qtc.QWebEngineDownloadRequest_SavePageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSavePageFormat` instead
    ///
    pub const SetSavePageFormat = setSavePageFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setSavePageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` format: qwebenginedownloadrequest_enums.SavePageFormat `
    ///
    pub fn setSavePageFormat(self: QWebEngineDownloadRequest, format: i32) void {
        qtc.QWebEngineDownloadRequest_SetSavePageFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### DEPRECATED: Use `interruptReason` instead
    ///
    pub const InterruptReason = interruptReason;

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
    pub fn interruptReason(self: QWebEngineDownloadRequest) i32 {
        return qtc.QWebEngineDownloadRequest_InterruptReason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `interruptReasonString` instead
    ///
    pub const InterruptReasonString = interruptReasonString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn interruptReasonString(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_InterruptReasonString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineDownloadRequest.interruptReasonString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isSavePageDownload` instead
    ///
    pub const IsSavePageDownload = isSavePageDownload;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isSavePageDownload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn isSavePageDownload(self: QWebEngineDownloadRequest) bool {
        return qtc.QWebEngineDownloadRequest_IsSavePageDownload(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `suggestedFileName` instead
    ///
    pub const SuggestedFileName = suggestedFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#suggestedFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn suggestedFileName(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_SuggestedFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineDownloadRequest.suggestedFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `downloadDirectory` instead
    ///
    pub const DownloadDirectory = downloadDirectory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn downloadDirectory(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_DownloadDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineDownloadRequest.downloadDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDownloadDirectory` instead
    ///
    pub const SetDownloadDirectory = setDownloadDirectory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn setDownloadDirectory(self: QWebEngineDownloadRequest, directory: []const u8) void {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        qtc.QWebEngineDownloadRequest_SetDownloadDirectory(@ptrCast(self.ptr), directory_str);
    }

    /// ### DEPRECATED: Use `downloadFileName` instead
    ///
    pub const DownloadFileName = downloadFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn downloadFileName(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_DownloadFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineDownloadRequest.downloadFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDownloadFileName` instead
    ///
    pub const SetDownloadFileName = setDownloadFileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setDownloadFileName(self: QWebEngineDownloadRequest, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QWebEngineDownloadRequest_SetDownloadFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `page` instead
    ///
    pub const Page = page;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#page)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn page(self: QWebEngineDownloadRequest) QWebEnginePage {
        return .{ .ptr = qtc.QWebEngineDownloadRequest_Page(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn accept(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cancel` instead
    ///
    pub const Cancel = cancel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn cancel(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Cancel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pause` instead
    ///
    pub const Pause = pause;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn pause(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Pause(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn resume0(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` _state: qwebenginedownloadrequest_enums.DownloadState `
    ///
    pub fn stateChanged(self: QWebEngineDownloadRequest, _state: i32) void {
        qtc.QWebEngineDownloadRequest_StateChanged(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest, state: qwebenginedownloadrequest_enums.DownloadState) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest, i32) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `savePageFormatChanged` instead
    ///
    pub const SavePageFormatChanged = savePageFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn savePageFormatChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_SavePageFormatChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSavePageFormatChanged` instead
    ///
    pub const OnSavePageFormatChanged = onSavePageFormatChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onSavePageFormatChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_SavePageFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivedBytesChanged` instead
    ///
    pub const ReceivedBytesChanged = receivedBytesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn receivedBytesChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_ReceivedBytesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReceivedBytesChanged` instead
    ///
    pub const OnReceivedBytesChanged = onReceivedBytesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onReceivedBytesChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_ReceivedBytesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `totalBytesChanged` instead
    ///
    pub const TotalBytesChanged = totalBytesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn totalBytesChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_TotalBytesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTotalBytesChanged` instead
    ///
    pub const OnTotalBytesChanged = onTotalBytesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onTotalBytesChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_TotalBytesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `interruptReasonChanged` instead
    ///
    pub const InterruptReasonChanged = interruptReasonChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn interruptReasonChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_InterruptReasonChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInterruptReasonChanged` instead
    ///
    pub const OnInterruptReasonChanged = onInterruptReasonChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onInterruptReasonChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_InterruptReasonChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isFinishedChanged` instead
    ///
    pub const IsFinishedChanged = isFinishedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn isFinishedChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_IsFinishedChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsFinishedChanged` instead
    ///
    pub const OnIsFinishedChanged = onIsFinishedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onIsFinishedChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_IsFinishedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isPausedChanged` instead
    ///
    pub const IsPausedChanged = isPausedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn isPausedChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_IsPausedChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsPausedChanged` instead
    ///
    pub const OnIsPausedChanged = onIsPausedChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onIsPausedChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_IsPausedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `downloadDirectoryChanged` instead
    ///
    pub const DownloadDirectoryChanged = downloadDirectoryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn downloadDirectoryChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_DownloadDirectoryChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDownloadDirectoryChanged` instead
    ///
    pub const OnDownloadDirectoryChanged = onDownloadDirectoryChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onDownloadDirectoryChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_DownloadDirectoryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `downloadFileNameChanged` instead
    ///
    pub const DownloadFileNameChanged = downloadFileNameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn downloadFileNameChanged(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_DownloadFileNameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDownloadFileNameChanged` instead
    ///
    pub const OnDownloadFileNameChanged = onDownloadFileNameChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onDownloadFileNameChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_DownloadFileNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineDownloadRequest.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineDownloadRequest.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QWebEngineDownloadRequest, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QWebEngineDownloadRequest, watched: anytype, _event: anytype) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebEngineDownloadRequest.objectName: Memory allocation failed");
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QWebEngineDownloadRequest, name: []const u8) void {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn isWidgetType(self: QWebEngineDownloadRequest) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn isWindowType(self: QWebEngineDownloadRequest) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn isQuickItemType(self: QWebEngineDownloadRequest) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn signalsBlocked(self: QWebEngineDownloadRequest) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QWebEngineDownloadRequest, b: bool) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn thread(self: QWebEngineDownloadRequest) QThread {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QWebEngineDownloadRequest, _thread: anytype) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QWebEngineDownloadRequest, interval: i32) i32 {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QWebEngineDownloadRequest, time: i64) i32 {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` _id: i32 `
    ///
    pub fn killTimer(self: QWebEngineDownloadRequest, _id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` _id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QWebEngineDownloadRequest, _id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(_id));
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QWebEngineDownloadRequest.children: Memory allocation failed");
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QWebEngineDownloadRequest, _parent: anytype) void {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QWebEngineDownloadRequest, filterObj: anytype) void {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QWebEngineDownloadRequest, obj: anytype) void {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QWebEngineDownloadRequest, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn disconnect3(self: QWebEngineDownloadRequest) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QWebEngineDownloadRequest, receiver: anytype) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn dumpObjectTree(self: QWebEngineDownloadRequest) void {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn dumpObjectInfo(self: QWebEngineDownloadRequest) void {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QWebEngineDownloadRequest, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QWebEngineDownloadRequest, name: [:0]const u8) QVariant {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QWebEngineDownloadRequest, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QWebEngineDownloadRequest.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebEngineDownloadRequest.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn bindingStorage(self: QWebEngineDownloadRequest) QBindingStorage {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn bindingStorage2(self: QWebEngineDownloadRequest) QBindingStorage {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn destroyed(self: QWebEngineDownloadRequest) void {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest) callconv(.c) void) void {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn parent(self: QWebEngineDownloadRequest) QObject {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QWebEngineDownloadRequest, classname: [:0]const u8) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn deleteLater(self: QWebEngineDownloadRequest) void {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QWebEngineDownloadRequest, interval: i32, timerType: i32) i32 {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QWebEngineDownloadRequest, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QWebEngineDownloadRequest, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QWebEngineDownloadRequest, signal: [:0]const u8) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QWebEngineDownloadRequest, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QWebEngineDownloadRequest, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QWebEngineDownloadRequest, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QWebEngineDownloadRequest, param1: anytype) void {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest, QObject) callconv(.c) void) void {
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
    /// ` self: QWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QWebEngineDownloadRequest, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QWebEngineDownloadRequest, callback: *const fn (QWebEngineDownloadRequest, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#dtor.QWebEngineDownloadRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebEngineDownloadRequest `
    ///
    pub fn delete(self: QWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#public-types)
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
