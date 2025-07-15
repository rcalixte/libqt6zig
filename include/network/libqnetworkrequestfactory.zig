const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnetworkrequest_enums = @import("libqnetworkrequest.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qnetworkrequestfactory.html
pub const qnetworkrequestfactory = struct {
    /// New constructs a new QNetworkRequestFactory object.
    ///
    ///
    pub fn New() QtC.QNetworkRequestFactory {
        return qtc.QNetworkRequestFactory_new();
    }

    /// New2 constructs a new QNetworkRequestFactory object.
    ///
    /// ``` baseUrl: QtC.QUrl ```
    pub fn New2(baseUrl: ?*anyopaque) QtC.QNetworkRequestFactory {
        return qtc.QNetworkRequestFactory_new2(@ptrCast(baseUrl));
    }

    /// New3 constructs a new QNetworkRequestFactory object.
    ///
    /// ``` other: QtC.QNetworkRequestFactory ```
    pub fn New3(other: ?*anyopaque) QtC.QNetworkRequestFactory {
        return qtc.QNetworkRequestFactory_new3(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#operator=)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, other: QtC.QNetworkRequestFactory ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#swap)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, other: QtC.QNetworkRequestFactory ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#baseUrl)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn BaseUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QNetworkRequestFactory_BaseUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBaseUrl)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, url: QtC.QUrl ```
    pub fn SetBaseUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_SetBaseUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#sslConfiguration)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn SslConfiguration(self: ?*anyopaque) QtC.QSslConfiguration {
        return qtc.QNetworkRequestFactory_SslConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setSslConfiguration)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, configuration: QtC.QSslConfiguration ```
    pub fn SetSslConfiguration(self: ?*anyopaque, configuration: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_SetSslConfiguration(@ptrCast(self), @ptrCast(configuration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn CreateRequest(self: ?*anyopaque) QtC.QNetworkRequest {
        return qtc.QNetworkRequestFactory_CreateRequest(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, query: QtC.QUrlQuery ```
    pub fn CreateRequest2(self: ?*anyopaque, query: ?*anyopaque) QtC.QNetworkRequest {
        return qtc.QNetworkRequestFactory_CreateRequest2(@ptrCast(self), @ptrCast(query));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, path: []const u8 ```
    pub fn CreateRequest3(self: ?*anyopaque, path: []const u8) QtC.QNetworkRequest {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QNetworkRequestFactory_CreateRequest3(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, path: []const u8, query: QtC.QUrlQuery ```
    pub fn CreateRequest4(self: ?*anyopaque, path: []const u8, query: ?*anyopaque) QtC.QNetworkRequest {
        const path_str = qtc.struct_libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QNetworkRequestFactory_CreateRequest4(@ptrCast(self), path_str, @ptrCast(query));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setCommonHeaders)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, headers: QtC.QHttpHeaders ```
    pub fn SetCommonHeaders(self: ?*anyopaque, headers: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_SetCommonHeaders(@ptrCast(self), @ptrCast(headers));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#commonHeaders)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn CommonHeaders(self: ?*anyopaque) QtC.QHttpHeaders {
        return qtc.QNetworkRequestFactory_CommonHeaders(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearCommonHeaders)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn ClearCommonHeaders(self: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_ClearCommonHeaders(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#bearerToken)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, allocator: std.mem.Allocator ```
    pub fn BearerToken(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QNetworkRequestFactory_BearerToken(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkrequestfactory.BearerToken: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBearerToken)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, token: []u8 ```
    pub fn SetBearerToken(self: ?*anyopaque, token: []u8) void {
        const token_str = qtc.struct_libqt_string{
            .len = token.len,
            .data = token.ptr,
        };
        qtc.QNetworkRequestFactory_SetBearerToken(@ptrCast(self), token_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearBearerToken)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn ClearBearerToken(self: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_ClearBearerToken(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#userName)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, allocator: std.mem.Allocator ```
    pub fn UserName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkRequestFactory_UserName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkrequestfactory.UserName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setUserName)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, userName: []const u8 ```
    pub fn SetUserName(self: ?*anyopaque, userName: []const u8) void {
        const userName_str = qtc.struct_libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        qtc.QNetworkRequestFactory_SetUserName(@ptrCast(self), userName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearUserName)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn ClearUserName(self: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_ClearUserName(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#password)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, allocator: std.mem.Allocator ```
    pub fn Password(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkRequestFactory_Password(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkrequestfactory.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPassword)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, password: []const u8 ```
    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.struct_libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.QNetworkRequestFactory_SetPassword(@ptrCast(self), password_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearPassword)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn ClearPassword(self: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_ClearPassword(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#queryParameters)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn QueryParameters(self: ?*anyopaque) QtC.QUrlQuery {
        return qtc.QNetworkRequestFactory_QueryParameters(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setQueryParameters)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, query: QtC.QUrlQuery ```
    pub fn SetQueryParameters(self: ?*anyopaque, query: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_SetQueryParameters(@ptrCast(self), @ptrCast(query));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearQueryParameters)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn ClearQueryParameters(self: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_ClearQueryParameters(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPriority)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, priority: qnetworkrequest_enums.Priority ```
    pub fn SetPriority(self: ?*anyopaque, priority: i64) void {
        qtc.QNetworkRequestFactory_SetPriority(@ptrCast(self), @intCast(priority));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#priority)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn Priority(self: ?*anyopaque) i64 {
        return qtc.QNetworkRequestFactory_Priority(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, attribute: qnetworkrequest_enums.Attribute ```
    pub fn Attribute(self: ?*anyopaque, attribute: i64) QtC.QVariant {
        return qtc.QNetworkRequestFactory_Attribute(@ptrCast(self), @intCast(attribute));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, attribute: qnetworkrequest_enums.Attribute, defaultValue: QtC.QVariant ```
    pub fn Attribute2(self: ?*anyopaque, attribute: i64, defaultValue: ?*anyopaque) QtC.QVariant {
        return qtc.QNetworkRequestFactory_Attribute2(@ptrCast(self), @intCast(attribute), @ptrCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setAttribute)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, attribute: qnetworkrequest_enums.Attribute, value: QtC.QVariant ```
    pub fn SetAttribute(self: ?*anyopaque, attribute: i64, value: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_SetAttribute(@ptrCast(self), @intCast(attribute), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttribute)
    ///
    /// ``` self: QtC.QNetworkRequestFactory, attribute: qnetworkrequest_enums.Attribute ```
    pub fn ClearAttribute(self: ?*anyopaque, attribute: i64) void {
        qtc.QNetworkRequestFactory_ClearAttribute(@ptrCast(self), @intCast(attribute));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttributes)
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn ClearAttributes(self: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_ClearAttributes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#dtor.QNetworkRequestFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNetworkRequestFactory ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkRequestFactory_Delete(@ptrCast(self));
    }
};
