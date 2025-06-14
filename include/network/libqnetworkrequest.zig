const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnetworkrequest_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qnetworkrequest.html
pub const qnetworkrequest = struct {
    /// New constructs a new QNetworkRequest object.
    ///
    ///
    pub fn New() QtC.QNetworkRequest {
        return qtc.QNetworkRequest_new();
    }

    /// New2 constructs a new QNetworkRequest object.
    ///
    /// ``` url: QtC.QUrl ```
    pub fn New2(url: ?*anyopaque) QtC.QNetworkRequest {
        return qtc.QNetworkRequest_new2(@ptrCast(url));
    }

    /// New3 constructs a new QNetworkRequest object.
    ///
    /// ``` other: QtC.QNetworkRequest ```
    pub fn New3(other: ?*anyopaque) QtC.QNetworkRequest {
        return qtc.QNetworkRequest_new3(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator=)
    ///
    /// ``` self: QtC.QNetworkRequest, other: QtC.QNetworkRequest ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkRequest_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#swap)
    ///
    /// ``` self: QtC.QNetworkRequest, other: QtC.QNetworkRequest ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkRequest_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator==)
    ///
    /// ``` self: QtC.QNetworkRequest, other: QtC.QNetworkRequest ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkRequest_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator!=)
    ///
    /// ``` self: QtC.QNetworkRequest, other: QtC.QNetworkRequest ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkRequest_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#url)
    ///
    /// ``` self: QtC.QNetworkRequest ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QNetworkRequest_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setUrl)
    ///
    /// ``` self: QtC.QNetworkRequest, url: QtC.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkRequest_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#header)
    ///
    /// ``` self: QtC.QNetworkRequest, header: qnetworkrequest_enums.KnownHeaders ```
    pub fn Header(self: ?*anyopaque, header: i64) QtC.QVariant {
        return qtc.QNetworkRequest_Header(@ptrCast(self), @intCast(header));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHeader)
    ///
    /// ``` self: QtC.QNetworkRequest, header: qnetworkrequest_enums.KnownHeaders, value: QtC.QVariant ```
    pub fn SetHeader(self: ?*anyopaque, header: i64, value: ?*anyopaque) void {
        qtc.QNetworkRequest_SetHeader(@ptrCast(self), @intCast(header), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#hasRawHeader)
    ///
    /// ``` self: QtC.QNetworkRequest, headerName: []u8 ```
    pub fn HasRawHeader(self: ?*anyopaque, headerName: []u8) bool {
        const headerName_str = qtc.struct_libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        return qtc.QNetworkRequest_HasRawHeader(@ptrCast(self), headerName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#rawHeaderList)
    ///
    /// ``` self: QtC.QNetworkRequest, allocator: std.mem.Allocator ```
    pub fn RawHeaderList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkRequest_RawHeaderList(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qnetworkrequest.RawHeaderList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkrequest.RawHeaderList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#rawHeader)
    ///
    /// ``` self: QtC.QNetworkRequest, headerName: []u8, allocator: std.mem.Allocator ```
    pub fn RawHeader(self: ?*anyopaque, headerName: []u8, allocator: std.mem.Allocator) []u8 {
        const headerName_str = qtc.struct_libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        const _bytearray: qtc.struct_libqt_string = qtc.QNetworkRequest_RawHeader(@ptrCast(self), headerName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkrequest.RawHeader: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setRawHeader)
    ///
    /// ``` self: QtC.QNetworkRequest, headerName: []u8, value: []u8 ```
    pub fn SetRawHeader(self: ?*anyopaque, headerName: []u8, value: []u8) void {
        const headerName_str = qtc.struct_libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        const value_str = qtc.struct_libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QNetworkRequest_SetRawHeader(@ptrCast(self), headerName_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#attribute)
    ///
    /// ``` self: QtC.QNetworkRequest, code: qnetworkrequest_enums.Attribute ```
    pub fn Attribute(self: ?*anyopaque, code: i64) QtC.QVariant {
        return qtc.QNetworkRequest_Attribute(@ptrCast(self), @intCast(code));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setAttribute)
    ///
    /// ``` self: QtC.QNetworkRequest, code: qnetworkrequest_enums.Attribute, value: QtC.QVariant ```
    pub fn SetAttribute(self: ?*anyopaque, code: i64, value: ?*anyopaque) void {
        qtc.QNetworkRequest_SetAttribute(@ptrCast(self), @intCast(code), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#sslConfiguration)
    ///
    /// ``` self: QtC.QNetworkRequest ```
    pub fn SslConfiguration(self: ?*anyopaque) QtC.QSslConfiguration {
        return qtc.QNetworkRequest_SslConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setSslConfiguration)
    ///
    /// ``` self: QtC.QNetworkRequest, configuration: QtC.QSslConfiguration ```
    pub fn SetSslConfiguration(self: ?*anyopaque, configuration: ?*anyopaque) void {
        qtc.QNetworkRequest_SetSslConfiguration(@ptrCast(self), @ptrCast(configuration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setOriginatingObject)
    ///
    /// ``` self: QtC.QNetworkRequest, object: QtC.QObject ```
    pub fn SetOriginatingObject(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.QNetworkRequest_SetOriginatingObject(@ptrCast(self), @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#originatingObject)
    ///
    /// ``` self: QtC.QNetworkRequest ```
    pub fn OriginatingObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QNetworkRequest_OriginatingObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#priority)
    ///
    /// ``` self: QtC.QNetworkRequest ```
    pub fn Priority(self: ?*anyopaque) i64 {
        return qtc.QNetworkRequest_Priority(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setPriority)
    ///
    /// ``` self: QtC.QNetworkRequest, priority: qnetworkrequest_enums.Priority ```
    pub fn SetPriority(self: ?*anyopaque, priority: i64) void {
        qtc.QNetworkRequest_SetPriority(@ptrCast(self), @intCast(priority));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#maximumRedirectsAllowed)
    ///
    /// ``` self: QtC.QNetworkRequest ```
    pub fn MaximumRedirectsAllowed(self: ?*anyopaque) i32 {
        return qtc.QNetworkRequest_MaximumRedirectsAllowed(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setMaximumRedirectsAllowed)
    ///
    /// ``` self: QtC.QNetworkRequest, maximumRedirectsAllowed: i32 ```
    pub fn SetMaximumRedirectsAllowed(self: ?*anyopaque, maximumRedirectsAllowed: i32) void {
        qtc.QNetworkRequest_SetMaximumRedirectsAllowed(@ptrCast(self), @intCast(maximumRedirectsAllowed));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#peerVerifyName)
    ///
    /// ``` self: QtC.QNetworkRequest, allocator: std.mem.Allocator ```
    pub fn PeerVerifyName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkRequest_PeerVerifyName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkrequest.PeerVerifyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setPeerVerifyName)
    ///
    /// ``` self: QtC.QNetworkRequest, peerName: []const u8 ```
    pub fn SetPeerVerifyName(self: ?*anyopaque, peerName: []const u8) void {
        const peerName_str = qtc.struct_libqt_string{
            .len = peerName.len,
            .data = peerName.ptr,
        };
        qtc.QNetworkRequest_SetPeerVerifyName(@ptrCast(self), peerName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#http2Configuration)
    ///
    /// ``` self: QtC.QNetworkRequest ```
    pub fn Http2Configuration(self: ?*anyopaque) QtC.QHttp2Configuration {
        return qtc.QNetworkRequest_Http2Configuration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHttp2Configuration)
    ///
    /// ``` self: QtC.QNetworkRequest, configuration: QtC.QHttp2Configuration ```
    pub fn SetHttp2Configuration(self: ?*anyopaque, configuration: ?*anyopaque) void {
        qtc.QNetworkRequest_SetHttp2Configuration(@ptrCast(self), @ptrCast(configuration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#decompressedSafetyCheckThreshold)
    ///
    /// ``` self: QtC.QNetworkRequest ```
    pub fn DecompressedSafetyCheckThreshold(self: ?*anyopaque) i64 {
        return qtc.QNetworkRequest_DecompressedSafetyCheckThreshold(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setDecompressedSafetyCheckThreshold)
    ///
    /// ``` self: QtC.QNetworkRequest, threshold: i64 ```
    pub fn SetDecompressedSafetyCheckThreshold(self: ?*anyopaque, threshold: i64) void {
        qtc.QNetworkRequest_SetDecompressedSafetyCheckThreshold(@ptrCast(self), @intCast(threshold));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#transferTimeout)
    ///
    /// ``` self: QtC.QNetworkRequest ```
    pub fn TransferTimeout(self: ?*anyopaque) i32 {
        return qtc.QNetworkRequest_TransferTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setTransferTimeout)
    ///
    /// ``` self: QtC.QNetworkRequest ```
    pub fn SetTransferTimeout(self: ?*anyopaque) void {
        qtc.QNetworkRequest_SetTransferTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#attribute)
    ///
    /// ``` self: QtC.QNetworkRequest, code: qnetworkrequest_enums.Attribute, defaultValue: QtC.QVariant ```
    pub fn Attribute2(self: ?*anyopaque, code: i64, defaultValue: ?*anyopaque) QtC.QVariant {
        return qtc.QNetworkRequest_Attribute2(@ptrCast(self), @intCast(code), @ptrCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setTransferTimeout)
    ///
    /// ``` self: QtC.QNetworkRequest, timeout: i32 ```
    pub fn SetTransferTimeout1(self: ?*anyopaque, timeout: i32) void {
        qtc.QNetworkRequest_SetTransferTimeout1(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#dtor.QNetworkRequest)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNetworkRequest ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkRequest_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnetworkrequest.html#types
pub const enums = struct {
    pub const KnownHeaders = enum {
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
    };

    pub const Attribute = enum {
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
        pub const User: i32 = 1000;
        pub const UserMax: i32 = 32767;
    };

    pub const CacheLoadControl = enum {
        pub const AlwaysNetwork: i32 = 0;
        pub const PreferNetwork: i32 = 1;
        pub const PreferCache: i32 = 2;
        pub const AlwaysCache: i32 = 3;
    };

    pub const LoadControl = enum {
        pub const Automatic: i32 = 0;
        pub const Manual: i32 = 1;
    };

    pub const Priority = enum {
        pub const HighPriority: i32 = 1;
        pub const NormalPriority: i32 = 3;
        pub const LowPriority: i32 = 5;
    };

    pub const RedirectPolicy = enum {
        pub const ManualRedirectPolicy: i32 = 0;
        pub const NoLessSafeRedirectPolicy: i32 = 1;
        pub const SameOriginRedirectPolicy: i32 = 2;
        pub const UserVerifiedRedirectPolicy: i32 = 3;
    };

    pub const TransferTimeoutConstant = enum {
        pub const DefaultTransferTimeoutConstant: i32 = 30000;
    };
};
