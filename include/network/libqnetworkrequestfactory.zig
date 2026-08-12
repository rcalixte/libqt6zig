const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QHttpHeaders = @import("libqt6").QHttpHeaders;
const QNetworkRequest = @import("libqt6").QNetworkRequest;
const QSslConfiguration = @import("libqt6").QSslConfiguration;
const QUrl = @import("libqt6").QUrl;
const QUrlQuery = @import("libqt6").QUrlQuery;
const QVariant = @import("libqt6").QVariant;
const qnetworkrequest_enums = @import("libqnetworkrequest.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html)
pub const QNetworkRequestFactory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkRequestFactory,

    pub const _is_QNetworkRequestFactory = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkRequestFactory object in C++ memory
    ///
    pub fn new() QNetworkRequestFactory {
        return .{ .ptr = qtc.QNetworkRequestFactory_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkRequestFactory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _baseUrl: QUrl `
    ///
    pub fn new2(_baseUrl: anytype) QNetworkRequestFactory {
        comptime _ = @TypeOf(_baseUrl)._is_QUrl;
        return .{ .ptr = qtc.QNetworkRequestFactory_new2(@ptrCast(_baseUrl.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QNetworkRequestFactory object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkRequestFactory `
    ///
    pub fn new3(other: anytype) QNetworkRequestFactory {
        comptime _ = @TypeOf(other)._is_QNetworkRequestFactory;
        return .{ .ptr = qtc.QNetworkRequestFactory_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` other: QNetworkRequestFactory `
    ///
    pub fn operatorAssign(self: QNetworkRequestFactory, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkRequestFactory;
        qtc.QNetworkRequestFactory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` other: QNetworkRequestFactory `
    ///
    pub fn swap(self: QNetworkRequestFactory, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkRequestFactory;
        qtc.QNetworkRequestFactory_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `baseUrl` instead
    ///
    pub const BaseUrl = baseUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#baseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn baseUrl(self: QNetworkRequestFactory) QUrl {
        return .{ .ptr = qtc.QNetworkRequestFactory_BaseUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseUrl` instead
    ///
    pub const SetBaseUrl = setBaseUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBaseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` url: QUrl `
    ///
    pub fn setBaseUrl(self: QNetworkRequestFactory, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QNetworkRequestFactory_SetBaseUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `sslConfiguration` instead
    ///
    pub const SslConfiguration = sslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn sslConfiguration(self: QNetworkRequestFactory) QSslConfiguration {
        return .{ .ptr = qtc.QNetworkRequestFactory_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSslConfiguration` instead
    ///
    pub const SetSslConfiguration = setSslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` configuration: QSslConfiguration `
    ///
    pub fn setSslConfiguration(self: QNetworkRequestFactory, configuration: anytype) void {
        comptime _ = @TypeOf(configuration)._is_QSslConfiguration;
        qtc.QNetworkRequestFactory_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(configuration.ptr));
    }

    /// ### DEPRECATED: Use `createRequest` instead
    ///
    pub const CreateRequest = createRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn createRequest(self: QNetworkRequestFactory) QNetworkRequest {
        return .{ .ptr = qtc.QNetworkRequestFactory_CreateRequest(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createRequest2` instead
    ///
    pub const CreateRequest2 = createRequest2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` query: QUrlQuery `
    ///
    pub fn createRequest2(self: QNetworkRequestFactory, query: anytype) QNetworkRequest {
        comptime _ = @TypeOf(query)._is_QUrlQuery;
        return .{ .ptr = qtc.QNetworkRequestFactory_CreateRequest2(@ptrCast(self.ptr), @ptrCast(query.ptr)) };
    }

    /// ### DEPRECATED: Use `createRequest3` instead
    ///
    pub const CreateRequest3 = createRequest3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` path: []const u8 `
    ///
    pub fn createRequest3(self: QNetworkRequestFactory, path: []const u8) QNetworkRequest {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QNetworkRequestFactory_CreateRequest3(@ptrCast(self.ptr), path_str) };
    }

    /// ### DEPRECATED: Use `createRequest4` instead
    ///
    pub const CreateRequest4 = createRequest4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` path: []const u8 `
    ///
    /// ` query: QUrlQuery `
    ///
    pub fn createRequest4(self: QNetworkRequestFactory, path: []const u8, query: anytype) QNetworkRequest {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        comptime _ = @TypeOf(query)._is_QUrlQuery;
        return .{ .ptr = qtc.QNetworkRequestFactory_CreateRequest4(@ptrCast(self.ptr), path_str, @ptrCast(query.ptr)) };
    }

    /// ### DEPRECATED: Use `setCommonHeaders` instead
    ///
    pub const SetCommonHeaders = setCommonHeaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setCommonHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` headers: QHttpHeaders `
    ///
    pub fn setCommonHeaders(self: QNetworkRequestFactory, headers: anytype) void {
        comptime _ = @TypeOf(headers)._is_QHttpHeaders;
        qtc.QNetworkRequestFactory_SetCommonHeaders(@ptrCast(self.ptr), @ptrCast(headers.ptr));
    }

    /// ### DEPRECATED: Use `commonHeaders` instead
    ///
    pub const CommonHeaders = commonHeaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#commonHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn commonHeaders(self: QNetworkRequestFactory) QHttpHeaders {
        return .{ .ptr = qtc.QNetworkRequestFactory_CommonHeaders(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearCommonHeaders` instead
    ///
    pub const ClearCommonHeaders = clearCommonHeaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearCommonHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn clearCommonHeaders(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearCommonHeaders(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bearerToken` instead
    ///
    pub const BearerToken = bearerToken;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#bearerToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn bearerToken(self: QNetworkRequestFactory, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkRequestFactory_BearerToken(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkRequestFactory.bearerToken: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBearerToken` instead
    ///
    pub const SetBearerToken = setBearerToken;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBearerToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` token: []u8 `
    ///
    pub fn setBearerToken(self: QNetworkRequestFactory, token: []u8) void {
        const token_str = qtc.libqt_string{
            .len = token.len,
            .data = token.ptr,
        };
        qtc.QNetworkRequestFactory_SetBearerToken(@ptrCast(self.ptr), token_str);
    }

    /// ### DEPRECATED: Use `clearBearerToken` instead
    ///
    pub const ClearBearerToken = clearBearerToken;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearBearerToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn clearBearerToken(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearBearerToken(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `userName` instead
    ///
    pub const UserName = userName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#userName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn userName(self: QNetworkRequestFactory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkRequestFactory_UserName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkRequestFactory.userName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUserName` instead
    ///
    pub const SetUserName = setUserName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setUserName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` _userName: []const u8 `
    ///
    pub fn setUserName(self: QNetworkRequestFactory, _userName: []const u8) void {
        const userName_str = qtc.libqt_string{
            .len = _userName.len,
            .data = _userName.ptr,
        };
        qtc.QNetworkRequestFactory_SetUserName(@ptrCast(self.ptr), userName_str);
    }

    /// ### DEPRECATED: Use `clearUserName` instead
    ///
    pub const ClearUserName = clearUserName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearUserName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn clearUserName(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearUserName(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `password` instead
    ///
    pub const Password = password;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn password(self: QNetworkRequestFactory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkRequestFactory_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkRequestFactory.password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPassword` instead
    ///
    pub const SetPassword = setPassword;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` _password: []const u8 `
    ///
    pub fn setPassword(self: QNetworkRequestFactory, _password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        qtc.QNetworkRequestFactory_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### DEPRECATED: Use `clearPassword` instead
    ///
    pub const ClearPassword = clearPassword;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn clearPassword(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearPassword(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTransferTimeout` instead
    ///
    pub const SetTransferTimeout = setTransferTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` timeout: i64 of milliseconds `
    ///
    pub fn setTransferTimeout(self: QNetworkRequestFactory, timeout: i64) void {
        qtc.QNetworkRequestFactory_SetTransferTimeout(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `transferTimeout` instead
    ///
    pub const TransferTimeout = transferTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#transferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ## Returns:
    ///
    /// ` i64 of milliseconds `
    ///
    pub fn transferTimeout(self: QNetworkRequestFactory) i64 {
        return qtc.QNetworkRequestFactory_TransferTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `queryParameters` instead
    ///
    pub const QueryParameters = queryParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#queryParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn queryParameters(self: QNetworkRequestFactory) QUrlQuery {
        return .{ .ptr = qtc.QNetworkRequestFactory_QueryParameters(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setQueryParameters` instead
    ///
    pub const SetQueryParameters = setQueryParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setQueryParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` query: QUrlQuery `
    ///
    pub fn setQueryParameters(self: QNetworkRequestFactory, query: anytype) void {
        comptime _ = @TypeOf(query)._is_QUrlQuery;
        qtc.QNetworkRequestFactory_SetQueryParameters(@ptrCast(self.ptr), @ptrCast(query.ptr));
    }

    /// ### DEPRECATED: Use `clearQueryParameters` instead
    ///
    pub const ClearQueryParameters = clearQueryParameters;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearQueryParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn clearQueryParameters(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearQueryParameters(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPriority` instead
    ///
    pub const SetPriority = setPriority;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` _priority: qnetworkrequest_enums.Priority `
    ///
    pub fn setPriority(self: QNetworkRequestFactory, _priority: i32) void {
        qtc.QNetworkRequestFactory_SetPriority(@ptrCast(self.ptr), @bitCast(_priority));
    }

    /// ### DEPRECATED: Use `priority` instead
    ///
    pub const Priority = priority;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkrequest_enums.Priority `
    ///
    pub fn priority(self: QNetworkRequestFactory) i32 {
        return qtc.QNetworkRequestFactory_Priority(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `attribute` instead
    ///
    pub const Attribute = attribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` _attribute: qnetworkrequest_enums.Attribute `
    ///
    pub fn attribute(self: QNetworkRequestFactory, _attribute: i32) QVariant {
        return .{ .ptr = qtc.QNetworkRequestFactory_Attribute(@ptrCast(self.ptr), @bitCast(_attribute)) };
    }

    /// ### DEPRECATED: Use `attribute2` instead
    ///
    pub const Attribute2 = attribute2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` _attribute: qnetworkrequest_enums.Attribute `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn attribute2(self: QNetworkRequestFactory, _attribute: i32, defaultValue: anytype) QVariant {
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.QNetworkRequestFactory_Attribute2(@ptrCast(self.ptr), @bitCast(_attribute), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` _attribute: qnetworkrequest_enums.Attribute `
    ///
    /// ` value: QVariant `
    ///
    pub fn setAttribute(self: QNetworkRequestFactory, _attribute: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QNetworkRequestFactory_SetAttribute(@ptrCast(self.ptr), @bitCast(_attribute), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `clearAttribute` instead
    ///
    pub const ClearAttribute = clearAttribute;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` _attribute: qnetworkrequest_enums.Attribute `
    ///
    pub fn clearAttribute(self: QNetworkRequestFactory, _attribute: i32) void {
        qtc.QNetworkRequestFactory_ClearAttribute(@ptrCast(self.ptr), @bitCast(_attribute));
    }

    /// ### DEPRECATED: Use `clearAttributes` instead
    ///
    pub const ClearAttributes = clearAttributes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn clearAttributes(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#dtor.QNetworkRequestFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn delete(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_Delete(@ptrCast(self.ptr));
    }
};
