const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QUrlQuery = @import("libqt6").QUrlQuery;
const qurl_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html)
pub const QUrl = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUrl,

    pub const _is_QUrl = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QUrl object in C++ memory
    ///
    pub fn new() QUrl {
        return .{ .ptr = qtc.QUrl_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QUrl object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` copy: QUrl `
    ///
    pub fn new2(copy: anytype) QUrl {
        comptime _ = @TypeOf(copy)._is_QUrl;
        return .{ .ptr = qtc.QUrl_new2(@ptrCast(copy.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QUrl object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: []const u8 `
    ///
    pub fn new3(_url: []const u8) QUrl {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        return .{ .ptr = qtc.QUrl_new3(url_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QUrl object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _url: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn new4(_url: []const u8, mode: i32) QUrl {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        return .{ .ptr = qtc.QUrl_new4(url_str, @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` copy: QUrl `
    ///
    pub fn operatorAssign(self: QUrl, copy: anytype) void {
        comptime _ = @TypeOf(copy)._is_QUrl;
        qtc.QUrl_OperatorAssign(@ptrCast(self.ptr), @ptrCast(copy.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign2` instead
    ///
    pub const OperatorAssign2 = operatorAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _url: []const u8 `
    ///
    pub fn operatorAssign2(self: QUrl, _url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        qtc.QUrl_OperatorAssign2(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` other: QUrl `
    ///
    pub fn swap(self: QUrl, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QUrl;
        qtc.QUrl_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _url: []const u8 `
    ///
    pub fn setUrl(self: QUrl, _url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        qtc.QUrl_SetUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn url(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Url(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.url: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toDisplayString` instead
    ///
    pub const ToDisplayString = toDisplayString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toDisplayString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toDisplayString(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_ToDisplayString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.toDisplayString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toEncoded` instead
    ///
    pub const ToEncoded = toEncoded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toEncoded(self: QUrl, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToEncoded(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QUrl.toEncoded: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromEncoded` instead
    ///
    pub const FromEncoded = fromEncoded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` input: []u8 `
    ///
    pub fn fromEncoded(input: []u8) QUrl {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromEncoded(input_str) };
    }

    /// ### DEPRECATED: Use `fromUserInput` instead
    ///
    pub const FromUserInput = fromUserInput;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` userInput: []const u8 `
    ///
    pub fn fromUserInput(userInput: []const u8) QUrl {
        const userInput_str = qtc.libqt_string{
            .len = userInput.len,
            .data = userInput.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromUserInput(userInput_str) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn isValid(self: QUrl) bool {
        return qtc.QUrl_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn isEmpty(self: QUrl) bool {
        return qtc.QUrl_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn clear(self: QUrl) void {
        qtc.QUrl_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScheme` instead
    ///
    pub const SetScheme = setScheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setScheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _scheme: []const u8 `
    ///
    pub fn setScheme(self: QUrl, _scheme: []const u8) void {
        const scheme_str = qtc.libqt_string{
            .len = _scheme.len,
            .data = _scheme.ptr,
        };
        qtc.QUrl_SetScheme(@ptrCast(self.ptr), scheme_str);
    }

    /// ### DEPRECATED: Use `scheme` instead
    ///
    pub const Scheme = scheme;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#scheme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scheme(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Scheme(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.scheme: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAuthority` instead
    ///
    pub const SetAuthority = setAuthority;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setAuthority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _authority: []const u8 `
    ///
    pub fn setAuthority(self: QUrl, _authority: []const u8) void {
        const authority_str = qtc.libqt_string{
            .len = _authority.len,
            .data = _authority.ptr,
        };
        qtc.QUrl_SetAuthority(@ptrCast(self.ptr), authority_str);
    }

    /// ### DEPRECATED: Use `authority` instead
    ///
    pub const Authority = authority;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#authority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn authority(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Authority(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.authority: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUserInfo` instead
    ///
    pub const SetUserInfo = setUserInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _userInfo: []const u8 `
    ///
    pub fn setUserInfo(self: QUrl, _userInfo: []const u8) void {
        const userInfo_str = qtc.libqt_string{
            .len = _userInfo.len,
            .data = _userInfo.ptr,
        };
        qtc.QUrl_SetUserInfo(@ptrCast(self.ptr), userInfo_str);
    }

    /// ### DEPRECATED: Use `userInfo` instead
    ///
    pub const UserInfo = userInfo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn userInfo(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_UserInfo(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.userInfo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUserName` instead
    ///
    pub const SetUserName = setUserName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _userName: []const u8 `
    ///
    pub fn setUserName(self: QUrl, _userName: []const u8) void {
        const userName_str = qtc.libqt_string{
            .len = _userName.len,
            .data = _userName.ptr,
        };
        qtc.QUrl_SetUserName(@ptrCast(self.ptr), userName_str);
    }

    /// ### DEPRECATED: Use `userName` instead
    ///
    pub const UserName = userName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn userName(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_UserName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.userName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPassword` instead
    ///
    pub const SetPassword = setPassword;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _password: []const u8 `
    ///
    pub fn setPassword(self: QUrl, _password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        qtc.QUrl_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### DEPRECATED: Use `password` instead
    ///
    pub const Password = password;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn password(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHost` instead
    ///
    pub const SetHost = setHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _host: []const u8 `
    ///
    pub fn setHost(self: QUrl, _host: []const u8) void {
        const host_str = qtc.libqt_string{
            .len = _host.len,
            .data = _host.ptr,
        };
        qtc.QUrl_SetHost(@ptrCast(self.ptr), host_str);
    }

    /// ### DEPRECATED: Use `host` instead
    ///
    pub const Host = host;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn host(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Host(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.host: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPort` instead
    ///
    pub const SetPort = setPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _port: i32 `
    ///
    pub fn setPort(self: QUrl, _port: i32) void {
        qtc.QUrl_SetPort(@ptrCast(self.ptr), @bitCast(_port));
    }

    /// ### DEPRECATED: Use `port` instead
    ///
    pub const Port = port;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#port)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn port(self: QUrl) i32 {
        return qtc.QUrl_Port(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPath` instead
    ///
    pub const SetPath = setPath;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _path: []const u8 `
    ///
    pub fn setPath(self: QUrl, _path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        qtc.QUrl_SetPath(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fileName` instead
    ///
    pub const FileName = fileName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fileName(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_FileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.fileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasQuery` instead
    ///
    pub const HasQuery = hasQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#hasQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn hasQuery(self: QUrl) bool {
        return qtc.QUrl_HasQuery(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setQuery` instead
    ///
    pub const SetQuery = setQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _query: []const u8 `
    ///
    pub fn setQuery(self: QUrl, _query: []const u8) void {
        const query_str = qtc.libqt_string{
            .len = _query.len,
            .data = _query.ptr,
        };
        qtc.QUrl_SetQuery(@ptrCast(self.ptr), query_str);
    }

    /// ### DEPRECATED: Use `setQuery2` instead
    ///
    pub const SetQuery2 = setQuery2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _query: QUrlQuery `
    ///
    pub fn setQuery2(self: QUrl, _query: anytype) void {
        comptime _ = @TypeOf(_query)._is_QUrlQuery;
        qtc.QUrl_SetQuery2(@ptrCast(self.ptr), @ptrCast(_query.ptr));
    }

    /// ### DEPRECATED: Use `query` instead
    ///
    pub const Query = query;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#query)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn query(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Query(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.query: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasFragment` instead
    ///
    pub const HasFragment = hasFragment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#hasFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn hasFragment(self: QUrl) bool {
        return qtc.QUrl_HasFragment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fragment` instead
    ///
    pub const Fragment = fragment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fragment(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_Fragment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.fragment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFragment` instead
    ///
    pub const SetFragment = setFragment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _fragment: []const u8 `
    ///
    pub fn setFragment(self: QUrl, _fragment: []const u8) void {
        const fragment_str = qtc.libqt_string{
            .len = _fragment.len,
            .data = _fragment.ptr,
        };
        qtc.QUrl_SetFragment(@ptrCast(self.ptr), fragment_str);
    }

    /// ### DEPRECATED: Use `resolved` instead
    ///
    pub const Resolved = resolved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#resolved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` relative: QUrl `
    ///
    pub fn resolved(self: QUrl, relative: anytype) QUrl {
        comptime _ = @TypeOf(relative)._is_QUrl;
        return .{ .ptr = qtc.QUrl_Resolved(@ptrCast(self.ptr), @ptrCast(relative.ptr)) };
    }

    /// ### DEPRECATED: Use `isRelative` instead
    ///
    pub const IsRelative = isRelative;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isRelative)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn isRelative(self: QUrl) bool {
        return qtc.QUrl_IsRelative(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isParentOf` instead
    ///
    pub const IsParentOf = isParentOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isParentOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _url: QUrl `
    ///
    pub fn isParentOf(self: QUrl, _url: anytype) bool {
        comptime _ = @TypeOf(_url)._is_QUrl;
        return qtc.QUrl_IsParentOf(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `isLocalFile` instead
    ///
    pub const IsLocalFile = isLocalFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn isLocalFile(self: QUrl) bool {
        return qtc.QUrl_IsLocalFile(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromLocalFile` instead
    ///
    pub const FromLocalFile = fromLocalFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` localfile: []const u8 `
    ///
    pub fn fromLocalFile(localfile: []const u8) QUrl {
        const localfile_str = qtc.libqt_string{
            .len = localfile.len,
            .data = localfile.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromLocalFile(localfile_str) };
    }

    /// ### DEPRECATED: Use `toLocalFile` instead
    ///
    pub const ToLocalFile = toLocalFile;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toLocalFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toLocalFile(self: QUrl, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUrl_ToLocalFile(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.toLocalFile: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `detach` instead
    ///
    pub const Detach = detach;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#detach)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn detach(self: QUrl) void {
        qtc.QUrl_Detach(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDetached` instead
    ///
    pub const IsDetached = isDetached;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#isDetached)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    pub fn isDetached(self: QUrl) bool {
        return qtc.QUrl_IsDetached(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fromPercentEncoding` instead
    ///
    pub const FromPercentEncoding = fromPercentEncoding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromPercentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []u8 `
    ///
    pub fn fromPercentEncoding(allocator: std.mem.Allocator, param1: []u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.QUrl_FromPercentEncoding(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.fromPercentEncoding: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toPercentEncoding` instead
    ///
    pub const ToPercentEncoding = toPercentEncoding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn toPercentEncoding(allocator: std.mem.Allocator, param1: []const u8) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToPercentEncoding(param1_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QUrl.toPercentEncoding: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromAce` instead
    ///
    pub const FromAce = fromAce;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromAce)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []u8 `
    ///
    pub fn fromAce(allocator: std.mem.Allocator, domain: []u8) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        var _str = qtc.QUrl_FromAce(domain_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.fromAce: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toAce` instead
    ///
    pub const ToAce = toAce;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toAce)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    pub fn toAce(allocator: std.mem.Allocator, domain: []const u8) []u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToAce(domain_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QUrl.toAce: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `idnWhitelist` instead
    ///
    pub const IdnWhitelist = idnWhitelist;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#idnWhitelist)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn idnWhitelist(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QUrl_IdnWhitelist();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QUrl.idnWhitelist: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QUrl.idnWhitelist: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `toStringList` instead
    ///
    pub const ToStringList = toStringList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uris: []QUrl `
    ///
    pub fn toStringList(allocator: std.mem.Allocator, uris: []QUrl) []const []const u8 {
        const uris_list = qtc.libqt_list{
            .len = uris.len,
            .data = @ptrCast(uris.ptr),
        };
        const _arr: qtc.libqt_list = qtc.QUrl_ToStringList(uris_list);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QUrl.toStringList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QUrl.toStringList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `fromStringList` instead
    ///
    pub const FromStringList = fromStringList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uris: []const []const u8 `
    ///
    pub fn fromStringList(allocator: std.mem.Allocator, uris: []const []const u8) []QUrl {
        const uris_arr = allocator.alloc(qtc.libqt_string, uris.len) catch @panic("QUrl.fromStringList: Memory allocation failed");
        defer allocator.free(uris_arr);
        for (uris, 0..uris.len) |str_item, i|
            uris_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const uris_list = qtc.libqt_list{
            .len = uris.len,
            .data = uris_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QUrl_FromStringList(uris_list);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("QUrl.fromStringList: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setIdnWhitelist` instead
    ///
    pub const SetIdnWhitelist = setIdnWhitelist;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setIdnWhitelist)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _idnWhitelist: []const []const u8 `
    ///
    pub fn setIdnWhitelist(allocator: std.mem.Allocator, _idnWhitelist: []const []const u8) void {
        const idnWhitelist_arr = allocator.alloc(qtc.libqt_string, _idnWhitelist.len) catch @panic("QUrl.setIdnWhitelist: Memory allocation failed");
        defer allocator.free(idnWhitelist_arr);
        for (_idnWhitelist, 0.._idnWhitelist.len) |str_item, i|
            idnWhitelist_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const idnWhitelist_list = qtc.libqt_list{
            .len = _idnWhitelist.len,
            .data = idnWhitelist_arr.ptr,
        };
        qtc.QUrl_SetIdnWhitelist(idnWhitelist_list);
    }

    /// ### DEPRECATED: Use `setUrl2` instead
    ///
    pub const SetUrl2 = setUrl2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _url: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn setUrl2(self: QUrl, _url: []const u8, mode: i32) void {
        const url_str = qtc.libqt_string{
            .len = _url.len,
            .data = _url.ptr,
        };
        qtc.QUrl_SetUrl2(@ptrCast(self.ptr), url_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `fromEncoded2` instead
    ///
    pub const FromEncoded2 = fromEncoded2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromEncoded)
    ///
    /// ## Parameter(s):
    ///
    /// ` input: []u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn fromEncoded2(input: []u8, mode: i32) QUrl {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromEncoded2(input_str, @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `fromUserInput2` instead
    ///
    pub const FromUserInput2 = fromUserInput2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` userInput: []const u8 `
    ///
    /// ` workingDirectory: []const u8 `
    ///
    pub fn fromUserInput2(userInput: []const u8, workingDirectory: []const u8) QUrl {
        const userInput_str = qtc.libqt_string{
            .len = userInput.len,
            .data = userInput.ptr,
        };
        const workingDirectory_str = qtc.libqt_string{
            .len = workingDirectory.len,
            .data = workingDirectory.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromUserInput2(userInput_str, workingDirectory_str) };
    }

    /// ### DEPRECATED: Use `fromUserInput3` instead
    ///
    pub const FromUserInput3 = fromUserInput3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromUserInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` userInput: []const u8 `
    ///
    /// ` workingDirectory: []const u8 `
    ///
    /// ` options: flag of qurl_enums.UserInputResolutionOption `
    ///
    pub fn fromUserInput3(userInput: []const u8, workingDirectory: []const u8, options: i32) QUrl {
        const userInput_str = qtc.libqt_string{
            .len = userInput.len,
            .data = userInput.ptr,
        };
        const workingDirectory_str = qtc.libqt_string{
            .len = workingDirectory.len,
            .data = workingDirectory.ptr,
        };
        return .{ .ptr = qtc.QUrl_FromUserInput3(userInput_str, workingDirectory_str, @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `setAuthority2` instead
    ///
    pub const SetAuthority2 = setAuthority2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setAuthority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _authority: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn setAuthority2(self: QUrl, _authority: []const u8, mode: i32) void {
        const authority_str = qtc.libqt_string{
            .len = _authority.len,
            .data = _authority.ptr,
        };
        qtc.QUrl_SetAuthority2(@ptrCast(self.ptr), authority_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `authority1` instead
    ///
    pub const Authority1 = authority1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#authority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn authority1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_Authority1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.authority1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUserInfo2` instead
    ///
    pub const SetUserInfo2 = setUserInfo2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _userInfo: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn setUserInfo2(self: QUrl, _userInfo: []const u8, mode: i32) void {
        const userInfo_str = qtc.libqt_string{
            .len = _userInfo.len,
            .data = _userInfo.ptr,
        };
        qtc.QUrl_SetUserInfo2(@ptrCast(self.ptr), userInfo_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `userInfo1` instead
    ///
    pub const UserInfo1 = userInfo1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn userInfo1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_UserInfo1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.userInfo1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUserName2` instead
    ///
    pub const SetUserName2 = setUserName2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setUserName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _userName: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn setUserName2(self: QUrl, _userName: []const u8, mode: i32) void {
        const userName_str = qtc.libqt_string{
            .len = _userName.len,
            .data = _userName.ptr,
        };
        qtc.QUrl_SetUserName2(@ptrCast(self.ptr), userName_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `userName1` instead
    ///
    pub const UserName1 = userName1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#userName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn userName1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_UserName1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.userName1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPassword2` instead
    ///
    pub const SetPassword2 = setPassword2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _password: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn setPassword2(self: QUrl, _password: []const u8, mode: i32) void {
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        qtc.QUrl_SetPassword2(@ptrCast(self.ptr), password_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `password1` instead
    ///
    pub const Password1 = password1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn password1(self: QUrl, allocator: std.mem.Allocator, param1: u32) []const u8 {
        var _str = qtc.QUrl_Password1(@ptrCast(self.ptr), @bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.password1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHost2` instead
    ///
    pub const SetHost2 = setHost2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _host: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn setHost2(self: QUrl, _host: []const u8, mode: i32) void {
        const host_str = qtc.libqt_string{
            .len = _host.len,
            .data = _host.ptr,
        };
        qtc.QUrl_SetHost2(@ptrCast(self.ptr), host_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `host1` instead
    ///
    pub const Host1 = host1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#host)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn host1(self: QUrl, allocator: std.mem.Allocator, param1: u32) []const u8 {
        var _str = qtc.QUrl_Host1(@ptrCast(self.ptr), @bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.host1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `port1` instead
    ///
    pub const Port1 = port1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#port)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` defaultPort: i32 `
    ///
    pub fn port1(self: QUrl, defaultPort: i32) i32 {
        return qtc.QUrl_Port1(@ptrCast(self.ptr), @bitCast(defaultPort));
    }

    /// ### DEPRECATED: Use `setPath2` instead
    ///
    pub const SetPath2 = setPath2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _path: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn setPath2(self: QUrl, _path: []const u8, mode: i32) void {
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        qtc.QUrl_SetPath2(@ptrCast(self.ptr), path_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `path1` instead
    ///
    pub const Path1 = path1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn path1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_Path1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.path1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fileName1` instead
    ///
    pub const FileName1 = fileName1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fileName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn fileName1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_FileName1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.fileName1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setQuery22` instead
    ///
    pub const SetQuery22 = setQuery22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _query: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn setQuery22(self: QUrl, _query: []const u8, mode: i32) void {
        const query_str = qtc.libqt_string{
            .len = _query.len,
            .data = _query.ptr,
        };
        qtc.QUrl_SetQuery22(@ptrCast(self.ptr), query_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `query1` instead
    ///
    pub const Query1 = query1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#query)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn query1(self: QUrl, allocator: std.mem.Allocator, param1: u32) []const u8 {
        var _str = qtc.QUrl_Query1(@ptrCast(self.ptr), @bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.query1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fragment1` instead
    ///
    pub const Fragment1 = fragment1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` options: flag of qurl_enums.ComponentFormattingOption `
    ///
    pub fn fragment1(self: QUrl, allocator: std.mem.Allocator, options: u32) []const u8 {
        var _str = qtc.QUrl_Fragment1(@ptrCast(self.ptr), @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.fragment1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFragment2` instead
    ///
    pub const SetFragment2 = setFragment2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#setFragment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUrl `
    ///
    /// ` _fragment: []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn setFragment2(self: QUrl, _fragment: []const u8, mode: i32) void {
        const fragment_str = qtc.libqt_string{
            .len = _fragment.len,
            .data = _fragment.ptr,
        };
        qtc.QUrl_SetFragment2(@ptrCast(self.ptr), fragment_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `toPercentEncoding2` instead
    ///
    pub const ToPercentEncoding2 = toPercentEncoding2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` exclude: []u8 `
    ///
    pub fn toPercentEncoding2(allocator: std.mem.Allocator, param1: []const u8, exclude: []u8) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const exclude_str = qtc.libqt_string{
            .len = exclude.len,
            .data = exclude.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToPercentEncoding2(param1_str, exclude_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QUrl.toPercentEncoding2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toPercentEncoding3` instead
    ///
    pub const ToPercentEncoding3 = toPercentEncoding3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toPercentEncoding)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` exclude: []u8 `
    ///
    /// ` include: []u8 `
    ///
    pub fn toPercentEncoding3(allocator: std.mem.Allocator, param1: []const u8, exclude: []u8, include: []u8) []u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const exclude_str = qtc.libqt_string{
            .len = exclude.len,
            .data = exclude.ptr,
        };
        const include_str = qtc.libqt_string{
            .len = include.len,
            .data = include.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToPercentEncoding3(param1_str, exclude_str, include_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QUrl.toPercentEncoding3: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromAce2` instead
    ///
    pub const FromAce2 = fromAce2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromAce)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []u8 `
    ///
    /// ` options: flag of qurl_enums.AceProcessingOption `
    ///
    pub fn fromAce2(allocator: std.mem.Allocator, domain: []u8, options: u32) []const u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        var _str = qtc.QUrl_FromAce2(domain_str, @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUrl.fromAce2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toAce2` instead
    ///
    pub const ToAce2 = toAce2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#toAce)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` domain: []const u8 `
    ///
    /// ` options: flag of qurl_enums.AceProcessingOption `
    ///
    pub fn toAce2(allocator: std.mem.Allocator, domain: []const u8, options: u32) []u8 {
        const domain_str = qtc.libqt_string{
            .len = domain.len,
            .data = domain.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QUrl_ToAce2(domain_str, @bitCast(options));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QUrl.toAce2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromStringList2` instead
    ///
    pub const FromStringList2 = fromStringList2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#fromStringList)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` uris: []const []const u8 `
    ///
    /// ` mode: qurl_enums.ParsingMode `
    ///
    pub fn fromStringList2(allocator: std.mem.Allocator, uris: []const []const u8, mode: i32) []QUrl {
        const uris_arr = allocator.alloc(qtc.libqt_string, uris.len) catch @panic("QUrl.fromStringList2: Memory allocation failed");
        defer allocator.free(uris_arr);
        for (uris, 0..uris.len) |str_item, i|
            uris_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const uris_list = qtc.libqt_list{
            .len = uris.len,
            .data = uris_arr.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QUrl_FromStringList2(uris_list, @bitCast(mode));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("QUrl.fromStringList2: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#dtor.QUrl)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QUrl `
    ///
    pub fn delete(self: QUrl) void {
        qtc.QUrl_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qurl.html#public-types)
pub const enums = struct {
    pub const ParsingMode = enum(i32) {
        pub const TolerantMode: i32 = 0;
        pub const StrictMode: i32 = 1;
        pub const DecodedMode: i32 = 2;
    };

    pub const UrlFormattingOption = enum(u32) {
        pub const None: u32 = 0;
        pub const RemoveScheme: u32 = 1;
        pub const RemovePassword: u32 = 2;
        pub const RemoveUserInfo: u32 = 6;
        pub const RemovePort: u32 = 8;
        pub const RemoveAuthority: u32 = 30;
        pub const RemovePath: u32 = 32;
        pub const RemoveQuery: u32 = 64;
        pub const RemoveFragment: u32 = 128;
        pub const PreferLocalFile: u32 = 512;
        pub const StripTrailingSlash: u32 = 1024;
        pub const RemoveFilename: u32 = 2048;
        pub const NormalizePathSegments: u32 = 4096;
    };

    pub const ComponentFormattingOption = enum(u32) {
        pub const PrettyDecoded: u32 = 0;
        pub const EncodeSpaces: u32 = 1048576;
        pub const EncodeUnicode: u32 = 2097152;
        pub const EncodeDelimiters: u32 = 12582912;
        pub const EncodeReserved: u32 = 16777216;
        pub const DecodeReserved: u32 = 33554432;
        pub const FullyEncoded: u32 = 32505856;
        pub const FullyDecoded: u32 = 133169152;
    };

    pub const UserInputResolutionOption = enum(i32) {
        pub const DefaultResolution: i32 = 0;
        pub const AssumeLocalFile: i32 = 1;
    };

    pub const AceProcessingOption = enum(u32) {
        pub const IgnoreIDNWhitelist: u32 = 1;
        pub const AceTransitionalProcessing: u32 = 2;
    };
};
