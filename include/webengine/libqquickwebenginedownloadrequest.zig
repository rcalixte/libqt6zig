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
const qwebenginedownloadrequest_enums = @import("libqwebenginedownloadrequest.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebenginedownloadrequest.html)
pub const QQuickWebEngineDownloadRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebenginedownloadrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQuickWebEngineDownloadRequest,

    pub const _is_QQuickWebEngineDownloadRequest = {};
    pub const _is_QWebEngineDownloadRequest = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn metaObject(self: QQuickWebEngineDownloadRequest) QMetaObject {
        return .{ .ptr = qtc.QQuickWebEngineDownloadRequest_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QQuickWebEngineDownloadRequest, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QQuickWebEngineDownloadRequest_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QQuickWebEngineDownloadRequest, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QQuickWebEngineDownloadRequest_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQuickWebEngineDownloadRequest_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineDownloadRequest.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `qmlMarkerUncreatable` instead
    ///
    pub const QmlMarkerUncreatable = qmlMarkerUncreatable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebenginedownloadrequest.html#qt_qmlMarker_uncreatable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn qmlMarkerUncreatable(self: QQuickWebEngineDownloadRequest) void {
        qtc.QQuickWebEngineDownloadRequest_QmlMarkerUncreatable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQuickWebEngineDownloadRequest_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineDownloadRequest.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QObject
    ///
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
        var _str = qtc.QQuickWebEngineDownloadRequest_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineDownloadRequest.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn id(self: QQuickWebEngineDownloadRequest) u32 {
        return qtc.QWebEngineDownloadRequest_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginedownloadrequest_enums.DownloadState `
    ///
    pub fn state(self: QQuickWebEngineDownloadRequest) i32 {
        return qtc.QWebEngineDownloadRequest_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `totalBytes` instead
    ///
    pub const TotalBytes = totalBytes;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn totalBytes(self: QQuickWebEngineDownloadRequest) i64 {
        return qtc.QWebEngineDownloadRequest_TotalBytes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `receivedBytes` instead
    ///
    pub const ReceivedBytes = receivedBytes;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn receivedBytes(self: QQuickWebEngineDownloadRequest) i64 {
        return qtc.QWebEngineDownloadRequest_ReceivedBytes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn url(self: QQuickWebEngineDownloadRequest) QUrl {
        return .{ .ptr = qtc.QWebEngineDownloadRequest_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeType(self: QQuickWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineDownloadRequest.mimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn isFinished(self: QQuickWebEngineDownloadRequest) bool {
        return qtc.QWebEngineDownloadRequest_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPaused` instead
    ///
    pub const IsPaused = isPaused;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn isPaused(self: QQuickWebEngineDownloadRequest) bool {
        return qtc.QWebEngineDownloadRequest_IsPaused(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `savePageFormat` instead
    ///
    pub const SavePageFormat = savePageFormat;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginedownloadrequest_enums.SavePageFormat `
    ///
    pub fn savePageFormat(self: QQuickWebEngineDownloadRequest) i32 {
        return qtc.QWebEngineDownloadRequest_SavePageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSavePageFormat` instead
    ///
    pub const SetSavePageFormat = setSavePageFormat;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setSavePageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` format: qwebenginedownloadrequest_enums.SavePageFormat `
    ///
    pub fn setSavePageFormat(self: QQuickWebEngineDownloadRequest, format: i32) void {
        qtc.QWebEngineDownloadRequest_SetSavePageFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### DEPRECATED: Use `interruptReason` instead
    ///
    pub const InterruptReason = interruptReason;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ## Returns:
    ///
    /// ` qwebenginedownloadrequest_enums.DownloadInterruptReason `
    ///
    pub fn interruptReason(self: QQuickWebEngineDownloadRequest) i32 {
        return qtc.QWebEngineDownloadRequest_InterruptReason(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `interruptReasonString` instead
    ///
    pub const InterruptReasonString = interruptReasonString;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn interruptReasonString(self: QQuickWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_InterruptReasonString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineDownloadRequest.interruptReasonString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isSavePageDownload` instead
    ///
    pub const IsSavePageDownload = isSavePageDownload;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isSavePageDownload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn isSavePageDownload(self: QQuickWebEngineDownloadRequest) bool {
        return qtc.QWebEngineDownloadRequest_IsSavePageDownload(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `suggestedFileName` instead
    ///
    pub const SuggestedFileName = suggestedFileName;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#suggestedFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn suggestedFileName(self: QQuickWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_SuggestedFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineDownloadRequest.suggestedFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `downloadDirectory` instead
    ///
    pub const DownloadDirectory = downloadDirectory;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn downloadDirectory(self: QQuickWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_DownloadDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineDownloadRequest.downloadDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDownloadDirectory` instead
    ///
    pub const SetDownloadDirectory = setDownloadDirectory;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` directory: []const u8 `
    ///
    pub fn setDownloadDirectory(self: QQuickWebEngineDownloadRequest, directory: []const u8) void {
        const directory_str = qtc.libqt_string{
            .len = directory.len,
            .data = directory.ptr,
        };
        qtc.QWebEngineDownloadRequest_SetDownloadDirectory(@ptrCast(self.ptr), directory_str);
    }

    /// ### DEPRECATED: Use `downloadFileName` instead
    ///
    pub const DownloadFileName = downloadFileName;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn downloadFileName(self: QQuickWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebEngineDownloadRequest_DownloadFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineDownloadRequest.downloadFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDownloadFileName` instead
    ///
    pub const SetDownloadFileName = setDownloadFileName;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#setDownloadFileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setDownloadFileName(self: QQuickWebEngineDownloadRequest, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QWebEngineDownloadRequest_SetDownloadFileName(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `page` instead
    ///
    pub const Page = page;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#page)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn page(self: QQuickWebEngineDownloadRequest) QWebEnginePage {
        return .{ .ptr = qtc.QWebEngineDownloadRequest_Page(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn accept(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cancel` instead
    ///
    pub const Cancel = cancel;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#cancel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn cancel(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Cancel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pause` instead
    ///
    pub const Pause = pause;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn pause(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Pause(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn resume0(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` _state: qwebenginedownloadrequest_enums.DownloadState `
    ///
    pub fn stateChanged(self: QQuickWebEngineDownloadRequest, _state: i32) void {
        qtc.QWebEngineDownloadRequest_StateChanged(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest, state: qwebenginedownloadrequest_enums.DownloadState) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest, i32) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `savePageFormatChanged` instead
    ///
    pub const SavePageFormatChanged = savePageFormatChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn savePageFormatChanged(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_SavePageFormatChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSavePageFormatChanged` instead
    ///
    pub const OnSavePageFormatChanged = onSavePageFormatChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#savePageFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onSavePageFormatChanged(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_SavePageFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivedBytesChanged` instead
    ///
    pub const ReceivedBytesChanged = receivedBytesChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn receivedBytesChanged(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_ReceivedBytesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReceivedBytesChanged` instead
    ///
    pub const OnReceivedBytesChanged = onReceivedBytesChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#receivedBytesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onReceivedBytesChanged(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_ReceivedBytesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `totalBytesChanged` instead
    ///
    pub const TotalBytesChanged = totalBytesChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn totalBytesChanged(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_TotalBytesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTotalBytesChanged` instead
    ///
    pub const OnTotalBytesChanged = onTotalBytesChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#totalBytesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onTotalBytesChanged(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_TotalBytesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `interruptReasonChanged` instead
    ///
    pub const InterruptReasonChanged = interruptReasonChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn interruptReasonChanged(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_InterruptReasonChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInterruptReasonChanged` instead
    ///
    pub const OnInterruptReasonChanged = onInterruptReasonChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#interruptReasonChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onInterruptReasonChanged(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_InterruptReasonChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isFinishedChanged` instead
    ///
    pub const IsFinishedChanged = isFinishedChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn isFinishedChanged(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_IsFinishedChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsFinishedChanged` instead
    ///
    pub const OnIsFinishedChanged = onIsFinishedChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isFinishedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onIsFinishedChanged(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_IsFinishedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isPausedChanged` instead
    ///
    pub const IsPausedChanged = isPausedChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn isPausedChanged(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_IsPausedChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsPausedChanged` instead
    ///
    pub const OnIsPausedChanged = onIsPausedChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#isPausedChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onIsPausedChanged(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_IsPausedChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `downloadDirectoryChanged` instead
    ///
    pub const DownloadDirectoryChanged = downloadDirectoryChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn downloadDirectoryChanged(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_DownloadDirectoryChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDownloadDirectoryChanged` instead
    ///
    pub const OnDownloadDirectoryChanged = onDownloadDirectoryChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadDirectoryChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onDownloadDirectoryChanged(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_DownloadDirectoryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `downloadFileNameChanged` instead
    ///
    pub const DownloadFileNameChanged = downloadFileNameChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn downloadFileNameChanged(self: QQuickWebEngineDownloadRequest) void {
        qtc.QWebEngineDownloadRequest_DownloadFileNameChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDownloadFileNameChanged` instead
    ///
    pub const OnDownloadFileNameChanged = onDownloadFileNameChanged;

    /// Inherited from QWebEngineDownloadRequest
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebenginedownloadrequest.html#downloadFileNameChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onDownloadFileNameChanged(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest) callconv(.c) void) void {
        qtc.QWebEngineDownloadRequest_Connect_DownloadFileNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QQuickWebEngineDownloadRequest, _event: anytype) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QQuickWebEngineDownloadRequest, watched: anytype, _event: anytype) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QQuickWebEngineDownloadRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QQuickWebEngineDownloadRequest.objectName: Memory allocation failed");
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QQuickWebEngineDownloadRequest, name: []const u8) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn isWidgetType(self: QQuickWebEngineDownloadRequest) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn isWindowType(self: QQuickWebEngineDownloadRequest) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn isQuickItemType(self: QQuickWebEngineDownloadRequest) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn signalsBlocked(self: QQuickWebEngineDownloadRequest) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QQuickWebEngineDownloadRequest, b: bool) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn thread(self: QQuickWebEngineDownloadRequest) QThread {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QQuickWebEngineDownloadRequest, _thread: anytype) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QQuickWebEngineDownloadRequest, interval: i32) i32 {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QQuickWebEngineDownloadRequest, time: i64) i32 {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` _id: i32 `
    ///
    pub fn killTimer(self: QQuickWebEngineDownloadRequest, _id: i32) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` _id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QQuickWebEngineDownloadRequest, _id: i32) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QQuickWebEngineDownloadRequest, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QQuickWebEngineDownloadRequest.children: Memory allocation failed");
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QQuickWebEngineDownloadRequest, _parent: anytype) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QQuickWebEngineDownloadRequest, filterObj: anytype) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QQuickWebEngineDownloadRequest, obj: anytype) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QQuickWebEngineDownloadRequest, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn disconnect3(self: QQuickWebEngineDownloadRequest) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QQuickWebEngineDownloadRequest, receiver: anytype) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn dumpObjectTree(self: QQuickWebEngineDownloadRequest) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn dumpObjectInfo(self: QQuickWebEngineDownloadRequest) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QQuickWebEngineDownloadRequest, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QQuickWebEngineDownloadRequest, name: [:0]const u8) QVariant {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QQuickWebEngineDownloadRequest, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QQuickWebEngineDownloadRequest.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QQuickWebEngineDownloadRequest.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn bindingStorage(self: QQuickWebEngineDownloadRequest) QBindingStorage {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn bindingStorage2(self: QQuickWebEngineDownloadRequest) QBindingStorage {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn destroyed(self: QQuickWebEngineDownloadRequest) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest) callconv(.c) void) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn parent(self: QQuickWebEngineDownloadRequest) QObject {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QQuickWebEngineDownloadRequest, classname: [:0]const u8) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn deleteLater(self: QQuickWebEngineDownloadRequest) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QQuickWebEngineDownloadRequest, interval: i32, timerType: i32) i32 {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QQuickWebEngineDownloadRequest, time: i64, timerType: i32) i32 {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QQuickWebEngineDownloadRequest, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QQuickWebEngineDownloadRequest, signal: [:0]const u8) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QQuickWebEngineDownloadRequest, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QQuickWebEngineDownloadRequest, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QQuickWebEngineDownloadRequest, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QQuickWebEngineDownloadRequest, param1: anytype) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest, QObject) callconv(.c) void) void {
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
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    /// ` callback: *const fn (self: QQuickWebEngineDownloadRequest, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QQuickWebEngineDownloadRequest, callback: *const fn (QQuickWebEngineDownloadRequest, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebenginedownloadrequest.html#dtor.QQuickWebEngineDownloadRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQuickWebEngineDownloadRequest `
    ///
    pub fn delete(self: QQuickWebEngineDownloadRequest) void {
        qtc.QQuickWebEngineDownloadRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qquickwebenginedownloadrequest.html#public-types)
pub const enums = struct {
    pub const QmlIsUncreatable = enum {
        pub const Yes: i32 = 1;
    };
};
