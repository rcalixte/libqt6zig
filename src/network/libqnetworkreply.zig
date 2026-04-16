const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QHttpHeaders = @import("libqt6").QHttpHeaders;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkAccessManager = @import("libqt6").QNetworkAccessManager;
const QNetworkRequest = @import("libqt6").QNetworkRequest;
const QObject = @import("libqt6").QObject;
const QSslConfiguration = @import("libqt6").QSslConfiguration;
const QSslError = @import("libqt6").QSslError;
const QSslPreSharedKeyAuthenticator = @import("libqt6").QSslPreSharedKeyAuthenticator;
const QThread = @import("libqt6").QThread;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnetworkaccessmanager_enums = @import("libqnetworkaccessmanager.zig").enums;
const qnetworkreply_enums = enums;
const qnetworkrequest_enums = @import("libqnetworkrequest.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const Struct_u8_u8 = struct { first: []u8, second: []u8 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html)
pub const QNetworkReply = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkReply,

    pub const _is_QNetworkReply = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn MetaObject(self: QNetworkReply) QMetaObject {
        return .{ .ptr = qtc.QNetworkReply_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QNetworkReply, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkReply_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QNetworkReply, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkReply_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkreply.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Close(self: QNetworkReply) void {
        qtc.QNetworkReply_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#isSequential)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IsSequential(self: QNetworkReply) bool {
        return qtc.QNetworkReply_IsSequential(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn ReadBufferSize(self: QNetworkReply) i64 {
        return qtc.QNetworkReply_ReadBufferSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#setReadBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` size: i64 `
    ///
    pub fn SetReadBufferSize(self: QNetworkReply, size: i64) void {
        qtc.QNetworkReply_SetReadBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Manager(self: QNetworkReply) QNetworkAccessManager {
        return .{ .ptr = qtc.QNetworkReply_Manager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#operation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkaccessmanager_enums.Operation `
    ///
    pub fn Operation(self: QNetworkReply) i32 {
        return qtc.QNetworkReply_Operation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#request)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Request(self: QNetworkReply) QNetworkRequest {
        return .{ .ptr = qtc.QNetworkReply_Request(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkreply_enums.NetworkError `
    ///
    pub fn Error(self: QNetworkReply) i32 {
        return qtc.QNetworkReply_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IsFinished(self: QNetworkReply) bool {
        return qtc.QNetworkReply_IsFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IsRunning(self: QNetworkReply) bool {
        return qtc.QNetworkReply_IsRunning(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Url(self: QNetworkReply) QUrl {
        return .{ .ptr = qtc.QNetworkReply_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#header)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` header: qnetworkrequest_enums.KnownHeaders `
    ///
    pub fn Header(self: QNetworkReply, header: i32) QVariant {
        return .{ .ptr = qtc.QNetworkReply_Header(@ptrCast(self.ptr), @bitCast(header)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#hasRawHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` headerName: []const u8 `
    ///
    pub fn HasRawHeader(self: QNetworkReply, headerName: []const u8) bool {
        return qtc.QNetworkReply_HasRawHeader(@ptrCast(self.ptr), headerName.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeaderList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RawHeaderList(self: QNetworkReply, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkReply_RawHeaderList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qnetworkreply.RawHeaderList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkreply.RawHeaderList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` headerName: []const u8 `
    ///
    pub fn RawHeader(self: QNetworkReply, allocator: std.mem.Allocator, headerName: []const u8) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkReply_RawHeader(@ptrCast(self.ptr), headerName.ptr);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkreply.RawHeader: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeaderPairs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RawHeaderPairs(self: QNetworkReply, allocator: std.mem.Allocator) []Struct_u8_u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkReply_RawHeaderPairs(@ptrCast(self.ptr));
        const _data: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_u8_u8, _arr.len) catch @panic("qnetworkreply.RawHeaderPairs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("qnetworkreply.RawHeaderPairs: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("qnetworkreply.RawHeaderPairs: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_u8_u8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Headers(self: QNetworkReply) QHttpHeaders {
        return .{ .ptr = qtc.QNetworkReply_Headers(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` code: qnetworkrequest_enums.Attribute `
    ///
    pub fn Attribute(self: QNetworkReply, code: i32) QVariant {
        return .{ .ptr = qtc.QNetworkReply_Attribute(@ptrCast(self.ptr), @bitCast(code)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn SslConfiguration(self: QNetworkReply) QSslConfiguration {
        return .{ .ptr = qtc.QNetworkReply_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` configuration: QSslConfiguration `
    ///
    pub fn SetSslConfiguration(self: QNetworkReply, configuration: anytype) void {
        comptime _ = @TypeOf(configuration)._is_QSslConfiguration;
        qtc.QNetworkReply_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(configuration.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn IgnoreSslErrors(self: QNetworkReply, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QNetworkReply_IgnoreSslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Abort(self: QNetworkReply) void {
        qtc.QNetworkReply_Abort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IgnoreSslErrors2(self: QNetworkReply) void {
        qtc.QNetworkReply_IgnoreSslErrors2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#socketStartedConnecting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn SocketStartedConnecting(self: QNetworkReply) void {
        qtc.QNetworkReply_SocketStartedConnecting(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#socketStartedConnecting)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnSocketStartedConnecting(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_SocketStartedConnecting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#requestSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn RequestSent(self: QNetworkReply) void {
        qtc.QNetworkReply_RequestSent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#requestSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnRequestSent(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_RequestSent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#metaDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn MetaDataChanged(self: QNetworkReply) void {
        qtc.QNetworkReply_MetaDataChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#metaDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnMetaDataChanged(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_MetaDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Finished(self: QNetworkReply) void {
        qtc.QNetworkReply_Finished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnFinished(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` param1: qnetworkreply_enums.NetworkError `
    ///
    pub fn ErrorOccurred(self: QNetworkReply, param1: i32) void {
        qtc.QNetworkReply_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, param1: qnetworkreply_enums.NetworkError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QNetworkReply, callback: *const fn (QNetworkReply, i32) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#encrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Encrypted(self: QNetworkReply) void {
        qtc.QNetworkReply_Encrypted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#encrypted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnEncrypted(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_Encrypted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn SslErrors(self: QNetworkReply, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QNetworkReply_SslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, errors: qtc.libqt_list ([]QSslError)) callconv(.c) void `
    ///
    pub fn OnSslErrors(self: QNetworkReply, callback: *const fn (QNetworkReply, qtc.libqt_list) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_SslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn PreSharedKeyAuthenticationRequired(self: QNetworkReply, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QNetworkReply_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn OnPreSharedKeyAuthenticationRequired(self: QNetworkReply, callback: *const fn (QNetworkReply, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` url: QUrl `
    ///
    pub fn Redirected(self: QNetworkReply, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QNetworkReply_Redirected(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, url: QUrl) callconv(.c) void `
    ///
    pub fn OnRedirected(self: QNetworkReply, callback: *const fn (QNetworkReply, QUrl) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_Redirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirectAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn RedirectAllowed(self: QNetworkReply) void {
        qtc.QNetworkReply_RedirectAllowed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirectAllowed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnRedirectAllowed(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_RedirectAllowed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#uploadProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` bytesSent: i64 `
    ///
    /// ` bytesTotal: i64 `
    ///
    pub fn UploadProgress(self: QNetworkReply, bytesSent: i64, bytesTotal: i64) void {
        qtc.QNetworkReply_UploadProgress(@ptrCast(self.ptr), @bitCast(bytesSent), @bitCast(bytesTotal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#uploadProgress)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, bytesSent: i64, bytesTotal: i64) callconv(.c) void `
    ///
    pub fn OnUploadProgress(self: QNetworkReply, callback: *const fn (QNetworkReply, i64, i64) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_UploadProgress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#downloadProgress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` bytesReceived: i64 `
    ///
    /// ` bytesTotal: i64 `
    ///
    pub fn DownloadProgress(self: QNetworkReply, bytesReceived: i64, bytesTotal: i64) void {
        qtc.QNetworkReply_DownloadProgress(@ptrCast(self.ptr), @bitCast(bytesReceived), @bitCast(bytesTotal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#downloadProgress)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, bytesReceived: i64, bytesTotal: i64) callconv(.c) void `
    ///
    pub fn OnDownloadProgress(self: QNetworkReply, callback: *const fn (QNetworkReply, i64, i64) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_DownloadProgress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkreply.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkreply.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: QNetworkReply) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: QNetworkReply, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IsTextModeEnabled(self: QNetworkReply) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IsOpen(self: QNetworkReply) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IsReadable(self: QNetworkReply) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IsWritable(self: QNetworkReply) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn ReadChannelCount(self: QNetworkReply) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn WriteChannelCount(self: QNetworkReply) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn CurrentReadChannel(self: QNetworkReply) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: QNetworkReply, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn CurrentWriteChannel(self: QNetworkReply) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: QNetworkReply, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: QNetworkReply, mode: i32) bool {
        return qtc.QIODevice_Open(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Pos(self: QNetworkReply) i64 {
        return qtc.QIODevice_Pos(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Size(self: QNetworkReply) i64 {
        return qtc.QIODevice_Size(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: QNetworkReply, pos: i64) bool {
        return qtc.QIODevice_Seek(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn AtEnd(self: QNetworkReply) bool {
        return qtc.QIODevice_AtEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Reset(self: QNetworkReply) bool {
        return qtc.QIODevice_Reset(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn BytesAvailable(self: QNetworkReply) i64 {
        return qtc.QIODevice_BytesAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn BytesToWrite(self: QNetworkReply) i64 {
        return qtc.QIODevice_BytesToWrite(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: QNetworkReply, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read2(self: QNetworkReply, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkreply.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: QNetworkReply, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkreply.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: QNetworkReply, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: QNetworkReply, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkreply.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn CanReadLine(self: QNetworkReply) bool {
        return qtc.QIODevice_CanReadLine(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn StartTransaction(self: QNetworkReply) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn CommitTransaction(self: QNetworkReply) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn RollbackTransaction(self: QNetworkReply) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IsTransactionStarted(self: QNetworkReply) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: QNetworkReply, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: QNetworkReply, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: QNetworkReply, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: QNetworkReply, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek2(self: QNetworkReply, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkreply.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: QNetworkReply, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: QNetworkReply, msecs: i32) bool {
        return qtc.QIODevice_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: QNetworkReply, msecs: i32) bool {
        return qtc.QIODevice_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: QNetworkReply, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: QNetworkReply, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: QNetworkReply, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QNetworkReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkreply.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn ReadyRead(self: QNetworkReply) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: QNetworkReply, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: QNetworkReply, callback: *const fn (QNetworkReply, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: QNetworkReply, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: QNetworkReply, callback: *const fn (QNetworkReply, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: QNetworkReply, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: QNetworkReply, callback: *const fn (QNetworkReply, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn AboutToClose(self: QNetworkReply) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn ReadChannelFinished(self: QNetworkReply) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine1(self: QNetworkReply, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkreply.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QNetworkReply, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QNetworkReply, watched: anytype, event: anytype) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QNetworkReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkreply.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QNetworkReply, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IsWidgetType(self: QNetworkReply) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IsWindowType(self: QNetworkReply) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn IsQuickItemType(self: QNetworkReply) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn SignalsBlocked(self: QNetworkReply) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QNetworkReply, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Thread(self: QNetworkReply) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QNetworkReply, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QNetworkReply, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QNetworkReply, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QNetworkReply, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QNetworkReply, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QNetworkReply, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qnetworkreply.Children: Memory allocation failed");
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
    /// ` self: QNetworkReply `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QNetworkReply, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QNetworkReply, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QNetworkReply, obj: anytype) void {
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
    /// ` self: QNetworkReply `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QNetworkReply, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QNetworkReply `
    ///
    pub fn Disconnect3(self: QNetworkReply) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QNetworkReply, receiver: anytype) bool {
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
    /// ` self: QNetworkReply `
    ///
    pub fn DumpObjectTree(self: QNetworkReply) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn DumpObjectInfo(self: QNetworkReply) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QNetworkReply, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QNetworkReply, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QNetworkReply, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qnetworkreply.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkreply.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QNetworkReply `
    ///
    pub fn BindingStorage(self: QNetworkReply) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn BindingStorage2(self: QNetworkReply) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Destroyed(self: QNetworkReply) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Parent(self: QNetworkReply) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QNetworkReply, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn DeleteLater(self: QNetworkReply) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QNetworkReply, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QNetworkReply, time: i64, timerType: i32) i32 {
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
    /// ` self: QNetworkReply `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QNetworkReply, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QNetworkReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QNetworkReply, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QNetworkReply, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QNetworkReply, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QNetworkReply, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QNetworkReply, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QNetworkReply, callback: *const fn (QNetworkReply, QObject) callconv(.c) void) void {
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
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QNetworkReply, callback: *const fn (QNetworkReply, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#dtor.QNetworkReply)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn Delete(self: QNetworkReply) void {
        qtc.QNetworkReply_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#public-types)
pub const enums = struct {
    pub const NetworkError = enum(i32) {
        pub const NoError: i32 = 0;
        pub const ConnectionRefusedError: i32 = 1;
        pub const RemoteHostClosedError: i32 = 2;
        pub const HostNotFoundError: i32 = 3;
        pub const TimeoutError: i32 = 4;
        pub const OperationCanceledError: i32 = 5;
        pub const SslHandshakeFailedError: i32 = 6;
        pub const TemporaryNetworkFailureError: i32 = 7;
        pub const NetworkSessionFailedError: i32 = 8;
        pub const BackgroundRequestNotAllowedError: i32 = 9;
        pub const TooManyRedirectsError: i32 = 10;
        pub const InsecureRedirectError: i32 = 11;
        pub const UnknownNetworkError: i32 = 99;
        pub const ProxyConnectionRefusedError: i32 = 101;
        pub const ProxyConnectionClosedError: i32 = 102;
        pub const ProxyNotFoundError: i32 = 103;
        pub const ProxyTimeoutError: i32 = 104;
        pub const ProxyAuthenticationRequiredError: i32 = 105;
        pub const UnknownProxyError: i32 = 199;
        pub const ContentAccessDenied: i32 = 201;
        pub const ContentOperationNotPermittedError: i32 = 202;
        pub const ContentNotFoundError: i32 = 203;
        pub const AuthenticationRequiredError: i32 = 204;
        pub const ContentReSendError: i32 = 205;
        pub const ContentConflictError: i32 = 206;
        pub const ContentGoneError: i32 = 207;
        pub const UnknownContentError: i32 = 299;
        pub const ProtocolUnknownError: i32 = 301;
        pub const ProtocolInvalidOperationError: i32 = 302;
        pub const ProtocolFailure: i32 = 399;
        pub const InternalServerError: i32 = 401;
        pub const OperationNotImplementedError: i32 = 402;
        pub const ServiceUnavailableError: i32 = 403;
        pub const UnknownServerError: i32 = 499;
    };
};
