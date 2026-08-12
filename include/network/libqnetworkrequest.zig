const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QHttp1Configuration = @import("libqt6").QHttp1Configuration;
const QHttp2Configuration = @import("libqt6").QHttp2Configuration;
const QHttpHeaders = @import("libqt6").QHttpHeaders;
const QObject = @import("libqt6").QObject;
const QSslConfiguration = @import("libqt6").QSslConfiguration;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnetworkrequest_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html)
pub const QNetworkRequest = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkRequest,

    pub const _is_QNetworkRequest = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkRequest object in C++ memory
    ///
    pub fn new() QNetworkRequest {
        return .{ .ptr = qtc.QNetworkRequest_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: QUrl `
    ///
    pub fn new2(_url: anytype) QNetworkRequest {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return .{ .ptr = qtc.QNetworkRequest_new2(@ptrCast(_url.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QNetworkRequest object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkRequest `
    ///
    pub fn new3(other: anytype) QNetworkRequest {
        comptime _ = @TypeOf(other)._is_QNetworkRequest;
        return .{ .ptr = qtc.QNetworkRequest_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` other: QNetworkRequest `
    ///
    pub fn operatorAssign(self: QNetworkRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkRequest;
        qtc.QNetworkRequest_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` other: QNetworkRequest `
    ///
    pub fn swap(self: QNetworkRequest, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkRequest;
        qtc.QNetworkRequest_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` other: QNetworkRequest `
    ///
    pub fn operatorEqual(self: QNetworkRequest, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkRequest;
        return qtc.QNetworkRequest_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` other: QNetworkRequest `
    ///
    pub fn operatorNotEqual(self: QNetworkRequest, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkRequest;
        return qtc.QNetworkRequest_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    pub fn url(self: QNetworkRequest) QUrl {
        return .{ .ptr = qtc.QNetworkRequest_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: QNetworkRequest, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QNetworkRequest_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `headers` instead
    ///
    pub const Headers = headers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    pub fn headers(self: QNetworkRequest) QHttpHeaders {
        return .{ .ptr = qtc.QNetworkRequest_Headers(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHeaders` instead
    ///
    pub const SetHeaders = setHeaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` newHeaders: QHttpHeaders `
    ///
    pub fn setHeaders(self: QNetworkRequest, newHeaders: anytype) void {
        comptime _ = @TypeOf(newHeaders)._is_QHttpHeaders;
        qtc.QNetworkRequest_SetHeaders(@ptrCast(self.ptr), @ptrCast(newHeaders.ptr));
    }

    /// ### DEPRECATED: Use `header` instead
    ///
    pub const Header = header;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#header)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` _header: qnetworkrequest_enums.KnownHeaders `
    ///
    pub fn header(self: QNetworkRequest, _header: i32) QVariant {
        return .{ .ptr = qtc.QNetworkRequest_Header(@ptrCast(self.ptr), @bitCast(_header)) };
    }

    /// ### DEPRECATED: Use `setHeader` instead
    ///
    pub const SetHeader = setHeader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` _header: qnetworkrequest_enums.KnownHeaders `
    ///
    /// ` value: QVariant `
    ///
    pub fn setHeader(self: QNetworkRequest, _header: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QNetworkRequest_SetHeader(@ptrCast(self.ptr), @bitCast(_header), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `hasRawHeader` instead
    ///
    pub const HasRawHeader = hasRawHeader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#hasRawHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` headerName: []const u8 `
    ///
    pub fn hasRawHeader(self: QNetworkRequest, headerName: []const u8) bool {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        return qtc.QNetworkRequest_HasRawHeader(@ptrCast(self.ptr), headerName_str);
    }

    /// ### DEPRECATED: Use `rawHeaderList` instead
    ///
    pub const RawHeaderList = rawHeaderList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#rawHeaderList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rawHeaderList(self: QNetworkRequest, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkRequest_RawHeaderList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QNetworkRequest.rawHeaderList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNetworkRequest.rawHeaderList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `rawHeader` instead
    ///
    pub const RawHeader = rawHeader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#rawHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` headerName: []const u8 `
    ///
    pub fn rawHeader(self: QNetworkRequest, allocator: std.mem.Allocator, headerName: []const u8) []u8 {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QNetworkRequest_RawHeader(@ptrCast(self.ptr), headerName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkRequest.rawHeader: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRawHeader` instead
    ///
    pub const SetRawHeader = setRawHeader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setRawHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` headerName: []u8 `
    ///
    /// ` value: []u8 `
    ///
    pub fn setRawHeader(self: QNetworkRequest, headerName: []u8, value: []u8) void {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QNetworkRequest_SetRawHeader(@ptrCast(self.ptr), headerName_str, value_str);
    }

    /// ### DEPRECATED: Use `attribute` instead
    ///
    pub const Attribute = attribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` code: qnetworkrequest_enums.Attribute `
    ///
    pub fn attribute(self: QNetworkRequest, code: i32) QVariant {
        return .{ .ptr = qtc.QNetworkRequest_Attribute(@ptrCast(self.ptr), @bitCast(code)) };
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` code: qnetworkrequest_enums.Attribute `
    ///
    /// ` value: QVariant `
    ///
    pub fn setAttribute(self: QNetworkRequest, code: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QNetworkRequest_SetAttribute(@ptrCast(self.ptr), @bitCast(code), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `sslConfiguration` instead
    ///
    pub const SslConfiguration = sslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    pub fn sslConfiguration(self: QNetworkRequest) QSslConfiguration {
        return .{ .ptr = qtc.QNetworkRequest_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSslConfiguration` instead
    ///
    pub const SetSslConfiguration = setSslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` configuration: QSslConfiguration `
    ///
    pub fn setSslConfiguration(self: QNetworkRequest, configuration: anytype) void {
        comptime _ = @TypeOf(configuration)._is_QSslConfiguration;
        qtc.QNetworkRequest_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(configuration.ptr));
    }

    /// ### DEPRECATED: Use `setOriginatingObject` instead
    ///
    pub const SetOriginatingObject = setOriginatingObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setOriginatingObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` object: QObject `
    ///
    pub fn setOriginatingObject(self: QNetworkRequest, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QNetworkRequest_SetOriginatingObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `originatingObject` instead
    ///
    pub const OriginatingObject = originatingObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#originatingObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    pub fn originatingObject(self: QNetworkRequest) QObject {
        return .{ .ptr = qtc.QNetworkRequest_OriginatingObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `priority` instead
    ///
    pub const Priority = priority;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkrequest_enums.Priority `
    ///
    pub fn priority(self: QNetworkRequest) i32 {
        return qtc.QNetworkRequest_Priority(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPriority` instead
    ///
    pub const SetPriority = setPriority;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` _priority: qnetworkrequest_enums.Priority `
    ///
    pub fn setPriority(self: QNetworkRequest, _priority: i32) void {
        qtc.QNetworkRequest_SetPriority(@ptrCast(self.ptr), @bitCast(_priority));
    }

    /// ### DEPRECATED: Use `maximumRedirectsAllowed` instead
    ///
    pub const MaximumRedirectsAllowed = maximumRedirectsAllowed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#maximumRedirectsAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    pub fn maximumRedirectsAllowed(self: QNetworkRequest) i32 {
        return qtc.QNetworkRequest_MaximumRedirectsAllowed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumRedirectsAllowed` instead
    ///
    pub const SetMaximumRedirectsAllowed = setMaximumRedirectsAllowed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setMaximumRedirectsAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` _maximumRedirectsAllowed: i32 `
    ///
    pub fn setMaximumRedirectsAllowed(self: QNetworkRequest, _maximumRedirectsAllowed: i32) void {
        qtc.QNetworkRequest_SetMaximumRedirectsAllowed(@ptrCast(self.ptr), @bitCast(_maximumRedirectsAllowed));
    }

    /// ### DEPRECATED: Use `peerVerifyName` instead
    ///
    pub const PeerVerifyName = peerVerifyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#peerVerifyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn peerVerifyName(self: QNetworkRequest, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkRequest_PeerVerifyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkRequest.peerVerifyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPeerVerifyName` instead
    ///
    pub const SetPeerVerifyName = setPeerVerifyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setPeerVerifyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` peerName: []const u8 `
    ///
    pub fn setPeerVerifyName(self: QNetworkRequest, peerName: []const u8) void {
        const peerName_str = qtc.libqt_string{
            .len = peerName.len,
            .data = peerName.ptr,
        };
        qtc.QNetworkRequest_SetPeerVerifyName(@ptrCast(self.ptr), peerName_str);
    }

    /// ### DEPRECATED: Use `http1Configuration` instead
    ///
    pub const Http1Configuration = http1Configuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#http1Configuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    pub fn http1Configuration(self: QNetworkRequest) QHttp1Configuration {
        return .{ .ptr = qtc.QNetworkRequest_Http1Configuration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHttp1Configuration` instead
    ///
    pub const SetHttp1Configuration = setHttp1Configuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setHttp1Configuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` configuration: QHttp1Configuration `
    ///
    pub fn setHttp1Configuration(self: QNetworkRequest, configuration: anytype) void {
        comptime _ = @TypeOf(configuration)._is_QHttp1Configuration;
        qtc.QNetworkRequest_SetHttp1Configuration(@ptrCast(self.ptr), @ptrCast(configuration.ptr));
    }

    /// ### DEPRECATED: Use `http2Configuration` instead
    ///
    pub const Http2Configuration = http2Configuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#http2Configuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    pub fn http2Configuration(self: QNetworkRequest) QHttp2Configuration {
        return .{ .ptr = qtc.QNetworkRequest_Http2Configuration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHttp2Configuration` instead
    ///
    pub const SetHttp2Configuration = setHttp2Configuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setHttp2Configuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` configuration: QHttp2Configuration `
    ///
    pub fn setHttp2Configuration(self: QNetworkRequest, configuration: anytype) void {
        comptime _ = @TypeOf(configuration)._is_QHttp2Configuration;
        qtc.QNetworkRequest_SetHttp2Configuration(@ptrCast(self.ptr), @ptrCast(configuration.ptr));
    }

    /// ### DEPRECATED: Use `decompressedSafetyCheckThreshold` instead
    ///
    pub const DecompressedSafetyCheckThreshold = decompressedSafetyCheckThreshold;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#decompressedSafetyCheckThreshold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    pub fn decompressedSafetyCheckThreshold(self: QNetworkRequest) i64 {
        return qtc.QNetworkRequest_DecompressedSafetyCheckThreshold(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDecompressedSafetyCheckThreshold` instead
    ///
    pub const SetDecompressedSafetyCheckThreshold = setDecompressedSafetyCheckThreshold;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setDecompressedSafetyCheckThreshold)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` threshold: i64 `
    ///
    pub fn setDecompressedSafetyCheckThreshold(self: QNetworkRequest, threshold: i64) void {
        qtc.QNetworkRequest_SetDecompressedSafetyCheckThreshold(@ptrCast(self.ptr), @bitCast(threshold));
    }

    /// ### DEPRECATED: Use `transferTimeout` instead
    ///
    pub const TransferTimeout = transferTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#transferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    pub fn transferTimeout(self: QNetworkRequest) i32 {
        return qtc.QNetworkRequest_TransferTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTransferTimeout` instead
    ///
    pub const SetTransferTimeout = setTransferTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` timeout: i32 `
    ///
    pub fn setTransferTimeout(self: QNetworkRequest, timeout: i32) void {
        qtc.QNetworkRequest_SetTransferTimeout(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `transferTimeoutAsDuration` instead
    ///
    pub const TransferTimeoutAsDuration = transferTimeoutAsDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#transferTimeoutAsDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ## Returns:
    ///
    /// ` i64 of milliseconds `
    ///
    pub fn transferTimeoutAsDuration(self: QNetworkRequest) i64 {
        return qtc.QNetworkRequest_TransferTimeoutAsDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTransferTimeout2` instead
    ///
    pub const SetTransferTimeout2 = setTransferTimeout2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    pub fn setTransferTimeout2(self: QNetworkRequest) void {
        qtc.QNetworkRequest_SetTransferTimeout2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `attribute2` instead
    ///
    pub const Attribute2 = attribute2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` code: qnetworkrequest_enums.Attribute `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn attribute2(self: QNetworkRequest, code: i32, defaultValue: anytype) QVariant {
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.QNetworkRequest_Attribute2(@ptrCast(self.ptr), @bitCast(code), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `setTransferTimeout1` instead
    ///
    pub const SetTransferTimeout1 = setTransferTimeout1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequest `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    pub fn setTransferTimeout1(self: QNetworkRequest, duration: i64) void {
        qtc.QNetworkRequest_SetTransferTimeout1(@ptrCast(self.ptr), @bitCast(duration));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#dtor.QNetworkRequest)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkRequest `
    ///
    pub fn delete(self: QNetworkRequest) void {
        qtc.QNetworkRequest_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequest.html#public-types)
pub const enums = struct {
    pub const KnownHeaders = enum(i32) {
        pub const ContentTypeHeader: i32 = 0;
        pub const ContentLengthHeader: i32 = 1;
        pub const LocationHeader: i32 = 2;
        pub const LastModifiedHeader: i32 = 3;
        pub const CookieHeader: i32 = 4;
        pub const SetCookieHeader: i32 = 5;
        pub const ContentDispositionHeader: i32 = 6;
        pub const UserAgentHeader: i32 = 7;
        pub const ServerHeader: i32 = 8;
        pub const IfModifiedSinceHeader: i32 = 9;
        pub const ETagHeader: i32 = 10;
        pub const IfMatchHeader: i32 = 11;
        pub const IfNoneMatchHeader: i32 = 12;
        pub const NumKnownHeaders: i32 = 13;
    };

    pub const Attribute = enum(i32) {
        pub const HttpStatusCodeAttribute: i32 = 0;
        pub const HttpReasonPhraseAttribute: i32 = 1;
        pub const RedirectionTargetAttribute: i32 = 2;
        pub const ConnectionEncryptedAttribute: i32 = 3;
        pub const CacheLoadControlAttribute: i32 = 4;
        pub const CacheSaveControlAttribute: i32 = 5;
        pub const SourceIsFromCacheAttribute: i32 = 6;
        pub const DoNotBufferUploadDataAttribute: i32 = 7;
        pub const HttpPipeliningAllowedAttribute: i32 = 8;
        pub const HttpPipeliningWasUsedAttribute: i32 = 9;
        pub const CustomVerbAttribute: i32 = 10;
        pub const CookieLoadControlAttribute: i32 = 11;
        pub const AuthenticationReuseAttribute: i32 = 12;
        pub const CookieSaveControlAttribute: i32 = 13;
        pub const MaximumDownloadBufferSizeAttribute: i32 = 14;
        pub const DownloadBufferAttribute: i32 = 15;
        pub const SynchronousRequestAttribute: i32 = 16;
        pub const BackgroundRequestAttribute: i32 = 17;
        pub const EmitAllUploadProgressSignalsAttribute: i32 = 18;
        pub const Http2AllowedAttribute: i32 = 19;
        pub const Http2WasUsedAttribute: i32 = 20;
        pub const OriginalContentLengthAttribute: i32 = 21;
        pub const RedirectPolicyAttribute: i32 = 22;
        pub const Http2DirectAttribute: i32 = 23;
        pub const ResourceTypeAttribute: i32 = 24;
        pub const AutoDeleteReplyOnFinishAttribute: i32 = 25;
        pub const ConnectionCacheExpiryTimeoutSecondsAttribute: i32 = 26;
        pub const Http2CleartextAllowedAttribute: i32 = 27;
        pub const UseCredentialsAttribute: i32 = 28;
        pub const FullLocalServerNameAttribute: i32 = 29;
        pub const User: i32 = 1000;
        pub const UserMax: i32 = 32767;
    };

    pub const CacheLoadControl = enum(i32) {
        pub const AlwaysNetwork: i32 = 0;
        pub const PreferNetwork: i32 = 1;
        pub const PreferCache: i32 = 2;
        pub const AlwaysCache: i32 = 3;
    };

    pub const LoadControl = enum(i32) {
        pub const Automatic: i32 = 0;
        pub const Manual: i32 = 1;
    };

    pub const Priority = enum(i32) {
        pub const HighPriority: i32 = 1;
        pub const NormalPriority: i32 = 3;
        pub const LowPriority: i32 = 5;
    };

    pub const RedirectPolicy = enum(i32) {
        pub const ManualRedirectPolicy: i32 = 0;
        pub const NoLessSafeRedirectPolicy: i32 = 1;
        pub const SameOriginRedirectPolicy: i32 = 2;
        pub const UserVerifiedRedirectPolicy: i32 = 3;
    };

    pub const TransferTimeoutConstant = enum(i32) {
        pub const DefaultTransferTimeoutConstant: i32 = 30000;
    };
};
