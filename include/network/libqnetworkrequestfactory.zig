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

    /// New constructs a new QNetworkRequestFactory object.
    ///
    pub fn New() QNetworkRequestFactory {
        return .{ .ptr = qtc.QNetworkRequestFactory_new() };
    }

    /// New2 constructs a new QNetworkRequestFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` baseUrl: QUrl `
    ///
    pub fn New2(baseUrl: anytype) QNetworkRequestFactory {
        comptime _ = @TypeOf(baseUrl)._is_QUrl;
        return .{ .ptr = qtc.QNetworkRequestFactory_new2(@ptrCast(baseUrl.ptr)) };
    }

    /// New3 constructs a new QNetworkRequestFactory object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkRequestFactory `
    ///
    pub fn New3(other: anytype) QNetworkRequestFactory {
        comptime _ = @TypeOf(other)._is_QNetworkRequestFactory;
        return .{ .ptr = qtc.QNetworkRequestFactory_new3(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` other: QNetworkRequestFactory `
    ///
    pub fn OperatorAssign(self: QNetworkRequestFactory, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkRequestFactory;
        qtc.QNetworkRequestFactory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` other: QNetworkRequestFactory `
    ///
    pub fn Swap(self: QNetworkRequestFactory, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkRequestFactory;
        qtc.QNetworkRequestFactory_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#baseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn BaseUrl(self: QNetworkRequestFactory) QUrl {
        return .{ .ptr = qtc.QNetworkRequestFactory_BaseUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBaseUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetBaseUrl(self: QNetworkRequestFactory, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QNetworkRequestFactory_SetBaseUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn SslConfiguration(self: QNetworkRequestFactory) QSslConfiguration {
        return .{ .ptr = qtc.QNetworkRequestFactory_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` configuration: QSslConfiguration `
    ///
    pub fn SetSslConfiguration(self: QNetworkRequestFactory, configuration: anytype) void {
        comptime _ = @TypeOf(configuration)._is_QSslConfiguration;
        qtc.QNetworkRequestFactory_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(configuration.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn CreateRequest(self: QNetworkRequestFactory) QNetworkRequest {
        return .{ .ptr = qtc.QNetworkRequestFactory_CreateRequest(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` query: QUrlQuery `
    ///
    pub fn CreateRequest2(self: QNetworkRequestFactory, query: anytype) QNetworkRequest {
        comptime _ = @TypeOf(query)._is_QUrlQuery;
        return .{ .ptr = qtc.QNetworkRequestFactory_CreateRequest2(@ptrCast(self.ptr), @ptrCast(query.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` path: []const u8 `
    ///
    pub fn CreateRequest3(self: QNetworkRequestFactory, path: []const u8) QNetworkRequest {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QNetworkRequestFactory_CreateRequest3(@ptrCast(self.ptr), path_str) };
    }

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
    pub fn CreateRequest4(self: QNetworkRequestFactory, path: []const u8, query: anytype) QNetworkRequest {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        comptime _ = @TypeOf(query)._is_QUrlQuery;
        return .{ .ptr = qtc.QNetworkRequestFactory_CreateRequest4(@ptrCast(self.ptr), path_str, @ptrCast(query.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setCommonHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` headers: QHttpHeaders `
    ///
    pub fn SetCommonHeaders(self: QNetworkRequestFactory, headers: anytype) void {
        comptime _ = @TypeOf(headers)._is_QHttpHeaders;
        qtc.QNetworkRequestFactory_SetCommonHeaders(@ptrCast(self.ptr), @ptrCast(headers.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#commonHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn CommonHeaders(self: QNetworkRequestFactory) QHttpHeaders {
        return .{ .ptr = qtc.QNetworkRequestFactory_CommonHeaders(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearCommonHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn ClearCommonHeaders(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearCommonHeaders(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#bearerToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BearerToken(self: QNetworkRequestFactory, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkRequestFactory_BearerToken(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkrequestfactory.BearerToken: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBearerToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` token: []u8 `
    ///
    pub fn SetBearerToken(self: QNetworkRequestFactory, token: []u8) void {
        const token_str = qtc.libqt_string{
            .len = token.len,
            .data = token.ptr,
        };
        qtc.QNetworkRequestFactory_SetBearerToken(@ptrCast(self.ptr), token_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearBearerToken)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn ClearBearerToken(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearBearerToken(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#userName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UserName(self: QNetworkRequestFactory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkRequestFactory_UserName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkrequestfactory.UserName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setUserName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` userName: []const u8 `
    ///
    pub fn SetUserName(self: QNetworkRequestFactory, userName: []const u8) void {
        const userName_str = qtc.libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        qtc.QNetworkRequestFactory_SetUserName(@ptrCast(self.ptr), userName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearUserName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn ClearUserName(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearUserName(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Password(self: QNetworkRequestFactory, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkRequestFactory_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkrequestfactory.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SetPassword(self: QNetworkRequestFactory, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.QNetworkRequestFactory_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn ClearPassword(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearPassword(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` timeout: i64 of milliseconds `
    ///
    pub fn SetTransferTimeout(self: QNetworkRequestFactory, timeout: i64) void {
        qtc.QNetworkRequestFactory_SetTransferTimeout(@ptrCast(self.ptr), @bitCast(timeout));
    }

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
    pub fn TransferTimeout(self: QNetworkRequestFactory) i64 {
        return qtc.QNetworkRequestFactory_TransferTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#queryParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn QueryParameters(self: QNetworkRequestFactory) QUrlQuery {
        return .{ .ptr = qtc.QNetworkRequestFactory_QueryParameters(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setQueryParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` query: QUrlQuery `
    ///
    pub fn SetQueryParameters(self: QNetworkRequestFactory, query: anytype) void {
        comptime _ = @TypeOf(query)._is_QUrlQuery;
        qtc.QNetworkRequestFactory_SetQueryParameters(@ptrCast(self.ptr), @ptrCast(query.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearQueryParameters)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn ClearQueryParameters(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearQueryParameters(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` priority: qnetworkrequest_enums.Priority `
    ///
    pub fn SetPriority(self: QNetworkRequestFactory, priority: i32) void {
        qtc.QNetworkRequestFactory_SetPriority(@ptrCast(self.ptr), @bitCast(priority));
    }

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
    pub fn Priority(self: QNetworkRequestFactory) i32 {
        return qtc.QNetworkRequestFactory_Priority(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` attribute: qnetworkrequest_enums.Attribute `
    ///
    pub fn Attribute(self: QNetworkRequestFactory, attribute: i32) QVariant {
        return .{ .ptr = qtc.QNetworkRequestFactory_Attribute(@ptrCast(self.ptr), @bitCast(attribute)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` attribute: qnetworkrequest_enums.Attribute `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn Attribute2(self: QNetworkRequestFactory, attribute: i32, defaultValue: anytype) QVariant {
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.QNetworkRequestFactory_Attribute2(@ptrCast(self.ptr), @bitCast(attribute), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` attribute: qnetworkrequest_enums.Attribute `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetAttribute(self: QNetworkRequestFactory, attribute: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QNetworkRequestFactory_SetAttribute(@ptrCast(self.ptr), @bitCast(attribute), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    /// ` attribute: qnetworkrequest_enums.Attribute `
    ///
    pub fn ClearAttribute(self: QNetworkRequestFactory, attribute: i32) void {
        qtc.QNetworkRequestFactory_ClearAttribute(@ptrCast(self.ptr), @bitCast(attribute));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn ClearAttributes(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_ClearAttributes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#dtor.QNetworkRequestFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkRequestFactory `
    ///
    pub fn Delete(self: QNetworkRequestFactory) void {
        qtc.QNetworkRequestFactory_Delete(@ptrCast(self.ptr));
    }
};
