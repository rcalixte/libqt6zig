const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QHttpHeaders = @import("libqt6").QHttpHeaders;
const QIODeviceBase = @import("libqt6").QIODeviceBase;
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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn metaObject(self: QNetworkReply) QMetaObject {
        return .{ .ptr = qtc.QNetworkReply_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QNetworkReply, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkReply_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QNetworkReply, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkReply_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkReply.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn close(self: QNetworkReply) void {
        qtc.QNetworkReply_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSequential` instead
    ///
    pub const IsSequential = isSequential;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#isSequential)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn isSequential(self: QNetworkReply) bool {
        return qtc.QNetworkReply_IsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readBufferSize` instead
    ///
    pub const ReadBufferSize = readBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn readBufferSize(self: QNetworkReply) i64 {
        return qtc.QNetworkReply_ReadBufferSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadBufferSize` instead
    ///
    pub const SetReadBufferSize = setReadBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#setReadBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` _size: i64 `
    ///
    pub fn setReadBufferSize(self: QNetworkReply, _size: i64) void {
        qtc.QNetworkReply_SetReadBufferSize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `manager` instead
    ///
    pub const Manager = manager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn manager(self: QNetworkReply) QNetworkAccessManager {
        return .{ .ptr = qtc.QNetworkReply_Manager(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operation` instead
    ///
    pub const Operation = operation;

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
    pub fn operation(self: QNetworkReply) i32 {
        return qtc.QNetworkReply_Operation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `request` instead
    ///
    pub const Request = request;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#request)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn request(self: QNetworkReply) QNetworkRequest {
        return .{ .ptr = qtc.QNetworkReply_Request(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QNetworkReply) i32 {
        return qtc.QNetworkReply_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn isFinished(self: QNetworkReply) bool {
        return qtc.QNetworkReply_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRunning` instead
    ///
    pub const IsRunning = isRunning;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn isRunning(self: QNetworkReply) bool {
        return qtc.QNetworkReply_IsRunning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn url(self: QNetworkReply) QUrl {
        return .{ .ptr = qtc.QNetworkReply_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `header` instead
    ///
    pub const Header = header;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#header)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` _header: qnetworkrequest_enums.KnownHeaders `
    ///
    pub fn header(self: QNetworkReply, _header: i32) QVariant {
        return .{ .ptr = qtc.QNetworkReply_Header(@ptrCast(self.ptr), @bitCast(_header)) };
    }

    /// ### DEPRECATED: Use `hasRawHeader` instead
    ///
    pub const HasRawHeader = hasRawHeader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#hasRawHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` headerName: []const u8 `
    ///
    pub fn hasRawHeader(self: QNetworkReply, headerName: []const u8) bool {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        return qtc.QNetworkReply_HasRawHeader(@ptrCast(self.ptr), headerName_str);
    }

    /// ### DEPRECATED: Use `rawHeaderList` instead
    ///
    pub const RawHeaderList = rawHeaderList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeaderList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rawHeaderList(self: QNetworkReply, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkReply_RawHeaderList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QNetworkReply.rawHeaderList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNetworkReply.rawHeaderList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `rawHeader` instead
    ///
    pub const RawHeader = rawHeader;

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
    pub fn rawHeader(self: QNetworkReply, allocator: std.mem.Allocator, headerName: []const u8) []u8 {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QNetworkReply_RawHeader(@ptrCast(self.ptr), headerName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkReply.rawHeader: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `rawHeaderPairs` instead
    ///
    pub const RawHeaderPairs = rawHeaderPairs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#rawHeaderPairs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rawHeaderPairs(self: QNetworkReply, allocator: std.mem.Allocator) []Struct_u8_u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkReply_RawHeaderPairs(@ptrCast(self.ptr));
        const _data_val: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].first)));
                qtc.libqt_string_free(@ptrCast(@alignCast(_data_val[i].second)));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(Struct_u8_u8, _arr.len) catch @panic("QNetworkReply.rawHeaderPairs: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _first_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].first));
            const _first_slice = allocator.alloc(u8, _first_str.len) catch @panic("QNetworkReply.rawHeaderPairs: Memory allocation failed");
            @memcpy(_first_slice, _first_str.data[0.._first_str.len]);
            const _second_str: *qtc.libqt_string = @ptrCast(@alignCast(_data_val[i].second));
            const _second_slice = allocator.alloc(u8, _second_str.len) catch @panic("QNetworkReply.rawHeaderPairs: Memory allocation failed");
            @memcpy(_second_slice, _second_str.data[0.._second_str.len]);
            _ret[i] = Struct_u8_u8{
                .first = _first_slice,
                .second = _second_slice,
            };
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `headers` instead
    ///
    pub const Headers = headers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn headers(self: QNetworkReply) QHttpHeaders {
        return .{ .ptr = qtc.QNetworkReply_Headers(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attribute` instead
    ///
    pub const Attribute = attribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` code: qnetworkrequest_enums.Attribute `
    ///
    pub fn attribute(self: QNetworkReply, code: i32) QVariant {
        return .{ .ptr = qtc.QNetworkReply_Attribute(@ptrCast(self.ptr), @bitCast(code)) };
    }

    /// ### DEPRECATED: Use `sslConfiguration` instead
    ///
    pub const SslConfiguration = sslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn sslConfiguration(self: QNetworkReply) QSslConfiguration {
        return .{ .ptr = qtc.QNetworkReply_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSslConfiguration` instead
    ///
    pub const SetSslConfiguration = setSslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` configuration: QSslConfiguration `
    ///
    pub fn setSslConfiguration(self: QNetworkReply, configuration: anytype) void {
        comptime _ = @TypeOf(configuration)._is_QSslConfiguration;
        qtc.QNetworkReply_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(configuration.ptr));
    }

    /// ### DEPRECATED: Use `ignoreSslErrors` instead
    ///
    pub const IgnoreSslErrors = ignoreSslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn ignoreSslErrors(self: QNetworkReply, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QNetworkReply_IgnoreSslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### DEPRECATED: Use `abort` instead
    ///
    pub const Abort = abort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn abort(self: QNetworkReply) void {
        qtc.QNetworkReply_Abort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignoreSslErrors2` instead
    ///
    pub const IgnoreSslErrors2 = ignoreSslErrors2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn ignoreSslErrors2(self: QNetworkReply) void {
        qtc.QNetworkReply_IgnoreSslErrors2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `socketStartedConnecting` instead
    ///
    pub const SocketStartedConnecting = socketStartedConnecting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#socketStartedConnecting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn socketStartedConnecting(self: QNetworkReply) void {
        qtc.QNetworkReply_SocketStartedConnecting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSocketStartedConnecting` instead
    ///
    pub const OnSocketStartedConnecting = onSocketStartedConnecting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#socketStartedConnecting)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn onSocketStartedConnecting(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_SocketStartedConnecting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `requestSent` instead
    ///
    pub const RequestSent = requestSent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#requestSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn requestSent(self: QNetworkReply) void {
        qtc.QNetworkReply_RequestSent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRequestSent` instead
    ///
    pub const OnRequestSent = onRequestSent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#requestSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn onRequestSent(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_RequestSent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metaDataChanged` instead
    ///
    pub const MetaDataChanged = metaDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#metaDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn metaDataChanged(self: QNetworkReply) void {
        qtc.QNetworkReply_MetaDataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMetaDataChanged` instead
    ///
    pub const OnMetaDataChanged = onMetaDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#metaDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn onMetaDataChanged(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_MetaDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn finished(self: QNetworkReply) void {
        qtc.QNetworkReply_Finished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn onFinished(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` param1: qnetworkreply_enums.NetworkError `
    ///
    pub fn errorOccurred(self: QNetworkReply, param1: i32) void {
        qtc.QNetworkReply_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, param1: qnetworkreply_enums.NetworkError) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QNetworkReply, callback: *const fn (QNetworkReply, i32) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `encrypted` instead
    ///
    pub const Encrypted = encrypted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#encrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn encrypted(self: QNetworkReply) void {
        qtc.QNetworkReply_Encrypted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEncrypted` instead
    ///
    pub const OnEncrypted = onEncrypted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#encrypted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn onEncrypted(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_Encrypted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sslErrors` instead
    ///
    pub const SslErrors = sslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn sslErrors(self: QNetworkReply, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QNetworkReply_SslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### DEPRECATED: Use `onSslErrors` instead
    ///
    pub const OnSslErrors = onSslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, errors: qtc.libqt_list ([]QSslError)) callconv(.c) void `
    ///
    pub fn onSslErrors(self: QNetworkReply, callback: *const fn (QNetworkReply, qtc.libqt_list) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_SslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `preSharedKeyAuthenticationRequired` instead
    ///
    pub const PreSharedKeyAuthenticationRequired = preSharedKeyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn preSharedKeyAuthenticationRequired(self: QNetworkReply, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QNetworkReply_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `onPreSharedKeyAuthenticationRequired` instead
    ///
    pub const OnPreSharedKeyAuthenticationRequired = onPreSharedKeyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn onPreSharedKeyAuthenticationRequired(self: QNetworkReply, callback: *const fn (QNetworkReply, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirected` instead
    ///
    pub const Redirected = redirected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` _url: QUrl `
    ///
    pub fn redirected(self: QNetworkReply, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QNetworkReply_Redirected(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `onRedirected` instead
    ///
    pub const OnRedirected = onRedirected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, url: QUrl) callconv(.c) void `
    ///
    pub fn onRedirected(self: QNetworkReply, callback: *const fn (QNetworkReply, QUrl) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_Redirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirectAllowed` instead
    ///
    pub const RedirectAllowed = redirectAllowed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirectAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn redirectAllowed(self: QNetworkReply) void {
        qtc.QNetworkReply_RedirectAllowed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRedirectAllowed` instead
    ///
    pub const OnRedirectAllowed = onRedirectAllowed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#redirectAllowed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn onRedirectAllowed(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_RedirectAllowed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `uploadProgress` instead
    ///
    pub const UploadProgress = uploadProgress;

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
    pub fn uploadProgress(self: QNetworkReply, bytesSent: i64, bytesTotal: i64) void {
        qtc.QNetworkReply_UploadProgress(@ptrCast(self.ptr), @bitCast(bytesSent), @bitCast(bytesTotal));
    }

    /// ### DEPRECATED: Use `onUploadProgress` instead
    ///
    pub const OnUploadProgress = onUploadProgress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#uploadProgress)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, bytesSent: i64, bytesTotal: i64) callconv(.c) void `
    ///
    pub fn onUploadProgress(self: QNetworkReply, callback: *const fn (QNetworkReply, i64, i64) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_UploadProgress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `downloadProgress` instead
    ///
    pub const DownloadProgress = downloadProgress;

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
    pub fn downloadProgress(self: QNetworkReply, bytesReceived: i64, bytesTotal: i64) void {
        qtc.QNetworkReply_DownloadProgress(@ptrCast(self.ptr), @bitCast(bytesReceived), @bitCast(bytesTotal));
    }

    /// ### DEPRECATED: Use `onDownloadProgress` instead
    ///
    pub const OnDownloadProgress = onDownloadProgress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#downloadProgress)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, bytesReceived: i64, bytesTotal: i64) callconv(.c) void `
    ///
    pub fn onDownloadProgress(self: QNetworkReply, callback: *const fn (QNetworkReply, i64, i64) callconv(.c) void) void {
        qtc.QNetworkReply_Connect_DownloadProgress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkReply.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkReply.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// Upcasts to a QIODeviceBase object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn asQIODeviceBase(self: QNetworkReply) QIODeviceBase {
        return .{ .ptr = qtc.QIODevice_AsQIODeviceBase(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `openMode` instead
    ///
    pub const OpenMode = openMode;

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
    pub fn openMode(self: QNetworkReply) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextModeEnabled` instead
    ///
    pub const SetTextModeEnabled = setTextModeEnabled;

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
    pub fn setTextModeEnabled(self: QNetworkReply, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isTextModeEnabled` instead
    ///
    pub const IsTextModeEnabled = isTextModeEnabled;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn isTextModeEnabled(self: QNetworkReply) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOpen` instead
    ///
    pub const IsOpen = isOpen;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn isOpen(self: QNetworkReply) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn isReadable(self: QNetworkReply) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn isWritable(self: QNetworkReply) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readChannelCount` instead
    ///
    pub const ReadChannelCount = readChannelCount;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn readChannelCount(self: QNetworkReply) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeChannelCount` instead
    ///
    pub const WriteChannelCount = writeChannelCount;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn writeChannelCount(self: QNetworkReply) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentReadChannel` instead
    ///
    pub const CurrentReadChannel = currentReadChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn currentReadChannel(self: QNetworkReply) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentReadChannel` instead
    ///
    pub const SetCurrentReadChannel = setCurrentReadChannel;

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
    pub fn setCurrentReadChannel(self: QNetworkReply, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `currentWriteChannel` instead
    ///
    pub const CurrentWriteChannel = currentWriteChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn currentWriteChannel(self: QNetworkReply) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentWriteChannel` instead
    ///
    pub const SetCurrentWriteChannel = setCurrentWriteChannel;

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
    pub fn setCurrentWriteChannel(self: QNetworkReply, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

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
    pub fn open(self: QNetworkReply, mode: i32) bool {
        return qtc.QIODevice_Open(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn pos(self: QNetworkReply) i64 {
        return qtc.QIODevice_Pos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn size(self: QNetworkReply) i64 {
        return qtc.QIODevice_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `seek` instead
    ///
    pub const Seek = seek;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    /// ` _pos: i64 `
    ///
    pub fn seek(self: QNetworkReply, _pos: i64) bool {
        return qtc.QIODevice_Seek(@ptrCast(self.ptr), @bitCast(_pos));
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn atEnd(self: QNetworkReply) bool {
        return qtc.QIODevice_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn reset(self: QNetworkReply) bool {
        return qtc.QIODevice_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesAvailable` instead
    ///
    pub const BytesAvailable = bytesAvailable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn bytesAvailable(self: QNetworkReply) i64 {
        return qtc.QIODevice_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesToWrite` instead
    ///
    pub const BytesToWrite = bytesToWrite;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn bytesToWrite(self: QNetworkReply) i64 {
        return qtc.QIODevice_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

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
    pub fn read(self: QNetworkReply, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `read2` instead
    ///
    pub const Read2 = read2;

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
    pub fn read2(self: QNetworkReply, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkReply.read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readAll` instead
    ///
    pub const ReadAll = readAll;

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
    pub fn readAll(self: QNetworkReply, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkReply.readAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readLine` instead
    ///
    pub const ReadLine = readLine;

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
    pub fn readLine(self: QNetworkReply, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `readLine2` instead
    ///
    pub const ReadLine2 = readLine2;

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
    pub fn readLine2(self: QNetworkReply, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkReply.readLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `canReadLine` instead
    ///
    pub const CanReadLine = canReadLine;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn canReadLine(self: QNetworkReply) bool {
        return qtc.QIODevice_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTransaction` instead
    ///
    pub const StartTransaction = startTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn startTransaction(self: QNetworkReply) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `commitTransaction` instead
    ///
    pub const CommitTransaction = commitTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn commitTransaction(self: QNetworkReply) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rollbackTransaction` instead
    ///
    pub const RollbackTransaction = rollbackTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn rollbackTransaction(self: QNetworkReply) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTransactionStarted` instead
    ///
    pub const IsTransactionStarted = isTransactionStarted;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn isTransactionStarted(self: QNetworkReply) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

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
    /// ` len: i64 `
    ///
    pub fn write(self: QNetworkReply, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `write2` instead
    ///
    pub const Write2 = write2;

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
    pub fn write2(self: QNetworkReply, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// ### DEPRECATED: Use `write3` instead
    ///
    pub const Write3 = write3;

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
    pub fn write3(self: QNetworkReply, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `peek` instead
    ///
    pub const Peek = peek;

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
    pub fn peek(self: QNetworkReply, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `peek2` instead
    ///
    pub const Peek2 = peek2;

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
    pub fn peek2(self: QNetworkReply, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkReply.peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `skip` instead
    ///
    pub const Skip = skip;

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
    pub fn skip(self: QNetworkReply, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `waitForReadyRead` instead
    ///
    pub const WaitForReadyRead = waitForReadyRead;

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
    pub fn waitForReadyRead(self: QNetworkReply, msecs: i32) bool {
        return qtc.QIODevice_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `waitForBytesWritten` instead
    ///
    pub const WaitForBytesWritten = waitForBytesWritten;

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
    pub fn waitForBytesWritten(self: QNetworkReply, msecs: i32) bool {
        return qtc.QIODevice_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `ungetChar` instead
    ///
    pub const UngetChar = ungetChar;

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
    pub fn ungetChar(self: QNetworkReply, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `putChar` instead
    ///
    pub const PutChar = putChar;

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
    pub fn putChar(self: QNetworkReply, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `getChar` instead
    ///
    pub const GetChar = getChar;

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
    pub fn getChar(self: QNetworkReply, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

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
    pub fn errorString(self: QNetworkReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkReply.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readyRead` instead
    ///
    pub const ReadyRead = readyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn readyRead(self: QNetworkReply) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadyRead` instead
    ///
    pub const OnReadyRead = onReadyRead;

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
    pub fn onReadyRead(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `channelReadyRead` instead
    ///
    pub const ChannelReadyRead = channelReadyRead;

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
    pub fn channelReadyRead(self: QNetworkReply, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `onChannelReadyRead` instead
    ///
    pub const OnChannelReadyRead = onChannelReadyRead;

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
    pub fn onChannelReadyRead(self: QNetworkReply, callback: *const fn (QNetworkReply, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesWritten` instead
    ///
    pub const BytesWritten = bytesWritten;

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
    pub fn bytesWritten(self: QNetworkReply, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `onBytesWritten` instead
    ///
    pub const OnBytesWritten = onBytesWritten;

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
    pub fn onBytesWritten(self: QNetworkReply, callback: *const fn (QNetworkReply, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `channelBytesWritten` instead
    ///
    pub const ChannelBytesWritten = channelBytesWritten;

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
    pub fn channelBytesWritten(self: QNetworkReply, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `onChannelBytesWritten` instead
    ///
    pub const OnChannelBytesWritten = onChannelBytesWritten;

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
    pub fn onChannelBytesWritten(self: QNetworkReply, callback: *const fn (QNetworkReply, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aboutToClose` instead
    ///
    pub const AboutToClose = aboutToClose;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn aboutToClose(self: QNetworkReply) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToClose` instead
    ///
    pub const OnAboutToClose = onAboutToClose;

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
    pub fn onAboutToClose(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readChannelFinished` instead
    ///
    pub const ReadChannelFinished = readChannelFinished;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn readChannelFinished(self: QNetworkReply) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadChannelFinished` instead
    ///
    pub const OnReadChannelFinished = onReadChannelFinished;

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
    pub fn onReadChannelFinished(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readLine1` instead
    ///
    pub const ReadLine1 = readLine1;

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
    pub fn readLine1(self: QNetworkReply, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkReply.readLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
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
    /// ` self: QNetworkReply `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QNetworkReply, _event: anytype) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QNetworkReply, watched: anytype, _event: anytype) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QNetworkReply, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkReply.objectName: Memory allocation failed");
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
    /// ` self: QNetworkReply `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QNetworkReply, name: []const u8) void {
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
    /// ` self: QNetworkReply `
    ///
    pub fn isWidgetType(self: QNetworkReply) bool {
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
    /// ` self: QNetworkReply `
    ///
    pub fn isWindowType(self: QNetworkReply) bool {
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
    /// ` self: QNetworkReply `
    ///
    pub fn isQuickItemType(self: QNetworkReply) bool {
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
    /// ` self: QNetworkReply `
    ///
    pub fn signalsBlocked(self: QNetworkReply) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QNetworkReply, b: bool) bool {
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
    /// ` self: QNetworkReply `
    ///
    pub fn thread(self: QNetworkReply) QThread {
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
    /// ` self: QNetworkReply `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QNetworkReply, _thread: anytype) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QNetworkReply, interval: i32) i32 {
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
    /// ` self: QNetworkReply `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QNetworkReply, time: i64) i32 {
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
    /// ` self: QNetworkReply `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QNetworkReply, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
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
    /// ` self: QNetworkReply `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QNetworkReply, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
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
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QNetworkReply, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QNetworkReply.children: Memory allocation failed");
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
    /// ` self: QNetworkReply `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QNetworkReply, _parent: anytype) void {
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
    /// ` self: QNetworkReply `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QNetworkReply, filterObj: anytype) void {
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
    /// ` self: QNetworkReply `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QNetworkReply, obj: anytype) void {
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
    /// ` self: QNetworkReply `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QNetworkReply, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QNetworkReply `
    ///
    pub fn disconnect3(self: QNetworkReply) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QNetworkReply, receiver: anytype) bool {
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
    /// ` self: QNetworkReply `
    ///
    pub fn dumpObjectTree(self: QNetworkReply) void {
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
    /// ` self: QNetworkReply `
    ///
    pub fn dumpObjectInfo(self: QNetworkReply) void {
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
    /// ` self: QNetworkReply `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QNetworkReply, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QNetworkReply, name: [:0]const u8) QVariant {
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
    /// ` self: QNetworkReply `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QNetworkReply, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QNetworkReply.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNetworkReply.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QNetworkReply `
    ///
    pub fn bindingStorage(self: QNetworkReply) QBindingStorage {
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
    /// ` self: QNetworkReply `
    ///
    pub fn bindingStorage2(self: QNetworkReply) QBindingStorage {
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
    /// ` self: QNetworkReply `
    ///
    pub fn destroyed(self: QNetworkReply) void {
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
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QNetworkReply, callback: *const fn (QNetworkReply) callconv(.c) void) void {
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
    /// ` self: QNetworkReply `
    ///
    pub fn parent(self: QNetworkReply) QObject {
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
    /// ` self: QNetworkReply `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QNetworkReply, classname: [:0]const u8) bool {
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
    /// ` self: QNetworkReply `
    ///
    pub fn deleteLater(self: QNetworkReply) void {
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
    /// ` self: QNetworkReply `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QNetworkReply, interval: i32, timerType: i32) i32 {
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
    /// ` self: QNetworkReply `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QNetworkReply, time: i64, timerType: i32) i32 {
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
    /// ` self: QNetworkReply `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QNetworkReply, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QNetworkReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QNetworkReply, signal: [:0]const u8) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QNetworkReply, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QNetworkReply, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QNetworkReply, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkReply `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QNetworkReply, param1: anytype) void {
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
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QNetworkReply, callback: *const fn (QNetworkReply, QObject) callconv(.c) void) void {
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
    /// ` self: QNetworkReply `
    ///
    /// ` callback: *const fn (self: QNetworkReply, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QNetworkReply, callback: *const fn (QNetworkReply, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#dtor.QNetworkReply)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkReply `
    ///
    pub fn delete(self: QNetworkReply) void {
        qtc.QNetworkReply_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkreply.html#public-types)
pub const enums = struct {
    pub const NetworkError = enum {
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
